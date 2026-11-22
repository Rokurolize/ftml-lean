// Lean compiler output
// Module: LeanFtml.IncludeRule
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.Include public import LeanFtml.IncludeGrammar public import LeanFtml.IncludeExpr
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
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint32_t l_Char_ofNat(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimChars(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_placeholder(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchPat(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_parsePageRef_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0(lean_object*);
uint8_t l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__0(uint32_t, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_startsWithCI(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isPcreWs(uint32_t);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_allText(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_normSegs(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__23_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__25_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__28_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__29_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__31_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_crc32PolyBits = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32PolyBits___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__23_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__25_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__28_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_crc32InitBits = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32InitBits___closed__28_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_crc32BitStep___lam__0(uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32BitStep___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_crc32BitStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32BitStep___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32BitStep___closed__0_value;
static const lean_array_object lp_lean_x2dftml_LeanFtml_crc32BitStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_crc32BitStep___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_crc32BitStep___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32BitStep(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32BitStep___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteToBits8(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteToBits8___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32ByteStep_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32ByteStep_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32ByteStep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32ByteStep___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32Mod1000_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32Mod1000_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32Mod1000(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32Mod1000___boxed(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_refPageId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageId___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageId___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refPageId(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refPageId___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "muse-probe-g14-target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "TARGET-CONTENT-START\nValue is {$marker}.\nTARGET-CONTENT-END"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "other-page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "OTHER-PAGE-CONTENT\nSecond value is {$marker}.\nOTHER-END"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "empty-page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = ":sandbox:other-page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SITE-PAGE-CONTENT"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "muse-probe-g14b-target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "A is {$a}.\nB is {$b}.\nM is {$marker}.\nTARGET-END"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__22;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "muse-probe-r2link-free-exists"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__23_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__24;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "FREELINK TARGET ONE"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__25_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__26;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "muse-probe-r2link-free-exists2"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "FREELINK TARGET TWO"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__30_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__31;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__32;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "muse-probe-r2notes-x-inc-src"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__33_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__34;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refPageMap___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "included [[footnote]]from include[[/footnote]] text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refPageMap___closed__35_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__36;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__37;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__38;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__39;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__40;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__41;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__42;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__43;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__44;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refPageMap___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refPageMap___closed__45;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refPageMap;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookupPage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookupPage___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncGramWs(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncGramWs___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncKeyC(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncKeyC___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncTargetC(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncTargetC___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncSiteSlugC(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncSiteSlugC___boxed(lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dftml_LeanFtml_asciiLowerC(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_asciiLowerC___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncNormKeep(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncNormKeep___boxed(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubChar_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubChar_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubChar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubChar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__9;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__10;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__11;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refFindCandidate_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refFindCandidate_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refSegmentArg_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refSegmentArg_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSegmentArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSegmentArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitRawPipe(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_refSegments_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_refSegments_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_refSegments___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_refSegments___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refSegments___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSegments(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refParseBlock___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refParseBlock___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refParseBlock___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_refCanonicalSite_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_refCanonicalSite_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_refCanonicalSite_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ".wikidot.com"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCanonicalSite(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCanonicalSite___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refMergeColons_go(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refMergeColons_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refMergeColons(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refReplaceUnderscores_go(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refReplaceUnderscores_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refReplaceUnderscores(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCollapseRun_go(uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCollapseRun_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCollapseRun(lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCollapseRun___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairPass(uint32_t, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairPass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairsFix_go(uint32_t, uint32_t, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairsFix_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairsFix(uint32_t, uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairsFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_refNormalize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__2___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_refNormalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_default:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refNormalize___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refNormalize___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refNormalize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refNormalize___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refNormalize(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refNormalize___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitFirstColon(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncHostC(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncHostC___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__1___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refResolveRef_go(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refResolveRef(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refResolveRef___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSubPassGo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSubPassGo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSubPass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_refSubstitute_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSubstitute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_refSubPassGo_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_refSubPassGo_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_addInclusionId(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_addInclusionMissing_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_addInclusionMissing_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_addInclusionMissing(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_refFetchWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "\n\n[[div class=\"error-block\"]]\nIncluded page \""};
static const lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFetchWith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refFetchWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "\" does not exist (["};
static const lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFetchWith___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refFetchWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = " create it now])\n[[/div]]\n\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFetchWith___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refFetchWith___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "/edit/true"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refFetchWith___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "https://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFetchWith___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refFetchWith___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ".wikidot.com/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFetchWith___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_refFetchWith___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_refFetchWith___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___closed__13;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFetch(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refNextLineStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refNextLineStart___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPassWith_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPassWith_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPassWith(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPassWith___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPass___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_includePassesWith(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_includePassesWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_includePasses(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_includeRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isQuoteLeadC(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isQuoteLeadC___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_refFindCandidate_go_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_refFindCandidate_go_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_splitFirstColon_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_splitFirstColon_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_splitFirstColon_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_splitFirstColon_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_crc32BitStep___lam__0(uint8_t v___x_247_, uint8_t v___y_248_, uint8_t v___y_249_, uint8_t v___y_250_){
_start:
{
if (v___y_250_ == 0)
{
if (v___y_249_ == 0)
{
return v___x_247_;
}
else
{
return v___y_248_;
}
}
else
{
if (v___y_249_ == 0)
{
return v___y_248_;
}
else
{
return v___x_247_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32BitStep___lam__0___boxed(lean_object* v___x_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
uint8_t v___x_75__boxed_255_; uint8_t v___y_76__boxed_256_; uint8_t v___y_77__boxed_257_; uint8_t v___y_78__boxed_258_; uint8_t v_res_259_; lean_object* v_r_260_; 
v___x_75__boxed_255_ = lean_unbox(v___x_251_);
v___y_76__boxed_256_ = lean_unbox(v___y_252_);
v___y_77__boxed_257_ = lean_unbox(v___y_253_);
v___y_78__boxed_258_ = lean_unbox(v___y_254_);
v_res_259_ = lp_lean_x2dftml_LeanFtml_crc32BitStep___lam__0(v___x_75__boxed_255_, v___y_76__boxed_256_, v___y_77__boxed_257_, v___y_78__boxed_258_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32BitStep(lean_object* v_reg_267_, uint8_t v_inBit_268_){
_start:
{
uint8_t v___x_269_; lean_object* v___y_271_; uint8_t v___y_272_; lean_object* v___y_273_; uint8_t v___y_280_; uint8_t v___y_288_; 
v___x_269_ = 0;
if (lean_obj_tag(v_reg_267_) == 0)
{
v___y_288_ = v___x_269_;
goto v___jp_287_;
}
else
{
lean_object* v_head_289_; uint8_t v___x_290_; 
v_head_289_ = lean_ctor_get(v_reg_267_, 0);
v___x_290_ = lean_unbox(v_head_289_);
v___y_288_ = v___x_290_;
goto v___jp_287_;
}
v___jp_270_:
{
lean_object* v___x_274_; lean_object* v_shifted_275_; 
v___x_274_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_crc32BitStep___closed__0));
v_shifted_275_ = l_List_appendTR___redArg(v___y_273_, v___x_274_);
if (v___y_272_ == 0)
{
lean_dec_ref(v___y_271_);
return v_shifted_275_;
}
else
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_crc32PolyBits));
v___x_277_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_crc32BitStep___closed__1));
v___x_278_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___y_271_, v_shifted_275_, v___x_276_, v___x_277_);
return v___x_278_;
}
}
v___jp_279_:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___f_283_; 
v___x_281_ = lean_box(v___x_269_);
v___x_282_ = lean_box(v___y_280_);
v___f_283_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_crc32BitStep___lam__0___boxed), 4, 2);
lean_closure_set(v___f_283_, 0, v___x_281_);
lean_closure_set(v___f_283_, 1, v___x_282_);
if (lean_obj_tag(v_reg_267_) == 0)
{
v___y_271_ = v___f_283_;
v___y_272_ = v___y_280_;
v___y_273_ = v_reg_267_;
goto v___jp_270_;
}
else
{
lean_object* v_tail_284_; 
v_tail_284_ = lean_ctor_get(v_reg_267_, 1);
lean_inc(v_tail_284_);
lean_dec_ref_known(v_reg_267_, 2);
v___y_271_ = v___f_283_;
v___y_272_ = v___y_280_;
v___y_273_ = v_tail_284_;
goto v___jp_270_;
}
}
v___jp_285_:
{
uint8_t v___x_286_; 
v___x_286_ = 1;
v___y_280_ = v___x_286_;
goto v___jp_279_;
}
v___jp_287_:
{
if (v_inBit_268_ == 0)
{
if (v___y_288_ == 0)
{
v___y_280_ = v___x_269_;
goto v___jp_279_;
}
else
{
goto v___jp_285_;
}
}
else
{
if (v___y_288_ == 0)
{
goto v___jp_285_;
}
else
{
v___y_280_ = v___x_269_;
goto v___jp_279_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32BitStep___boxed(lean_object* v_reg_291_, lean_object* v_inBit_292_){
_start:
{
uint8_t v_inBit_boxed_293_; lean_object* v_res_294_; 
v_inBit_boxed_293_ = lean_unbox(v_inBit_292_);
v_res_294_ = lp_lean_x2dftml_LeanFtml_crc32BitStep(v_reg_291_, v_inBit_boxed_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteToBits8(lean_object* v_b_295_){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; uint8_t v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_296_ = lean_unsigned_to_nat(2u);
v___x_297_ = lean_nat_mod(v_b_295_, v___x_296_);
v___x_298_ = lean_unsigned_to_nat(1u);
v___x_299_ = lean_nat_dec_eq(v___x_297_, v___x_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_nat_shiftr(v_b_295_, v___x_298_);
v___x_301_ = lean_nat_mod(v___x_300_, v___x_296_);
lean_dec(v___x_300_);
v___x_302_ = lean_nat_dec_eq(v___x_301_, v___x_298_);
lean_dec(v___x_301_);
v___x_303_ = lean_nat_shiftr(v_b_295_, v___x_296_);
v___x_304_ = lean_nat_mod(v___x_303_, v___x_296_);
lean_dec(v___x_303_);
v___x_305_ = lean_nat_dec_eq(v___x_304_, v___x_298_);
lean_dec(v___x_304_);
v___x_306_ = lean_unsigned_to_nat(3u);
v___x_307_ = lean_nat_shiftr(v_b_295_, v___x_306_);
v___x_308_ = lean_nat_mod(v___x_307_, v___x_296_);
lean_dec(v___x_307_);
v___x_309_ = lean_nat_dec_eq(v___x_308_, v___x_298_);
lean_dec(v___x_308_);
v___x_310_ = lean_unsigned_to_nat(4u);
v___x_311_ = lean_nat_shiftr(v_b_295_, v___x_310_);
v___x_312_ = lean_nat_mod(v___x_311_, v___x_296_);
lean_dec(v___x_311_);
v___x_313_ = lean_nat_dec_eq(v___x_312_, v___x_298_);
lean_dec(v___x_312_);
v___x_314_ = lean_unsigned_to_nat(5u);
v___x_315_ = lean_nat_shiftr(v_b_295_, v___x_314_);
v___x_316_ = lean_nat_mod(v___x_315_, v___x_296_);
lean_dec(v___x_315_);
v___x_317_ = lean_nat_dec_eq(v___x_316_, v___x_298_);
lean_dec(v___x_316_);
v___x_318_ = lean_unsigned_to_nat(6u);
v___x_319_ = lean_nat_shiftr(v_b_295_, v___x_318_);
v___x_320_ = lean_nat_mod(v___x_319_, v___x_296_);
lean_dec(v___x_319_);
v___x_321_ = lean_nat_dec_eq(v___x_320_, v___x_298_);
lean_dec(v___x_320_);
v___x_322_ = lean_unsigned_to_nat(7u);
v___x_323_ = lean_nat_shiftr(v_b_295_, v___x_322_);
v___x_324_ = lean_nat_mod(v___x_323_, v___x_296_);
lean_dec(v___x_323_);
v___x_325_ = lean_nat_dec_eq(v___x_324_, v___x_298_);
lean_dec(v___x_324_);
v___x_326_ = lean_box(0);
v___x_327_ = lean_box(v___x_325_);
v___x_328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___x_326_);
v___x_329_ = lean_box(v___x_321_);
v___x_330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set(v___x_330_, 1, v___x_328_);
v___x_331_ = lean_box(v___x_317_);
v___x_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
lean_ctor_set(v___x_332_, 1, v___x_330_);
v___x_333_ = lean_box(v___x_313_);
v___x_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_332_);
v___x_335_ = lean_box(v___x_309_);
v___x_336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
v___x_337_ = lean_box(v___x_305_);
v___x_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___x_336_);
v___x_339_ = lean_box(v___x_302_);
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v___x_338_);
v___x_341_ = lean_box(v___x_299_);
v___x_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v___x_340_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteToBits8___boxed(lean_object* v_b_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = lp_lean_x2dftml_LeanFtml_byteToBits8(v_b_343_);
lean_dec(v_b_343_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32ByteStep_spec__0(lean_object* v_x_345_, lean_object* v_x_346_){
_start:
{
if (lean_obj_tag(v_x_346_) == 0)
{
return v_x_345_;
}
else
{
lean_object* v_head_347_; lean_object* v_tail_348_; uint8_t v___x_349_; lean_object* v___x_350_; 
v_head_347_ = lean_ctor_get(v_x_346_, 0);
v_tail_348_ = lean_ctor_get(v_x_346_, 1);
v___x_349_ = lean_unbox(v_head_347_);
v___x_350_ = lp_lean_x2dftml_LeanFtml_crc32BitStep(v_x_345_, v___x_349_);
v_x_345_ = v___x_350_;
v_x_346_ = v_tail_348_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32ByteStep_spec__0___boxed(lean_object* v_x_352_, lean_object* v_x_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32ByteStep_spec__0(v_x_352_, v_x_353_);
lean_dec(v_x_353_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32ByteStep(lean_object* v_reg_355_, lean_object* v_b_356_){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lp_lean_x2dftml_LeanFtml_byteToBits8(v_b_356_);
v___x_358_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32ByteStep_spec__0(v_reg_355_, v___x_357_);
lean_dec(v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32ByteStep___boxed(lean_object* v_reg_359_, lean_object* v_b_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = lp_lean_x2dftml_LeanFtml_crc32ByteStep(v_reg_359_, v_b_360_);
lean_dec(v_b_360_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1_spec__1(lean_object* v_as_362_, size_t v_i_363_, size_t v_stop_364_, lean_object* v_b_365_){
_start:
{
uint8_t v___x_366_; 
v___x_366_ = lean_usize_dec_eq(v_i_363_, v_stop_364_);
if (v___x_366_ == 0)
{
size_t v___x_367_; size_t v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___y_373_; uint8_t v___x_380_; 
v___x_367_ = ((size_t)1ULL);
v___x_368_ = lean_usize_sub(v_i_363_, v___x_367_);
v___x_369_ = lean_array_uget_borrowed(v_as_362_, v___x_368_);
v___x_370_ = lean_unsigned_to_nat(2u);
v___x_371_ = lean_nat_mul(v_b_365_, v___x_370_);
lean_dec(v_b_365_);
v___x_380_ = lean_unbox(v___x_369_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
v___x_381_ = lean_unsigned_to_nat(1u);
v___y_373_ = v___x_381_;
goto v___jp_372_;
}
else
{
lean_object* v___x_382_; 
v___x_382_ = lean_unsigned_to_nat(0u);
v___y_373_ = v___x_382_;
goto v___jp_372_;
}
v___jp_372_:
{
lean_object* v_v_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v_v_374_ = lean_nat_add(v___x_371_, v___y_373_);
lean_dec(v___x_371_);
v___x_375_ = lean_unsigned_to_nat(1000u);
v___x_376_ = lean_nat_dec_le(v___x_375_, v_v_374_);
if (v___x_376_ == 0)
{
v_i_363_ = v___x_368_;
v_b_365_ = v_v_374_;
goto _start;
}
else
{
lean_object* v___x_378_; 
v___x_378_ = lean_nat_sub(v_v_374_, v___x_375_);
lean_dec(v_v_374_);
v_i_363_ = v___x_368_;
v_b_365_ = v___x_378_;
goto _start;
}
}
}
else
{
return v_b_365_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1_spec__1___boxed(lean_object* v_as_383_, lean_object* v_i_384_, lean_object* v_stop_385_, lean_object* v_b_386_){
_start:
{
size_t v_i_boxed_387_; size_t v_stop_boxed_388_; lean_object* v_res_389_; 
v_i_boxed_387_ = lean_unbox_usize(v_i_384_);
lean_dec(v_i_384_);
v_stop_boxed_388_ = lean_unbox_usize(v_stop_385_);
lean_dec(v_stop_385_);
v_res_389_ = lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1_spec__1(v_as_383_, v_i_boxed_387_, v_stop_boxed_388_, v_b_386_);
lean_dec_ref(v_as_383_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1(lean_object* v_init_390_, lean_object* v_l_391_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_392_ = lean_array_mk(v_l_391_);
v___x_393_ = lean_array_get_size(v___x_392_);
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_nat_dec_lt(v___x_394_, v___x_393_);
if (v___x_395_ == 0)
{
lean_dec_ref(v___x_392_);
return v_init_390_;
}
else
{
size_t v___x_396_; size_t v___x_397_; lean_object* v___x_398_; 
v___x_396_ = lean_usize_of_nat(v___x_393_);
v___x_397_ = ((size_t)0ULL);
v___x_398_ = lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1_spec__1(v___x_392_, v___x_396_, v___x_397_, v_init_390_);
lean_dec_ref(v___x_392_);
return v___x_398_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32Mod1000_spec__0(lean_object* v_x_399_, lean_object* v_x_400_){
_start:
{
if (lean_obj_tag(v_x_400_) == 0)
{
return v_x_399_;
}
else
{
lean_object* v_head_401_; lean_object* v_tail_402_; lean_object* v___x_403_; 
v_head_401_ = lean_ctor_get(v_x_400_, 0);
v_tail_402_ = lean_ctor_get(v_x_400_, 1);
v___x_403_ = lp_lean_x2dftml_LeanFtml_crc32ByteStep(v_x_399_, v_head_401_);
v_x_399_ = v___x_403_;
v_x_400_ = v_tail_402_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32Mod1000_spec__0___boxed(lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32Mod1000_spec__0(v_x_405_, v_x_406_);
lean_dec(v_x_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32Mod1000(lean_object* v_bs_408_){
_start:
{
lean_object* v___x_409_; lean_object* v_fin_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_409_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_crc32InitBits));
v_fin_410_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_crc32Mod1000_spec__0(v___x_409_, v_bs_408_);
v___x_411_ = lean_unsigned_to_nat(0u);
v___x_412_ = lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_crc32Mod1000_spec__1(v___x_411_, v_fin_410_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crc32Mod1000___boxed(lean_object* v_bs_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = lp_lean_x2dftml_LeanFtml_crc32Mod1000(v_bs_413_);
lean_dec(v_bs_413_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refPageId(lean_object* v_display_417_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_418_ = lean_unsigned_to_nat(1000u);
v___x_419_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageId___closed__0));
v___x_420_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_display_417_, v___x_419_);
v___x_421_ = lp_lean_x2dftml_LeanFtml_crc32Mod1000(v___x_420_);
lean_dec(v___x_420_);
v___x_422_ = lean_nat_add(v___x_418_, v___x_421_);
lean_dec(v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refPageId___boxed(lean_object* v_display_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = lp_lean_x2dftml_LeanFtml_refPageId(v_display_423_);
lean_dec(v_display_423_);
return v_res_424_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__1(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__0));
v___x_427_ = l_String_toListImpl(v___x_426_);
return v___x_427_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__3(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__2));
v___x_430_ = l_String_toListImpl(v___x_429_);
return v___x_430_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__4(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__3, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__3);
v___x_432_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__1, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__1);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v___x_431_);
return v___x_433_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__6(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__5));
v___x_436_ = l_String_toListImpl(v___x_435_);
return v___x_436_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__8(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__7));
v___x_439_ = l_String_toListImpl(v___x_438_);
return v___x_439_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__9(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_440_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__8, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__8);
v___x_441_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__6, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__6);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v___x_440_);
return v___x_442_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__11(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__10));
v___x_445_ = l_String_toListImpl(v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__12(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_446_ = lean_box(0);
v___x_447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__11, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__11);
v___x_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___x_446_);
return v___x_448_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__14(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__13));
v___x_451_ = l_String_toListImpl(v___x_450_);
return v___x_451_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__16(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__15));
v___x_454_ = l_String_toListImpl(v___x_453_);
return v___x_454_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__17(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_455_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__16, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__16);
v___x_456_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__14, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__14);
v___x_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
lean_ctor_set(v___x_457_, 1, v___x_455_);
return v___x_457_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__19(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__18));
v___x_460_ = l_String_toListImpl(v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__21(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__20));
v___x_463_ = l_String_toListImpl(v___x_462_);
return v___x_463_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__22(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__21, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__21);
v___x_465_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__19, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__19);
v___x_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
lean_ctor_set(v___x_466_, 1, v___x_464_);
return v___x_466_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__24(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__23));
v___x_469_ = l_String_toListImpl(v___x_468_);
return v___x_469_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__26(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__25));
v___x_472_ = l_String_toListImpl(v___x_471_);
return v___x_472_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__27(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_473_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__26, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__26);
v___x_474_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__24, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__24);
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v___x_473_);
return v___x_475_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__29(void){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__28));
v___x_478_ = l_String_toListImpl(v___x_477_);
return v___x_478_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__31(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__30));
v___x_481_ = l_String_toListImpl(v___x_480_);
return v___x_481_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__32(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_482_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__31, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__31);
v___x_483_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__29, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__29);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v___x_482_);
return v___x_484_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__34(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__33));
v___x_487_ = l_String_toListImpl(v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__36(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refPageMap___closed__35));
v___x_490_ = l_String_toListImpl(v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__37(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__36, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__36);
v___x_492_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__34, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__34);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
lean_ctor_set(v___x_493_, 1, v___x_491_);
return v___x_493_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__38(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_494_ = lean_box(0);
v___x_495_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__37, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__37);
v___x_496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___x_494_);
return v___x_496_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__39(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_497_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__38, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__38);
v___x_498_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__32, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__32);
v___x_499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
lean_ctor_set(v___x_499_, 1, v___x_497_);
return v___x_499_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__40(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_500_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__39, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__39);
v___x_501_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__27, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__27);
v___x_502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
lean_ctor_set(v___x_502_, 1, v___x_500_);
return v___x_502_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__41(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_503_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__40, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__40_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__40);
v___x_504_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__22, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__22);
v___x_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
lean_ctor_set(v___x_505_, 1, v___x_503_);
return v___x_505_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__42(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_506_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__41, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__41);
v___x_507_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__17, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__17);
v___x_508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v___x_506_);
return v___x_508_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__43(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_509_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__42, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__42_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__42);
v___x_510_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__12, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__12);
v___x_511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
lean_ctor_set(v___x_511_, 1, v___x_509_);
return v___x_511_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__44(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_512_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__43, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__43);
v___x_513_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__9, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__9);
v___x_514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
lean_ctor_set(v___x_514_, 1, v___x_512_);
return v___x_514_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__45(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__44, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__44_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__44);
v___x_516_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__4, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__4);
v___x_517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v___x_515_);
return v___x_517_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refPageMap(void){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refPageMap___closed__45, &lp_lean_x2dftml_LeanFtml_refPageMap___closed__45_once, _init_lp_lean_x2dftml_LeanFtml_refPageMap___closed__45);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookupPage(lean_object* v_x_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_519_) == 0)
{
lean_object* v___x_521_; 
v___x_521_ = lean_box(0);
return v___x_521_;
}
else
{
lean_object* v_head_522_; lean_object* v_tail_523_; lean_object* v_fst_524_; lean_object* v_snd_525_; uint8_t v___x_526_; 
v_head_522_ = lean_ctor_get(v_x_519_, 0);
v_tail_523_ = lean_ctor_get(v_x_519_, 1);
v_fst_524_ = lean_ctor_get(v_head_522_, 0);
v_snd_525_ = lean_ctor_get(v_head_522_, 1);
v___x_526_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_524_, v_x_520_);
if (v___x_526_ == 0)
{
v_x_519_ = v_tail_523_;
goto _start;
}
else
{
lean_object* v___x_528_; 
lean_inc(v_snd_525_);
v___x_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_528_, 0, v_snd_525_);
return v___x_528_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookupPage___boxed(lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = lp_lean_x2dftml_LeanFtml_lookupPage(v_x_529_, v_x_530_);
lean_dec(v_x_530_);
lean_dec(v_x_529_);
return v_res_531_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncGramWs(uint32_t v_c_532_){
_start:
{
uint32_t v___x_533_; uint8_t v___x_534_; 
v___x_533_ = 32;
v___x_534_ = lean_uint32_dec_eq(v_c_532_, v___x_533_);
if (v___x_534_ == 0)
{
uint32_t v___x_535_; uint8_t v___x_536_; 
v___x_535_ = 9;
v___x_536_ = lean_uint32_dec_eq(v_c_532_, v___x_535_);
if (v___x_536_ == 0)
{
uint32_t v___x_537_; uint8_t v___x_538_; 
v___x_537_ = 10;
v___x_538_ = lean_uint32_dec_eq(v_c_532_, v___x_537_);
return v___x_538_;
}
else
{
return v___x_536_;
}
}
else
{
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncGramWs___boxed(lean_object* v_c_539_){
_start:
{
uint32_t v_c_boxed_540_; uint8_t v_res_541_; lean_object* v_r_542_; 
v_c_boxed_540_ = lean_unbox_uint32(v_c_539_);
lean_dec(v_c_539_);
v_res_541_ = lp_lean_x2dftml_LeanFtml_isIncGramWs(v_c_boxed_540_);
v_r_542_ = lean_box(v_res_541_);
return v_r_542_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncKeyC(uint32_t v_c_543_){
_start:
{
uint32_t v___x_559_; uint8_t v___x_560_; 
v___x_559_ = 97;
v___x_560_ = lean_uint32_dec_le(v___x_559_, v_c_543_);
if (v___x_560_ == 0)
{
goto v___jp_554_;
}
else
{
uint32_t v___x_561_; uint8_t v___x_562_; 
v___x_561_ = 122;
v___x_562_ = lean_uint32_dec_le(v_c_543_, v___x_561_);
if (v___x_562_ == 0)
{
goto v___jp_554_;
}
else
{
return v___x_562_;
}
}
v___jp_544_:
{
uint32_t v___x_545_; uint8_t v___x_546_; 
v___x_545_ = 45;
v___x_546_ = lean_uint32_dec_eq(v_c_543_, v___x_545_);
if (v___x_546_ == 0)
{
uint32_t v___x_547_; uint8_t v___x_548_; 
v___x_547_ = 95;
v___x_548_ = lean_uint32_dec_eq(v_c_543_, v___x_547_);
return v___x_548_;
}
else
{
return v___x_546_;
}
}
v___jp_549_:
{
uint32_t v___x_550_; uint8_t v___x_551_; 
v___x_550_ = 48;
v___x_551_ = lean_uint32_dec_le(v___x_550_, v_c_543_);
if (v___x_551_ == 0)
{
goto v___jp_544_;
}
else
{
uint32_t v___x_552_; uint8_t v___x_553_; 
v___x_552_ = 57;
v___x_553_ = lean_uint32_dec_le(v_c_543_, v___x_552_);
if (v___x_553_ == 0)
{
goto v___jp_544_;
}
else
{
return v___x_553_;
}
}
}
v___jp_554_:
{
uint32_t v___x_555_; uint8_t v___x_556_; 
v___x_555_ = 65;
v___x_556_ = lean_uint32_dec_le(v___x_555_, v_c_543_);
if (v___x_556_ == 0)
{
goto v___jp_549_;
}
else
{
uint32_t v___x_557_; uint8_t v___x_558_; 
v___x_557_ = 90;
v___x_558_ = lean_uint32_dec_le(v_c_543_, v___x_557_);
if (v___x_558_ == 0)
{
goto v___jp_549_;
}
else
{
return v___x_558_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncKeyC___boxed(lean_object* v_c_563_){
_start:
{
uint32_t v_c_boxed_564_; uint8_t v_res_565_; lean_object* v_r_566_; 
v_c_boxed_564_ = lean_unbox_uint32(v_c_563_);
lean_dec(v_c_563_);
v_res_565_ = lp_lean_x2dftml_LeanFtml_isIncKeyC(v_c_boxed_564_);
v_r_566_ = lean_box(v_res_565_);
return v_r_566_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncTargetC(uint32_t v_c_567_){
_start:
{
uint8_t v___x_568_; 
v___x_568_ = lp_lean_x2dftml_LeanFtml_isIncKeyC(v_c_567_);
if (v___x_568_ == 0)
{
uint32_t v___x_569_; uint8_t v___x_570_; 
v___x_569_ = 58;
v___x_570_ = lean_uint32_dec_eq(v_c_567_, v___x_569_);
return v___x_570_;
}
else
{
return v___x_568_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncTargetC___boxed(lean_object* v_c_571_){
_start:
{
uint32_t v_c_boxed_572_; uint8_t v_res_573_; lean_object* v_r_574_; 
v_c_boxed_572_ = lean_unbox_uint32(v_c_571_);
lean_dec(v_c_571_);
v_res_573_ = lp_lean_x2dftml_LeanFtml_isIncTargetC(v_c_boxed_572_);
v_r_574_ = lean_box(v_res_573_);
return v_r_574_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncSiteSlugC(uint32_t v_c_575_){
_start:
{
uint32_t v___x_589_; uint8_t v___x_590_; 
v___x_589_ = 97;
v___x_590_ = lean_uint32_dec_le(v___x_589_, v_c_575_);
if (v___x_590_ == 0)
{
goto v___jp_584_;
}
else
{
uint32_t v___x_591_; uint8_t v___x_592_; 
v___x_591_ = 122;
v___x_592_ = lean_uint32_dec_le(v_c_575_, v___x_591_);
if (v___x_592_ == 0)
{
goto v___jp_584_;
}
else
{
return v___x_592_;
}
}
v___jp_576_:
{
uint32_t v___x_577_; uint8_t v___x_578_; 
v___x_577_ = 45;
v___x_578_ = lean_uint32_dec_eq(v_c_575_, v___x_577_);
return v___x_578_;
}
v___jp_579_:
{
uint32_t v___x_580_; uint8_t v___x_581_; 
v___x_580_ = 48;
v___x_581_ = lean_uint32_dec_le(v___x_580_, v_c_575_);
if (v___x_581_ == 0)
{
goto v___jp_576_;
}
else
{
uint32_t v___x_582_; uint8_t v___x_583_; 
v___x_582_ = 57;
v___x_583_ = lean_uint32_dec_le(v_c_575_, v___x_582_);
if (v___x_583_ == 0)
{
goto v___jp_576_;
}
else
{
return v___x_583_;
}
}
}
v___jp_584_:
{
uint32_t v___x_585_; uint8_t v___x_586_; 
v___x_585_ = 65;
v___x_586_ = lean_uint32_dec_le(v___x_585_, v_c_575_);
if (v___x_586_ == 0)
{
goto v___jp_579_;
}
else
{
uint32_t v___x_587_; uint8_t v___x_588_; 
v___x_587_ = 90;
v___x_588_ = lean_uint32_dec_le(v_c_575_, v___x_587_);
if (v___x_588_ == 0)
{
goto v___jp_579_;
}
else
{
return v___x_588_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncSiteSlugC___boxed(lean_object* v_c_593_){
_start:
{
uint32_t v_c_boxed_594_; uint8_t v_res_595_; lean_object* v_r_596_; 
v_c_boxed_594_ = lean_unbox_uint32(v_c_593_);
lean_dec(v_c_593_);
v_res_595_ = lp_lean_x2dftml_LeanFtml_isIncSiteSlugC(v_c_boxed_594_);
v_r_596_ = lean_box(v_res_595_);
return v_r_596_;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dftml_LeanFtml_asciiLowerC(uint32_t v_c_597_){
_start:
{
uint32_t v___x_598_; uint8_t v___x_599_; 
v___x_598_ = 65;
v___x_599_ = lean_uint32_dec_le(v___x_598_, v_c_597_);
if (v___x_599_ == 0)
{
return v_c_597_;
}
else
{
uint32_t v___x_600_; uint8_t v___x_601_; 
v___x_600_ = 90;
v___x_601_ = lean_uint32_dec_le(v_c_597_, v___x_600_);
if (v___x_601_ == 0)
{
return v_c_597_;
}
else
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; uint32_t v___x_605_; 
v___x_602_ = lean_uint32_to_nat(v_c_597_);
v___x_603_ = lean_unsigned_to_nat(32u);
v___x_604_ = lean_nat_add(v___x_602_, v___x_603_);
lean_dec(v___x_602_);
v___x_605_ = l_Char_ofNat(v___x_604_);
lean_dec(v___x_604_);
return v___x_605_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_asciiLowerC___boxed(lean_object* v_c_606_){
_start:
{
uint32_t v_c_boxed_607_; uint32_t v_res_608_; lean_object* v_r_609_; 
v_c_boxed_607_ = lean_unbox_uint32(v_c_606_);
lean_dec(v_c_606_);
v_res_608_ = lp_lean_x2dftml_LeanFtml_asciiLowerC(v_c_boxed_607_);
v_r_609_ = lean_box_uint32(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncNormKeep(uint32_t v_c_610_){
_start:
{
uint32_t v___x_642_; uint8_t v___x_643_; 
v___x_642_ = 97;
v___x_643_ = lean_uint32_dec_le(v___x_642_, v_c_610_);
if (v___x_643_ == 0)
{
goto v___jp_637_;
}
else
{
uint32_t v___x_644_; uint8_t v___x_645_; 
v___x_644_ = 122;
v___x_645_ = lean_uint32_dec_le(v_c_610_, v___x_644_);
if (v___x_645_ == 0)
{
goto v___jp_637_;
}
else
{
return v___x_645_;
}
}
v___jp_611_:
{
uint32_t v___x_612_; uint8_t v___x_613_; 
v___x_612_ = 48;
v___x_613_ = lean_uint32_dec_le(v___x_612_, v_c_610_);
if (v___x_613_ == 0)
{
return v___x_613_;
}
else
{
uint32_t v___x_614_; uint8_t v___x_615_; 
v___x_614_ = 57;
v___x_615_ = lean_uint32_dec_le(v_c_610_, v___x_614_);
return v___x_615_;
}
}
v___jp_616_:
{
uint32_t v___x_617_; uint8_t v___x_618_; 
v___x_617_ = 97;
v___x_618_ = lean_uint32_dec_le(v___x_617_, v_c_610_);
if (v___x_618_ == 0)
{
goto v___jp_611_;
}
else
{
uint32_t v___x_619_; uint8_t v___x_620_; 
v___x_619_ = 122;
v___x_620_ = lean_uint32_dec_le(v_c_610_, v___x_619_);
if (v___x_620_ == 0)
{
goto v___jp_611_;
}
else
{
return v___x_620_;
}
}
}
v___jp_621_:
{
uint32_t v___x_622_; uint8_t v___x_623_; 
v___x_622_ = 32;
v___x_623_ = lean_uint32_dec_eq(v_c_610_, v___x_622_);
if (v___x_623_ == 0)
{
uint32_t v___x_624_; uint8_t v___x_625_; 
v___x_624_ = 58;
v___x_625_ = lean_uint32_dec_eq(v_c_610_, v___x_624_);
if (v___x_625_ == 0)
{
uint32_t v___x_626_; uint8_t v___x_627_; 
v___x_626_ = 45;
v___x_627_ = lean_uint32_dec_eq(v_c_610_, v___x_626_);
if (v___x_627_ == 0)
{
uint32_t v___x_628_; uint8_t v___x_629_; 
v___x_628_ = 95;
v___x_629_ = lean_uint32_dec_eq(v_c_610_, v___x_628_);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_630_ = lean_unsigned_to_nat(128u);
v___x_631_ = lean_uint32_to_nat(v_c_610_);
v___x_632_ = lean_nat_dec_le(v___x_630_, v___x_631_);
lean_dec(v___x_631_);
if (v___x_632_ == 0)
{
return v___x_632_;
}
else
{
uint32_t v___x_633_; uint8_t v___x_634_; 
v___x_633_ = 65;
v___x_634_ = lean_uint32_dec_le(v___x_633_, v_c_610_);
if (v___x_634_ == 0)
{
goto v___jp_616_;
}
else
{
uint32_t v___x_635_; uint8_t v___x_636_; 
v___x_635_ = 90;
v___x_636_ = lean_uint32_dec_le(v_c_610_, v___x_635_);
if (v___x_636_ == 0)
{
goto v___jp_616_;
}
else
{
return v___x_636_;
}
}
}
}
else
{
return v___x_629_;
}
}
else
{
return v___x_627_;
}
}
else
{
return v___x_625_;
}
}
else
{
return v___x_623_;
}
}
v___jp_637_:
{
uint32_t v___x_638_; uint8_t v___x_639_; 
v___x_638_ = 48;
v___x_639_ = lean_uint32_dec_le(v___x_638_, v_c_610_);
if (v___x_639_ == 0)
{
goto v___jp_621_;
}
else
{
uint32_t v___x_640_; uint8_t v___x_641_; 
v___x_640_ = 57;
v___x_641_ = lean_uint32_dec_le(v_c_610_, v___x_640_);
if (v___x_641_ == 0)
{
goto v___jp_621_;
}
else
{
return v___x_641_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncNormKeep___boxed(lean_object* v_c_646_){
_start:
{
uint32_t v_c_boxed_647_; uint8_t v_res_648_; lean_object* v_r_649_; 
v_c_boxed_647_ = lean_unbox_uint32(v_c_646_);
lean_dec(v_c_646_);
v_res_648_ = lp_lean_x2dftml_LeanFtml_isIncNormKeep(v_c_boxed_647_);
v_r_649_ = lean_box(v_res_648_);
return v_r_649_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubChar_go(lean_object* v_s_652_, lean_object* v_pat_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
lean_object* v_zero_656_; uint8_t v_isZero_657_; 
v_zero_656_ = lean_unsigned_to_nat(0u);
v_isZero_657_ = lean_nat_dec_eq(v_a_655_, v_zero_656_);
if (v_isZero_657_ == 1)
{
lean_object* v___x_658_; 
lean_dec(v_a_655_);
lean_dec(v_a_654_);
v___x_658_ = lean_box(0);
return v___x_658_;
}
else
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; uint8_t v___x_662_; 
v___x_659_ = l_List_lengthTR___redArg(v_s_652_);
v___x_660_ = l_List_lengthTR___redArg(v_pat_653_);
v___x_661_ = lean_nat_add(v_a_654_, v___x_660_);
v___x_662_ = lean_nat_dec_lt(v___x_659_, v___x_661_);
lean_dec(v___x_661_);
lean_dec(v___x_659_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; uint8_t v___x_666_; 
lean_inc(v_a_654_);
v___x_663_ = l_List_drop___redArg(v_a_654_, v_s_652_);
v___x_664_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0));
lean_inc(v___x_663_);
v___x_665_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_663_, v___x_663_, v___x_660_, v___x_664_);
lean_dec(v___x_663_);
v___x_666_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___x_665_, v_pat_653_);
lean_dec(v___x_665_);
if (v___x_666_ == 0)
{
lean_object* v_one_667_; lean_object* v_n_668_; lean_object* v___x_669_; 
v_one_667_ = lean_unsigned_to_nat(1u);
v_n_668_ = lean_nat_sub(v_a_655_, v_one_667_);
lean_dec(v_a_655_);
v___x_669_ = lean_nat_add(v_a_654_, v_one_667_);
lean_dec(v_a_654_);
v_a_654_ = v___x_669_;
v_a_655_ = v_n_668_;
goto _start;
}
else
{
lean_object* v___x_671_; 
lean_dec(v_a_655_);
v___x_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_671_, 0, v_a_654_);
return v___x_671_;
}
}
else
{
lean_object* v___x_672_; 
lean_dec(v___x_660_);
lean_dec(v_a_655_);
lean_dec(v_a_654_);
v___x_672_ = lean_box(0);
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubChar_go___boxed(lean_object* v_s_673_, lean_object* v_pat_674_, lean_object* v_a_675_, lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = lp_lean_x2dftml_LeanFtml_findSubChar_go(v_s_673_, v_pat_674_, v_a_675_, v_a_676_);
lean_dec(v_pat_674_);
lean_dec(v_s_673_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubChar(lean_object* v_s_678_, lean_object* v_pat_679_, lean_object* v_fromPos_680_){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_681_ = l_List_lengthTR___redArg(v_s_678_);
v___x_682_ = lean_unsigned_to_nat(2u);
v___x_683_ = lean_nat_add(v___x_681_, v___x_682_);
lean_dec(v___x_681_);
v___x_684_ = lp_lean_x2dftml_LeanFtml_findSubChar_go(v_s_678_, v_pat_679_, v_fromPos_680_, v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubChar___boxed(lean_object* v_s_685_, lean_object* v_pat_686_, lean_object* v_fromPos_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = lp_lean_x2dftml_LeanFtml_findSubChar(v_s_685_, v_pat_686_, v_fromPos_687_);
lean_dec(v_pat_686_);
lean_dec(v_s_685_);
return v_res_688_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1(void){
_start:
{
uint32_t v___x_689_; lean_object* v___x_690_; 
v___x_689_ = 38;
v___x_690_ = lean_box_uint32(v___x_689_);
return v___x_690_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__2(void){
_start:
{
uint32_t v___x_691_; lean_object* v___x_692_; 
v___x_691_ = 103;
v___x_692_ = lean_box_uint32(v___x_691_);
return v___x_692_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__3(void){
_start:
{
uint32_t v___x_693_; lean_object* v___x_694_; 
v___x_693_ = 116;
v___x_694_ = lean_box_uint32(v___x_693_);
return v___x_694_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4(void){
_start:
{
uint32_t v___x_695_; lean_object* v___x_696_; 
v___x_695_ = 59;
v___x_696_ = lean_box_uint32(v___x_695_);
return v___x_696_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__5(void){
_start:
{
uint32_t v___x_697_; lean_object* v___x_698_; 
v___x_697_ = 108;
v___x_698_ = lean_box_uint32(v___x_697_);
return v___x_698_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__6(void){
_start:
{
uint32_t v___x_699_; lean_object* v___x_700_; 
v___x_699_ = 113;
v___x_700_ = lean_box_uint32(v___x_699_);
return v___x_700_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__7(void){
_start:
{
uint32_t v___x_701_; lean_object* v___x_702_; 
v___x_701_ = 117;
v___x_702_ = lean_box_uint32(v___x_701_);
return v___x_702_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__8(void){
_start:
{
uint32_t v___x_703_; lean_object* v___x_704_; 
v___x_703_ = 111;
v___x_704_ = lean_box_uint32(v___x_703_);
return v___x_704_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__9(void){
_start:
{
uint32_t v___x_705_; lean_object* v___x_706_; 
v___x_705_ = 97;
v___x_706_ = lean_box_uint32(v___x_705_);
return v___x_706_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__10(void){
_start:
{
uint32_t v___x_707_; lean_object* v___x_708_; 
v___x_707_ = 109;
v___x_708_ = lean_box_uint32(v___x_707_);
return v___x_708_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__11(void){
_start:
{
uint32_t v___x_709_; lean_object* v___x_710_; 
v___x_709_ = 112;
v___x_710_ = lean_box_uint32(v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialChars(lean_object* v_x_711_){
_start:
{
if (lean_obj_tag(v_x_711_) == 0)
{
return v_x_711_;
}
else
{
lean_object* v_head_712_; lean_object* v_tail_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_783_; 
v_head_712_ = lean_ctor_get(v_x_711_, 0);
v_tail_713_ = lean_ctor_get(v_x_711_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v_x_711_);
if (v_isSharedCheck_783_ == 0)
{
v___x_715_ = v_x_711_;
v_isShared_716_ = v_isSharedCheck_783_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_tail_713_);
lean_inc(v_head_712_);
lean_dec(v_x_711_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_783_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
uint32_t v___x_717_; uint32_t v___x_718_; uint8_t v___x_719_; 
v___x_717_ = 38;
v___x_718_ = lean_unbox_uint32(v_head_712_);
v___x_719_ = lean_uint32_dec_eq(v___x_718_, v___x_717_);
if (v___x_719_ == 0)
{
uint32_t v___x_720_; uint32_t v___x_721_; uint8_t v___x_722_; 
v___x_720_ = 34;
v___x_721_ = lean_unbox_uint32(v_head_712_);
v___x_722_ = lean_uint32_dec_eq(v___x_721_, v___x_720_);
if (v___x_722_ == 0)
{
uint32_t v___x_723_; uint32_t v___x_724_; uint8_t v___x_725_; 
v___x_723_ = 60;
v___x_724_ = lean_unbox_uint32(v_head_712_);
v___x_725_ = lean_uint32_dec_eq(v___x_724_, v___x_723_);
if (v___x_725_ == 0)
{
uint32_t v___x_726_; uint32_t v___x_727_; uint8_t v___x_728_; 
v___x_726_ = 62;
v___x_727_ = lean_unbox_uint32(v_head_712_);
v___x_728_ = lean_uint32_dec_eq(v___x_727_, v___x_726_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_729_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars(v_tail_713_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_729_);
v___x_731_ = v___x_715_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_head_712_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
else
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_736_; 
lean_dec(v_head_712_);
v___x_733_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars(v_tail_713_);
v___x_734_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4;
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_733_);
lean_ctor_set(v___x_715_, 0, v___x_734_);
v___x_736_ = v___x_715_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v___x_734_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v___x_733_);
v___x_736_ = v_reuseFailAlloc_743_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_737_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__3;
v___x_738_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
lean_ctor_set(v___x_738_, 1, v___x_736_);
v___x_739_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__2;
v___x_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v___x_738_);
v___x_741_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1;
v___x_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v___x_740_);
return v___x_742_;
}
}
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
lean_dec(v_head_712_);
v___x_744_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars(v_tail_713_);
v___x_745_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4;
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_744_);
lean_ctor_set(v___x_715_, 0, v___x_745_);
v___x_747_ = v___x_715_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v___x_744_);
v___x_747_ = v_reuseFailAlloc_754_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_748_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__3;
v___x_749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v___x_747_);
v___x_750_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__5;
v___x_751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
lean_ctor_set(v___x_751_, 1, v___x_749_);
v___x_752_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1;
v___x_753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
lean_ctor_set(v___x_753_, 1, v___x_751_);
return v___x_753_;
}
}
}
else
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_758_; 
lean_dec(v_head_712_);
v___x_755_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars(v_tail_713_);
v___x_756_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4;
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_755_);
lean_ctor_set(v___x_715_, 0, v___x_756_);
v___x_758_ = v___x_715_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v___x_755_);
v___x_758_ = v_reuseFailAlloc_769_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_759_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__3;
v___x_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
lean_ctor_set(v___x_760_, 1, v___x_758_);
v___x_761_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__8;
v___x_762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v___x_760_);
v___x_763_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__7;
v___x_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
lean_ctor_set(v___x_764_, 1, v___x_762_);
v___x_765_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__6;
v___x_766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
lean_ctor_set(v___x_766_, 1, v___x_764_);
v___x_767_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1;
v___x_768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
lean_ctor_set(v___x_768_, 1, v___x_766_);
return v___x_768_;
}
}
}
else
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
lean_dec(v_head_712_);
v___x_770_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars(v_tail_713_);
v___x_771_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4;
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_770_);
lean_ctor_set(v___x_715_, 0, v___x_771_);
v___x_773_ = v___x_715_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v___x_770_);
v___x_773_ = v_reuseFailAlloc_782_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_774_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__11;
v___x_775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
lean_ctor_set(v___x_775_, 1, v___x_773_);
v___x_776_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__10;
v___x_777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
lean_ctor_set(v___x_777_, 1, v___x_775_);
v___x_778_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__9;
v___x_779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v___x_777_);
v___x_780_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1;
v___x_781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
lean_ctor_set(v___x_781_, 1, v___x_779_);
return v___x_781_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refFindCandidate_go_spec__0(lean_object* v_l_784_, lean_object* v_a_785_, lean_object* v_a_786_){
_start:
{
if (lean_obj_tag(v_a_785_) == 0)
{
lean_dec_ref(v_a_786_);
lean_inc(v_l_784_);
return v_l_784_;
}
else
{
lean_object* v_head_787_; lean_object* v_tail_788_; uint32_t v___x_792_; uint32_t v___x_793_; uint8_t v___x_794_; 
v_head_787_ = lean_ctor_get(v_a_785_, 0);
lean_inc(v_head_787_);
v_tail_788_ = lean_ctor_get(v_a_785_, 1);
lean_inc(v_tail_788_);
lean_dec_ref_known(v_a_785_, 2);
v___x_792_ = 32;
v___x_793_ = lean_unbox_uint32(v_head_787_);
v___x_794_ = lean_uint32_dec_eq(v___x_793_, v___x_792_);
if (v___x_794_ == 0)
{
uint32_t v___x_795_; uint32_t v___x_796_; uint8_t v___x_797_; 
v___x_795_ = 9;
v___x_796_ = lean_unbox_uint32(v_head_787_);
v___x_797_ = lean_uint32_dec_eq(v___x_796_, v___x_795_);
if (v___x_797_ == 0)
{
uint32_t v___x_798_; uint32_t v___x_799_; uint8_t v___x_800_; 
v___x_798_ = 62;
v___x_799_ = lean_unbox_uint32(v_head_787_);
v___x_800_ = lean_uint32_dec_eq(v___x_799_, v___x_798_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; 
lean_dec(v_tail_788_);
lean_dec(v_head_787_);
v___x_801_ = lean_array_to_list(v_a_786_);
return v___x_801_;
}
else
{
goto v___jp_789_;
}
}
else
{
goto v___jp_789_;
}
}
else
{
goto v___jp_789_;
}
v___jp_789_:
{
lean_object* v___x_790_; 
v___x_790_ = lean_array_push(v_a_786_, v_head_787_);
v_a_785_ = v_tail_788_;
v_a_786_ = v___x_790_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refFindCandidate_go_spec__0___boxed(lean_object* v_l_802_, lean_object* v_a_803_, lean_object* v_a_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refFindCandidate_go_spec__0(v_l_802_, v_a_803_, v_a_804_);
lean_dec(v_l_802_);
return v_res_805_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_806_; lean_object* v___x_807_; 
v___x_806_ = 10;
v___x_807_ = lean_box_uint32(v___x_806_);
return v___x_807_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_808_ = lean_box(0);
v___x_809_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0___boxed__const__1;
v___x_810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
lean_ctor_set(v___x_810_, 1, v___x_808_);
return v___x_810_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_811_; lean_object* v___x_812_; 
v___x_811_ = 91;
v___x_812_ = lean_box_uint32(v___x_811_);
return v___x_812_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = lean_box(0);
v___x_814_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1;
v___x_815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
lean_ctor_set(v___x_815_, 1, v___x_813_);
return v___x_815_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__2(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_816_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1);
v___x_817_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1;
v___x_818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
lean_ctor_set(v___x_818_, 1, v___x_816_);
return v___x_818_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_819_; lean_object* v___x_820_; 
v___x_819_ = 101;
v___x_820_ = lean_box_uint32(v___x_819_);
return v___x_820_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_821_ = lean_box(0);
v___x_822_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3___boxed__const__1;
v___x_823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
lean_ctor_set(v___x_823_, 1, v___x_821_);
return v___x_823_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4___boxed__const__1(void){
_start:
{
uint32_t v___x_824_; lean_object* v___x_825_; 
v___x_824_ = 100;
v___x_825_ = lean_box_uint32(v___x_824_);
return v___x_825_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3);
v___x_827_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4___boxed__const__1;
v___x_828_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___x_826_);
return v___x_828_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__5(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4);
v___x_830_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__7;
v___x_831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__6(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_832_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__5, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__5);
v___x_833_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__5;
v___x_834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
lean_ctor_set(v___x_834_, 1, v___x_832_);
return v___x_834_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7___boxed__const__1(void){
_start:
{
uint32_t v___x_835_; lean_object* v___x_836_; 
v___x_835_ = 99;
v___x_836_ = lean_box_uint32(v___x_835_);
return v___x_836_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__6, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__6);
v___x_838_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7___boxed__const__1;
v___x_839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
lean_ctor_set(v___x_839_, 1, v___x_837_);
return v___x_839_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8___boxed__const__1(void){
_start:
{
uint32_t v___x_840_; lean_object* v___x_841_; 
v___x_840_ = 110;
v___x_841_ = lean_box_uint32(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7);
v___x_843_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8___boxed__const__1;
v___x_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
lean_ctor_set(v___x_844_, 1, v___x_842_);
return v___x_844_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9___boxed__const__1(void){
_start:
{
uint32_t v___x_845_; lean_object* v___x_846_; 
v___x_845_ = 105;
v___x_846_ = lean_box_uint32(v___x_845_);
return v___x_846_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_847_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8);
v___x_848_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9___boxed__const__1;
v___x_849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
lean_ctor_set(v___x_849_, 1, v___x_847_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go(lean_object* v_src_850_, lean_object* v_a_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_zero_853_; uint8_t v_isZero_854_; 
v_zero_853_ = lean_unsigned_to_nat(0u);
v_isZero_854_ = lean_nat_dec_eq(v_a_852_, v_zero_853_);
if (v_isZero_854_ == 1)
{
lean_object* v___x_855_; 
lean_dec(v_a_852_);
lean_dec(v_a_851_);
v___x_855_ = lean_box(0);
return v___x_855_;
}
else
{
lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_856_ = l_List_lengthTR___redArg(v_src_850_);
v___x_857_ = lean_nat_dec_lt(v___x_856_, v_a_851_);
lean_dec(v___x_856_);
if (v___x_857_ == 0)
{
lean_object* v_one_858_; lean_object* v_n_859_; lean_object* v_suffix_860_; lean_object* v___x_861_; lean_object* v_lead_862_; uint32_t v___x_863_; uint8_t v___x_864_; 
v_one_858_ = lean_unsigned_to_nat(1u);
v_n_859_ = lean_nat_sub(v_a_852_, v_one_858_);
lean_dec(v_a_852_);
lean_inc(v_a_851_);
v_suffix_860_ = l_List_drop___redArg(v_a_851_, v_src_850_);
v___x_861_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0));
lean_inc(v_suffix_860_);
v_lead_862_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refFindCandidate_go_spec__0(v_suffix_860_, v_suffix_860_, v___x_861_);
v___x_863_ = 62;
v___x_864_ = l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__0(v___x_863_, v_lead_862_);
lean_dec(v_lead_862_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_865_ = lean_unsigned_to_nat(2u);
lean_inc(v_suffix_860_);
v___x_866_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_suffix_860_, v_suffix_860_, v___x_865_, v___x_861_);
v___x_874_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__2, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__2);
v___x_875_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___x_866_, v___x_874_);
lean_dec(v___x_866_);
if (v___x_875_ == 0)
{
lean_dec(v_suffix_860_);
goto v___jp_867_;
}
else
{
lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_876_ = l_List_drop___redArg(v___x_865_, v_suffix_860_);
v___x_877_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9);
v___x_878_ = lp_lean_x2dftml_LeanFtml_startsWithCI(v___x_876_, v___x_877_);
lean_dec(v___x_876_);
if (v___x_878_ == 0)
{
lean_dec(v_suffix_860_);
goto v___jp_867_;
}
else
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_879_ = lean_unsigned_to_nat(9u);
v___x_880_ = l_List_drop___redArg(v___x_879_, v_suffix_860_);
lean_dec(v_suffix_860_);
v___x_881_ = l_List_head_x3f___redArg(v___x_880_);
lean_dec(v___x_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
goto v___jp_867_;
}
else
{
lean_object* v_val_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_895_; 
v_val_882_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_895_ == 0)
{
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_895_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_val_882_);
lean_dec(v___x_881_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_895_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
uint32_t v___x_886_; uint8_t v___x_887_; 
v___x_886_ = lean_unbox_uint32(v_val_882_);
lean_dec(v_val_882_);
v___x_887_ = lp_lean_x2dftml_LeanFtml_isPcreWs(v___x_886_);
if (v___x_887_ == 0)
{
lean_del_object(v___x_884_);
goto v___jp_867_;
}
else
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_893_; 
lean_dec(v_n_859_);
v___x_888_ = lean_nat_add(v_a_851_, v___x_879_);
v___x_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_889_, 0, v_zero_853_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_890_, 0, v_zero_853_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_891_, 0, v_a_851_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_891_);
v___x_893_ = v___x_884_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_891_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
}
v___jp_867_:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0);
v___x_869_ = lp_lean_x2dftml_LeanFtml_findSubChar(v_src_850_, v___x_868_, v_a_851_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v___x_870_; 
lean_dec(v_n_859_);
v___x_870_ = lean_box(0);
return v___x_870_;
}
else
{
lean_object* v_val_871_; lean_object* v___x_872_; 
v_val_871_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_val_871_);
lean_dec_ref_known(v___x_869_, 1);
v___x_872_ = lean_nat_add(v_val_871_, v_one_858_);
lean_dec(v_val_871_);
v_a_851_ = v___x_872_;
v_a_852_ = v_n_859_;
goto _start;
}
}
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec(v_suffix_860_);
v___x_896_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0);
v___x_897_ = lp_lean_x2dftml_LeanFtml_findSubChar(v_src_850_, v___x_896_, v_a_851_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v___x_898_; 
lean_dec(v_n_859_);
v___x_898_ = lean_box(0);
return v___x_898_;
}
else
{
lean_object* v_val_899_; lean_object* v___x_900_; 
v_val_899_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v___x_897_, 1);
v___x_900_ = lean_nat_add(v_val_899_, v_one_858_);
lean_dec(v_val_899_);
v_a_851_ = v___x_900_;
v_a_852_ = v_n_859_;
goto _start;
}
}
}
else
{
lean_object* v___x_902_; 
lean_dec(v_a_852_);
lean_dec(v_a_851_);
v___x_902_ = lean_box(0);
return v___x_902_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate_go___boxed(lean_object* v_src_903_, lean_object* v_a_904_, lean_object* v_a_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go(v_src_903_, v_a_904_, v_a_905_);
lean_dec(v_src_903_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate(lean_object* v_src_907_, lean_object* v_fromPos_908_){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_909_ = l_List_lengthTR___redArg(v_src_907_);
v___x_910_ = lean_unsigned_to_nat(2u);
v___x_911_ = lean_nat_add(v___x_909_, v___x_910_);
lean_dec(v___x_909_);
v___x_912_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go(v_src_907_, v_fromPos_908_, v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindCandidate___boxed(lean_object* v_src_913_, lean_object* v_fromPos_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = lp_lean_x2dftml_LeanFtml_refFindCandidate(v_src_913_, v_fromPos_914_);
lean_dec(v_src_913_);
return v_res_915_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_916_; lean_object* v___x_917_; 
v___x_916_ = 93;
v___x_917_ = lean_box_uint32(v___x_916_);
return v___x_917_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = lean_box(0);
v___x_919_ = lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0___boxed__const__1;
v___x_920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
lean_ctor_set(v___x_920_, 1, v___x_918_);
return v___x_920_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_921_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0, &lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0);
v___x_922_ = lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0___boxed__const__1;
v___x_923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
lean_ctor_set(v___x_923_, 1, v___x_921_);
return v___x_923_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0___boxed__const__1;
v___x_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go(lean_object* v_src_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_zero_929_; uint8_t v_isZero_930_; 
v_zero_929_ = lean_unsigned_to_nat(0u);
v_isZero_930_ = lean_nat_dec_eq(v_a_928_, v_zero_929_);
if (v_isZero_930_ == 1)
{
lean_object* v___x_931_; 
lean_dec(v_a_928_);
lean_dec(v_a_927_);
v___x_931_ = lean_box(0);
return v___x_931_;
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1, &lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1);
v___x_933_ = lp_lean_x2dftml_LeanFtml_findSubChar(v_src_926_, v___x_932_, v_a_927_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_dec(v_a_928_);
return v___x_933_;
}
else
{
lean_object* v_val_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_955_; 
v_val_934_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_955_ == 0)
{
v___x_936_ = v___x_933_;
v_isShared_937_ = v_isSharedCheck_955_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_val_934_);
lean_dec(v___x_933_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_955_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_938_; lean_object* v_after_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_938_ = lean_unsigned_to_nat(2u);
v_after_939_ = lean_nat_add(v_val_934_, v___x_938_);
v___x_940_ = l_List_lengthTR___redArg(v_src_926_);
v___x_941_ = lean_nat_dec_le(v___x_940_, v_after_939_);
lean_dec(v___x_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
lean_inc(v_after_939_);
v___x_942_ = l_List_get_x3fInternal___redArg(v_src_926_, v_after_939_);
v___x_943_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2, &lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2);
v___x_944_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_942_, v___x_943_);
lean_dec(v___x_942_);
if (v___x_944_ == 0)
{
lean_object* v_one_945_; lean_object* v_n_946_; lean_object* v___x_947_; 
lean_dec(v_after_939_);
lean_del_object(v___x_936_);
v_one_945_ = lean_unsigned_to_nat(1u);
v_n_946_ = lean_nat_sub(v_a_928_, v_one_945_);
lean_dec(v_a_928_);
v___x_947_ = lean_nat_add(v_val_934_, v_one_945_);
lean_dec(v_val_934_);
v_a_927_ = v___x_947_;
v_a_928_ = v_n_946_;
goto _start;
}
else
{
lean_object* v___x_950_; 
lean_dec(v_val_934_);
lean_dec(v_a_928_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v_after_939_);
v___x_950_ = v___x_936_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_after_939_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
else
{
lean_object* v___x_953_; 
lean_dec(v_val_934_);
lean_dec(v_a_928_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v_after_939_);
v___x_953_ = v___x_936_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_after_939_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___boxed(lean_object* v_src_956_, lean_object* v_a_957_, lean_object* v_a_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go(v_src_956_, v_a_957_, v_a_958_);
lean_dec(v_src_956_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd(lean_object* v_src_960_, lean_object* v_fromPos_961_){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_962_ = l_List_lengthTR___redArg(v_src_960_);
v___x_963_ = lean_unsigned_to_nat(2u);
v___x_964_ = lean_nat_add(v___x_962_, v___x_963_);
lean_dec(v___x_962_);
v___x_965_ = lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go(v_src_960_, v_fromPos_961_, v___x_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindIncludeEnd___boxed(lean_object* v_src_966_, lean_object* v_fromPos_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = lp_lean_x2dftml_LeanFtml_refFindIncludeEnd(v_src_966_, v_fromPos_967_);
lean_dec(v_src_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refSegmentArg_spec__0(lean_object* v_l_969_, lean_object* v_a_970_, lean_object* v_a_971_){
_start:
{
if (lean_obj_tag(v_a_970_) == 0)
{
lean_dec_ref(v_a_971_);
lean_inc(v_l_969_);
return v_l_969_;
}
else
{
lean_object* v_head_972_; lean_object* v_tail_973_; uint32_t v___x_974_; uint8_t v___x_975_; 
v_head_972_ = lean_ctor_get(v_a_970_, 0);
lean_inc(v_head_972_);
v_tail_973_ = lean_ctor_get(v_a_970_, 1);
lean_inc(v_tail_973_);
lean_dec_ref_known(v_a_970_, 2);
v___x_974_ = lean_unbox_uint32(v_head_972_);
v___x_975_ = lp_lean_x2dftml_LeanFtml_isIncKeyC(v___x_974_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; 
lean_dec(v_tail_973_);
lean_dec(v_head_972_);
v___x_976_ = lean_array_to_list(v_a_971_);
return v___x_976_;
}
else
{
lean_object* v___x_977_; 
v___x_977_ = lean_array_push(v_a_971_, v_head_972_);
v_a_970_ = v_tail_973_;
v_a_971_ = v___x_977_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refSegmentArg_spec__0___boxed(lean_object* v_l_979_, lean_object* v_a_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refSegmentArg_spec__0(v_l_979_, v_a_980_, v_a_981_);
lean_dec(v_l_979_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSegmentArg(lean_object* v_seg_983_){
_start:
{
lean_object* v_src_984_; lean_object* v___x_985_; lean_object* v_key_986_; uint8_t v___x_987_; 
v_src_984_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0(v_seg_983_);
v___x_985_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0));
lean_inc(v_src_984_);
v_key_986_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refSegmentArg_spec__0(v_src_984_, v_src_984_, v___x_985_);
v___x_987_ = l_List_isEmpty___redArg(v_key_986_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v_after_990_; 
v___x_988_ = l_List_lengthTR___redArg(v_key_986_);
v___x_989_ = l_List_drop___redArg(v___x_988_, v_src_984_);
lean_dec(v_src_984_);
v_after_990_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0(v___x_989_);
lean_dec(v___x_989_);
if (lean_obj_tag(v_after_990_) == 1)
{
lean_object* v_head_991_; lean_object* v_tail_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1007_; 
v_head_991_ = lean_ctor_get(v_after_990_, 0);
v_tail_992_ = lean_ctor_get(v_after_990_, 1);
v_isSharedCheck_1007_ = !lean_is_exclusive(v_after_990_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_994_ = v_after_990_;
v_isShared_995_ = v_isSharedCheck_1007_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_tail_992_);
lean_inc(v_head_991_);
lean_dec(v_after_990_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1007_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
uint32_t v___x_996_; uint32_t v___x_997_; uint8_t v___x_998_; 
v___x_996_ = 61;
v___x_997_ = lean_unbox_uint32(v_head_991_);
lean_dec(v_head_991_);
v___x_998_ = lean_uint32_dec_eq(v___x_997_, v___x_996_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; 
lean_del_object(v___x_994_);
lean_dec(v_tail_992_);
lean_dec(v_key_986_);
v___x_999_ = lean_box(0);
return v___x_999_;
}
else
{
lean_object* v_value_1000_; uint8_t v___x_1001_; 
v_value_1000_ = lp_lean_x2dftml_LeanFtml_trimChars(v_tail_992_);
lean_dec(v_tail_992_);
v___x_1001_ = l_List_isEmpty___redArg(v_value_1000_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1003_; 
if (v_isShared_995_ == 0)
{
lean_ctor_set_tag(v___x_994_, 0);
lean_ctor_set(v___x_994_, 1, v_value_1000_);
lean_ctor_set(v___x_994_, 0, v_key_986_);
v___x_1003_ = v___x_994_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_key_986_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_value_1000_);
v___x_1003_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
return v___x_1004_;
}
}
else
{
lean_object* v___x_1006_; 
lean_dec(v_value_1000_);
lean_del_object(v___x_994_);
lean_dec(v_key_986_);
v___x_1006_ = lean_box(0);
return v___x_1006_;
}
}
}
}
else
{
lean_object* v___x_1008_; 
lean_dec(v_after_990_);
lean_dec(v_key_986_);
v___x_1008_ = lean_box(0);
return v___x_1008_;
}
}
else
{
lean_object* v___x_1009_; 
lean_dec(v_key_986_);
lean_dec(v_src_984_);
v___x_1009_ = lean_box(0);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSegmentArg___boxed(lean_object* v_seg_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = lp_lean_x2dftml_LeanFtml_refSegmentArg(v_seg_1010_);
lean_dec(v_seg_1010_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitRawPipe(lean_object* v_x_1012_){
_start:
{
if (lean_obj_tag(v_x_1012_) == 0)
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_box(0);
v___x_1014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1014_, 0, v_x_1012_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
return v___x_1014_;
}
else
{
lean_object* v_head_1015_; lean_object* v_tail_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1041_; 
v_head_1015_ = lean_ctor_get(v_x_1012_, 0);
v_tail_1016_ = lean_ctor_get(v_x_1012_, 1);
v_isSharedCheck_1041_ = !lean_is_exclusive(v_x_1012_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1018_ = v_x_1012_;
v_isShared_1019_ = v_isSharedCheck_1041_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_tail_1016_);
lean_inc(v_head_1015_);
lean_dec(v_x_1012_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1041_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
uint32_t v___x_1020_; uint32_t v___x_1021_; uint8_t v___x_1022_; 
v___x_1020_ = 124;
v___x_1021_ = lean_unbox_uint32(v_head_1015_);
v___x_1022_ = lean_uint32_dec_eq(v___x_1021_, v___x_1020_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; lean_object* v_head_1024_; lean_object* v_tail_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1035_; 
v___x_1023_ = lp_lean_x2dftml_LeanFtml_splitRawPipe(v_tail_1016_);
v_head_1024_ = lean_ctor_get(v___x_1023_, 0);
v_tail_1025_ = lean_ctor_get(v___x_1023_, 1);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1027_ = v___x_1023_;
v_isShared_1028_ = v_isSharedCheck_1035_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_tail_1025_);
lean_inc(v_head_1024_);
lean_dec(v___x_1023_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1035_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 1, v_head_1024_);
lean_ctor_set(v___x_1027_, 0, v_head_1015_);
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_head_1015_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_head_1024_);
v___x_1030_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1032_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 1, v_tail_1025_);
lean_ctor_set(v___x_1018_, 0, v___x_1030_);
v___x_1032_ = v___x_1018_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1030_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v_tail_1025_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
else
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1039_; 
lean_dec(v_head_1015_);
v___x_1036_ = lean_box(0);
v___x_1037_ = lp_lean_x2dftml_LeanFtml_splitRawPipe(v_tail_1016_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 1, v___x_1037_);
lean_ctor_set(v___x_1018_, 0, v___x_1036_);
v___x_1039_ = v___x_1018_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1036_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_refSegments_spec__0(lean_object* v_a_1042_, lean_object* v_a_1043_){
_start:
{
if (lean_obj_tag(v_a_1042_) == 0)
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_array_to_list(v_a_1043_);
return v___x_1044_;
}
else
{
lean_object* v_head_1045_; lean_object* v_tail_1046_; lean_object* v___x_1047_; 
v_head_1045_ = lean_ctor_get(v_a_1042_, 0);
v_tail_1046_ = lean_ctor_get(v_a_1042_, 1);
v___x_1047_ = lp_lean_x2dftml_LeanFtml_refSegmentArg(v_head_1045_);
if (lean_obj_tag(v___x_1047_) == 0)
{
v_a_1042_ = v_tail_1046_;
goto _start;
}
else
{
lean_object* v_val_1049_; lean_object* v___x_1050_; 
v_val_1049_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_val_1049_);
lean_dec_ref_known(v___x_1047_, 1);
v___x_1050_ = lean_array_push(v_a_1043_, v_val_1049_);
v_a_1042_ = v_tail_1046_;
v_a_1043_ = v___x_1050_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_refSegments_spec__0___boxed(lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_refSegments_spec__0(v_a_1052_, v_a_1053_);
lean_dec(v_a_1052_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSegments(lean_object* v_tail_1057_){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = lp_lean_x2dftml_LeanFtml_splitRawPipe(v_tail_1057_);
v___x_1059_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refSegments___closed__0));
v___x_1060_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_refSegments_spec__0(v___x_1058_, v___x_1059_);
lean_dec(v___x_1058_);
return v___x_1060_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = 13;
v___x_1062_ = lean_box_uint32(v___x_1061_);
return v___x_1062_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0___boxed__const__1;
v___x_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose_go(lean_object* v_text_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_zero_1068_; uint8_t v_isZero_1069_; 
v_zero_1068_ = lean_unsigned_to_nat(0u);
v_isZero_1069_ = lean_nat_dec_eq(v_a_1067_, v_zero_1068_);
if (v_isZero_1069_ == 1)
{
lean_object* v___x_1070_; 
lean_dec(v_a_1067_);
lean_dec(v_a_1066_);
v___x_1070_ = lean_box(0);
return v___x_1070_;
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1, &lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__1);
v___x_1072_ = lp_lean_x2dftml_LeanFtml_findSubChar(v_text_1065_, v___x_1071_, v_a_1066_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_dec(v_a_1067_);
return v___x_1072_;
}
else
{
lean_object* v_val_1073_; lean_object* v___x_1074_; lean_object* v_after_1075_; lean_object* v___x_1076_; uint8_t v___x_1077_; 
v_val_1073_ = lean_ctor_get(v___x_1072_, 0);
v___x_1074_ = lean_unsigned_to_nat(2u);
v_after_1075_ = lean_nat_add(v_val_1073_, v___x_1074_);
v___x_1076_ = l_List_lengthTR___redArg(v_text_1065_);
v___x_1077_ = lean_nat_dec_le(v___x_1076_, v_after_1075_);
lean_dec(v___x_1076_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1078_ = l_List_get_x3fInternal___redArg(v_text_1065_, v_after_1075_);
v___x_1079_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2, &lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__2);
v___x_1080_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_1078_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1081_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0, &lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0);
v___x_1082_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_1078_, v___x_1081_);
lean_dec(v___x_1078_);
if (v___x_1082_ == 0)
{
lean_object* v_one_1083_; lean_object* v_n_1084_; lean_object* v___x_1085_; 
lean_inc(v_val_1073_);
lean_dec_ref_known(v___x_1072_, 1);
v_one_1083_ = lean_unsigned_to_nat(1u);
v_n_1084_ = lean_nat_sub(v_a_1067_, v_one_1083_);
lean_dec(v_a_1067_);
v___x_1085_ = lean_nat_add(v_val_1073_, v_one_1083_);
lean_dec(v_val_1073_);
v_a_1066_ = v___x_1085_;
v_a_1067_ = v_n_1084_;
goto _start;
}
else
{
lean_dec(v_a_1067_);
return v___x_1072_;
}
}
else
{
lean_dec(v___x_1078_);
lean_dec(v_a_1067_);
return v___x_1072_;
}
}
else
{
lean_dec(v_after_1075_);
lean_dec(v_a_1067_);
return v___x_1072_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___boxed(lean_object* v_text_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = lp_lean_x2dftml_LeanFtml_refFindBlockClose_go(v_text_1087_, v_a_1088_, v_a_1089_);
lean_dec(v_text_1087_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose(lean_object* v_text_1091_, lean_object* v_fromPos_1092_){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1093_ = l_List_lengthTR___redArg(v_text_1091_);
v___x_1094_ = lean_unsigned_to_nat(2u);
v___x_1095_ = lean_nat_add(v___x_1093_, v___x_1094_);
lean_dec(v___x_1093_);
v___x_1096_ = lp_lean_x2dftml_LeanFtml_refFindBlockClose_go(v_text_1091_, v_fromPos_1092_, v___x_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFindBlockClose___boxed(lean_object* v_text_1097_, lean_object* v_fromPos_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = lp_lean_x2dftml_LeanFtml_refFindBlockClose(v_text_1097_, v_fromPos_1098_);
lean_dec(v_text_1097_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__0(lean_object* v_l_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_){
_start:
{
if (lean_obj_tag(v_a_1101_) == 0)
{
lean_dec_ref(v_a_1102_);
lean_inc(v_l_1100_);
return v_l_1100_;
}
else
{
lean_object* v_head_1103_; lean_object* v_tail_1104_; uint32_t v___x_1105_; uint8_t v___x_1106_; 
v_head_1103_ = lean_ctor_get(v_a_1101_, 0);
lean_inc(v_head_1103_);
v_tail_1104_ = lean_ctor_get(v_a_1101_, 1);
lean_inc(v_tail_1104_);
lean_dec_ref_known(v_a_1101_, 2);
v___x_1105_ = lean_unbox_uint32(v_head_1103_);
v___x_1106_ = lp_lean_x2dftml_LeanFtml_isIncGramWs(v___x_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; 
lean_dec(v_tail_1104_);
lean_dec(v_head_1103_);
v___x_1107_ = lean_array_to_list(v_a_1102_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_array_push(v_a_1102_, v_head_1103_);
v_a_1101_ = v_tail_1104_;
v_a_1102_ = v___x_1108_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__0___boxed(lean_object* v_l_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__0(v_l_1110_, v_a_1111_, v_a_1112_);
lean_dec(v_l_1110_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__1(lean_object* v_l_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
if (lean_obj_tag(v_a_1115_) == 0)
{
lean_dec_ref(v_a_1116_);
lean_inc(v_l_1114_);
return v_l_1114_;
}
else
{
lean_object* v_head_1117_; lean_object* v_tail_1118_; uint32_t v___x_1119_; uint32_t v___x_1120_; uint8_t v___x_1121_; 
v_head_1117_ = lean_ctor_get(v_a_1115_, 0);
lean_inc(v_head_1117_);
v_tail_1118_ = lean_ctor_get(v_a_1115_, 1);
lean_inc(v_tail_1118_);
lean_dec_ref_known(v_a_1115_, 2);
v___x_1119_ = 91;
v___x_1120_ = lean_unbox_uint32(v_head_1117_);
v___x_1121_ = lean_uint32_dec_eq(v___x_1120_, v___x_1119_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; 
lean_dec(v_tail_1118_);
lean_dec(v_head_1117_);
v___x_1122_ = lean_array_to_list(v_a_1116_);
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_array_push(v_a_1116_, v_head_1117_);
v_a_1115_ = v_tail_1118_;
v_a_1116_ = v___x_1123_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__1___boxed(lean_object* v_l_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__1(v_l_1125_, v_a_1126_, v_a_1127_);
lean_dec(v_l_1125_);
return v_res_1128_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__0(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1;
v___x_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
return v___x_1130_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = 45;
v___x_1132_ = lean_box_uint32(v___x_1131_);
return v___x_1132_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1133_ = lean_box(0);
v___x_1134_ = lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1___boxed__const__1;
v___x_1135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v___x_1133_);
return v___x_1135_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__2(void){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1136_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1, &lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1);
v___x_1137_ = lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1___boxed__const__1;
v___x_1138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v___x_1136_);
return v___x_1138_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = 33;
v___x_1140_ = lean_box_uint32(v___x_1139_);
return v___x_1140_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refParseBlock___closed__2, &lp_lean_x2dftml_LeanFtml_refParseBlock___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__2);
v___x_1142_ = lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3___boxed__const__1;
v___x_1143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
lean_ctor_set(v___x_1143_, 1, v___x_1141_);
return v___x_1143_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__4(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1144_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3, &lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3);
v___x_1145_ = lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1;
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
lean_ctor_set(v___x_1146_, 1, v___x_1144_);
return v___x_1146_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = 32;
v___x_1148_ = lean_box_uint32(v___x_1147_);
return v___x_1148_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5___boxed__const__1;
v___x_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refParseBlock(lean_object* v_text_1151_){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v_ws1_1155_; uint8_t v___x_1156_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1153_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0));
lean_inc(v_text_1151_);
v___x_1154_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__0(v_text_1151_, v_text_1151_, v___x_1153_);
v_ws1_1155_ = l_List_lengthTR___redArg(v___x_1154_);
lean_dec(v___x_1154_);
v___x_1156_ = lean_nat_dec_eq(v_ws1_1155_, v___x_1152_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; lean_object* v_refRun_1158_; uint8_t v___x_1159_; 
lean_inc(v_ws1_1155_);
v___x_1157_ = l_List_drop___redArg(v_ws1_1155_, v_text_1151_);
lean_inc(v___x_1157_);
v_refRun_1158_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_parsePageRef_spec__0(v___x_1157_, v___x_1157_, v___x_1153_);
lean_dec(v___x_1157_);
v___x_1159_ = l_List_isEmpty___redArg(v_refRun_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; lean_object* v_i0_1161_; lean_object* v___x_1162_; 
v___x_1160_ = l_List_lengthTR___redArg(v_refRun_1158_);
v_i0_1161_ = lean_nat_add(v_ws1_1155_, v___x_1160_);
lean_dec(v___x_1160_);
lean_dec(v_ws1_1155_);
lean_inc(v_i0_1161_);
v___x_1162_ = lp_lean_x2dftml_LeanFtml_refFindBlockClose(v_text_1151_, v_i0_1161_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v___x_1163_; 
lean_dec(v_i0_1161_);
lean_dec(v_refRun_1158_);
lean_dec(v_text_1151_);
v___x_1163_ = lean_box(0);
return v___x_1163_;
}
else
{
lean_object* v_val_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1216_; 
v_val_1164_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1166_ = v___x_1162_;
v_isShared_1167_ = v_isSharedCheck_1216_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_val_1164_);
lean_dec(v___x_1162_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1216_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___y_1169_; uint8_t v___x_1181_; 
v___x_1181_ = lean_nat_dec_eq(v_i0_1161_, v_val_1164_);
if (v___x_1181_ == 0)
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v_ws2_1186_; uint8_t v___x_1187_; 
v___x_1182_ = lean_nat_sub(v_val_1164_, v_i0_1161_);
lean_inc(v_i0_1161_);
v___x_1183_ = l_List_drop___redArg(v_i0_1161_, v_text_1151_);
lean_inc(v___x_1183_);
v___x_1184_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1183_, v___x_1183_, v___x_1182_, v___x_1153_);
lean_dec(v___x_1183_);
lean_inc(v___x_1184_);
v___x_1185_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__0(v___x_1184_, v___x_1184_, v___x_1153_);
lean_dec(v___x_1184_);
v_ws2_1186_ = l_List_lengthTR___redArg(v___x_1185_);
lean_dec(v___x_1185_);
v___x_1187_ = lean_nat_dec_eq(v_ws2_1186_, v___x_1152_);
if (v___x_1187_ == 0)
{
lean_object* v_i1_1188_; uint8_t v___x_1189_; 
v_i1_1188_ = lean_nat_add(v_i0_1161_, v_ws2_1186_);
lean_dec(v_ws2_1186_);
lean_dec(v_i0_1161_);
v___x_1189_ = lean_nat_dec_lt(v_i1_1188_, v_val_1164_);
if (v___x_1189_ == 0)
{
v___y_1169_ = v_i1_1188_;
goto v___jp_1168_;
}
else
{
lean_object* v___x_1190_; lean_object* v___x_1191_; uint8_t v___x_1192_; 
lean_inc(v_i1_1188_);
v___x_1190_ = l_List_get_x3fInternal___redArg(v_text_1151_, v_i1_1188_);
v___x_1191_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refParseBlock___closed__0, &lp_lean_x2dftml_LeanFtml_refParseBlock___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__0);
v___x_1192_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_1190_, v___x_1191_);
lean_dec(v___x_1190_);
if (v___x_1192_ == 0)
{
v___y_1169_ = v_i1_1188_;
goto v___jp_1168_;
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; 
v___x_1193_ = lean_unsigned_to_nat(4u);
lean_inc(v_i1_1188_);
v___x_1194_ = l_List_drop___redArg(v_i1_1188_, v_text_1151_);
lean_inc(v___x_1194_);
v___x_1195_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1194_, v___x_1194_, v___x_1193_, v___x_1153_);
v___x_1196_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refParseBlock___closed__4, &lp_lean_x2dftml_LeanFtml_refParseBlock___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__4);
v___x_1197_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___x_1195_, v___x_1196_);
lean_dec(v___x_1195_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v_brkLen_1201_; lean_object* v_iBrk_1202_; uint8_t v___x_1203_; 
v___x_1198_ = lean_nat_sub(v_val_1164_, v_i1_1188_);
lean_inc(v___x_1194_);
v___x_1199_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1194_, v___x_1194_, v___x_1198_, v___x_1153_);
lean_dec(v___x_1194_);
lean_inc(v___x_1199_);
v___x_1200_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_refParseBlock_spec__1(v___x_1199_, v___x_1199_, v___x_1153_);
lean_dec(v___x_1199_);
v_brkLen_1201_ = l_List_lengthTR___redArg(v___x_1200_);
lean_dec(v___x_1200_);
v_iBrk_1202_ = lean_nat_add(v_i1_1188_, v_brkLen_1201_);
lean_dec(v_brkLen_1201_);
lean_dec(v_i1_1188_);
v___x_1203_ = lean_nat_dec_lt(v_iBrk_1202_, v_val_1164_);
if (v___x_1203_ == 0)
{
v___y_1169_ = v_iBrk_1202_;
goto v___jp_1168_;
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
lean_inc(v_iBrk_1202_);
v___x_1204_ = l_List_get_x3fInternal___redArg(v_text_1151_, v_iBrk_1202_);
v___x_1205_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5, &lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5);
v___x_1206_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_1204_, v___x_1205_);
lean_dec(v___x_1204_);
if (v___x_1206_ == 0)
{
v___y_1169_ = v_iBrk_1202_;
goto v___jp_1168_;
}
else
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = lean_unsigned_to_nat(1u);
v___x_1208_ = lean_nat_add(v_iBrk_1202_, v___x_1207_);
lean_dec(v_iBrk_1202_);
v___y_1169_ = v___x_1208_;
goto v___jp_1168_;
}
}
}
else
{
lean_dec(v___x_1194_);
v___y_1169_ = v_i1_1188_;
goto v___jp_1168_;
}
}
}
}
else
{
lean_object* v___x_1209_; 
lean_dec(v_ws2_1186_);
lean_del_object(v___x_1166_);
lean_dec(v_val_1164_);
lean_dec(v_i0_1161_);
lean_dec(v_refRun_1158_);
lean_dec(v_text_1151_);
v___x_1209_ = lean_box(0);
return v___x_1209_;
}
}
else
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
lean_del_object(v___x_1166_);
lean_dec(v_i0_1161_);
lean_dec(v_text_1151_);
v___x_1210_ = lean_unsigned_to_nat(2u);
v___x_1211_ = lean_nat_add(v_val_1164_, v___x_1210_);
lean_dec(v_val_1164_);
v___x_1212_ = lean_box(0);
v___x_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1213_, 0, v_refRun_1158_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
v___x_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1211_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1214_);
return v___x_1215_;
}
v___jp_1168_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v_tail_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1179_; 
v___x_1170_ = lean_nat_sub(v_val_1164_, v___y_1169_);
v___x_1171_ = l_List_drop___redArg(v___y_1169_, v_text_1151_);
lean_dec(v_text_1151_);
lean_inc(v___x_1171_);
v_tail_1172_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1171_, v___x_1171_, v___x_1170_, v___x_1153_);
lean_dec(v___x_1171_);
v___x_1173_ = lean_unsigned_to_nat(2u);
v___x_1174_ = lean_nat_add(v_val_1164_, v___x_1173_);
lean_dec(v_val_1164_);
v___x_1175_ = lp_lean_x2dftml_LeanFtml_refSegments(v_tail_1172_);
v___x_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1176_, 0, v_refRun_1158_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1174_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 0, v___x_1177_);
v___x_1179_ = v___x_1166_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
else
{
lean_object* v___x_1217_; 
lean_dec(v_refRun_1158_);
lean_dec(v_ws1_1155_);
lean_dec(v_text_1151_);
v___x_1217_ = lean_box(0);
return v___x_1217_;
}
}
else
{
lean_object* v___x_1218_; 
lean_dec(v_ws1_1155_);
lean_dec(v_text_1151_);
v___x_1218_ = lean_box(0);
return v___x_1218_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_refCanonicalSite_spec__1(lean_object* v_x_1219_){
_start:
{
if (lean_obj_tag(v_x_1219_) == 0)
{
uint8_t v___x_1220_; 
v___x_1220_ = 1;
return v___x_1220_;
}
else
{
lean_object* v_head_1221_; lean_object* v_tail_1222_; uint32_t v___x_1223_; uint8_t v___x_1224_; 
v_head_1221_ = lean_ctor_get(v_x_1219_, 0);
v_tail_1222_ = lean_ctor_get(v_x_1219_, 1);
v___x_1223_ = lean_unbox_uint32(v_head_1221_);
v___x_1224_ = lp_lean_x2dftml_LeanFtml_isIncSiteSlugC(v___x_1223_);
if (v___x_1224_ == 0)
{
return v___x_1224_;
}
else
{
v_x_1219_ = v_tail_1222_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_refCanonicalSite_spec__1___boxed(lean_object* v_x_1226_){
_start:
{
uint8_t v_res_1227_; lean_object* v_r_1228_; 
v_res_1227_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refCanonicalSite_spec__1(v_x_1226_);
lean_dec(v_x_1226_);
v_r_1228_ = lean_box(v_res_1227_);
return v_r_1228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_refCanonicalSite_spec__0(lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
if (lean_obj_tag(v_a_1229_) == 0)
{
lean_object* v___x_1231_; 
v___x_1231_ = l_List_reverse___redArg(v_a_1230_);
return v___x_1231_;
}
else
{
lean_object* v_head_1232_; lean_object* v_tail_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1244_; 
v_head_1232_ = lean_ctor_get(v_a_1229_, 0);
v_tail_1233_ = lean_ctor_get(v_a_1229_, 1);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_a_1229_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1235_ = v_a_1229_;
v_isShared_1236_ = v_isSharedCheck_1244_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_tail_1233_);
lean_inc(v_head_1232_);
lean_dec(v_a_1229_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1244_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
uint32_t v___x_1237_; uint32_t v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1241_; 
v___x_1237_ = lean_unbox_uint32(v_head_1232_);
lean_dec(v_head_1232_);
v___x_1238_ = lp_lean_x2dftml_LeanFtml_asciiLowerC(v___x_1237_);
v___x_1239_ = lean_box_uint32(v___x_1238_);
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 1, v_a_1230_);
lean_ctor_set(v___x_1235_, 0, v___x_1239_);
v___x_1241_ = v___x_1235_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1239_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_a_1230_);
v___x_1241_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
v_a_1229_ = v_tail_1233_;
v_a_1230_ = v___x_1241_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__1(void){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__0));
v___x_1247_ = l_String_toListImpl(v___x_1246_);
return v___x_1247_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2___boxed__const__1(void){
_start:
{
uint32_t v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = 46;
v___x_1249_ = lean_box_uint32(v___x_1248_);
return v___x_1249_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2___boxed__const__1;
v___x_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCanonicalSite(lean_object* v_raw_1252_){
_start:
{
lean_object* v___y_1254_; lean_object* v_t0_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; 
v_t0_1268_ = lp_lean_x2dftml_LeanFtml_trimChars(v_raw_1252_);
v___x_1269_ = l_List_getLast_x3f___redArg(v_t0_1268_);
v___x_1270_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2, &lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2);
v___x_1271_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_1269_, v___x_1270_);
lean_dec(v___x_1269_);
if (v___x_1271_ == 0)
{
v___y_1254_ = v_t0_1268_;
goto v___jp_1253_;
}
else
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1272_ = lean_unsigned_to_nat(1u);
v___x_1273_ = l_List_reverse___redArg(v_t0_1268_);
v___x_1274_ = l_List_drop___redArg(v___x_1272_, v___x_1273_);
lean_dec(v___x_1273_);
v___x_1275_ = l_List_reverse___redArg(v___x_1274_);
v___y_1254_ = v___x_1275_;
goto v___jp_1253_;
}
v___jp_1253_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; 
v___x_1255_ = lean_unsigned_to_nat(12u);
v___x_1256_ = l_List_lengthTR___redArg(v___y_1254_);
v___x_1257_ = lean_nat_dec_le(v___x_1255_, v___x_1256_);
if (v___x_1257_ == 0)
{
lean_dec(v___x_1256_);
lean_dec(v___y_1254_);
lean_inc(v_raw_1252_);
return v_raw_1252_;
}
else
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v_slug_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v_suf_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; 
v___x_1258_ = lean_nat_sub(v___x_1256_, v___x_1255_);
lean_dec(v___x_1256_);
v___x_1259_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0));
lean_inc(v___x_1258_);
lean_inc(v___y_1254_);
v_slug_1260_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_1254_, v___y_1254_, v___x_1258_, v___x_1259_);
v___x_1261_ = l_List_drop___redArg(v___x_1258_, v___y_1254_);
lean_dec(v___y_1254_);
v___x_1262_ = lean_box(0);
v_suf_1263_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_refCanonicalSite_spec__0(v___x_1261_, v___x_1262_);
v___x_1264_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__1, &lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__1);
v___x_1265_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_suf_1263_, v___x_1264_);
lean_dec(v_suf_1263_);
if (v___x_1265_ == 0)
{
lean_dec(v_slug_1260_);
lean_inc(v_raw_1252_);
return v_raw_1252_;
}
else
{
uint8_t v___x_1266_; 
v___x_1266_ = l_List_isEmpty___redArg(v_slug_1260_);
if (v___x_1266_ == 0)
{
uint8_t v___x_1267_; 
v___x_1267_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refCanonicalSite_spec__1(v_slug_1260_);
if (v___x_1267_ == 0)
{
lean_dec(v_slug_1260_);
lean_inc(v_raw_1252_);
return v_raw_1252_;
}
else
{
return v_slug_1260_;
}
}
else
{
lean_dec(v_slug_1260_);
lean_inc(v_raw_1252_);
return v_raw_1252_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCanonicalSite___boxed(lean_object* v_raw_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = lp_lean_x2dftml_LeanFtml_refCanonicalSite(v_raw_1276_);
lean_dec(v_raw_1276_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refMergeColons_go(lean_object* v_a_1278_, uint8_t v_a_1279_){
_start:
{
if (lean_obj_tag(v_a_1278_) == 0)
{
return v_a_1278_;
}
else
{
lean_object* v_head_1280_; lean_object* v_tail_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1303_; 
v_head_1280_ = lean_ctor_get(v_a_1278_, 0);
v_tail_1281_ = lean_ctor_get(v_a_1278_, 1);
v_isSharedCheck_1303_ = !lean_is_exclusive(v_a_1278_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1283_ = v_a_1278_;
v_isShared_1284_ = v_isSharedCheck_1303_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_tail_1281_);
lean_inc(v_head_1280_);
lean_dec(v_a_1278_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1303_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
uint32_t v___y_1286_; uint8_t v___y_1287_; uint32_t v___x_1293_; uint32_t v___y_1295_; uint32_t v___x_1299_; uint8_t v___x_1300_; 
v___x_1293_ = 58;
v___x_1299_ = lean_unbox_uint32(v_head_1280_);
v___x_1300_ = lean_uint32_dec_eq(v___x_1299_, v___x_1293_);
if (v___x_1300_ == 0)
{
uint32_t v___x_1301_; 
v___x_1301_ = lean_unbox_uint32(v_head_1280_);
v___y_1295_ = v___x_1301_;
goto v___jp_1294_;
}
else
{
if (v_a_1279_ == 0)
{
uint32_t v___x_1302_; 
v___x_1302_ = 45;
v___y_1295_ = v___x_1302_;
goto v___jp_1294_;
}
else
{
v___y_1295_ = v___x_1293_;
goto v___jp_1294_;
}
}
v___jp_1285_:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1291_; 
v___x_1288_ = lp_lean_x2dftml_LeanFtml_refMergeColons_go(v_tail_1281_, v___y_1287_);
v___x_1289_ = lean_box_uint32(v___y_1286_);
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 1, v___x_1288_);
lean_ctor_set(v___x_1283_, 0, v___x_1289_);
v___x_1291_ = v___x_1283_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1289_);
lean_ctor_set(v_reuseFailAlloc_1292_, 1, v___x_1288_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
v___jp_1294_:
{
if (v_a_1279_ == 0)
{
lean_dec(v_head_1280_);
v___y_1286_ = v___y_1295_;
v___y_1287_ = v_a_1279_;
goto v___jp_1285_;
}
else
{
uint32_t v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = lean_unbox_uint32(v_head_1280_);
lean_dec(v_head_1280_);
v___x_1297_ = lean_uint32_dec_eq(v___x_1296_, v___x_1293_);
if (v___x_1297_ == 0)
{
v___y_1286_ = v___y_1295_;
v___y_1287_ = v_a_1279_;
goto v___jp_1285_;
}
else
{
uint8_t v___x_1298_; 
v___x_1298_ = 0;
v___y_1286_ = v___y_1295_;
v___y_1287_ = v___x_1298_;
goto v___jp_1285_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refMergeColons_go___boxed(lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
uint8_t v_a_139__boxed_1306_; lean_object* v_res_1307_; 
v_a_139__boxed_1306_ = lean_unbox(v_a_1305_);
v_res_1307_ = lp_lean_x2dftml_LeanFtml_refMergeColons_go(v_a_1304_, v_a_139__boxed_1306_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refMergeColons(lean_object* v_l_1308_){
_start:
{
lean_object* v___x_1309_; uint8_t v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1309_ = l_List_reverse___redArg(v_l_1308_);
v___x_1310_ = 1;
v___x_1311_ = lp_lean_x2dftml_LeanFtml_refMergeColons_go(v___x_1309_, v___x_1310_);
v___x_1312_ = l_List_reverse___redArg(v___x_1311_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refReplaceUnderscores_go(lean_object* v_a_1313_, uint8_t v_a_1314_, uint8_t v_a_1315_){
_start:
{
if (lean_obj_tag(v_a_1313_) == 0)
{
return v_a_1313_;
}
else
{
lean_object* v_head_1316_; lean_object* v_tail_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1339_; 
v_head_1316_ = lean_ctor_get(v_a_1313_, 0);
v_tail_1317_ = lean_ctor_get(v_a_1313_, 1);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_a_1313_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1319_ = v_a_1313_;
v_isShared_1320_ = v_isSharedCheck_1339_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_tail_1317_);
lean_inc(v_head_1316_);
lean_dec(v_a_1313_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1339_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
uint32_t v___y_1322_; uint32_t v___x_1332_; uint32_t v___x_1333_; uint8_t v___x_1334_; 
v___x_1332_ = 95;
v___x_1333_ = lean_unbox_uint32(v_head_1316_);
v___x_1334_ = lean_uint32_dec_eq(v___x_1333_, v___x_1332_);
if (v___x_1334_ == 0)
{
uint32_t v___x_1335_; 
v___x_1335_ = lean_unbox_uint32(v_head_1316_);
v___y_1322_ = v___x_1335_;
goto v___jp_1321_;
}
else
{
if (v_a_1315_ == 0)
{
if (v_a_1314_ == 0)
{
uint32_t v___x_1336_; 
v___x_1336_ = 45;
v___y_1322_ = v___x_1336_;
goto v___jp_1321_;
}
else
{
uint32_t v___x_1337_; 
v___x_1337_ = lean_unbox_uint32(v_head_1316_);
v___y_1322_ = v___x_1337_;
goto v___jp_1321_;
}
}
else
{
uint32_t v___x_1338_; 
v___x_1338_ = lean_unbox_uint32(v_head_1316_);
v___y_1322_ = v___x_1338_;
goto v___jp_1321_;
}
}
v___jp_1321_:
{
uint32_t v___x_1323_; uint32_t v___x_1324_; uint8_t v___x_1325_; uint8_t v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1330_; 
v___x_1323_ = 58;
v___x_1324_ = lean_unbox_uint32(v_head_1316_);
lean_dec(v_head_1316_);
v___x_1325_ = lean_uint32_dec_eq(v___x_1324_, v___x_1323_);
v___x_1326_ = 0;
v___x_1327_ = lp_lean_x2dftml_LeanFtml_refReplaceUnderscores_go(v_tail_1317_, v___x_1325_, v___x_1326_);
v___x_1328_ = lean_box_uint32(v___y_1322_);
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 1, v___x_1327_);
lean_ctor_set(v___x_1319_, 0, v___x_1328_);
v___x_1330_ = v___x_1319_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1328_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v___x_1327_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refReplaceUnderscores_go___boxed(lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_){
_start:
{
uint8_t v_a_181__boxed_1343_; uint8_t v_a_182__boxed_1344_; lean_object* v_res_1345_; 
v_a_181__boxed_1343_ = lean_unbox(v_a_1341_);
v_a_182__boxed_1344_ = lean_unbox(v_a_1342_);
v_res_1345_ = lp_lean_x2dftml_LeanFtml_refReplaceUnderscores_go(v_a_1340_, v_a_181__boxed_1343_, v_a_182__boxed_1344_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refReplaceUnderscores(lean_object* v_l_1346_){
_start:
{
uint8_t v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; 
v___x_1347_ = 0;
v___x_1348_ = 1;
v___x_1349_ = lp_lean_x2dftml_LeanFtml_refReplaceUnderscores_go(v_l_1346_, v___x_1347_, v___x_1348_);
return v___x_1349_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCollapseRun_go(uint32_t v_ch_1350_, lean_object* v_a_1351_, uint8_t v_a_1352_){
_start:
{
if (lean_obj_tag(v_a_1351_) == 0)
{
return v_a_1351_;
}
else
{
lean_object* v_head_1353_; lean_object* v_tail_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1366_; 
v_head_1353_ = lean_ctor_get(v_a_1351_, 0);
v_tail_1354_ = lean_ctor_get(v_a_1351_, 1);
v_isSharedCheck_1366_ = !lean_is_exclusive(v_a_1351_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1356_ = v_a_1351_;
v_isShared_1357_ = v_isSharedCheck_1366_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_tail_1354_);
lean_inc(v_head_1353_);
lean_dec(v_a_1351_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1366_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
uint32_t v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = lean_unbox_uint32(v_head_1353_);
v___x_1359_ = lean_uint32_dec_eq(v___x_1358_, v_ch_1350_);
if (v___x_1359_ == 0)
{
goto v___jp_1360_;
}
else
{
if (v_a_1352_ == 0)
{
goto v___jp_1360_;
}
else
{
lean_del_object(v___x_1356_);
lean_dec(v_head_1353_);
v_a_1351_ = v_tail_1354_;
v_a_1352_ = v___x_1359_;
goto _start;
}
}
v___jp_1360_:
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1361_ = lp_lean_x2dftml_LeanFtml_refCollapseRun_go(v_ch_1350_, v_tail_1354_, v___x_1359_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 1, v___x_1361_);
v___x_1363_ = v___x_1356_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_head_1353_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCollapseRun_go___boxed(lean_object* v_ch_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_){
_start:
{
uint32_t v_ch_boxed_1370_; uint8_t v_a_90__boxed_1371_; lean_object* v_res_1372_; 
v_ch_boxed_1370_ = lean_unbox_uint32(v_ch_1367_);
lean_dec(v_ch_1367_);
v_a_90__boxed_1371_ = lean_unbox(v_a_1369_);
v_res_1372_ = lp_lean_x2dftml_LeanFtml_refCollapseRun_go(v_ch_boxed_1370_, v_a_1368_, v_a_90__boxed_1371_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCollapseRun(lean_object* v_l_1373_, uint32_t v_ch_1374_){
_start:
{
uint8_t v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = 0;
v___x_1376_ = lp_lean_x2dftml_LeanFtml_refCollapseRun_go(v_ch_1374_, v_l_1373_, v___x_1375_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refCollapseRun___boxed(lean_object* v_l_1377_, lean_object* v_ch_1378_){
_start:
{
uint32_t v_ch_boxed_1379_; lean_object* v_res_1380_; 
v_ch_boxed_1379_ = lean_unbox_uint32(v_ch_1378_);
lean_dec(v_ch_1378_);
v_res_1380_ = lp_lean_x2dftml_LeanFtml_refCollapseRun(v_l_1377_, v_ch_boxed_1379_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairPass(uint32_t v_a_1381_, uint32_t v_b_1382_, uint32_t v_rep_1383_, lean_object* v_x_1384_){
_start:
{
if (lean_obj_tag(v_x_1384_) == 0)
{
return v_x_1384_;
}
else
{
lean_object* v_head_1385_; lean_object* v_tail_1386_; 
v_head_1385_ = lean_ctor_get(v_x_1384_, 0);
v_tail_1386_ = lean_ctor_get(v_x_1384_, 1);
lean_inc(v_tail_1386_);
if (lean_obj_tag(v_tail_1386_) == 0)
{
return v_x_1384_;
}
else
{
lean_object* v_head_1390_; lean_object* v_tail_1391_; uint32_t v___x_1392_; uint8_t v___x_1393_; 
lean_inc(v_head_1385_);
lean_dec_ref_known(v_x_1384_, 2);
v_head_1390_ = lean_ctor_get(v_tail_1386_, 0);
v_tail_1391_ = lean_ctor_get(v_tail_1386_, 1);
v___x_1392_ = lean_unbox_uint32(v_head_1385_);
v___x_1393_ = lean_uint32_dec_eq(v___x_1392_, v_a_1381_);
if (v___x_1393_ == 0)
{
goto v___jp_1387_;
}
else
{
uint32_t v___x_1394_; uint8_t v___x_1395_; 
v___x_1394_ = lean_unbox_uint32(v_head_1390_);
v___x_1395_ = lean_uint32_dec_eq(v___x_1394_, v_b_1382_);
if (v___x_1395_ == 0)
{
goto v___jp_1387_;
}
else
{
lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1404_; 
lean_inc(v_tail_1391_);
lean_dec(v_head_1385_);
v_isSharedCheck_1404_ = !lean_is_exclusive(v_tail_1386_);
if (v_isSharedCheck_1404_ == 0)
{
lean_object* v_unused_1405_; lean_object* v_unused_1406_; 
v_unused_1405_ = lean_ctor_get(v_tail_1386_, 1);
lean_dec(v_unused_1405_);
v_unused_1406_ = lean_ctor_get(v_tail_1386_, 0);
lean_dec(v_unused_1406_);
v___x_1397_ = v_tail_1386_;
v_isShared_1398_ = v_isSharedCheck_1404_;
goto v_resetjp_1396_;
}
else
{
lean_dec(v_tail_1386_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1404_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1402_; 
v___x_1399_ = lp_lean_x2dftml_LeanFtml_replacePairPass(v_a_1381_, v_b_1382_, v_rep_1383_, v_tail_1391_);
v___x_1400_ = lean_box_uint32(v_rep_1383_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 1, v___x_1399_);
lean_ctor_set(v___x_1397_, 0, v___x_1400_);
v___x_1402_ = v___x_1397_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1400_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v___x_1399_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
}
v___jp_1387_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lp_lean_x2dftml_LeanFtml_replacePairPass(v_a_1381_, v_b_1382_, v_rep_1383_, v_tail_1386_);
v___x_1389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1389_, 0, v_head_1385_);
lean_ctor_set(v___x_1389_, 1, v___x_1388_);
return v___x_1389_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairPass___boxed(lean_object* v_a_1407_, lean_object* v_b_1408_, lean_object* v_rep_1409_, lean_object* v_x_1410_){
_start:
{
uint32_t v_a_boxed_1411_; uint32_t v_b_boxed_1412_; uint32_t v_rep_boxed_1413_; lean_object* v_res_1414_; 
v_a_boxed_1411_ = lean_unbox_uint32(v_a_1407_);
lean_dec(v_a_1407_);
v_b_boxed_1412_ = lean_unbox_uint32(v_b_1408_);
lean_dec(v_b_1408_);
v_rep_boxed_1413_ = lean_unbox_uint32(v_rep_1409_);
lean_dec(v_rep_1409_);
v_res_1414_ = lp_lean_x2dftml_LeanFtml_replacePairPass(v_a_boxed_1411_, v_b_boxed_1412_, v_rep_boxed_1413_, v_x_1410_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairsFix_go(uint32_t v_a_1415_, uint32_t v_b_1416_, uint32_t v_rep_1417_, lean_object* v_cur_1418_, lean_object* v_a_1419_){
_start:
{
lean_object* v_zero_1420_; uint8_t v_isZero_1421_; 
v_zero_1420_ = lean_unsigned_to_nat(0u);
v_isZero_1421_ = lean_nat_dec_eq(v_a_1419_, v_zero_1420_);
if (v_isZero_1421_ == 1)
{
lean_dec(v_a_1419_);
return v_cur_1418_;
}
else
{
lean_object* v___x_1422_; lean_object* v_next_1423_; uint8_t v___x_1424_; 
lean_inc(v_cur_1418_);
v___x_1422_ = lp_lean_x2dftml_LeanFtml_replacePairPass(v_a_1415_, v_b_1416_, v_rep_1417_, v_cur_1418_);
v_next_1423_ = lp_lean_x2dftml_LeanFtml_replacePairPass(v_b_1416_, v_a_1415_, v_rep_1417_, v___x_1422_);
v___x_1424_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_next_1423_, v_cur_1418_);
if (v___x_1424_ == 0)
{
lean_object* v_one_1425_; lean_object* v_n_1426_; 
lean_dec(v_cur_1418_);
v_one_1425_ = lean_unsigned_to_nat(1u);
v_n_1426_ = lean_nat_sub(v_a_1419_, v_one_1425_);
lean_dec(v_a_1419_);
v_cur_1418_ = v_next_1423_;
v_a_1419_ = v_n_1426_;
goto _start;
}
else
{
lean_dec(v_next_1423_);
lean_dec(v_a_1419_);
return v_cur_1418_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairsFix_go___boxed(lean_object* v_a_1428_, lean_object* v_b_1429_, lean_object* v_rep_1430_, lean_object* v_cur_1431_, lean_object* v_a_1432_){
_start:
{
uint32_t v_a_boxed_1433_; uint32_t v_b_boxed_1434_; uint32_t v_rep_boxed_1435_; lean_object* v_res_1436_; 
v_a_boxed_1433_ = lean_unbox_uint32(v_a_1428_);
lean_dec(v_a_1428_);
v_b_boxed_1434_ = lean_unbox_uint32(v_b_1429_);
lean_dec(v_b_1429_);
v_rep_boxed_1435_ = lean_unbox_uint32(v_rep_1430_);
lean_dec(v_rep_1430_);
v_res_1436_ = lp_lean_x2dftml_LeanFtml_replacePairsFix_go(v_a_boxed_1433_, v_b_boxed_1434_, v_rep_boxed_1435_, v_cur_1431_, v_a_1432_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairsFix(uint32_t v_a_1437_, uint32_t v_b_1438_, uint32_t v_rep_1439_, lean_object* v_l_1440_){
_start:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1441_ = l_List_lengthTR___redArg(v_l_1440_);
v___x_1442_ = lean_unsigned_to_nat(1u);
v___x_1443_ = lean_nat_add(v___x_1441_, v___x_1442_);
lean_dec(v___x_1441_);
v___x_1444_ = lp_lean_x2dftml_LeanFtml_replacePairsFix_go(v_a_1437_, v_b_1438_, v_rep_1439_, v_l_1440_, v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replacePairsFix___boxed(lean_object* v_a_1445_, lean_object* v_b_1446_, lean_object* v_rep_1447_, lean_object* v_l_1448_){
_start:
{
uint32_t v_a_boxed_1449_; uint32_t v_b_boxed_1450_; uint32_t v_rep_boxed_1451_; lean_object* v_res_1452_; 
v_a_boxed_1449_ = lean_unbox_uint32(v_a_1445_);
lean_dec(v_a_1445_);
v_b_boxed_1450_ = lean_unbox_uint32(v_b_1446_);
lean_dec(v_b_1446_);
v_rep_boxed_1451_ = lean_unbox_uint32(v_rep_1447_);
lean_dec(v_rep_1447_);
v_res_1452_ = lp_lean_x2dftml_LeanFtml_replacePairsFix(v_a_boxed_1449_, v_b_boxed_1450_, v_rep_boxed_1451_, v_l_1448_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__1(lean_object* v_x_1453_){
_start:
{
if (lean_obj_tag(v_x_1453_) == 0)
{
return v_x_1453_;
}
else
{
lean_object* v_head_1454_; lean_object* v_tail_1455_; uint32_t v___x_1456_; uint32_t v___x_1457_; uint8_t v___x_1458_; 
v_head_1454_ = lean_ctor_get(v_x_1453_, 0);
v_tail_1455_ = lean_ctor_get(v_x_1453_, 1);
v___x_1456_ = 45;
v___x_1457_ = lean_unbox_uint32(v_head_1454_);
v___x_1458_ = lean_uint32_dec_eq(v___x_1457_, v___x_1456_);
if (v___x_1458_ == 0)
{
lean_inc_ref(v_x_1453_);
return v_x_1453_;
}
else
{
v_x_1453_ = v_tail_1455_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__1___boxed(lean_object* v_x_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__1(v_x_1460_);
lean_dec(v_x_1460_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_refNormalize_spec__0(lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
if (lean_obj_tag(v_a_1462_) == 0)
{
lean_object* v___x_1464_; 
v___x_1464_ = l_List_reverse___redArg(v_a_1463_);
return v___x_1464_;
}
else
{
lean_object* v_head_1465_; lean_object* v_tail_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1481_; 
v_head_1465_ = lean_ctor_get(v_a_1462_, 0);
v_tail_1466_ = lean_ctor_get(v_a_1462_, 1);
v_isSharedCheck_1481_ = !lean_is_exclusive(v_a_1462_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1468_ = v_a_1462_;
v_isShared_1469_ = v_isSharedCheck_1481_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_tail_1466_);
lean_inc(v_head_1465_);
lean_dec(v_a_1462_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1481_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
uint32_t v___y_1471_; uint32_t v___x_1477_; uint8_t v___x_1478_; 
v___x_1477_ = lean_unbox_uint32(v_head_1465_);
v___x_1478_ = lp_lean_x2dftml_LeanFtml_isIncNormKeep(v___x_1477_);
if (v___x_1478_ == 0)
{
uint32_t v___x_1479_; 
lean_dec(v_head_1465_);
v___x_1479_ = 45;
v___y_1471_ = v___x_1479_;
goto v___jp_1470_;
}
else
{
uint32_t v___x_1480_; 
v___x_1480_ = lean_unbox_uint32(v_head_1465_);
lean_dec(v_head_1465_);
v___y_1471_ = v___x_1480_;
goto v___jp_1470_;
}
v___jp_1470_:
{
lean_object* v___x_1472_; lean_object* v___x_1474_; 
v___x_1472_ = lean_box_uint32(v___y_1471_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 1, v_a_1463_);
lean_ctor_set(v___x_1468_, 0, v___x_1472_);
v___x_1474_ = v___x_1468_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v___x_1472_);
lean_ctor_set(v_reuseFailAlloc_1476_, 1, v_a_1463_);
v___x_1474_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
v_a_1462_ = v_tail_1466_;
v_a_1463_ = v___x_1474_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__2(lean_object* v_x_1482_){
_start:
{
if (lean_obj_tag(v_x_1482_) == 0)
{
return v_x_1482_;
}
else
{
lean_object* v_head_1483_; lean_object* v_tail_1484_; uint32_t v___x_1485_; uint32_t v___x_1486_; uint8_t v___x_1487_; 
v_head_1483_ = lean_ctor_get(v_x_1482_, 0);
v_tail_1484_ = lean_ctor_get(v_x_1482_, 1);
v___x_1485_ = 58;
v___x_1486_ = lean_unbox_uint32(v_head_1483_);
v___x_1487_ = lean_uint32_dec_eq(v___x_1486_, v___x_1485_);
if (v___x_1487_ == 0)
{
lean_inc_ref(v_x_1482_);
return v_x_1482_;
}
else
{
v_x_1482_ = v_tail_1484_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__2___boxed(lean_object* v_x_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__2(v_x_1489_);
lean_dec(v_x_1489_);
return v_res_1490_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refNormalize___closed__1(void){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refNormalize___closed__0));
v___x_1493_ = l_String_toListImpl(v___x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refNormalize(lean_object* v_input_1494_){
_start:
{
lean_object* v___y_1496_; lean_object* v_s0_1523_; 
v_s0_1523_ = lp_lean_x2dftml_LeanFtml_trimChars(v_input_1494_);
if (lean_obj_tag(v_s0_1523_) == 1)
{
lean_object* v_head_1524_; lean_object* v_tail_1525_; uint32_t v___x_1526_; uint32_t v___x_1527_; uint8_t v___x_1528_; 
v_head_1524_ = lean_ctor_get(v_s0_1523_, 0);
v_tail_1525_ = lean_ctor_get(v_s0_1523_, 1);
v___x_1526_ = 47;
v___x_1527_ = lean_unbox_uint32(v_head_1524_);
v___x_1528_ = lean_uint32_dec_eq(v___x_1527_, v___x_1526_);
if (v___x_1528_ == 0)
{
v___y_1496_ = v_s0_1523_;
goto v___jp_1495_;
}
else
{
lean_inc(v_tail_1525_);
lean_dec_ref_known(v_s0_1523_, 2);
v___y_1496_ = v_tail_1525_;
goto v___jp_1495_;
}
}
else
{
v___y_1496_ = v_s0_1523_;
goto v___jp_1495_;
}
v___jp_1495_:
{
lean_object* v___x_1497_; lean_object* v_s2_1498_; lean_object* v_s3_1499_; lean_object* v_s4_1500_; lean_object* v_s5_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v_s6_1505_; uint32_t v___x_1506_; lean_object* v_s7_1507_; uint32_t v___x_1508_; lean_object* v_s8_1509_; lean_object* v_s9_1510_; uint32_t v___x_1511_; lean_object* v_s10_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v_s11_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; uint8_t v___x_1521_; 
v___x_1497_ = lean_box(0);
v_s2_1498_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_refCanonicalSite_spec__0(v___y_1496_, v___x_1497_);
v_s3_1499_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_refNormalize_spec__0(v_s2_1498_, v___x_1497_);
v_s4_1500_ = lp_lean_x2dftml_LeanFtml_refMergeColons(v_s3_1499_);
v_s5_1501_ = lp_lean_x2dftml_LeanFtml_refReplaceUnderscores(v_s4_1500_);
v___x_1502_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__1(v_s5_1501_);
lean_dec(v_s5_1501_);
v___x_1503_ = l_List_reverse___redArg(v___x_1502_);
v___x_1504_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__1(v___x_1503_);
lean_dec(v___x_1503_);
v_s6_1505_ = l_List_reverse___redArg(v___x_1504_);
v___x_1506_ = 45;
v_s7_1507_ = lp_lean_x2dftml_LeanFtml_refCollapseRun(v_s6_1505_, v___x_1506_);
v___x_1508_ = 58;
v_s8_1509_ = lp_lean_x2dftml_LeanFtml_refCollapseRun(v_s7_1507_, v___x_1508_);
v_s9_1510_ = lp_lean_x2dftml_LeanFtml_replacePairsFix(v___x_1508_, v___x_1506_, v___x_1508_, v_s8_1509_);
v___x_1511_ = 95;
v_s10_1512_ = lp_lean_x2dftml_LeanFtml_replacePairsFix(v___x_1511_, v___x_1506_, v___x_1511_, v_s9_1510_);
v___x_1513_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__2(v_s10_1512_);
lean_dec(v_s10_1512_);
v___x_1514_ = l_List_reverse___redArg(v___x_1513_);
v___x_1515_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_refNormalize_spec__2(v___x_1514_);
lean_dec(v___x_1514_);
v_s11_1516_ = l_List_reverse___redArg(v___x_1515_);
v___x_1517_ = lean_unsigned_to_nat(9u);
v___x_1518_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0));
lean_inc(v_s11_1516_);
v___x_1519_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s11_1516_, v_s11_1516_, v___x_1517_, v___x_1518_);
v___x_1520_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refNormalize___closed__1, &lp_lean_x2dftml_LeanFtml_refNormalize___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_refNormalize___closed__1);
v___x_1521_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___x_1519_, v___x_1520_);
lean_dec(v___x_1519_);
if (v___x_1521_ == 0)
{
return v_s11_1516_;
}
else
{
lean_object* v___x_1522_; 
v___x_1522_ = l_List_drop___redArg(v___x_1517_, v_s11_1516_);
lean_dec(v_s11_1516_);
return v___x_1522_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refNormalize___boxed(lean_object* v_input_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = lp_lean_x2dftml_LeanFtml_refNormalize(v_input_1529_);
lean_dec(v_input_1529_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitFirstColon(lean_object* v_x_1531_){
_start:
{
if (lean_obj_tag(v_x_1531_) == 0)
{
lean_object* v___x_1532_; 
v___x_1532_ = lean_box(0);
return v___x_1532_;
}
else
{
lean_object* v_head_1533_; lean_object* v_tail_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1565_; 
v_head_1533_ = lean_ctor_get(v_x_1531_, 0);
v_tail_1534_ = lean_ctor_get(v_x_1531_, 1);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_x_1531_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1536_ = v_x_1531_;
v_isShared_1537_ = v_isSharedCheck_1565_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_tail_1534_);
lean_inc(v_head_1533_);
lean_dec(v_x_1531_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1565_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
uint32_t v___x_1538_; uint32_t v___x_1539_; uint8_t v___x_1540_; 
v___x_1538_ = 58;
v___x_1539_ = lean_unbox_uint32(v_head_1533_);
v___x_1540_ = lean_uint32_dec_eq(v___x_1539_, v___x_1538_);
if (v___x_1540_ == 0)
{
lean_object* v___x_1541_; 
v___x_1541_ = lp_lean_x2dftml_LeanFtml_splitFirstColon(v_tail_1534_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_del_object(v___x_1536_);
lean_dec(v_head_1533_);
return v___x_1541_;
}
else
{
lean_object* v_val_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1561_; 
v_val_1542_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1544_ = v___x_1541_;
v_isShared_1545_ = v_isSharedCheck_1561_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_val_1542_);
lean_dec(v___x_1541_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1561_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v_fst_1546_; lean_object* v_snd_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1560_; 
v_fst_1546_ = lean_ctor_get(v_val_1542_, 0);
v_snd_1547_ = lean_ctor_get(v_val_1542_, 1);
v_isSharedCheck_1560_ = !lean_is_exclusive(v_val_1542_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1549_ = v_val_1542_;
v_isShared_1550_ = v_isSharedCheck_1560_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_snd_1547_);
lean_inc(v_fst_1546_);
lean_dec(v_val_1542_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1560_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 1, v_fst_1546_);
v___x_1552_ = v___x_1536_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_head_1533_);
lean_ctor_set(v_reuseFailAlloc_1559_, 1, v_fst_1546_);
v___x_1552_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1554_; 
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1552_);
v___x_1554_ = v___x_1549_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v___x_1552_);
lean_ctor_set(v_reuseFailAlloc_1558_, 1, v_snd_1547_);
v___x_1554_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
lean_object* v___x_1556_; 
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 0, v___x_1554_);
v___x_1556_ = v___x_1544_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1554_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
lean_del_object(v___x_1536_);
lean_dec(v_head_1533_);
v___x_1562_ = lean_box(0);
v___x_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1562_);
lean_ctor_set(v___x_1563_, 1, v_tail_1534_);
v___x_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
return v___x_1564_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isIncHostC(uint32_t v_c_1566_){
_start:
{
uint32_t v___x_1582_; uint8_t v___x_1583_; 
v___x_1582_ = 97;
v___x_1583_ = lean_uint32_dec_le(v___x_1582_, v_c_1566_);
if (v___x_1583_ == 0)
{
goto v___jp_1577_;
}
else
{
uint32_t v___x_1584_; uint8_t v___x_1585_; 
v___x_1584_ = 122;
v___x_1585_ = lean_uint32_dec_le(v_c_1566_, v___x_1584_);
if (v___x_1585_ == 0)
{
goto v___jp_1577_;
}
else
{
return v___x_1585_;
}
}
v___jp_1567_:
{
uint32_t v___x_1568_; uint8_t v___x_1569_; 
v___x_1568_ = 46;
v___x_1569_ = lean_uint32_dec_eq(v_c_1566_, v___x_1568_);
if (v___x_1569_ == 0)
{
uint32_t v___x_1570_; uint8_t v___x_1571_; 
v___x_1570_ = 45;
v___x_1571_ = lean_uint32_dec_eq(v_c_1566_, v___x_1570_);
return v___x_1571_;
}
else
{
return v___x_1569_;
}
}
v___jp_1572_:
{
uint32_t v___x_1573_; uint8_t v___x_1574_; 
v___x_1573_ = 48;
v___x_1574_ = lean_uint32_dec_le(v___x_1573_, v_c_1566_);
if (v___x_1574_ == 0)
{
goto v___jp_1567_;
}
else
{
uint32_t v___x_1575_; uint8_t v___x_1576_; 
v___x_1575_ = 57;
v___x_1576_ = lean_uint32_dec_le(v_c_1566_, v___x_1575_);
if (v___x_1576_ == 0)
{
goto v___jp_1567_;
}
else
{
return v___x_1576_;
}
}
}
v___jp_1577_:
{
uint32_t v___x_1578_; uint8_t v___x_1579_; 
v___x_1578_ = 65;
v___x_1579_ = lean_uint32_dec_le(v___x_1578_, v_c_1566_);
if (v___x_1579_ == 0)
{
goto v___jp_1572_;
}
else
{
uint32_t v___x_1580_; uint8_t v___x_1581_; 
v___x_1580_ = 90;
v___x_1581_ = lean_uint32_dec_le(v_c_1566_, v___x_1580_);
if (v___x_1581_ == 0)
{
goto v___jp_1572_;
}
else
{
return v___x_1581_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isIncHostC___boxed(lean_object* v_c_1586_){
_start:
{
uint32_t v_c_boxed_1587_; uint8_t v_res_1588_; lean_object* v_r_1589_; 
v_c_boxed_1587_ = lean_unbox_uint32(v_c_1586_);
lean_dec(v_c_1586_);
v_res_1588_ = lp_lean_x2dftml_LeanFtml_isIncHostC(v_c_boxed_1587_);
v_r_1589_ = lean_box(v_res_1588_);
return v_r_1589_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__1(lean_object* v_x_1590_){
_start:
{
if (lean_obj_tag(v_x_1590_) == 0)
{
uint8_t v___x_1591_; 
v___x_1591_ = 1;
return v___x_1591_;
}
else
{
lean_object* v_head_1592_; lean_object* v_tail_1593_; uint32_t v___x_1594_; uint8_t v___x_1595_; 
v_head_1592_ = lean_ctor_get(v_x_1590_, 0);
v_tail_1593_ = lean_ctor_get(v_x_1590_, 1);
v___x_1594_ = lean_unbox_uint32(v_head_1592_);
v___x_1595_ = lp_lean_x2dftml_LeanFtml_isIncHostC(v___x_1594_);
if (v___x_1595_ == 0)
{
return v___x_1595_;
}
else
{
v_x_1590_ = v_tail_1593_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__1___boxed(lean_object* v_x_1597_){
_start:
{
uint8_t v_res_1598_; lean_object* v_r_1599_; 
v_res_1598_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__1(v_x_1597_);
lean_dec(v_x_1597_);
v_r_1599_ = lean_box(v_res_1598_);
return v_r_1599_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0(lean_object* v_x_1600_){
_start:
{
if (lean_obj_tag(v_x_1600_) == 0)
{
uint8_t v___x_1601_; 
v___x_1601_ = 1;
return v___x_1601_;
}
else
{
lean_object* v_head_1602_; lean_object* v_tail_1603_; uint32_t v___x_1604_; uint8_t v___x_1605_; 
v_head_1602_ = lean_ctor_get(v_x_1600_, 0);
v_tail_1603_ = lean_ctor_get(v_x_1600_, 1);
v___x_1604_ = lean_unbox_uint32(v_head_1602_);
v___x_1605_ = lp_lean_x2dftml_LeanFtml_isIncTargetC(v___x_1604_);
if (v___x_1605_ == 0)
{
return v___x_1605_;
}
else
{
v_x_1600_ = v_tail_1603_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0___boxed(lean_object* v_x_1607_){
_start:
{
uint8_t v_res_1608_; lean_object* v_r_1609_; 
v_res_1608_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0(v_x_1607_);
lean_dec(v_x_1607_);
v_r_1609_ = lean_box(v_res_1608_);
return v_r_1609_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1(void){
_start:
{
uint32_t v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = 58;
v___x_1611_ = lean_box_uint32(v___x_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refResolveRef_go(lean_object* v_a_1612_){
_start:
{
if (lean_obj_tag(v_a_1612_) == 0)
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_box(0);
return v___x_1613_;
}
else
{
lean_object* v_head_1614_; lean_object* v_tail_1615_; uint32_t v___x_1625_; uint32_t v___x_1626_; uint8_t v___x_1627_; 
v_head_1614_ = lean_ctor_get(v_a_1612_, 0);
v_tail_1615_ = lean_ctor_get(v_a_1612_, 1);
v___x_1625_ = 58;
v___x_1626_ = lean_unbox_uint32(v_head_1614_);
v___x_1627_ = lean_uint32_dec_eq(v___x_1626_, v___x_1625_);
if (v___x_1627_ == 0)
{
uint8_t v___x_1628_; 
v___x_1628_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0(v_a_1612_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; 
lean_dec_ref_known(v_a_1612_, 2);
v___x_1629_ = lean_box(0);
return v___x_1629_;
}
else
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1630_ = lean_box(0);
v___x_1631_ = lp_lean_x2dftml_LeanFtml_refNormalize(v_a_1612_);
lean_dec_ref_known(v_a_1612_, 2);
v___x_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1630_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
v___x_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
return v___x_1633_;
}
}
else
{
lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1672_; 
lean_inc(v_tail_1615_);
v_isSharedCheck_1672_ = !lean_is_exclusive(v_a_1612_);
if (v_isSharedCheck_1672_ == 0)
{
lean_object* v_unused_1673_; lean_object* v_unused_1674_; 
v_unused_1673_ = lean_ctor_get(v_a_1612_, 1);
lean_dec(v_unused_1673_);
v_unused_1674_ = lean_ctor_get(v_a_1612_, 0);
lean_dec(v_unused_1674_);
v___x_1635_ = v_a_1612_;
v_isShared_1636_ = v_isSharedCheck_1672_;
goto v_resetjp_1634_;
}
else
{
lean_dec(v_a_1612_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1672_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; 
lean_inc(v_tail_1615_);
v___x_1637_ = lp_lean_x2dftml_LeanFtml_splitFirstColon(v_tail_1615_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v___x_1638_; lean_object* v___x_1640_; 
v___x_1638_ = lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1;
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 0, v___x_1638_);
v___x_1640_ = v___x_1635_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v___x_1638_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_tail_1615_);
v___x_1640_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
uint8_t v___x_1641_; 
v___x_1641_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0(v___x_1640_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; 
lean_dec_ref(v___x_1640_);
v___x_1642_ = lean_box(0);
return v___x_1642_;
}
else
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1643_ = lean_box(0);
v___x_1644_ = lp_lean_x2dftml_LeanFtml_refNormalize(v___x_1640_);
lean_dec_ref(v___x_1640_);
v___x_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1643_);
lean_ctor_set(v___x_1645_, 1, v___x_1644_);
v___x_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
return v___x_1646_;
}
}
}
else
{
lean_object* v_val_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1671_; 
lean_del_object(v___x_1635_);
v_val_1648_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1650_ = v___x_1637_;
v_isShared_1651_ = v_isSharedCheck_1671_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_val_1648_);
lean_dec(v___x_1637_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1671_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v_fst_1652_; lean_object* v_snd_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1670_; 
v_fst_1652_ = lean_ctor_get(v_val_1648_, 0);
v_snd_1653_ = lean_ctor_get(v_val_1648_, 1);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_val_1648_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1655_ = v_val_1648_;
v_isShared_1656_ = v_isSharedCheck_1670_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_snd_1653_);
lean_inc(v_fst_1652_);
lean_dec(v_val_1648_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1670_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
uint8_t v___x_1657_; 
v___x_1657_ = l_List_isEmpty___redArg(v_fst_1652_);
if (v___x_1657_ == 0)
{
uint8_t v___x_1658_; 
v___x_1658_ = l_List_isEmpty___redArg(v_snd_1653_);
if (v___x_1658_ == 0)
{
uint8_t v___x_1659_; 
v___x_1659_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0(v_snd_1653_);
if (v___x_1659_ == 0)
{
lean_del_object(v___x_1655_);
lean_dec(v_snd_1653_);
lean_dec(v_fst_1652_);
lean_del_object(v___x_1650_);
goto v___jp_1616_;
}
else
{
uint8_t v___x_1660_; 
v___x_1660_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__1(v_fst_1652_);
if (v___x_1660_ == 0)
{
lean_del_object(v___x_1655_);
lean_dec(v_snd_1653_);
lean_dec(v_fst_1652_);
lean_del_object(v___x_1650_);
goto v___jp_1616_;
}
else
{
lean_object* v___x_1661_; lean_object* v___x_1663_; 
lean_dec(v_tail_1615_);
v___x_1661_ = lp_lean_x2dftml_LeanFtml_refCanonicalSite(v_fst_1652_);
lean_dec(v_fst_1652_);
if (v_isShared_1651_ == 0)
{
lean_ctor_set(v___x_1650_, 0, v___x_1661_);
v___x_1663_ = v___x_1650_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
lean_object* v___x_1664_; lean_object* v___x_1666_; 
v___x_1664_ = lp_lean_x2dftml_LeanFtml_refNormalize(v_snd_1653_);
lean_dec(v_snd_1653_);
if (v_isShared_1656_ == 0)
{
lean_ctor_set(v___x_1655_, 1, v___x_1664_);
lean_ctor_set(v___x_1655_, 0, v___x_1663_);
v___x_1666_ = v___x_1655_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1663_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v___x_1664_);
v___x_1666_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
lean_object* v___x_1667_; 
v___x_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1666_);
return v___x_1667_;
}
}
}
}
}
else
{
lean_del_object(v___x_1655_);
lean_dec(v_snd_1653_);
lean_dec(v_fst_1652_);
lean_del_object(v___x_1650_);
goto v___jp_1616_;
}
}
else
{
lean_del_object(v___x_1655_);
lean_dec(v_snd_1653_);
lean_dec(v_fst_1652_);
lean_del_object(v___x_1650_);
goto v___jp_1616_;
}
}
}
}
}
}
v___jp_1616_:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1617_ = lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1;
v___x_1618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1617_);
lean_ctor_set(v___x_1618_, 1, v_tail_1615_);
v___x_1619_ = lp_lean_x2dftml_List_all___at___00LeanFtml_refResolveRef_go_spec__0(v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; 
lean_dec_ref_known(v___x_1618_, 2);
v___x_1620_ = lean_box(0);
return v___x_1620_;
}
else
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1621_ = lean_box(0);
v___x_1622_ = lp_lean_x2dftml_LeanFtml_refNormalize(v___x_1618_);
lean_dec_ref_known(v___x_1618_, 2);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
return v___x_1624_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refResolveRef(lean_object* v_run_1675_){
_start:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1676_ = lp_lean_x2dftml_LeanFtml_trimChars(v_run_1675_);
v___x_1677_ = lp_lean_x2dftml_LeanFtml_refResolveRef_go(v___x_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refResolveRef___boxed(lean_object* v_run_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = lp_lean_x2dftml_LeanFtml_refResolveRef(v_run_1678_);
lean_dec(v_run_1678_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSubPassGo(lean_object* v_key_1680_, lean_object* v_val_1681_, lean_object* v_x_1682_, lean_object* v_x_1683_){
_start:
{
lean_object* v_zero_1684_; uint8_t v_isZero_1685_; 
v_zero_1684_ = lean_unsigned_to_nat(0u);
v_isZero_1685_ = lean_nat_dec_eq(v_x_1682_, v_zero_1684_);
if (v_isZero_1685_ == 1)
{
lean_object* v___x_1686_; 
lean_dec(v_x_1683_);
lean_dec(v_val_1681_);
lean_dec(v_key_1680_);
v___x_1686_ = lean_box(0);
return v___x_1686_;
}
else
{
if (lean_obj_tag(v_x_1683_) == 0)
{
lean_dec(v_val_1681_);
lean_dec(v_key_1680_);
return v_x_1683_;
}
else
{
lean_object* v_head_1687_; lean_object* v_tail_1688_; lean_object* v_one_1689_; lean_object* v_n_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v_head_1687_ = lean_ctor_get(v_x_1683_, 0);
lean_inc(v_head_1687_);
v_tail_1688_ = lean_ctor_get(v_x_1683_, 1);
lean_inc(v_tail_1688_);
v_one_1689_ = lean_unsigned_to_nat(1u);
v_n_1690_ = lean_nat_sub(v_x_1682_, v_one_1689_);
lean_inc(v_key_1680_);
v___x_1691_ = lp_lean_x2dftml_LeanFtml_placeholder(v_key_1680_);
v___x_1692_ = lp_lean_x2dftml_LeanFtml_matchPat(v___x_1691_, v_x_1683_);
lean_dec(v___x_1691_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1693_ = lp_lean_x2dftml_LeanFtml_refSubPassGo(v_key_1680_, v_val_1681_, v_n_1690_, v_tail_1688_);
lean_dec(v_n_1690_);
v___x_1694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1694_, 0, v_head_1687_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
return v___x_1694_;
}
else
{
lean_object* v_val_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
lean_dec(v_tail_1688_);
lean_dec(v_head_1687_);
v_val_1695_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_val_1695_);
lean_dec_ref_known(v___x_1692_, 1);
lean_inc(v_val_1681_);
v___x_1696_ = lp_lean_x2dftml_LeanFtml_refSubPassGo(v_key_1680_, v_val_1681_, v_n_1690_, v_val_1695_);
lean_dec(v_n_1690_);
v___x_1697_ = l_List_appendTR___redArg(v_val_1681_, v___x_1696_);
return v___x_1697_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSubPassGo___boxed(lean_object* v_key_1698_, lean_object* v_val_1699_, lean_object* v_x_1700_, lean_object* v_x_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = lp_lean_x2dftml_LeanFtml_refSubPassGo(v_key_1698_, v_val_1699_, v_x_1700_, v_x_1701_);
lean_dec(v_x_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSubPass(lean_object* v_l_1703_, lean_object* v_key_1704_, lean_object* v_val_1705_){
_start:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = l_List_lengthTR___redArg(v_l_1703_);
v___x_1707_ = lp_lean_x2dftml_LeanFtml_refSubPassGo(v_key_1704_, v_val_1705_, v___x_1706_, v_l_1703_);
lean_dec(v___x_1706_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_refSubstitute_spec__0(lean_object* v_x_1708_, lean_object* v_x_1709_){
_start:
{
if (lean_obj_tag(v_x_1709_) == 0)
{
return v_x_1708_;
}
else
{
lean_object* v_head_1710_; lean_object* v_tail_1711_; lean_object* v_fst_1712_; lean_object* v_snd_1713_; lean_object* v___x_1714_; 
v_head_1710_ = lean_ctor_get(v_x_1709_, 0);
lean_inc(v_head_1710_);
v_tail_1711_ = lean_ctor_get(v_x_1709_, 1);
lean_inc(v_tail_1711_);
lean_dec_ref_known(v_x_1709_, 2);
v_fst_1712_ = lean_ctor_get(v_head_1710_, 0);
lean_inc(v_fst_1712_);
v_snd_1713_ = lean_ctor_get(v_head_1710_, 1);
lean_inc(v_snd_1713_);
lean_dec(v_head_1710_);
v___x_1714_ = lp_lean_x2dftml_LeanFtml_refSubPass(v_x_1708_, v_fst_1712_, v_snd_1713_);
v_x_1708_ = v___x_1714_;
v_x_1709_ = v_tail_1711_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refSubstitute(lean_object* v_content_1716_, lean_object* v_args_1717_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_refSubstitute_spec__0(v_content_1716_, v_args_1717_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_refSubPassGo_match__1_splitter___redArg(lean_object* v_x_1719_, lean_object* v_h__1_1720_, lean_object* v_h__2_1721_){
_start:
{
if (lean_obj_tag(v_x_1719_) == 0)
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
lean_dec(v_h__1_1720_);
v___x_1722_ = lean_box(0);
v___x_1723_ = lean_apply_1(v_h__2_1721_, v___x_1722_);
return v___x_1723_;
}
else
{
lean_object* v_val_1724_; lean_object* v___x_1725_; 
lean_dec(v_h__2_1721_);
v_val_1724_ = lean_ctor_get(v_x_1719_, 0);
lean_inc(v_val_1724_);
lean_dec_ref_known(v_x_1719_, 1);
v___x_1725_ = lean_apply_1(v_h__1_1720_, v_val_1724_);
return v___x_1725_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_refSubPassGo_match__1_splitter(lean_object* v_motive_1726_, lean_object* v_x_1727_, lean_object* v_h__1_1728_, lean_object* v_h__2_1729_){
_start:
{
if (lean_obj_tag(v_x_1727_) == 0)
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_dec(v_h__1_1728_);
v___x_1730_ = lean_box(0);
v___x_1731_ = lean_apply_1(v_h__2_1729_, v___x_1730_);
return v___x_1731_;
}
else
{
lean_object* v_val_1732_; lean_object* v___x_1733_; 
lean_dec(v_h__2_1729_);
v_val_1732_ = lean_ctor_get(v_x_1727_, 0);
lean_inc(v_val_1732_);
lean_dec_ref_known(v_x_1727_, 1);
v___x_1733_ = lean_apply_1(v_h__1_1728_, v_val_1732_);
return v___x_1733_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_addInclusionId(lean_object* v_ids_1734_, lean_object* v_pid_1735_){
_start:
{
uint8_t v___x_1736_; 
v___x_1736_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_pid_1735_, v_ids_1734_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1737_ = lean_box(0);
v___x_1738_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1738_, 0, v_pid_1735_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
v___x_1739_ = l_List_appendTR___redArg(v_ids_1734_, v___x_1738_);
return v___x_1739_;
}
else
{
lean_dec(v_pid_1735_);
return v_ids_1734_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_addInclusionMissing_spec__0(lean_object* v_a_1740_, lean_object* v_x_1741_){
_start:
{
if (lean_obj_tag(v_x_1741_) == 0)
{
uint8_t v___x_1742_; 
v___x_1742_ = 0;
return v___x_1742_;
}
else
{
lean_object* v_head_1743_; lean_object* v_tail_1744_; uint8_t v___x_1745_; 
v_head_1743_ = lean_ctor_get(v_x_1741_, 0);
v_tail_1744_ = lean_ctor_get(v_x_1741_, 1);
v___x_1745_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1740_, v_head_1743_);
if (v___x_1745_ == 0)
{
v_x_1741_ = v_tail_1744_;
goto _start;
}
else
{
return v___x_1745_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_addInclusionMissing_spec__0___boxed(lean_object* v_a_1747_, lean_object* v_x_1748_){
_start:
{
uint8_t v_res_1749_; lean_object* v_r_1750_; 
v_res_1749_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_addInclusionMissing_spec__0(v_a_1747_, v_x_1748_);
lean_dec(v_x_1748_);
lean_dec(v_a_1747_);
v_r_1750_ = lean_box(v_res_1749_);
return v_r_1750_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_addInclusionMissing(lean_object* v_names_1751_, lean_object* v_display_1752_){
_start:
{
uint8_t v___x_1753_; 
v___x_1753_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_addInclusionMissing_spec__0(v_display_1752_, v_names_1751_);
if (v___x_1753_ == 0)
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1754_ = lean_box(0);
v___x_1755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1755_, 0, v_display_1752_);
lean_ctor_set(v___x_1755_, 1, v___x_1754_);
v___x_1756_ = l_List_appendTR___redArg(v_names_1751_, v___x_1755_);
return v___x_1756_;
}
else
{
lean_dec(v_display_1752_);
return v_names_1751_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__1(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refFetchWith___closed__0));
v___x_1759_ = l_String_toListImpl(v___x_1758_);
return v___x_1759_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__3(void){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1761_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refFetchWith___closed__2));
v___x_1762_ = l_String_toListImpl(v___x_1761_);
return v___x_1762_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__5(void){
_start:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1764_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refFetchWith___closed__4));
v___x_1765_ = l_String_toListImpl(v___x_1764_);
return v___x_1765_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7(void){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1767_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refFetchWith___closed__6));
v___x_1768_ = l_String_toListImpl(v___x_1767_);
return v___x_1768_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__9(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1770_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refFetchWith___closed__8));
v___x_1771_ = l_String_toListImpl(v___x_1770_);
return v___x_1771_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__11(void){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refFetchWith___closed__10));
v___x_1774_ = l_String_toListImpl(v___x_1773_);
return v___x_1774_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__13(void){
_start:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1776_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_refFetchWith___closed__12));
v___x_1777_ = l_String_toListImpl(v___x_1776_);
return v___x_1777_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_refFetchWith___boxed__const__1(void){
_start:
{
uint32_t v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = 47;
v___x_1779_ = lean_box_uint32(v___x_1778_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith(lean_object* v_pages_1780_, lean_object* v_resolved_1781_, lean_object* v_args_1782_, lean_object* v_doc_1783_){
_start:
{
lean_object* v_fst_1784_; lean_object* v_snd_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1878_; 
v_fst_1784_ = lean_ctor_get(v_resolved_1781_, 0);
v_snd_1785_ = lean_ctor_get(v_resolved_1781_, 1);
v_isSharedCheck_1878_ = !lean_is_exclusive(v_resolved_1781_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1787_ = v_resolved_1781_;
v_isShared_1788_ = v_isSharedCheck_1878_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_snd_1785_);
lean_inc(v_fst_1784_);
lean_dec(v_resolved_1781_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1878_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___y_1790_; lean_object* v___y_1791_; lean_object* v___y_1825_; 
if (lean_obj_tag(v_fst_1784_) == 0)
{
lean_inc(v_snd_1785_);
v___y_1825_ = v_snd_1785_;
goto v___jp_1824_;
}
else
{
lean_object* v_val_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v_val_1872_ = lean_ctor_get(v_fst_1784_, 0);
v___x_1873_ = lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1;
lean_inc(v_snd_1785_);
v___x_1874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
lean_ctor_set(v___x_1874_, 1, v_snd_1785_);
lean_inc(v_val_1872_);
v___x_1875_ = l_List_appendTR___redArg(v_val_1872_, v___x_1874_);
v___x_1876_ = lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1;
v___x_1877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
lean_ctor_set(v___x_1877_, 1, v___x_1875_);
v___y_1825_ = v___x_1877_;
goto v___jp_1824_;
}
v___jp_1789_:
{
lean_object* v_page_1792_; lean_object* v_site_1793_; lean_object* v_inclusions_1794_; lean_object* v_inclusionsNotExist_1795_; lean_object* v_footnotes_1796_; lean_object* v_bibitems_1797_; lean_object* v_bibitemIds_1798_; lean_object* v_headlineId_1799_; lean_object* v_mathId_1800_; lean_object* v_equations_1801_; lean_object* v_collapsibleCount_1802_; lean_object* v_tabviewCounter_1803_; lean_object* v_scoredAnchors_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1823_; 
v_page_1792_ = lean_ctor_get(v_doc_1783_, 0);
v_site_1793_ = lean_ctor_get(v_doc_1783_, 1);
v_inclusions_1794_ = lean_ctor_get(v_doc_1783_, 2);
v_inclusionsNotExist_1795_ = lean_ctor_get(v_doc_1783_, 3);
v_footnotes_1796_ = lean_ctor_get(v_doc_1783_, 4);
v_bibitems_1797_ = lean_ctor_get(v_doc_1783_, 5);
v_bibitemIds_1798_ = lean_ctor_get(v_doc_1783_, 6);
v_headlineId_1799_ = lean_ctor_get(v_doc_1783_, 7);
v_mathId_1800_ = lean_ctor_get(v_doc_1783_, 8);
v_equations_1801_ = lean_ctor_get(v_doc_1783_, 9);
v_collapsibleCount_1802_ = lean_ctor_get(v_doc_1783_, 10);
v_tabviewCounter_1803_ = lean_ctor_get(v_doc_1783_, 11);
v_scoredAnchors_1804_ = lean_ctor_get(v_doc_1783_, 12);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_doc_1783_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1806_ = v_doc_1783_;
v_isShared_1807_ = v_isSharedCheck_1823_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_scoredAnchors_1804_);
lean_inc(v_tabviewCounter_1803_);
lean_inc(v_collapsibleCount_1802_);
lean_inc(v_equations_1801_);
lean_inc(v_mathId_1800_);
lean_inc(v_headlineId_1799_);
lean_inc(v_bibitemIds_1798_);
lean_inc(v_bibitems_1797_);
lean_inc(v_footnotes_1796_);
lean_inc(v_inclusionsNotExist_1795_);
lean_inc(v_inclusions_1794_);
lean_inc(v_site_1793_);
lean_inc(v_page_1792_);
lean_dec(v_doc_1783_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1823_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v_output_1815_; lean_object* v___x_1816_; lean_object* v_doc_x27_1818_; 
v___x_1808_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__1, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__1);
v___x_1809_ = lp_lean_x2dftml_LeanFtml_htmlSpecialChars(v_snd_1785_);
v___x_1810_ = l_List_appendTR___redArg(v___x_1808_, v___x_1809_);
v___x_1811_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__3, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__3);
v___x_1812_ = l_List_appendTR___redArg(v___x_1810_, v___x_1811_);
v___x_1813_ = l_List_appendTR___redArg(v___x_1812_, v___y_1791_);
v___x_1814_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__5, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__5);
v_output_1815_ = l_List_appendTR___redArg(v___x_1813_, v___x_1814_);
v___x_1816_ = lp_lean_x2dftml_LeanFtml_addInclusionMissing(v_inclusionsNotExist_1795_, v___y_1790_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 3, v___x_1816_);
v_doc_x27_1818_ = v___x_1806_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_page_1792_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_site_1793_);
lean_ctor_set(v_reuseFailAlloc_1822_, 2, v_inclusions_1794_);
lean_ctor_set(v_reuseFailAlloc_1822_, 3, v___x_1816_);
lean_ctor_set(v_reuseFailAlloc_1822_, 4, v_footnotes_1796_);
lean_ctor_set(v_reuseFailAlloc_1822_, 5, v_bibitems_1797_);
lean_ctor_set(v_reuseFailAlloc_1822_, 6, v_bibitemIds_1798_);
lean_ctor_set(v_reuseFailAlloc_1822_, 7, v_headlineId_1799_);
lean_ctor_set(v_reuseFailAlloc_1822_, 8, v_mathId_1800_);
lean_ctor_set(v_reuseFailAlloc_1822_, 9, v_equations_1801_);
lean_ctor_set(v_reuseFailAlloc_1822_, 10, v_collapsibleCount_1802_);
lean_ctor_set(v_reuseFailAlloc_1822_, 11, v_tabviewCounter_1803_);
lean_ctor_set(v_reuseFailAlloc_1822_, 12, v_scoredAnchors_1804_);
v_doc_x27_1818_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1820_; 
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 1, v_doc_x27_1818_);
lean_ctor_set(v___x_1787_, 0, v_output_1815_);
v___x_1820_ = v___x_1787_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_output_1815_);
lean_ctor_set(v_reuseFailAlloc_1821_, 1, v_doc_x27_1818_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
}
v___jp_1824_:
{
lean_object* v___x_1826_; 
v___x_1826_ = lp_lean_x2dftml_LeanFtml_lookupPage(v_pages_1780_, v___y_1825_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_dec(v_args_1782_);
if (lean_obj_tag(v_fst_1784_) == 0)
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1827_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7);
lean_inc(v_snd_1785_);
v___x_1828_ = l_List_appendTR___redArg(v_snd_1785_, v___x_1827_);
v___x_1829_ = lp_lean_x2dftml_LeanFtml_refFetchWith___boxed__const__1;
v___x_1830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
lean_ctor_set(v___x_1830_, 1, v___x_1828_);
v___y_1790_ = v___y_1825_;
v___y_1791_ = v___x_1830_;
goto v___jp_1789_;
}
else
{
lean_object* v_val_1831_; uint8_t v___x_1832_; 
v_val_1831_ = lean_ctor_get(v_fst_1784_, 0);
lean_inc(v_val_1831_);
lean_dec_ref_known(v_fst_1784_, 1);
v___x_1832_ = l_List_isEmpty___redArg(v_val_1831_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1833_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__9, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__9);
v___x_1834_ = l_List_appendTR___redArg(v___x_1833_, v_val_1831_);
v___x_1835_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__11, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__11);
v___x_1836_ = l_List_appendTR___redArg(v___x_1834_, v___x_1835_);
lean_inc(v_snd_1785_);
v___x_1837_ = l_List_appendTR___redArg(v___x_1836_, v_snd_1785_);
v___x_1838_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7);
v___x_1839_ = l_List_appendTR___redArg(v___x_1837_, v___x_1838_);
v___y_1790_ = v___y_1825_;
v___y_1791_ = v___x_1839_;
goto v___jp_1789_;
}
else
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
lean_dec(v_val_1831_);
v___x_1840_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__7);
lean_inc(v_snd_1785_);
v___x_1841_ = l_List_appendTR___redArg(v_snd_1785_, v___x_1840_);
v___x_1842_ = lp_lean_x2dftml_LeanFtml_refFetchWith___boxed__const__1;
v___x_1843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1842_);
lean_ctor_set(v___x_1843_, 1, v___x_1841_);
v___y_1790_ = v___y_1825_;
v___y_1791_ = v___x_1843_;
goto v___jp_1789_;
}
}
}
else
{
lean_object* v_val_1844_; lean_object* v_page_1845_; lean_object* v_site_1846_; lean_object* v_inclusions_1847_; lean_object* v_inclusionsNotExist_1848_; lean_object* v_footnotes_1849_; lean_object* v_bibitems_1850_; lean_object* v_bibitemIds_1851_; lean_object* v_headlineId_1852_; lean_object* v_mathId_1853_; lean_object* v_equations_1854_; lean_object* v_collapsibleCount_1855_; lean_object* v_tabviewCounter_1856_; lean_object* v_scoredAnchors_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1871_; 
lean_del_object(v___x_1787_);
lean_dec(v_snd_1785_);
lean_dec(v_fst_1784_);
v_val_1844_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_val_1844_);
lean_dec_ref_known(v___x_1826_, 1);
v_page_1845_ = lean_ctor_get(v_doc_1783_, 0);
v_site_1846_ = lean_ctor_get(v_doc_1783_, 1);
v_inclusions_1847_ = lean_ctor_get(v_doc_1783_, 2);
v_inclusionsNotExist_1848_ = lean_ctor_get(v_doc_1783_, 3);
v_footnotes_1849_ = lean_ctor_get(v_doc_1783_, 4);
v_bibitems_1850_ = lean_ctor_get(v_doc_1783_, 5);
v_bibitemIds_1851_ = lean_ctor_get(v_doc_1783_, 6);
v_headlineId_1852_ = lean_ctor_get(v_doc_1783_, 7);
v_mathId_1853_ = lean_ctor_get(v_doc_1783_, 8);
v_equations_1854_ = lean_ctor_get(v_doc_1783_, 9);
v_collapsibleCount_1855_ = lean_ctor_get(v_doc_1783_, 10);
v_tabviewCounter_1856_ = lean_ctor_get(v_doc_1783_, 11);
v_scoredAnchors_1857_ = lean_ctor_get(v_doc_1783_, 12);
v_isSharedCheck_1871_ = !lean_is_exclusive(v_doc_1783_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1859_ = v_doc_1783_;
v_isShared_1860_ = v_isSharedCheck_1871_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_scoredAnchors_1857_);
lean_inc(v_tabviewCounter_1856_);
lean_inc(v_collapsibleCount_1855_);
lean_inc(v_equations_1854_);
lean_inc(v_mathId_1853_);
lean_inc(v_headlineId_1852_);
lean_inc(v_bibitemIds_1851_);
lean_inc(v_bibitems_1850_);
lean_inc(v_footnotes_1849_);
lean_inc(v_inclusionsNotExist_1848_);
lean_inc(v_inclusions_1847_);
lean_inc(v_site_1846_);
lean_inc(v_page_1845_);
lean_dec(v_doc_1783_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1871_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v_pid_1861_; lean_object* v___x_1862_; lean_object* v_doc_x27_1864_; 
v_pid_1861_ = lp_lean_x2dftml_LeanFtml_refPageId(v___y_1825_);
lean_dec(v___y_1825_);
v___x_1862_ = lp_lean_x2dftml_LeanFtml_addInclusionId(v_inclusions_1847_, v_pid_1861_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 2, v___x_1862_);
v_doc_x27_1864_ = v___x_1859_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_page_1845_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_site_1846_);
lean_ctor_set(v_reuseFailAlloc_1870_, 2, v___x_1862_);
lean_ctor_set(v_reuseFailAlloc_1870_, 3, v_inclusionsNotExist_1848_);
lean_ctor_set(v_reuseFailAlloc_1870_, 4, v_footnotes_1849_);
lean_ctor_set(v_reuseFailAlloc_1870_, 5, v_bibitems_1850_);
lean_ctor_set(v_reuseFailAlloc_1870_, 6, v_bibitemIds_1851_);
lean_ctor_set(v_reuseFailAlloc_1870_, 7, v_headlineId_1852_);
lean_ctor_set(v_reuseFailAlloc_1870_, 8, v_mathId_1853_);
lean_ctor_set(v_reuseFailAlloc_1870_, 9, v_equations_1854_);
lean_ctor_set(v_reuseFailAlloc_1870_, 10, v_collapsibleCount_1855_);
lean_ctor_set(v_reuseFailAlloc_1870_, 11, v_tabviewCounter_1856_);
lean_ctor_set(v_reuseFailAlloc_1870_, 12, v_scoredAnchors_1857_);
v_doc_x27_1864_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v_substituted_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v_substituted_1865_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_refSubstitute_spec__0(v_val_1844_, v_args_1782_);
v___x_1866_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFetchWith___closed__13, &lp_lean_x2dftml_LeanFtml_refFetchWith___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_refFetchWith___closed__13);
v___x_1867_ = l_List_appendTR___redArg(v___x_1866_, v_substituted_1865_);
v___x_1868_ = l_List_appendTR___redArg(v___x_1867_, v___x_1866_);
v___x_1869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
lean_ctor_set(v___x_1869_, 1, v_doc_x27_1864_);
return v___x_1869_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFetchWith___boxed(lean_object* v_pages_1879_, lean_object* v_resolved_1880_, lean_object* v_args_1881_, lean_object* v_doc_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = lp_lean_x2dftml_LeanFtml_refFetchWith(v_pages_1879_, v_resolved_1880_, v_args_1881_, v_doc_1882_);
lean_dec(v_pages_1879_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refFetch(lean_object* v_resolved_1884_, lean_object* v_args_1885_, lean_object* v_doc_1886_){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = lp_lean_x2dftml_LeanFtml_refPageMap;
v___x_1888_ = lp_lean_x2dftml_LeanFtml_refFetchWith(v___x_1887_, v_resolved_1884_, v_args_1885_, v_doc_1886_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refNextLineStart(lean_object* v_src_1889_, lean_object* v_ls_1890_){
_start:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0, &lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0);
v___x_1892_ = lp_lean_x2dftml_LeanFtml_findSubChar(v_src_1889_, v___x_1891_, v_ls_1890_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v___x_1893_; 
v___x_1893_ = l_List_lengthTR___redArg(v_src_1889_);
return v___x_1893_;
}
else
{
lean_object* v_val_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v_val_1894_ = lean_ctor_get(v___x_1892_, 0);
lean_inc(v_val_1894_);
lean_dec_ref_known(v___x_1892_, 1);
v___x_1895_ = lean_unsigned_to_nat(1u);
v___x_1896_ = lean_nat_add(v_val_1894_, v___x_1895_);
lean_dec(v_val_1894_);
return v___x_1896_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refNextLineStart___boxed(lean_object* v_src_1897_, lean_object* v_ls_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = lp_lean_x2dftml_LeanFtml_refNextLineStart(v_src_1897_, v_ls_1898_);
lean_dec(v_src_1897_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPassWith_go(lean_object* v_pages_1900_, lean_object* v_src_1901_, lean_object* v_pos_1902_, lean_object* v_out_1903_, lean_object* v_doc_1904_, lean_object* v_a_1905_){
_start:
{
lean_object* v_zero_1910_; uint8_t v_isZero_1911_; 
v_zero_1910_ = lean_unsigned_to_nat(0u);
v_isZero_1911_ = lean_nat_dec_eq(v_a_1905_, v_zero_1910_);
if (v_isZero_1911_ == 1)
{
lean_dec(v_a_1905_);
goto v___jp_1906_;
}
else
{
lean_object* v___x_1912_; 
lean_inc(v_pos_1902_);
v___x_1912_ = lp_lean_x2dftml_LeanFtml_refFindCandidate(v_src_1901_, v_pos_1902_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_dec(v_a_1905_);
goto v___jp_1906_;
}
else
{
lean_object* v_val_1913_; lean_object* v_snd_1914_; lean_object* v_snd_1915_; lean_object* v_fst_1916_; lean_object* v_snd_1917_; lean_object* v___x_1918_; 
v_val_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_val_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v_snd_1914_ = lean_ctor_get(v_val_1913_, 1);
v_snd_1915_ = lean_ctor_get(v_snd_1914_, 1);
lean_inc(v_snd_1915_);
v_fst_1916_ = lean_ctor_get(v_val_1913_, 0);
lean_inc(v_fst_1916_);
lean_dec(v_val_1913_);
v_snd_1917_ = lean_ctor_get(v_snd_1915_, 1);
lean_inc_n(v_snd_1917_, 2);
lean_dec(v_snd_1915_);
v___x_1918_ = lp_lean_x2dftml_LeanFtml_refFindIncludeEnd(v_src_1901_, v_snd_1917_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_dec(v_snd_1917_);
lean_dec(v_fst_1916_);
lean_dec(v_a_1905_);
goto v___jp_1906_;
}
else
{
lean_object* v_one_1919_; lean_object* v_n_1920_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
lean_dec_ref_known(v___x_1918_, 1);
v_one_1919_ = lean_unsigned_to_nat(1u);
v_n_1920_ = lean_nat_sub(v_a_1905_, v_one_1919_);
lean_dec(v_a_1905_);
lean_inc(v_snd_1917_);
v___x_1929_ = l_List_drop___redArg(v_snd_1917_, v_src_1901_);
v___x_1930_ = lp_lean_x2dftml_LeanFtml_refParseBlock(v___x_1929_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_dec(v_snd_1917_);
goto v___jp_1921_;
}
else
{
lean_object* v_val_1931_; lean_object* v_snd_1932_; lean_object* v_fst_1933_; lean_object* v_fst_1934_; lean_object* v_snd_1935_; lean_object* v___x_1936_; 
v_val_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_val_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v_snd_1932_ = lean_ctor_get(v_val_1931_, 1);
lean_inc(v_snd_1932_);
v_fst_1933_ = lean_ctor_get(v_val_1931_, 0);
lean_inc(v_fst_1933_);
lean_dec(v_val_1931_);
v_fst_1934_ = lean_ctor_get(v_snd_1932_, 0);
lean_inc(v_fst_1934_);
v_snd_1935_ = lean_ctor_get(v_snd_1932_, 1);
lean_inc(v_snd_1935_);
lean_dec(v_snd_1932_);
v___x_1936_ = lp_lean_x2dftml_LeanFtml_refResolveRef(v_fst_1934_);
lean_dec(v_fst_1934_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_dec(v_snd_1935_);
lean_dec(v_fst_1933_);
lean_dec(v_snd_1917_);
goto v___jp_1921_;
}
else
{
lean_object* v_val_1937_; lean_object* v___x_1938_; lean_object* v_fst_1939_; lean_object* v_snd_1940_; lean_object* v_blockEnd_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v_val_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_val_1937_);
lean_dec_ref_known(v___x_1936_, 1);
v___x_1938_ = lp_lean_x2dftml_LeanFtml_refFetchWith(v_pages_1900_, v_val_1937_, v_snd_1935_, v_doc_1904_);
v_fst_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_fst_1939_);
v_snd_1940_ = lean_ctor_get(v___x_1938_, 1);
lean_inc(v_snd_1940_);
lean_dec_ref(v___x_1938_);
v_blockEnd_1941_ = lean_nat_add(v_snd_1917_, v_fst_1933_);
lean_dec(v_fst_1933_);
lean_dec(v_snd_1917_);
v___x_1942_ = lean_nat_sub(v_fst_1916_, v_pos_1902_);
lean_dec(v_fst_1916_);
v___x_1943_ = l_List_drop___redArg(v_pos_1902_, v_src_1901_);
v___x_1944_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0));
lean_inc(v___x_1943_);
v___x_1945_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1943_, v___x_1943_, v___x_1942_, v___x_1944_);
lean_dec(v___x_1943_);
v___x_1946_ = l_List_appendTR___redArg(v_out_1903_, v___x_1945_);
v___x_1947_ = l_List_appendTR___redArg(v___x_1946_, v_fst_1939_);
v_pos_1902_ = v_blockEnd_1941_;
v_out_1903_ = v___x_1947_;
v_doc_1904_ = v_snd_1940_;
v_a_1905_ = v_n_1920_;
goto _start;
}
}
v___jp_1921_:
{
lean_object* v_resume_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v_resume_1922_ = lp_lean_x2dftml_LeanFtml_refNextLineStart(v_src_1901_, v_fst_1916_);
v___x_1923_ = lean_nat_sub(v_resume_1922_, v_pos_1902_);
v___x_1924_ = l_List_drop___redArg(v_pos_1902_, v_src_1901_);
v___x_1925_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubChar_go___closed__0));
lean_inc(v___x_1924_);
v___x_1926_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1924_, v___x_1924_, v___x_1923_, v___x_1925_);
lean_dec(v___x_1924_);
v___x_1927_ = l_List_appendTR___redArg(v_out_1903_, v___x_1926_);
v_pos_1902_ = v_resume_1922_;
v_out_1903_ = v___x_1927_;
v_a_1905_ = v_n_1920_;
goto _start;
}
}
}
}
v___jp_1906_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1907_ = l_List_drop___redArg(v_pos_1902_, v_src_1901_);
v___x_1908_ = l_List_appendTR___redArg(v_out_1903_, v___x_1907_);
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
lean_ctor_set(v___x_1909_, 1, v_doc_1904_);
return v___x_1909_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPassWith_go___boxed(lean_object* v_pages_1949_, lean_object* v_src_1950_, lean_object* v_pos_1951_, lean_object* v_out_1952_, lean_object* v_doc_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = lp_lean_x2dftml_LeanFtml_refExpandPassWith_go(v_pages_1949_, v_src_1950_, v_pos_1951_, v_out_1952_, v_doc_1953_, v_a_1954_);
lean_dec(v_src_1950_);
lean_dec(v_pages_1949_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPassWith(lean_object* v_pages_1956_, lean_object* v_src_1957_, lean_object* v_doc_1958_){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1959_ = lean_unsigned_to_nat(0u);
v___x_1960_ = lean_box(0);
v___x_1961_ = l_List_lengthTR___redArg(v_src_1957_);
v___x_1962_ = lean_unsigned_to_nat(2u);
v___x_1963_ = lean_nat_add(v___x_1961_, v___x_1962_);
lean_dec(v___x_1961_);
v___x_1964_ = lp_lean_x2dftml_LeanFtml_refExpandPassWith_go(v_pages_1956_, v_src_1957_, v___x_1959_, v___x_1960_, v_doc_1958_, v___x_1963_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPassWith___boxed(lean_object* v_pages_1965_, lean_object* v_src_1966_, lean_object* v_doc_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = lp_lean_x2dftml_LeanFtml_refExpandPassWith(v_pages_1965_, v_src_1966_, v_doc_1967_);
lean_dec(v_src_1966_);
lean_dec(v_pages_1965_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPass(lean_object* v_src_1969_, lean_object* v_doc_1970_){
_start:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = lp_lean_x2dftml_LeanFtml_refPageMap;
v___x_1972_ = lp_lean_x2dftml_LeanFtml_refExpandPassWith(v___x_1971_, v_src_1969_, v_doc_1970_);
return v___x_1972_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_refExpandPass___boxed(lean_object* v_src_1973_, lean_object* v_doc_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = lp_lean_x2dftml_LeanFtml_refExpandPass(v_src_1973_, v_doc_1974_);
lean_dec(v_src_1973_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_includePassesWith(lean_object* v_pages_1976_, lean_object* v_x_1977_, lean_object* v_x_1978_, lean_object* v_x_1979_){
_start:
{
lean_object* v_zero_1980_; uint8_t v_isZero_1981_; 
v_zero_1980_ = lean_unsigned_to_nat(0u);
v_isZero_1981_ = lean_nat_dec_eq(v_x_1977_, v_zero_1980_);
if (v_isZero_1981_ == 1)
{
lean_object* v___x_1982_; 
lean_dec(v_x_1977_);
v___x_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1982_, 0, v_x_1978_);
lean_ctor_set(v___x_1982_, 1, v_x_1979_);
return v___x_1982_;
}
else
{
lean_object* v___x_1983_; lean_object* v_fst_1984_; lean_object* v_snd_1985_; uint8_t v___x_1986_; 
v___x_1983_ = lp_lean_x2dftml_LeanFtml_refExpandPassWith(v_pages_1976_, v_x_1978_, v_x_1979_);
v_fst_1984_ = lean_ctor_get(v___x_1983_, 0);
v_snd_1985_ = lean_ctor_get(v___x_1983_, 1);
v___x_1986_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_1984_, v_x_1978_);
lean_dec(v_x_1978_);
if (v___x_1986_ == 0)
{
lean_object* v_one_1987_; lean_object* v_n_1988_; 
lean_inc(v_snd_1985_);
lean_inc(v_fst_1984_);
lean_dec_ref(v___x_1983_);
v_one_1987_ = lean_unsigned_to_nat(1u);
v_n_1988_ = lean_nat_sub(v_x_1977_, v_one_1987_);
lean_dec(v_x_1977_);
v_x_1977_ = v_n_1988_;
v_x_1978_ = v_fst_1984_;
v_x_1979_ = v_snd_1985_;
goto _start;
}
else
{
lean_dec(v_x_1977_);
return v___x_1983_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_includePassesWith___boxed(lean_object* v_pages_1990_, lean_object* v_x_1991_, lean_object* v_x_1992_, lean_object* v_x_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = lp_lean_x2dftml_LeanFtml_includePassesWith(v_pages_1990_, v_x_1991_, v_x_1992_, v_x_1993_);
lean_dec(v_pages_1990_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_includePasses(lean_object* v_maxPasses_1995_, lean_object* v_src_1996_, lean_object* v_doc_1997_){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = lp_lean_x2dftml_LeanFtml_refPageMap;
v___x_1999_ = lp_lean_x2dftml_LeanFtml_includePassesWith(v___x_1998_, v_maxPasses_1995_, v_src_1996_, v_doc_1997_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_includeRule(lean_object* v_st_2000_){
_start:
{
lean_object* v_work_2001_; lean_object* v_tokens_2002_; lean_object* v_doc_2003_; uint8_t v_fatal_2004_; lean_object* v___x_2005_; 
v_work_2001_ = lean_ctor_get(v_st_2000_, 0);
v_tokens_2002_ = lean_ctor_get(v_st_2000_, 1);
v_doc_2003_ = lean_ctor_get(v_st_2000_, 2);
v_fatal_2004_ = lean_ctor_get_uint8(v_st_2000_, sizeof(void*)*3);
lean_inc(v_work_2001_);
v___x_2005_ = lp_lean_x2dftml_LeanFtml_allText(v_work_2001_);
if (lean_obj_tag(v___x_2005_) == 0)
{
return v_st_2000_;
}
else
{
lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2033_; 
lean_inc_ref(v_doc_2003_);
lean_inc(v_tokens_2002_);
v_isSharedCheck_2033_ = !lean_is_exclusive(v_st_2000_);
if (v_isSharedCheck_2033_ == 0)
{
lean_object* v_unused_2034_; lean_object* v_unused_2035_; lean_object* v_unused_2036_; 
v_unused_2034_ = lean_ctor_get(v_st_2000_, 2);
lean_dec(v_unused_2034_);
v_unused_2035_ = lean_ctor_get(v_st_2000_, 1);
lean_dec(v_unused_2035_);
v_unused_2036_ = lean_ctor_get(v_st_2000_, 0);
lean_dec(v_unused_2036_);
v___x_2007_ = v_st_2000_;
v_isShared_2008_ = v_isSharedCheck_2033_;
goto v_resetjp_2006_;
}
else
{
lean_dec(v_st_2000_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2033_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v_val_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2032_; 
v_val_2009_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2011_ = v___x_2005_;
v_isShared_2012_ = v_isSharedCheck_2032_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_val_2009_);
lean_dec(v___x_2005_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2032_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v_fst_2015_; lean_object* v_snd_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2031_; 
v___x_2013_ = lean_unsigned_to_nat(5u);
v___x_2014_ = lp_lean_x2dftml_LeanFtml_includePasses(v___x_2013_, v_val_2009_, v_doc_2003_);
v_fst_2015_ = lean_ctor_get(v___x_2014_, 0);
v_snd_2016_ = lean_ctor_get(v___x_2014_, 1);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2018_ = v___x_2014_;
v_isShared_2019_ = v_isSharedCheck_2031_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_snd_2016_);
lean_inc(v_fst_2015_);
lean_dec(v___x_2014_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2031_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2012_ == 0)
{
lean_ctor_set_tag(v___x_2011_, 0);
lean_ctor_set(v___x_2011_, 0, v_fst_2015_);
v___x_2021_ = v___x_2011_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_fst_2015_);
v___x_2021_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___x_2022_; lean_object* v___x_2024_; 
v___x_2022_ = lean_box(0);
if (v_isShared_2019_ == 0)
{
lean_ctor_set_tag(v___x_2018_, 1);
lean_ctor_set(v___x_2018_, 1, v___x_2022_);
lean_ctor_set(v___x_2018_, 0, v___x_2021_);
v___x_2024_ = v___x_2018_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v___x_2022_);
v___x_2024_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_object* v___x_2025_; lean_object* v___x_2027_; 
v___x_2025_ = lp_lean_x2dftml_LeanFtml_normSegs(v___x_2024_);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 2, v_snd_2016_);
lean_ctor_set(v___x_2007_, 0, v___x_2025_);
v___x_2027_ = v___x_2007_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2025_);
lean_ctor_set(v_reuseFailAlloc_2028_, 1, v_tokens_2002_);
lean_ctor_set(v_reuseFailAlloc_2028_, 2, v_snd_2016_);
lean_ctor_set_uint8(v_reuseFailAlloc_2028_, sizeof(void*)*3, v_fatal_2004_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isQuoteLeadC(uint32_t v_c_2037_){
_start:
{
uint32_t v___x_2038_; uint8_t v___x_2039_; 
v___x_2038_ = 32;
v___x_2039_ = lean_uint32_dec_eq(v_c_2037_, v___x_2038_);
if (v___x_2039_ == 0)
{
uint32_t v___x_2040_; uint8_t v___x_2041_; 
v___x_2040_ = 9;
v___x_2041_ = lean_uint32_dec_eq(v_c_2037_, v___x_2040_);
if (v___x_2041_ == 0)
{
uint32_t v___x_2042_; uint8_t v___x_2043_; 
v___x_2042_ = 62;
v___x_2043_ = lean_uint32_dec_eq(v_c_2037_, v___x_2042_);
return v___x_2043_;
}
else
{
return v___x_2041_;
}
}
else
{
return v___x_2039_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isQuoteLeadC___boxed(lean_object* v_c_2044_){
_start:
{
uint32_t v_c_boxed_2045_; uint8_t v_res_2046_; lean_object* v_r_2047_; 
v_c_boxed_2045_ = lean_unbox_uint32(v_c_2044_);
lean_dec(v_c_2044_);
v_res_2046_ = lp_lean_x2dftml_LeanFtml_isQuoteLeadC(v_c_boxed_2045_);
v_r_2047_ = lean_box(v_res_2046_);
return v_r_2047_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_refFindCandidate_go_match__3_splitter___redArg(lean_object* v_x_2048_, lean_object* v_h__1_2049_, lean_object* v_h__2_2050_){
_start:
{
if (lean_obj_tag(v_x_2048_) == 0)
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
lean_dec(v_h__1_2049_);
v___x_2051_ = lean_box(0);
v___x_2052_ = lean_apply_1(v_h__2_2050_, v___x_2051_);
return v___x_2052_;
}
else
{
lean_object* v_val_2053_; lean_object* v___x_2054_; 
lean_dec(v_h__2_2050_);
v_val_2053_ = lean_ctor_get(v_x_2048_, 0);
lean_inc(v_val_2053_);
lean_dec_ref_known(v_x_2048_, 1);
v___x_2054_ = lean_apply_1(v_h__1_2049_, v_val_2053_);
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_refFindCandidate_go_match__3_splitter(lean_object* v_motive_2055_, lean_object* v_x_2056_, lean_object* v_h__1_2057_, lean_object* v_h__2_2058_){
_start:
{
if (lean_obj_tag(v_x_2056_) == 0)
{
lean_object* v___x_2059_; lean_object* v___x_2060_; 
lean_dec(v_h__1_2057_);
v___x_2059_ = lean_box(0);
v___x_2060_ = lean_apply_1(v_h__2_2058_, v___x_2059_);
return v___x_2060_;
}
else
{
lean_object* v_val_2061_; lean_object* v___x_2062_; 
lean_dec(v_h__2_2058_);
v_val_2061_ = lean_ctor_get(v_x_2056_, 0);
lean_inc(v_val_2061_);
lean_dec_ref_known(v_x_2056_, 1);
v___x_2062_ = lean_apply_1(v_h__1_2057_, v_val_2061_);
return v___x_2062_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_splitFirstColon_match__3_splitter___redArg(lean_object* v_x_2063_, lean_object* v_h__1_2064_, lean_object* v_h__2_2065_, lean_object* v_h__3_2066_){
_start:
{
if (lean_obj_tag(v_x_2063_) == 0)
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
lean_dec(v_h__3_2066_);
lean_dec(v_h__2_2065_);
v___x_2067_ = lean_box(0);
v___x_2068_ = lean_apply_1(v_h__1_2064_, v___x_2067_);
return v___x_2068_;
}
else
{
lean_object* v_head_2069_; lean_object* v_tail_2070_; uint32_t v___x_2071_; uint32_t v___x_2072_; uint8_t v___x_2073_; 
lean_dec(v_h__1_2064_);
v_head_2069_ = lean_ctor_get(v_x_2063_, 0);
lean_inc(v_head_2069_);
v_tail_2070_ = lean_ctor_get(v_x_2063_, 1);
lean_inc(v_tail_2070_);
lean_dec_ref_known(v_x_2063_, 2);
v___x_2071_ = 58;
v___x_2072_ = lean_unbox_uint32(v_head_2069_);
v___x_2073_ = lean_uint32_dec_eq(v___x_2072_, v___x_2071_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; 
lean_dec(v_h__2_2065_);
v___x_2074_ = lean_apply_3(v_h__3_2066_, v_head_2069_, v_tail_2070_, lean_box(0));
return v___x_2074_;
}
else
{
lean_object* v___x_2075_; 
lean_dec(v_head_2069_);
lean_dec(v_h__3_2066_);
v___x_2075_ = lean_apply_1(v_h__2_2065_, v_tail_2070_);
return v___x_2075_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_splitFirstColon_match__3_splitter(lean_object* v_motive_2076_, lean_object* v_x_2077_, lean_object* v_h__1_2078_, lean_object* v_h__2_2079_, lean_object* v_h__3_2080_){
_start:
{
if (lean_obj_tag(v_x_2077_) == 0)
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
lean_dec(v_h__3_2080_);
lean_dec(v_h__2_2079_);
v___x_2081_ = lean_box(0);
v___x_2082_ = lean_apply_1(v_h__1_2078_, v___x_2081_);
return v___x_2082_;
}
else
{
lean_object* v_head_2083_; lean_object* v_tail_2084_; uint32_t v___x_2085_; uint32_t v___x_2086_; uint8_t v___x_2087_; 
lean_dec(v_h__1_2078_);
v_head_2083_ = lean_ctor_get(v_x_2077_, 0);
lean_inc(v_head_2083_);
v_tail_2084_ = lean_ctor_get(v_x_2077_, 1);
lean_inc(v_tail_2084_);
lean_dec_ref_known(v_x_2077_, 2);
v___x_2085_ = 58;
v___x_2086_ = lean_unbox_uint32(v_head_2083_);
v___x_2087_ = lean_uint32_dec_eq(v___x_2086_, v___x_2085_);
if (v___x_2087_ == 0)
{
lean_object* v___x_2088_; 
lean_dec(v_h__2_2079_);
v___x_2088_ = lean_apply_3(v_h__3_2080_, v_head_2083_, v_tail_2084_, lean_box(0));
return v___x_2088_;
}
else
{
lean_object* v___x_2089_; 
lean_dec(v_head_2083_);
lean_dec(v_h__3_2080_);
v___x_2089_ = lean_apply_1(v_h__2_2079_, v_tail_2084_);
return v___x_2089_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_splitFirstColon_match__1_splitter___redArg(lean_object* v_x_2090_, lean_object* v_h__1_2091_){
_start:
{
lean_object* v_fst_2092_; lean_object* v_snd_2093_; lean_object* v___x_2094_; 
v_fst_2092_ = lean_ctor_get(v_x_2090_, 0);
lean_inc(v_fst_2092_);
v_snd_2093_ = lean_ctor_get(v_x_2090_, 1);
lean_inc(v_snd_2093_);
lean_dec_ref(v_x_2090_);
v___x_2094_ = lean_apply_2(v_h__1_2091_, v_fst_2092_, v_snd_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeRule_0__LeanFtml_splitFirstColon_match__1_splitter(lean_object* v_motive_2095_, lean_object* v_x_2096_, lean_object* v_h__1_2097_){
_start:
{
lean_object* v_fst_2098_; lean_object* v_snd_2099_; lean_object* v___x_2100_; 
v_fst_2098_ = lean_ctor_get(v_x_2096_, 0);
lean_inc(v_fst_2098_);
v_snd_2099_ = lean_ctor_get(v_x_2096_, 1);
lean_inc(v_snd_2099_);
lean_dec_ref(v_x_2096_);
v___x_2100_ = lean_apply_2(v_h__1_2097_, v_fst_2098_, v_snd_2099_);
return v___x_2100_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Include(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_IncludeGrammar(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_IncludeExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_IncludeRule(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_Include(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_IncludeGrammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_IncludeExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_refPageMap = _init_lp_lean_x2dftml_LeanFtml_refPageMap();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refPageMap);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__1);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__2 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__2();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__2);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__3 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__3();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__3);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__4);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__5 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__5();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__5);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__6 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__6();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__6);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__7 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__7();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__7);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__8 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__8();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__8);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__9 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__9();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__9);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__10 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__10();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__10);
lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__11 = _init_lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__11();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_htmlSpecialChars___boxed__const__11);
lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__1___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__3___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__4___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__7___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__8___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindCandidate_go___closed__9___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindIncludeEnd_go___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFindBlockClose_go___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refParseBlock___closed__1___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refParseBlock___closed__3___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refParseBlock___closed__5___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refCanonicalSite___closed__2___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refResolveRef_go___boxed__const__1);
lp_lean_x2dftml_LeanFtml_refFetchWith___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_refFetchWith___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_refFetchWith___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
