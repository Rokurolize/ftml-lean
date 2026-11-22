// Lean compiler output
// Module: LeanFtml.NextRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules
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
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_close2Suffixes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_byteCiEq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omSet(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_claimText(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_codeFuel(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lastConsumedByte(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDigitByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDigitByte___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isLabelByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isLabelByte___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isKeyByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isKeyByte___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_ciBytesEq_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_ciBytesEq_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ciBytesEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ciBytesEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripslashesB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeEqB_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeEqB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omSetB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookupB___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_lowerAsciiB_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lowerAsciiB(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isTypeVariantKey(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isTypeVariantKey___boxed(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec_go(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_iftagsGate_spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iftagsGate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iftagsGate___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iftagsGate___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iftagsGate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_iftagsGate___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iftagsGate___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iftagsGate___closed__1_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iftagsGate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsGate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsPattern_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[iftags"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1;
static const lean_array_object lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_iftagsBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iftagsBody___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_iftagsBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[[/iftags]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iftagsBody___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsRule_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsRule___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "[!--"};
static const lean_object* lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatches_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__0_value;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Comment"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_commentRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_commentRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_commentRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_commentRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isSegByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isSegByte___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isFinalByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isFinalByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "http://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "https://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ftp://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "gopher://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "news://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mailto:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mms://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__5_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__4_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__0_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeSchemes;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segEnds_go(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_segEnds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_segEnds___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_segEnds___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segEnds(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeTail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[iframe"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeMatch___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeMatch(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_iframeProcess_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "align"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "frameborder"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "height"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "scrolling"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__5_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__4_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__0_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "src"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iframeProcess___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Iframe"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__17_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_iframeRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_iframeRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_iframeRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iframeRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_close2SuffixesNoNl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateG1Tail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_dateMatch1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[[date"};
static const lean_object* lp_lean_x2dftml_LeanFtml_dateMatch1___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dateMatch1___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch2(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch3(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_dateNumeric(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateNumeric___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_dateProcess_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_dateProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "timestamp"};
static const lean_object* lp_lean_x2dftml_LeanFtml_dateProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dateProcess___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dateProcess___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dateProcess___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_dateProcess___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Date"};
static const lean_object* lp_lean_x2dftml_LeanFtml_dateProcess___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dateProcess___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateProcess(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_dateMatch1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_dateMatch2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__1_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_dateMatch3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_dateRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_dateRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_dateRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dateRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrChunks_go(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrChunks(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathAttrs_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_mathAttrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathAttrs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathAttrs___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathHead(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/math]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_lookaheadCloser(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookaheadCloser___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[[math"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathPattern___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathPattern___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathPattern___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathPattern___closed__1;
static const lean_array_object lp_lean_x2dftml_LeanFtml_mathPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathPattern___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathPattern___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathPattern(lean_object*, uint8_t, lean_object*);
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBody(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathPattern___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBody___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "include"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "input"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard_go(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_eqSet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_mathProcess_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_mathProcess_spec__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Math"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathProcess___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathProcess___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathProcess___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathProcess___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathProcess___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "equation"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathProcess___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathProcess___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathProcess___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__11;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathProcess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathScan___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_mathScan___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathScan___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathScan(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDigitByte(lean_object* v_b_1_){
_start:
{
lean_object* v___x_2_; uint8_t v___x_3_; 
v___x_2_ = lean_unsigned_to_nat(48u);
v___x_3_ = lean_nat_dec_le(v___x_2_, v_b_1_);
if (v___x_3_ == 0)
{
return v___x_3_;
}
else
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_unsigned_to_nat(57u);
v___x_5_ = lean_nat_dec_le(v_b_1_, v___x_4_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDigitByte___boxed(lean_object* v_b_6_){
_start:
{
uint8_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = lp_lean_x2dftml_LeanFtml_isDigitByte(v_b_6_);
lean_dec(v_b_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isLabelByte(lean_object* v_b_9_){
_start:
{
lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_23_ = lean_unsigned_to_nat(97u);
v___x_24_ = lean_nat_dec_le(v___x_23_, v_b_9_);
if (v___x_24_ == 0)
{
goto v___jp_18_;
}
else
{
lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_25_ = lean_unsigned_to_nat(122u);
v___x_26_ = lean_nat_dec_le(v_b_9_, v___x_25_);
if (v___x_26_ == 0)
{
goto v___jp_18_;
}
else
{
return v___x_26_;
}
}
v___jp_10_:
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = lean_unsigned_to_nat(95u);
v___x_12_ = lean_nat_dec_eq(v_b_9_, v___x_11_);
return v___x_12_;
}
v___jp_13_:
{
lean_object* v___x_14_; uint8_t v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(48u);
v___x_15_ = lean_nat_dec_le(v___x_14_, v_b_9_);
if (v___x_15_ == 0)
{
goto v___jp_10_;
}
else
{
lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(57u);
v___x_17_ = lean_nat_dec_le(v_b_9_, v___x_16_);
if (v___x_17_ == 0)
{
goto v___jp_10_;
}
else
{
return v___x_17_;
}
}
}
v___jp_18_:
{
lean_object* v___x_19_; uint8_t v___x_20_; 
v___x_19_ = lean_unsigned_to_nat(65u);
v___x_20_ = lean_nat_dec_le(v___x_19_, v_b_9_);
if (v___x_20_ == 0)
{
goto v___jp_13_;
}
else
{
lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lean_unsigned_to_nat(90u);
v___x_22_ = lean_nat_dec_le(v_b_9_, v___x_21_);
if (v___x_22_ == 0)
{
goto v___jp_13_;
}
else
{
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isLabelByte___boxed(lean_object* v_b_27_){
_start:
{
uint8_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = lp_lean_x2dftml_LeanFtml_isLabelByte(v_b_27_);
lean_dec(v_b_27_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isKeyByte(lean_object* v_b_30_){
_start:
{
lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(97u);
v___x_42_ = lean_nat_dec_le(v___x_41_, v_b_30_);
if (v___x_42_ == 0)
{
goto v___jp_36_;
}
else
{
lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(122u);
v___x_44_ = lean_nat_dec_le(v_b_30_, v___x_43_);
if (v___x_44_ == 0)
{
goto v___jp_36_;
}
else
{
return v___x_44_;
}
}
v___jp_31_:
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(48u);
v___x_33_ = lean_nat_dec_le(v___x_32_, v_b_30_);
if (v___x_33_ == 0)
{
return v___x_33_;
}
else
{
lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(57u);
v___x_35_ = lean_nat_dec_le(v_b_30_, v___x_34_);
return v___x_35_;
}
}
v___jp_36_:
{
lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(65u);
v___x_38_ = lean_nat_dec_le(v___x_37_, v_b_30_);
if (v___x_38_ == 0)
{
goto v___jp_31_;
}
else
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(90u);
v___x_40_ = lean_nat_dec_le(v_b_30_, v___x_39_);
if (v___x_40_ == 0)
{
goto v___jp_31_;
}
else
{
return v___x_40_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isKeyByte___boxed(lean_object* v_b_45_){
_start:
{
uint8_t v_res_46_; lean_object* v_r_47_; 
v_res_46_ = lp_lean_x2dftml_LeanFtml_isKeyByte(v_b_45_);
lean_dec(v_b_45_);
v_r_47_ = lean_box(v_res_46_);
return v_r_47_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_ciBytesEq_spec__0(lean_object* v_x_48_){
_start:
{
if (lean_obj_tag(v_x_48_) == 0)
{
uint8_t v___x_49_; 
v___x_49_ = 1;
return v___x_49_;
}
else
{
lean_object* v_head_50_; lean_object* v_tail_51_; lean_object* v_fst_52_; lean_object* v_snd_53_; uint8_t v___x_54_; 
v_head_50_ = lean_ctor_get(v_x_48_, 0);
v_tail_51_ = lean_ctor_get(v_x_48_, 1);
v_fst_52_ = lean_ctor_get(v_head_50_, 0);
v_snd_53_ = lean_ctor_get(v_head_50_, 1);
v___x_54_ = lp_lean_x2dftml_LeanFtml_byteCiEq(v_fst_52_, v_snd_53_);
if (v___x_54_ == 0)
{
return v___x_54_;
}
else
{
v_x_48_ = v_tail_51_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_ciBytesEq_spec__0___boxed(lean_object* v_x_56_){
_start:
{
uint8_t v_res_57_; lean_object* v_r_58_; 
v_res_57_ = lp_lean_x2dftml_List_all___at___00LeanFtml_ciBytesEq_spec__0(v_x_56_);
lean_dec(v_x_56_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ciBytesEq(lean_object* v_a_59_, lean_object* v_b_60_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_61_ = l_List_lengthTR___redArg(v_a_59_);
v___x_62_ = l_List_lengthTR___redArg(v_b_60_);
v___x_63_ = lean_nat_dec_eq(v___x_61_, v___x_62_);
lean_dec(v___x_62_);
lean_dec(v___x_61_);
if (v___x_63_ == 0)
{
lean_dec(v_b_60_);
lean_dec(v_a_59_);
return v___x_63_;
}
else
{
lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_64_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_a_59_, v_b_60_);
v___x_65_ = lp_lean_x2dftml_List_all___at___00LeanFtml_ciBytesEq_spec__0(v___x_64_);
lean_dec(v___x_64_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ciBytesEq___boxed(lean_object* v_a_66_, lean_object* v_b_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = lp_lean_x2dftml_LeanFtml_ciBytesEq(v_a_66_, v_b_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripslashesB(lean_object* v_x_70_){
_start:
{
if (lean_obj_tag(v_x_70_) == 0)
{
return v_x_70_;
}
else
{
lean_object* v_head_71_; lean_object* v_tail_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_97_; 
v_head_71_ = lean_ctor_get(v_x_70_, 0);
v_tail_72_ = lean_ctor_get(v_x_70_, 1);
v_isSharedCheck_97_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_97_ == 0)
{
v___x_74_ = v_x_70_;
v_isShared_75_ = v_isSharedCheck_97_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_tail_72_);
lean_inc(v_head_71_);
lean_dec(v_x_70_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_97_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(92u);
v___x_77_ = lean_nat_dec_eq(v_head_71_, v___x_76_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_78_ = lp_lean_x2dftml_LeanFtml_stripslashesB(v_tail_72_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 1, v___x_78_);
v___x_80_ = v___x_74_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_head_71_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v___x_78_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
else
{
lean_del_object(v___x_74_);
lean_dec(v_head_71_);
if (lean_obj_tag(v_tail_72_) == 0)
{
return v_tail_72_;
}
else
{
lean_object* v_head_82_; lean_object* v_tail_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_96_; 
v_head_82_ = lean_ctor_get(v_tail_72_, 0);
v_tail_83_ = lean_ctor_get(v_tail_72_, 1);
v_isSharedCheck_96_ = !lean_is_exclusive(v_tail_72_);
if (v_isSharedCheck_96_ == 0)
{
v___x_85_ = v_tail_72_;
v_isShared_86_ = v_isSharedCheck_96_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_tail_83_);
lean_inc(v_head_82_);
lean_dec(v_tail_72_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_96_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___y_88_; lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_unsigned_to_nat(48u);
v___x_94_ = lean_nat_dec_eq(v_head_82_, v___x_93_);
if (v___x_94_ == 0)
{
v___y_88_ = v_head_82_;
goto v___jp_87_;
}
else
{
lean_object* v___x_95_; 
lean_dec(v_head_82_);
v___x_95_ = lean_unsigned_to_nat(0u);
v___y_88_ = v___x_95_;
goto v___jp_87_;
}
v___jp_87_:
{
lean_object* v___x_89_; lean_object* v___x_91_; 
v___x_89_ = lp_lean_x2dftml_LeanFtml_stripslashesB(v_tail_83_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 1, v___x_89_);
lean_ctor_set(v___x_85_, 0, v___y_88_);
v___x_91_ = v___x_85_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___y_88_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v___x_89_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeEqB_go(lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_){
_start:
{
if (lean_obj_tag(v_a_98_) == 0)
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = l_List_reverse___redArg(v_a_99_);
v___x_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v_a_100_);
v___x_103_ = l_List_reverse___redArg(v___x_102_);
return v___x_103_;
}
else
{
lean_object* v_head_104_; lean_object* v_tail_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_135_; 
v_head_104_ = lean_ctor_get(v_a_98_, 0);
v_tail_105_ = lean_ctor_get(v_a_98_, 1);
v_isSharedCheck_135_ = !lean_is_exclusive(v_a_98_);
if (v_isSharedCheck_135_ == 0)
{
v___x_107_ = v_a_98_;
v_isShared_108_ = v_isSharedCheck_135_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_tail_105_);
lean_inc(v_head_104_);
lean_dec(v_a_98_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_135_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v_c_110_; lean_object* v_cur_111_; lean_object* v_acc_112_; lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(61u);
v___x_118_ = lean_nat_dec_eq(v_head_104_, v___x_117_);
if (v___x_118_ == 0)
{
v_c_110_ = v_head_104_;
v_cur_111_ = v_a_99_;
v_acc_112_ = v_a_100_;
goto v___jp_109_;
}
else
{
lean_dec(v_head_104_);
if (lean_obj_tag(v_tail_105_) == 1)
{
lean_object* v_head_119_; lean_object* v_tail_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v_head_119_ = lean_ctor_get(v_tail_105_, 0);
v_tail_120_ = lean_ctor_get(v_tail_105_, 1);
v___x_121_ = lean_unsigned_to_nat(34u);
v___x_122_ = lean_nat_dec_eq(v_head_119_, v___x_121_);
if (v___x_122_ == 0)
{
v_c_110_ = v___x_117_;
v_cur_111_ = v_a_99_;
v_acc_112_ = v_a_100_;
goto v___jp_109_;
}
else
{
lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_132_; 
lean_inc(v_tail_120_);
lean_del_object(v___x_107_);
v_isSharedCheck_132_ = !lean_is_exclusive(v_tail_105_);
if (v_isSharedCheck_132_ == 0)
{
lean_object* v_unused_133_; lean_object* v_unused_134_; 
v_unused_133_ = lean_ctor_get(v_tail_105_, 1);
lean_dec(v_unused_133_);
v_unused_134_ = lean_ctor_get(v_tail_105_, 0);
lean_dec(v_unused_134_);
v___x_124_ = v_tail_105_;
v_isShared_125_ = v_isSharedCheck_132_;
goto v_resetjp_123_;
}
else
{
lean_dec(v_tail_105_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_132_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_126_ = lean_box(0);
v___x_127_ = l_List_reverse___redArg(v_a_99_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v_a_100_);
lean_ctor_set(v___x_124_, 0, v___x_127_);
v___x_129_ = v___x_124_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v_a_100_);
v___x_129_ = v_reuseFailAlloc_131_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
v_a_98_ = v_tail_120_;
v_a_99_ = v___x_126_;
v_a_100_ = v___x_129_;
goto _start;
}
}
}
}
else
{
v_c_110_ = v___x_117_;
v_cur_111_ = v_a_99_;
v_acc_112_ = v_a_100_;
goto v___jp_109_;
}
}
v___jp_109_:
{
lean_object* v___x_114_; 
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 1, v_cur_111_);
lean_ctor_set(v___x_107_, 0, v_c_110_);
v___x_114_ = v___x_107_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_c_110_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v_cur_111_);
v___x_114_ = v_reuseFailAlloc_116_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
v_a_98_ = v_tail_105_;
v_a_99_ = v___x_114_;
v_a_100_ = v_acc_112_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeEqB(lean_object* v_s_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_box(0);
v___x_138_ = lp_lean_x2dftml_LeanFtml_explodeEqB_go(v_s_136_, v___x_137_, v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB_go(lean_object* v_x_139_, lean_object* v_i_140_, lean_object* v_acc_141_, lean_object* v_a_142_){
_start:
{
if (lean_obj_tag(v_a_142_) == 0)
{
lean_dec(v_i_140_);
return v_acc_141_;
}
else
{
lean_object* v_head_143_; lean_object* v_tail_144_; lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v_head_143_ = lean_ctor_get(v_a_142_, 0);
v_tail_144_ = lean_ctor_get(v_a_142_, 1);
v___x_145_ = lean_unsigned_to_nat(1u);
v___x_146_ = lean_nat_add(v_i_140_, v___x_145_);
v___x_147_ = lean_nat_dec_eq(v_head_143_, v_x_139_);
if (v___x_147_ == 0)
{
lean_dec(v_i_140_);
v_i_140_ = v___x_146_;
v_a_142_ = v_tail_144_;
goto _start;
}
else
{
lean_object* v___x_149_; 
lean_dec(v_acc_141_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v_i_140_);
v_i_140_ = v___x_146_;
v_acc_141_ = v___x_149_;
v_a_142_ = v_tail_144_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB_go___boxed(lean_object* v_x_151_, lean_object* v_i_152_, lean_object* v_acc_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = lp_lean_x2dftml_LeanFtml_lastIdxOfB_go(v_x_151_, v_i_152_, v_acc_153_, v_a_154_);
lean_dec(v_a_154_);
lean_dec(v_x_151_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB(lean_object* v_x_156_, lean_object* v_l_157_){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = lean_box(0);
v___x_160_ = lp_lean_x2dftml_LeanFtml_lastIdxOfB_go(v_x_156_, v___x_158_, v___x_159_, v_l_157_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB___boxed(lean_object* v_x_161_, lean_object* v_l_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = lp_lean_x2dftml_LeanFtml_lastIdxOfB(v_x_161_, v_l_162_);
lean_dec(v_l_162_);
lean_dec(v_x_161_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omSetB(lean_object* v_x_164_, lean_object* v_x_165_, lean_object* v_x_166_){
_start:
{
if (lean_obj_tag(v_x_164_) == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v_x_165_);
lean_ctor_set(v___x_167_, 1, v_x_166_);
v___x_168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v_x_164_);
return v___x_168_;
}
else
{
lean_object* v_head_169_; lean_object* v_tail_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_192_; 
v_head_169_ = lean_ctor_get(v_x_164_, 0);
v_tail_170_ = lean_ctor_get(v_x_164_, 1);
v_isSharedCheck_192_ = !lean_is_exclusive(v_x_164_);
if (v_isSharedCheck_192_ == 0)
{
v___x_172_ = v_x_164_;
v_isShared_173_ = v_isSharedCheck_192_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_tail_170_);
lean_inc(v_head_169_);
lean_dec(v_x_164_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_192_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v_fst_174_; uint8_t v___x_175_; 
v_fst_174_ = lean_ctor_get(v_head_169_, 0);
v___x_175_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_174_, v_x_165_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = lp_lean_x2dftml_LeanFtml_omSetB(v_tail_170_, v_x_165_, v_x_166_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 1, v___x_176_);
v___x_178_ = v___x_172_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_head_169_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v___x_176_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
else
{
lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_189_; 
v_isSharedCheck_189_ = !lean_is_exclusive(v_head_169_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; lean_object* v_unused_191_; 
v_unused_190_ = lean_ctor_get(v_head_169_, 1);
lean_dec(v_unused_190_);
v_unused_191_ = lean_ctor_get(v_head_169_, 0);
lean_dec(v_unused_191_);
v___x_181_ = v_head_169_;
v_isShared_182_ = v_isSharedCheck_189_;
goto v_resetjp_180_;
}
else
{
lean_dec(v_head_169_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_189_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 1, v_x_166_);
lean_ctor_set(v___x_181_, 0, v_x_165_);
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_x_165_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v_x_166_);
v___x_184_ = v_reuseFailAlloc_188_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_object* v___x_186_; 
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 0, v___x_184_);
v___x_186_ = v___x_172_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_tail_170_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
if (lean_obj_tag(v_x_193_) == 0)
{
lean_object* v___x_195_; 
v___x_195_ = lean_box(0);
return v___x_195_;
}
else
{
lean_object* v_head_196_; lean_object* v_tail_197_; lean_object* v_fst_198_; lean_object* v_snd_199_; uint8_t v___x_200_; 
v_head_196_ = lean_ctor_get(v_x_193_, 0);
v_tail_197_ = lean_ctor_get(v_x_193_, 1);
v_fst_198_ = lean_ctor_get(v_head_196_, 0);
v_snd_199_ = lean_ctor_get(v_head_196_, 1);
v___x_200_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_198_, v_x_194_);
if (v___x_200_ == 0)
{
v_x_193_ = v_tail_197_;
goto _start;
}
else
{
lean_object* v___x_202_; 
lean_inc(v_snd_199_);
v___x_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_202_, 0, v_snd_199_);
return v___x_202_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookupB___boxed(lean_object* v_x_203_, lean_object* v_x_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = lp_lean_x2dftml_LeanFtml_lookupB(v_x_203_, v_x_204_);
lean_dec(v_x_204_);
lean_dec(v_x_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_lowerAsciiB_spec__0(lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
if (lean_obj_tag(v_a_206_) == 0)
{
lean_object* v___x_208_; 
v___x_208_ = l_List_reverse___redArg(v_a_207_);
return v___x_208_;
}
else
{
lean_object* v_head_209_; lean_object* v_tail_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_226_; 
v_head_209_ = lean_ctor_get(v_a_206_, 0);
v_tail_210_ = lean_ctor_get(v_a_206_, 1);
v_isSharedCheck_226_ = !lean_is_exclusive(v_a_206_);
if (v_isSharedCheck_226_ == 0)
{
v___x_212_ = v_a_206_;
v_isShared_213_ = v_isSharedCheck_226_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_tail_210_);
lean_inc(v_head_209_);
lean_dec(v_a_206_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_226_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___y_215_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = lean_unsigned_to_nat(65u);
v___x_221_ = lean_nat_dec_le(v___x_220_, v_head_209_);
if (v___x_221_ == 0)
{
v___y_215_ = v_head_209_;
goto v___jp_214_;
}
else
{
lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = lean_unsigned_to_nat(90u);
v___x_223_ = lean_nat_dec_le(v_head_209_, v___x_222_);
if (v___x_223_ == 0)
{
v___y_215_ = v_head_209_;
goto v___jp_214_;
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_unsigned_to_nat(32u);
v___x_225_ = lean_nat_add(v_head_209_, v___x_224_);
lean_dec(v_head_209_);
v___y_215_ = v___x_225_;
goto v___jp_214_;
}
}
v___jp_214_:
{
lean_object* v___x_217_; 
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v_a_207_);
lean_ctor_set(v___x_212_, 0, v___y_215_);
v___x_217_ = v___x_212_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___y_215_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_a_207_);
v___x_217_ = v_reuseFailAlloc_219_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
v_a_206_ = v_tail_210_;
v_a_207_ = v___x_217_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lowerAsciiB(lean_object* v_bs_227_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_box(0);
v___x_229_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_lowerAsciiB_spec__0(v_bs_227_, v___x_228_);
return v___x_229_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__0));
v___x_232_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isTypeVariantKey(lean_object* v_k_233_){
_start:
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1, &lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1);
v___x_235_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_k_233_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_236_ = lp_lean_x2dftml_LeanFtml_lowerAsciiB(v_k_233_);
v___x_237_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_236_, v___x_234_);
lean_dec(v___x_236_);
return v___x_237_;
}
else
{
uint8_t v___x_238_; 
lean_dec(v_k_233_);
v___x_238_ = 0;
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isTypeVariantKey___boxed(lean_object* v_k_239_){
_start:
{
uint8_t v_res_240_; lean_object* v_r_241_; 
v_res_240_ = lp_lean_x2dftml_LeanFtml_isTypeVariantKey(v_k_239_);
v_r_241_ = lean_box(v_res_240_);
return v_r_241_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes_go(lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
if (lean_obj_tag(v_a_244_) == 0)
{
lean_dec(v_a_245_);
return v_a_246_;
}
else
{
lean_object* v_head_247_; lean_object* v_tail_248_; lean_object* v_fst_250_; lean_object* v_snd_251_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_head_247_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_head_247_);
v_tail_248_ = lean_ctor_get(v_a_244_, 1);
lean_inc(v_tail_248_);
lean_dec_ref_known(v_a_244_, 2);
v___x_254_ = lean_unsigned_to_nat(34u);
v___x_255_ = lp_lean_x2dftml_LeanFtml_lastIdxOfB(v___x_254_, v_head_247_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_256_ = lean_box(0);
v___x_257_ = lean_unsigned_to_nat(1u);
v___x_258_ = l_List_drop___redArg(v___x_257_, v_head_247_);
lean_dec(v_head_247_);
v___x_259_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_258_);
lean_dec(v___x_258_);
v_fst_250_ = v___x_256_;
v_snd_251_ = v___x_259_;
goto v___jp_249_;
}
else
{
lean_object* v_val_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_val_260_ = lean_ctor_get(v___x_255_, 0);
lean_inc_n(v_val_260_, 2);
lean_dec_ref_known(v___x_255_, 1);
v___x_261_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_head_247_);
v___x_262_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_head_247_, v_head_247_, v_val_260_, v___x_261_);
v___x_263_ = lp_lean_x2dftml_LeanFtml_stripslashesB(v___x_262_);
v___x_264_ = lean_unsigned_to_nat(1u);
v___x_265_ = lean_nat_add(v_val_260_, v___x_264_);
lean_dec(v_val_260_);
v___x_266_ = l_List_drop___redArg(v___x_265_, v_head_247_);
lean_dec(v_head_247_);
v___x_267_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_266_);
lean_dec(v___x_266_);
v_fst_250_ = v___x_263_;
v_snd_251_ = v___x_267_;
goto v___jp_249_;
}
v___jp_249_:
{
lean_object* v___x_252_; 
v___x_252_ = lp_lean_x2dftml_LeanFtml_omSetB(v_a_246_, v_a_245_, v_fst_250_);
v_a_244_ = v_tail_248_;
v_a_245_ = v_snd_251_;
v_a_246_ = v___x_252_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object* v_text_268_){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_text_268_);
v___x_270_ = lp_lean_x2dftml_LeanFtml_explodeEqB(v___x_269_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v___x_271_; 
v___x_271_ = lean_box(0);
return v___x_271_;
}
else
{
lean_object* v_head_272_; lean_object* v_tail_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_head_272_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_head_272_);
v_tail_273_ = lean_ctor_get(v___x_270_, 1);
lean_inc(v_tail_273_);
lean_dec_ref_known(v___x_270_, 2);
v___x_274_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_head_272_);
lean_dec(v_head_272_);
v___x_275_ = lean_box(0);
v___x_276_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes_go(v_tail_273_, v___x_274_, v___x_275_);
return v___x_276_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes___boxed(lean_object* v_text_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_text_277_);
lean_dec(v_text_277_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec_go(lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, uint8_t v_a_282_){
_start:
{
if (lean_obj_tag(v_a_279_) == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = l_List_reverse___redArg(v_a_280_);
v___x_284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v_a_281_);
v___x_285_ = l_List_reverse___redArg(v___x_284_);
return v___x_285_;
}
else
{
lean_object* v_head_286_; lean_object* v_tail_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_306_; 
v_head_286_ = lean_ctor_get(v_a_279_, 0);
v_tail_287_ = lean_ctor_get(v_a_279_, 1);
v_isSharedCheck_306_ = !lean_is_exclusive(v_a_279_);
if (v_isSharedCheck_306_ == 0)
{
v___x_289_ = v_a_279_;
v_isShared_290_ = v_isSharedCheck_306_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_tail_287_);
lean_inc(v_head_286_);
lean_dec(v_a_279_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_306_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(44u);
v___x_301_ = lean_nat_dec_eq(v_head_286_, v___x_300_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_unsigned_to_nat(32u);
v___x_303_ = lean_nat_dec_eq(v_head_286_, v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; 
lean_del_object(v___x_289_);
v___x_304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_304_, 0, v_head_286_);
lean_ctor_set(v___x_304_, 1, v_a_280_);
v_a_279_ = v_tail_287_;
v_a_280_ = v___x_304_;
v_a_282_ = v___x_303_;
goto _start;
}
else
{
lean_dec(v_head_286_);
goto v___jp_291_;
}
}
else
{
lean_dec(v_head_286_);
goto v___jp_291_;
}
v___jp_291_:
{
uint8_t v___x_292_; 
v___x_292_ = 1;
if (v_a_282_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_296_; 
v___x_293_ = lean_box(0);
v___x_294_ = l_List_reverse___redArg(v_a_280_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 1, v_a_281_);
lean_ctor_set(v___x_289_, 0, v___x_294_);
v___x_296_ = v___x_289_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v_a_281_);
v___x_296_ = v_reuseFailAlloc_298_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
v_a_279_ = v_tail_287_;
v_a_280_ = v___x_293_;
v_a_281_ = v___x_296_;
v_a_282_ = v___x_292_;
goto _start;
}
}
else
{
lean_del_object(v___x_289_);
v_a_279_ = v_tail_287_;
v_a_282_ = v___x_292_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec_go___boxed(lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
uint8_t v_a_150__boxed_311_; lean_object* v_res_312_; 
v_a_150__boxed_311_ = lean_unbox(v_a_310_);
v_res_312_ = lp_lean_x2dftml_LeanFtml_splitSpec_go(v_a_307_, v_a_308_, v_a_309_, v_a_150__boxed_311_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec(lean_object* v_s_313_){
_start:
{
lean_object* v___x_314_; uint8_t v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_box(0);
v___x_315_ = 0;
v___x_316_ = lp_lean_x2dftml_LeanFtml_splitSpec_go(v_s_313_, v___x_314_, v___x_314_, v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_iftagsGate_spec__1(lean_object* v_x_317_, lean_object* v_x_318_){
_start:
{
if (lean_obj_tag(v_x_318_) == 0)
{
return v_x_317_;
}
else
{
lean_object* v_snd_319_; lean_object* v_head_320_; lean_object* v_tail_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_379_; 
v_snd_319_ = lean_ctor_get(v_x_317_, 1);
lean_inc(v_snd_319_);
v_head_320_ = lean_ctor_get(v_x_318_, 0);
v_tail_321_ = lean_ctor_get(v_x_318_, 1);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_318_);
if (v_isSharedCheck_379_ == 0)
{
v___x_323_ = v_x_318_;
v_isShared_324_ = v_isSharedCheck_379_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_tail_321_);
lean_inc(v_head_320_);
lean_dec(v_x_318_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_379_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v_fst_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_377_; 
v_fst_325_ = lean_ctor_get(v_x_317_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v_x_317_);
if (v_isSharedCheck_377_ == 0)
{
lean_object* v_unused_378_; 
v_unused_378_ = lean_ctor_get(v_x_317_, 1);
lean_dec(v_unused_378_);
v___x_327_ = v_x_317_;
v_isShared_328_ = v_isSharedCheck_377_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_fst_325_);
lean_dec(v_x_317_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_377_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v_fst_329_; lean_object* v_snd_330_; 
v_fst_329_ = lean_ctor_get(v_snd_319_, 0);
v_snd_330_ = lean_ctor_get(v_snd_319_, 1);
if (lean_obj_tag(v_head_320_) == 1)
{
lean_object* v_head_340_; lean_object* v_tail_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v_head_340_ = lean_ctor_get(v_head_320_, 0);
v_tail_341_ = lean_ctor_get(v_head_320_, 1);
v___x_342_ = lean_unsigned_to_nat(43u);
v___x_343_ = lean_nat_dec_eq(v_head_340_, v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_363_; 
lean_inc(v_snd_330_);
lean_inc(v_fst_329_);
v_isSharedCheck_363_ = !lean_is_exclusive(v_snd_319_);
if (v_isSharedCheck_363_ == 0)
{
lean_object* v_unused_364_; lean_object* v_unused_365_; 
v_unused_364_ = lean_ctor_get(v_snd_319_, 1);
lean_dec(v_unused_364_);
v_unused_365_ = lean_ctor_get(v_snd_319_, 0);
lean_dec(v_unused_365_);
v___x_345_ = v_snd_319_;
v_isShared_346_ = v_isSharedCheck_363_;
goto v_resetjp_344_;
}
else
{
lean_dec(v_snd_319_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_363_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(45u);
v___x_348_ = lean_nat_dec_eq(v_head_340_, v___x_347_);
if (v___x_348_ == 0)
{
lean_del_object(v___x_345_);
goto v___jp_331_;
}
else
{
lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_360_; 
lean_inc(v_tail_341_);
lean_del_object(v___x_327_);
lean_del_object(v___x_323_);
v_isSharedCheck_360_ = !lean_is_exclusive(v_head_320_);
if (v_isSharedCheck_360_ == 0)
{
lean_object* v_unused_361_; lean_object* v_unused_362_; 
v_unused_361_ = lean_ctor_get(v_head_320_, 1);
lean_dec(v_unused_361_);
v_unused_362_ = lean_ctor_get(v_head_320_, 0);
lean_dec(v_unused_362_);
v___x_350_ = v_head_320_;
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
else
{
lean_dec(v_head_320_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v_fst_329_);
lean_ctor_set(v___x_350_, 0, v_tail_341_);
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_tail_341_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_fst_329_);
v___x_353_ = v_reuseFailAlloc_359_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_355_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 0, v___x_353_);
v___x_355_ = v___x_345_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_snd_330_);
v___x_355_ = v_reuseFailAlloc_358_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_356_; 
v___x_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_356_, 0, v_fst_325_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
v_x_317_ = v___x_356_;
v_x_318_ = v_tail_321_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_374_; 
lean_inc(v_tail_341_);
lean_del_object(v___x_327_);
lean_del_object(v___x_323_);
v_isSharedCheck_374_ = !lean_is_exclusive(v_head_320_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; lean_object* v_unused_376_; 
v_unused_375_ = lean_ctor_get(v_head_320_, 1);
lean_dec(v_unused_375_);
v_unused_376_ = lean_ctor_get(v_head_320_, 0);
lean_dec(v_unused_376_);
v___x_367_ = v_head_320_;
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
else
{
lean_dec(v_head_320_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v_fst_325_);
lean_ctor_set(v___x_367_, 0, v_tail_341_);
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_tail_341_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_fst_325_);
v___x_370_ = v_reuseFailAlloc_373_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_371_; 
v___x_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set(v___x_371_, 1, v_snd_319_);
v_x_317_ = v___x_371_;
v_x_318_ = v_tail_321_;
goto _start;
}
}
}
}
else
{
lean_inc(v_snd_330_);
lean_inc(v_fst_329_);
lean_dec(v_snd_319_);
goto v___jp_331_;
}
v___jp_331_:
{
lean_object* v___x_333_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_snd_330_);
v___x_333_ = v___x_323_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_head_320_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_snd_330_);
v___x_333_ = v_reuseFailAlloc_339_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
lean_object* v___x_335_; 
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v___x_333_);
lean_ctor_set(v___x_327_, 0, v_fst_329_);
v___x_335_ = v___x_327_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_fst_329_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v___x_333_);
v___x_335_ = v_reuseFailAlloc_338_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_336_; 
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v_fst_325_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
v_x_317_ = v___x_336_;
v_x_318_ = v_tail_321_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(lean_object* v_needle_380_, lean_object* v_x_381_){
_start:
{
if (lean_obj_tag(v_x_381_) == 0)
{
uint8_t v___x_382_; 
lean_dec(v_needle_380_);
v___x_382_ = 0;
return v___x_382_;
}
else
{
lean_object* v_head_383_; lean_object* v_tail_384_; uint8_t v___x_385_; 
v_head_383_ = lean_ctor_get(v_x_381_, 0);
lean_inc(v_head_383_);
v_tail_384_ = lean_ctor_get(v_x_381_, 1);
lean_inc(v_tail_384_);
lean_dec_ref_known(v_x_381_, 2);
lean_inc(v_needle_380_);
v___x_385_ = lp_lean_x2dftml_LeanFtml_ciBytesEq(v_head_383_, v_needle_380_);
if (v___x_385_ == 0)
{
v_x_381_ = v_tail_384_;
goto _start;
}
else
{
lean_dec(v_tail_384_);
lean_dec(v_needle_380_);
return v___x_385_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0___boxed(lean_object* v_needle_387_, lean_object* v_x_388_){
_start:
{
uint8_t v_res_389_; lean_object* v_r_390_; 
v_res_389_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(v_needle_387_, v_x_388_);
v_r_390_ = lean_box(v_res_389_);
return v_r_390_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2(lean_object* v_tags_391_, lean_object* v_x_392_){
_start:
{
if (lean_obj_tag(v_x_392_) == 0)
{
uint8_t v___x_393_; 
lean_dec(v_tags_391_);
v___x_393_ = 1;
return v___x_393_;
}
else
{
lean_object* v_head_394_; lean_object* v_tail_395_; uint8_t v___x_396_; 
v_head_394_ = lean_ctor_get(v_x_392_, 0);
lean_inc(v_head_394_);
v_tail_395_ = lean_ctor_get(v_x_392_, 1);
lean_inc(v_tail_395_);
lean_dec_ref_known(v_x_392_, 2);
lean_inc(v_tags_391_);
v___x_396_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(v_head_394_, v_tags_391_);
if (v___x_396_ == 0)
{
lean_dec(v_tail_395_);
lean_dec(v_tags_391_);
return v___x_396_;
}
else
{
v_x_392_ = v_tail_395_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2___boxed(lean_object* v_tags_398_, lean_object* v_x_399_){
_start:
{
uint8_t v_res_400_; lean_object* v_r_401_; 
v_res_400_ = lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2(v_tags_398_, v_x_399_);
v_r_401_ = lean_box(v_res_400_);
return v_r_401_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(lean_object* v_tags_402_, lean_object* v_x_403_){
_start:
{
if (lean_obj_tag(v_x_403_) == 0)
{
uint8_t v___x_404_; 
lean_dec(v_tags_402_);
v___x_404_ = 0;
return v___x_404_;
}
else
{
lean_object* v_head_405_; lean_object* v_tail_406_; uint8_t v___x_407_; 
v_head_405_ = lean_ctor_get(v_x_403_, 0);
lean_inc(v_head_405_);
v_tail_406_ = lean_ctor_get(v_x_403_, 1);
lean_inc(v_tail_406_);
lean_dec_ref_known(v_x_403_, 2);
lean_inc(v_tags_402_);
v___x_407_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(v_head_405_, v_tags_402_);
if (v___x_407_ == 0)
{
v_x_403_ = v_tail_406_;
goto _start;
}
else
{
lean_dec(v_tail_406_);
lean_dec(v_tags_402_);
return v___x_407_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3___boxed(lean_object* v_tags_409_, lean_object* v_x_410_){
_start:
{
uint8_t v_res_411_; lean_object* v_r_412_; 
v_res_411_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(v_tags_409_, v_x_410_);
v_r_412_ = lean_box(v_res_411_);
return v_r_412_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iftagsGate(lean_object* v_tags_418_, lean_object* v_spec_419_){
_start:
{
lean_object* v___y_421_; 
if (lean_obj_tag(v_spec_419_) == 0)
{
lean_object* v___x_435_; 
v___x_435_ = lean_box(0);
v___y_421_ = v___x_435_;
goto v___jp_420_;
}
else
{
lean_object* v_val_436_; 
v_val_436_ = lean_ctor_get(v_spec_419_, 0);
v___y_421_ = v_val_436_;
goto v___jp_420_;
}
v___jp_420_:
{
lean_object* v___x_422_; lean_object* v_toks_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v_snd_426_; lean_object* v_fst_427_; lean_object* v_fst_428_; lean_object* v_snd_429_; uint8_t v___x_430_; 
v___x_422_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_421_);
v_toks_423_ = lp_lean_x2dftml_LeanFtml_splitSpec(v___x_422_);
v___x_424_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsGate___closed__1));
v___x_425_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_iftagsGate_spec__1(v___x_424_, v_toks_423_);
v_snd_426_ = lean_ctor_get(v___x_425_, 1);
lean_inc(v_snd_426_);
v_fst_427_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_fst_427_);
lean_dec_ref(v___x_425_);
v_fst_428_ = lean_ctor_get(v_snd_426_, 0);
lean_inc(v_fst_428_);
v_snd_429_ = lean_ctor_get(v_snd_426_, 1);
lean_inc(v_snd_429_);
lean_dec(v_snd_426_);
lean_inc(v_tags_418_);
v___x_430_ = lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2(v_tags_418_, v_fst_427_);
if (v___x_430_ == 0)
{
lean_dec(v_snd_429_);
lean_dec(v_fst_428_);
lean_dec(v_tags_418_);
return v___x_430_;
}
else
{
uint8_t v___x_431_; 
lean_inc(v_tags_418_);
v___x_431_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(v_tags_418_, v_fst_428_);
if (v___x_431_ == 0)
{
uint8_t v___x_432_; 
v___x_432_ = l_List_isEmpty___redArg(v_snd_429_);
if (v___x_432_ == 0)
{
uint8_t v___x_433_; 
v___x_433_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(v_tags_418_, v_snd_429_);
return v___x_433_;
}
else
{
lean_dec(v_snd_429_);
lean_dec(v_tags_418_);
return v___x_430_;
}
}
else
{
uint8_t v___x_434_; 
lean_dec(v_snd_429_);
lean_dec(v_tags_418_);
v___x_434_ = 0;
return v___x_434_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsGate___boxed(lean_object* v_tags_437_, lean_object* v_spec_438_){
_start:
{
uint8_t v_res_439_; lean_object* v_r_440_; 
v_res_439_ = lp_lean_x2dftml_LeanFtml_iftagsGate(v_tags_437_, v_spec_438_);
lean_dec(v_spec_438_);
v_r_440_ = lean_box(v_res_439_);
return v_r_440_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(lean_object* v_src_441_, lean_object* v_snd_442_, lean_object* v_a_443_, lean_object* v_a_444_){
_start:
{
if (lean_obj_tag(v_a_443_) == 0)
{
lean_object* v___x_445_; 
lean_dec(v_src_441_);
v___x_445_ = l_List_reverse___redArg(v_a_444_);
return v___x_445_;
}
else
{
lean_object* v_head_446_; lean_object* v_tail_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_470_; 
v_head_446_ = lean_ctor_get(v_a_443_, 0);
v_tail_447_ = lean_ctor_get(v_a_443_, 1);
v_isSharedCheck_470_ = !lean_is_exclusive(v_a_443_);
if (v_isSharedCheck_470_ == 0)
{
v___x_449_ = v_a_443_;
v_isShared_450_ = v_isSharedCheck_470_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_tail_447_);
lean_inc(v_head_446_);
lean_dec(v_a_443_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_470_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v_fst_451_; lean_object* v_snd_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_469_; 
v_fst_451_ = lean_ctor_get(v_head_446_, 0);
v_snd_452_ = lean_ctor_get(v_head_446_, 1);
v_isSharedCheck_469_ = !lean_is_exclusive(v_head_446_);
if (v_isSharedCheck_469_ == 0)
{
v___x_454_ = v_head_446_;
v_isShared_455_ = v_isSharedCheck_469_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_snd_452_);
lean_inc(v_fst_451_);
lean_dec(v_head_446_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_469_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_456_ = l_List_lengthTR___redArg(v_src_441_);
v___x_457_ = l_List_lengthTR___redArg(v_snd_442_);
v___x_458_ = lean_nat_sub(v___x_456_, v___x_457_);
lean_dec(v___x_457_);
lean_dec(v___x_456_);
v___x_459_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_src_441_);
v___x_460_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_441_, v_src_441_, v___x_458_, v___x_459_);
v___x_461_ = l_List_appendTR___redArg(v___x_460_, v_fst_451_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_461_);
v___x_463_ = v___x_454_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_461_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_snd_452_);
v___x_463_ = v_reuseFailAlloc_468_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_465_; 
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 1, v_a_444_);
lean_ctor_set(v___x_449_, 0, v___x_463_);
v___x_465_ = v___x_449_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_a_444_);
v___x_465_ = v_reuseFailAlloc_467_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
v_a_443_ = v_tail_447_;
v_a_444_ = v___x_465_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4___boxed(lean_object* v_src_471_, lean_object* v_snd_472_, lean_object* v_a_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_src_471_, v_snd_472_, v_a_473_, v_a_474_);
lean_dec(v_snd_472_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(lean_object* v_head_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
if (lean_obj_tag(v_a_477_) == 0)
{
lean_object* v___x_479_; 
lean_dec(v_head_476_);
v___x_479_ = l_List_reverse___redArg(v_a_478_);
return v___x_479_;
}
else
{
lean_object* v_head_480_; lean_object* v_tail_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_499_; 
v_head_480_ = lean_ctor_get(v_a_477_, 0);
v_tail_481_ = lean_ctor_get(v_a_477_, 1);
v_isSharedCheck_499_ = !lean_is_exclusive(v_a_477_);
if (v_isSharedCheck_499_ == 0)
{
v___x_483_ = v_a_477_;
v_isShared_484_ = v_isSharedCheck_499_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_tail_481_);
lean_inc(v_head_480_);
lean_dec(v_a_477_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_499_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v_fst_485_; lean_object* v_snd_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_498_; 
v_fst_485_ = lean_ctor_get(v_head_480_, 0);
v_snd_486_ = lean_ctor_get(v_head_480_, 1);
v_isSharedCheck_498_ = !lean_is_exclusive(v_head_480_);
if (v_isSharedCheck_498_ == 0)
{
v___x_488_ = v_head_480_;
v_isShared_489_ = v_isSharedCheck_498_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_snd_486_);
lean_inc(v_fst_485_);
lean_dec(v_head_480_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_498_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
lean_inc(v_head_476_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 1, v_fst_485_);
lean_ctor_set(v___x_483_, 0, v_head_476_);
v___x_491_ = v___x_483_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_head_476_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_fst_485_);
v___x_491_ = v_reuseFailAlloc_497_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_493_; 
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 0, v___x_491_);
v___x_493_ = v___x_488_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_491_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_snd_486_);
v___x_493_ = v_reuseFailAlloc_496_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_494_; 
v___x_494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
lean_ctor_set(v___x_494_, 1, v_a_478_);
v_a_477_ = v_tail_481_;
v_a_478_ = v___x_494_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsPattern_spec__0(lean_object* v_fst_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
if (lean_obj_tag(v_a_501_) == 0)
{
lean_object* v___x_503_; 
lean_dec(v_fst_500_);
v___x_503_ = l_List_reverse___redArg(v_a_502_);
return v___x_503_;
}
else
{
lean_object* v_head_504_; lean_object* v_tail_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_514_; 
v_head_504_ = lean_ctor_get(v_a_501_, 0);
v_tail_505_ = lean_ctor_get(v_a_501_, 1);
v_isSharedCheck_514_ = !lean_is_exclusive(v_a_501_);
if (v_isSharedCheck_514_ == 0)
{
v___x_507_ = v_a_501_;
v_isShared_508_ = v_isSharedCheck_514_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_tail_505_);
lean_inc(v_head_504_);
lean_dec(v_a_501_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_514_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; lean_object* v___x_511_; 
lean_inc(v_fst_500_);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v_fst_500_);
lean_ctor_set(v___x_509_, 1, v_head_504_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v_a_502_);
lean_ctor_set(v___x_507_, 0, v___x_509_);
v___x_511_ = v___x_507_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_a_502_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
v_a_501_ = v_tail_505_;
v_a_502_ = v___x_511_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(uint8_t v___x_515_, lean_object* v_l_516_, lean_object* v_a_517_, lean_object* v_a_518_){
_start:
{
if (lean_obj_tag(v_a_517_) == 0)
{
lean_dec_ref(v_a_518_);
lean_inc(v_l_516_);
return v_l_516_;
}
else
{
lean_object* v_head_519_; lean_object* v_tail_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v_head_519_ = lean_ctor_get(v_a_517_, 0);
lean_inc(v_head_519_);
v_tail_520_ = lean_ctor_get(v_a_517_, 1);
lean_inc(v_tail_520_);
lean_dec_ref_known(v_a_517_, 2);
v___x_521_ = lean_unsigned_to_nat(93u);
v___x_522_ = lean_nat_dec_eq(v_head_519_, v___x_521_);
if (v___x_522_ == 0)
{
if (v___x_515_ == 0)
{
lean_object* v___x_523_; 
lean_dec(v_tail_520_);
lean_dec(v_head_519_);
v___x_523_ = lean_array_to_list(v_a_518_);
return v___x_523_;
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_array_push(v_a_518_, v_head_519_);
v_a_517_ = v_tail_520_;
v_a_518_ = v___x_524_;
goto _start;
}
}
else
{
lean_object* v___x_526_; 
lean_dec(v_tail_520_);
lean_dec(v_head_519_);
v___x_526_ = lean_array_to_list(v_a_518_);
return v___x_526_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2___boxed(lean_object* v___x_527_, lean_object* v_l_528_, lean_object* v_a_529_, lean_object* v_a_530_){
_start:
{
uint8_t v___x_1163__boxed_531_; lean_object* v_res_532_; 
v___x_1163__boxed_531_ = lean_unbox(v___x_527_);
v_res_532_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(v___x_1163__boxed_531_, v_l_528_, v_a_529_, v_a_530_);
lean_dec(v_l_528_);
return v_res_532_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__0));
v___x_535_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern(lean_object* v_src_538_, lean_object* v_x_539_){
_start:
{
lean_object* v_zero_540_; uint8_t v_isZero_541_; 
v_zero_540_ = lean_unsigned_to_nat(0u);
v_isZero_541_ = lean_nat_dec_eq(v_x_539_, v_zero_540_);
if (v_isZero_541_ == 1)
{
lean_object* v___x_542_; 
lean_dec(v_src_538_);
v___x_542_ = lean_box(0);
return v___x_542_;
}
else
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1, &lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1);
v___x_544_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_543_, v_src_538_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v___x_545_; 
v___x_545_ = lean_box(0);
return v___x_545_;
}
else
{
lean_object* v_val_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_628_; 
v_val_546_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_628_ == 0)
{
v___x_548_ = v___x_544_;
v_isShared_549_ = v_isSharedCheck_628_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_val_546_);
lean_dec(v___x_544_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_628_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v_one_550_; lean_object* v_n_551_; lean_object* v___y_553_; lean_object* v___y_554_; lean_object* v___y_559_; lean_object* v___y_562_; lean_object* v___y_565_; 
v_one_550_ = lean_unsigned_to_nat(1u);
v_n_551_ = lean_nat_sub(v_x_539_, v_one_550_);
if (lean_obj_tag(v_val_546_) == 0)
{
lean_object* v___x_589_; 
lean_del_object(v___x_548_);
v___x_589_ = lean_box(0);
v___y_565_ = v___x_589_;
goto v___jp_564_;
}
else
{
lean_object* v_head_590_; lean_object* v_tail_591_; uint8_t v___x_592_; 
v_head_590_ = lean_ctor_get(v_val_546_, 0);
v_tail_591_ = lean_ctor_get(v_val_546_, 1);
v___x_592_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_590_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; 
lean_del_object(v___x_548_);
v___x_593_ = lean_box(0);
v___y_565_ = v___x_593_;
goto v___jp_564_;
}
else
{
lean_object* v___x_594_; lean_object* v_run_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_594_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_tail_591_);
v_run_595_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(v___x_592_, v_tail_591_, v_tail_591_, v___x_594_);
v___x_596_ = l_List_lengthTR___redArg(v_run_595_);
v___x_597_ = l_List_drop___redArg(v___x_596_, v_tail_591_);
if (lean_obj_tag(v___x_597_) == 1)
{
lean_object* v_head_598_; lean_object* v_tail_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_626_; 
v_head_598_ = lean_ctor_get(v___x_597_, 0);
v_tail_599_ = lean_ctor_get(v___x_597_, 1);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_626_ == 0)
{
v___x_601_ = v___x_597_;
v_isShared_602_ = v_isSharedCheck_626_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_tail_599_);
lean_inc(v_head_598_);
lean_dec(v___x_597_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_626_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = lean_unsigned_to_nat(93u);
v___x_604_ = lean_nat_dec_eq(v_head_598_, v___x_603_);
lean_dec(v_head_598_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
lean_del_object(v___x_601_);
lean_dec(v_tail_599_);
lean_dec(v_run_595_);
lean_del_object(v___x_548_);
v___x_605_ = lean_box(0);
v___y_565_ = v___x_605_;
goto v___jp_564_;
}
else
{
if (lean_obj_tag(v_tail_599_) == 1)
{
lean_object* v_head_606_; lean_object* v_tail_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_624_; 
v_head_606_ = lean_ctor_get(v_tail_599_, 0);
v_tail_607_ = lean_ctor_get(v_tail_599_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_tail_599_);
if (v_isSharedCheck_624_ == 0)
{
v___x_609_ = v_tail_599_;
v_isShared_610_ = v_isSharedCheck_624_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_tail_607_);
lean_inc(v_head_606_);
lean_dec(v_tail_599_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_624_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
uint8_t v___x_611_; 
v___x_611_ = lean_nat_dec_eq(v_head_606_, v___x_603_);
lean_dec(v_head_606_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; 
lean_del_object(v___x_609_);
lean_dec(v_tail_607_);
lean_del_object(v___x_601_);
lean_dec(v_run_595_);
lean_del_object(v___x_548_);
v___x_612_ = lean_box(0);
v___y_565_ = v___x_612_;
goto v___jp_564_;
}
else
{
lean_object* v___x_614_; 
lean_inc(v_head_590_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 1, v_run_595_);
lean_ctor_set(v___x_609_, 0, v_head_590_);
v___x_614_ = v___x_609_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_head_590_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_run_595_);
v___x_614_ = v_reuseFailAlloc_623_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_object* v___x_616_; 
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_614_);
v___x_616_ = v___x_548_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_614_);
v___x_616_ = v_reuseFailAlloc_622_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v_tail_607_);
v___x_618_ = lean_box(0);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v___x_618_);
lean_ctor_set(v___x_601_, 0, v___x_617_);
v___x_620_ = v___x_601_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_617_);
lean_ctor_set(v_reuseFailAlloc_621_, 1, v___x_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
v___y_565_ = v___x_620_;
goto v___jp_564_;
}
}
}
}
}
}
else
{
lean_object* v___x_625_; 
lean_del_object(v___x_601_);
lean_dec(v_tail_599_);
lean_dec(v_run_595_);
lean_del_object(v___x_548_);
v___x_625_ = lean_box(0);
v___y_565_ = v___x_625_;
goto v___jp_564_;
}
}
}
}
else
{
lean_object* v___x_627_; 
lean_dec(v___x_597_);
lean_dec(v_run_595_);
lean_del_object(v___x_548_);
v___x_627_ = lean_box(0);
v___y_565_ = v___x_627_;
goto v___jp_564_;
}
}
}
v___jp_552_:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_555_ = l_List_appendTR___redArg(v___y_553_, v___y_554_);
v___x_556_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__2));
v___x_557_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1(v_n_551_, v___x_555_, v___x_556_);
lean_dec(v_n_551_);
return v___x_557_;
}
v___jp_558_:
{
lean_object* v___x_560_; 
v___x_560_ = lean_box(0);
v___y_553_ = v___y_559_;
v___y_554_ = v___x_560_;
goto v___jp_552_;
}
v___jp_561_:
{
lean_object* v___x_563_; 
v___x_563_ = lean_box(0);
v___y_553_ = v___y_562_;
v___y_554_ = v___x_563_;
goto v___jp_552_;
}
v___jp_564_:
{
if (lean_obj_tag(v_val_546_) == 1)
{
lean_object* v_head_566_; lean_object* v_tail_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_588_; 
v_head_566_ = lean_ctor_get(v_val_546_, 0);
v_tail_567_ = lean_ctor_get(v_val_546_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v_val_546_);
if (v_isSharedCheck_588_ == 0)
{
v___x_569_ = v_val_546_;
v_isShared_570_ = v_isSharedCheck_588_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_tail_567_);
lean_inc(v_head_566_);
lean_dec(v_val_546_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_588_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_unsigned_to_nat(93u);
v___x_572_ = lean_nat_dec_eq(v_head_566_, v___x_571_);
lean_dec(v_head_566_);
if (v___x_572_ == 0)
{
lean_del_object(v___x_569_);
lean_dec(v_tail_567_);
v___y_562_ = v___y_565_;
goto v___jp_561_;
}
else
{
if (lean_obj_tag(v_tail_567_) == 1)
{
lean_object* v_head_573_; lean_object* v_tail_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_587_; 
v_head_573_ = lean_ctor_get(v_tail_567_, 0);
v_tail_574_ = lean_ctor_get(v_tail_567_, 1);
v_isSharedCheck_587_ = !lean_is_exclusive(v_tail_567_);
if (v_isSharedCheck_587_ == 0)
{
v___x_576_ = v_tail_567_;
v_isShared_577_ = v_isSharedCheck_587_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_tail_574_);
lean_inc(v_head_573_);
lean_dec(v_tail_567_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_587_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
uint8_t v___x_578_; 
v___x_578_ = lean_nat_dec_eq(v_head_573_, v___x_571_);
lean_dec(v_head_573_);
if (v___x_578_ == 0)
{
lean_del_object(v___x_576_);
lean_dec(v_tail_574_);
lean_del_object(v___x_569_);
v___y_559_ = v___y_565_;
goto v___jp_558_;
}
else
{
lean_object* v___x_579_; lean_object* v___x_581_; 
v___x_579_ = lean_box(0);
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 0);
lean_ctor_set(v___x_569_, 1, v_tail_574_);
lean_ctor_set(v___x_569_, 0, v___x_579_);
v___x_581_ = v___x_569_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_579_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v_tail_574_);
v___x_581_ = v_reuseFailAlloc_586_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_582_ = lean_box(0);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 1, v___x_582_);
lean_ctor_set(v___x_576_, 0, v___x_581_);
v___x_584_ = v___x_576_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
v___y_553_ = v___y_565_;
v___y_554_ = v___x_584_;
goto v___jp_552_;
}
}
}
}
}
else
{
lean_del_object(v___x_569_);
lean_dec(v_tail_567_);
v___y_559_ = v___y_565_;
goto v___jp_558_;
}
}
}
}
else
{
lean_dec(v_val_546_);
v___y_562_ = v___y_565_;
goto v___jp_561_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5(lean_object* v_n_631_, lean_object* v_src_632_, lean_object* v_a_633_, lean_object* v_a_634_){
_start:
{
if (lean_obj_tag(v_a_633_) == 0)
{
lean_object* v___x_635_; 
lean_dec(v_src_632_);
v___x_635_ = lean_array_to_list(v_a_634_);
return v___x_635_;
}
else
{
lean_object* v_head_636_; lean_object* v_snd_637_; lean_object* v_tail_638_; lean_object* v_snd_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_head_636_ = lean_ctor_get(v_a_633_, 0);
v_snd_637_ = lean_ctor_get(v_head_636_, 1);
lean_inc(v_snd_637_);
v_tail_638_ = lean_ctor_get(v_a_633_, 1);
lean_inc(v_tail_638_);
lean_dec_ref_known(v_a_633_, 2);
v_snd_639_ = lean_ctor_get(v_snd_637_, 1);
lean_inc_n(v_snd_639_, 2);
lean_dec(v_snd_637_);
v___x_640_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_snd_639_, v_n_631_);
v___x_641_ = lean_box(0);
lean_inc(v_src_632_);
v___x_642_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_src_632_, v_snd_639_, v___x_640_, v___x_641_);
lean_dec(v_snd_639_);
v___x_643_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_634_, v___x_642_);
v_a_633_ = v_tail_638_;
v_a_634_ = v___x_643_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5(lean_object* v_src_645_, lean_object* v_n_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
if (lean_obj_tag(v_a_647_) == 0)
{
lean_object* v___x_649_; 
lean_dec(v_src_645_);
v___x_649_ = lean_array_to_list(v_a_648_);
return v___x_649_;
}
else
{
lean_object* v_head_650_; lean_object* v_snd_651_; lean_object* v_tail_652_; lean_object* v_snd_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_head_650_ = lean_ctor_get(v_a_647_, 0);
v_snd_651_ = lean_ctor_get(v_head_650_, 1);
lean_inc(v_snd_651_);
v_tail_652_ = lean_ctor_get(v_a_647_, 1);
lean_inc(v_tail_652_);
lean_dec_ref_known(v_a_647_, 2);
v_snd_653_ = lean_ctor_get(v_snd_651_, 1);
lean_inc_n(v_snd_653_, 2);
lean_dec(v_snd_651_);
v___x_654_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_snd_653_, v_n_646_);
v___x_655_ = lean_box(0);
lean_inc(v_src_645_);
v___x_656_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_src_645_, v_snd_653_, v___x_654_, v___x_655_);
lean_dec(v_snd_653_);
v___x_657_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_648_, v___x_656_);
v___x_658_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5(v_n_646_, v_src_645_, v_tail_652_, v___x_657_);
return v___x_658_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2(void){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsBody___closed__1));
v___x_661_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody(lean_object* v_src_662_, lean_object* v_x_663_){
_start:
{
lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_667_; lean_object* v_zero_670_; uint8_t v_isZero_671_; 
v_zero_670_ = lean_unsigned_to_nat(0u);
v_isZero_671_ = lean_nat_dec_eq(v_x_663_, v_zero_670_);
if (v_isZero_671_ == 1)
{
lean_object* v___x_672_; 
lean_dec(v_src_662_);
v___x_672_ = lean_box(0);
return v___x_672_;
}
else
{
lean_object* v_one_673_; lean_object* v_n_674_; lean_object* v___y_676_; lean_object* v___x_686_; lean_object* v___x_687_; 
v_one_673_ = lean_unsigned_to_nat(1u);
v_n_674_ = lean_nat_sub(v_x_663_, v_one_673_);
v___x_686_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2, &lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2);
lean_inc(v_src_662_);
v___x_687_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_686_, v_src_662_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v___x_688_; 
v___x_688_ = lean_box(0);
v___y_676_ = v___x_688_;
goto v___jp_675_;
}
else
{
lean_object* v_val_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_val_689_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_val_689_);
lean_dec_ref_known(v___x_687_, 1);
v___x_690_ = lean_box(0);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
lean_ctor_set(v___x_691_, 1, v_val_689_);
v___x_692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
lean_ctor_set(v___x_692_, 1, v___x_690_);
v___y_676_ = v___x_692_;
goto v___jp_675_;
}
v___jp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v_recs_679_; 
lean_inc_n(v_src_662_, 2);
v___x_677_ = lp_lean_x2dftml_LeanFtml_iftagsPattern(v_src_662_, v_n_674_);
v___x_678_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsBody___closed__0));
v_recs_679_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5(v_src_662_, v_n_674_, v___x_677_, v___x_678_);
if (lean_obj_tag(v_src_662_) == 0)
{
lean_object* v___x_680_; 
lean_dec(v_n_674_);
v___x_680_ = lean_box(0);
v___y_665_ = v___y_676_;
v___y_666_ = v_recs_679_;
v___y_667_ = v___x_680_;
goto v___jp_664_;
}
else
{
lean_object* v_head_681_; lean_object* v_tail_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_head_681_ = lean_ctor_get(v_src_662_, 0);
lean_inc(v_head_681_);
v_tail_682_ = lean_ctor_get(v_src_662_, 1);
lean_inc(v_tail_682_);
lean_dec_ref_known(v_src_662_, 2);
v___x_683_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_tail_682_, v_n_674_);
lean_dec(v_n_674_);
v___x_684_ = lean_box(0);
v___x_685_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(v_head_681_, v___x_683_, v___x_684_);
v___y_665_ = v___y_676_;
v___y_666_ = v_recs_679_;
v___y_667_ = v___x_685_;
goto v___jp_664_;
}
}
}
v___jp_664_:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = l_List_appendTR___redArg(v___y_665_, v___y_666_);
v___x_669_ = l_List_appendTR___redArg(v___x_668_, v___y_667_);
return v___x_669_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1(lean_object* v_n_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
if (lean_obj_tag(v_a_694_) == 0)
{
lean_object* v___x_696_; 
v___x_696_ = lean_array_to_list(v_a_695_);
return v___x_696_;
}
else
{
lean_object* v_head_697_; lean_object* v_tail_698_; lean_object* v_fst_699_; lean_object* v_snd_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v_head_697_ = lean_ctor_get(v_a_694_, 0);
lean_inc(v_head_697_);
v_tail_698_ = lean_ctor_get(v_a_694_, 1);
lean_inc(v_tail_698_);
lean_dec_ref_known(v_a_694_, 2);
v_fst_699_ = lean_ctor_get(v_head_697_, 0);
lean_inc(v_fst_699_);
v_snd_700_ = lean_ctor_get(v_head_697_, 1);
lean_inc(v_snd_700_);
lean_dec(v_head_697_);
v___x_701_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_snd_700_, v_n_693_);
v___x_702_ = lean_box(0);
v___x_703_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsPattern_spec__0(v_fst_699_, v___x_701_, v___x_702_);
v___x_704_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_695_, v___x_703_);
v_a_694_ = v_tail_698_;
v_a_695_ = v___x_704_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1___boxed(lean_object* v_n_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1(v_n_706_, v_a_707_, v_a_708_);
lean_dec(v_n_706_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5___boxed(lean_object* v_src_710_, lean_object* v_n_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5(v_src_710_, v_n_711_, v_a_712_, v_a_713_);
lean_dec(v_n_711_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5___boxed(lean_object* v_n_715_, lean_object* v_src_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5(v_n_715_, v_src_716_, v_a_717_, v_a_718_);
lean_dec(v_n_715_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody___boxed(lean_object* v_src_720_, lean_object* v_x_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_src_720_, v_x_721_);
lean_dec(v_x_721_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern___boxed(lean_object* v_src_723_, lean_object* v_x_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = lp_lean_x2dftml_LeanFtml_iftagsPattern(v_src_723_, v_x_724_);
lean_dec(v_x_724_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsScan(lean_object* v_tags_726_, lean_object* v_src_727_, lean_object* v_x_728_){
_start:
{
lean_object* v_zero_729_; uint8_t v_isZero_730_; 
v_zero_729_ = lean_unsigned_to_nat(0u);
v_isZero_730_ = lean_nat_dec_eq(v_x_728_, v_zero_729_);
if (v_isZero_730_ == 1)
{
lean_object* v___x_731_; 
lean_dec(v_src_727_);
lean_dec(v_tags_726_);
v___x_731_ = lean_box(0);
return v___x_731_;
}
else
{
if (lean_obj_tag(v_src_727_) == 0)
{
lean_dec(v_tags_726_);
return v_src_727_;
}
else
{
lean_object* v_head_732_; lean_object* v_tail_733_; lean_object* v_one_734_; lean_object* v_n_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v_head_732_ = lean_ctor_get(v_src_727_, 0);
lean_inc(v_head_732_);
v_tail_733_ = lean_ctor_get(v_src_727_, 1);
lean_inc(v_tail_733_);
v_one_734_ = lean_unsigned_to_nat(1u);
v_n_735_ = lean_nat_sub(v_x_728_, v_one_734_);
v___x_736_ = l_List_lengthTR___redArg(v_src_727_);
v___x_737_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_736_);
lean_dec(v___x_736_);
v___x_738_ = lp_lean_x2dftml_LeanFtml_iftagsPattern(v_src_727_, v___x_737_);
lean_dec(v___x_737_);
v___x_739_ = l_List_head_x3f___redArg(v___x_738_);
lean_dec(v___x_738_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = lp_lean_x2dftml_LeanFtml_iftagsScan(v_tags_726_, v_tail_733_, v_n_735_);
lean_dec(v_n_735_);
v___x_741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_741_, 0, v_head_732_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
return v___x_741_;
}
else
{
lean_object* v_val_742_; lean_object* v_snd_743_; lean_object* v_fst_744_; lean_object* v_fst_745_; lean_object* v_snd_746_; lean_object* v___y_748_; uint8_t v___x_751_; 
lean_dec(v_tail_733_);
lean_dec(v_head_732_);
v_val_742_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_val_742_);
lean_dec_ref_known(v___x_739_, 1);
v_snd_743_ = lean_ctor_get(v_val_742_, 1);
lean_inc(v_snd_743_);
v_fst_744_ = lean_ctor_get(v_val_742_, 0);
lean_inc(v_fst_744_);
lean_dec(v_val_742_);
v_fst_745_ = lean_ctor_get(v_snd_743_, 0);
lean_inc(v_fst_745_);
v_snd_746_ = lean_ctor_get(v_snd_743_, 1);
lean_inc(v_snd_746_);
lean_dec(v_snd_743_);
lean_inc(v_tags_726_);
v___x_751_ = lp_lean_x2dftml_LeanFtml_iftagsGate(v_tags_726_, v_fst_744_);
lean_dec(v_fst_744_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; 
lean_dec(v_fst_745_);
v___x_752_ = lean_box(0);
v___y_748_ = v___x_752_;
goto v___jp_747_;
}
else
{
v___y_748_ = v_fst_745_;
goto v___jp_747_;
}
v___jp_747_:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lp_lean_x2dftml_LeanFtml_iftagsScan(v_tags_726_, v_snd_746_, v_n_735_);
lean_dec(v_n_735_);
v___x_750_ = l_List_appendTR___redArg(v___y_748_, v___x_749_);
return v___x_750_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsScan___boxed(lean_object* v_tags_753_, lean_object* v_src_754_, lean_object* v_x_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = lp_lean_x2dftml_LeanFtml_iftagsScan(v_tags_753_, v_src_754_, v_x_755_);
lean_dec(v_x_755_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsRule_spec__0(lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
if (lean_obj_tag(v_a_757_) == 0)
{
lean_object* v___x_759_; 
v___x_759_ = l_List_reverse___redArg(v_a_758_);
return v___x_759_;
}
else
{
lean_object* v_head_760_; lean_object* v_tail_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_771_; 
v_head_760_ = lean_ctor_get(v_a_757_, 0);
v_tail_761_ = lean_ctor_get(v_a_757_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v_a_757_);
if (v_isSharedCheck_771_ == 0)
{
v___x_763_ = v_a_757_;
v_isShared_764_ = v_isSharedCheck_771_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_tail_761_);
lean_inc(v_head_760_);
lean_dec(v_a_757_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_771_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_765_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
v___x_766_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_head_760_, v___x_765_);
lean_dec(v_head_760_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 1, v_a_758_);
lean_ctor_set(v___x_763_, 0, v___x_766_);
v___x_768_ = v___x_763_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_a_758_);
v___x_768_ = v_reuseFailAlloc_770_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
v_a_757_ = v_tail_761_;
v_a_758_ = v___x_768_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsRule___lam__0(lean_object* v_st_772_, lean_object* v_src_773_, lean_object* v_toks_774_){
_start:
{
lean_object* v_doc_775_; lean_object* v_page_776_; lean_object* v_tags_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_790_; 
v_doc_775_ = lean_ctor_get(v_st_772_, 2);
lean_inc_ref(v_doc_775_);
lean_dec_ref(v_st_772_);
v_page_776_ = lean_ctor_get(v_doc_775_, 0);
lean_inc_ref(v_page_776_);
lean_dec_ref(v_doc_775_);
v_tags_777_ = lean_ctor_get(v_page_776_, 1);
v_isSharedCheck_790_ = !lean_is_exclusive(v_page_776_);
if (v_isSharedCheck_790_ == 0)
{
lean_object* v_unused_791_; 
v_unused_791_ = lean_ctor_get(v_page_776_, 0);
lean_dec(v_unused_791_);
v___x_779_ = v_page_776_;
v_isShared_780_ = v_isSharedCheck_790_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_tags_777_);
lean_dec(v_page_776_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_790_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_781_ = lean_box(0);
v___x_782_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsRule_spec__0(v_tags_777_, v___x_781_);
v___x_783_ = l_List_lengthTR___redArg(v_src_773_);
v___x_784_ = lean_unsigned_to_nat(1u);
v___x_785_ = lean_nat_add(v___x_783_, v___x_784_);
lean_dec(v___x_783_);
v___x_786_ = lp_lean_x2dftml_LeanFtml_iftagsScan(v___x_782_, v_src_773_, v___x_785_);
lean_dec(v___x_785_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 1, v_toks_774_);
lean_ctor_set(v___x_779_, 0, v___x_786_);
v___x_788_ = v___x_779_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_toks_774_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsRule(lean_object* v_st_792_){
_start:
{
lean_object* v___f_793_; lean_object* v___x_794_; 
lean_inc_ref(v_st_792_);
v___f_793_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_iftagsRule___lam__0), 3, 1);
lean_closure_set(v___f_793_, 0, v_st_792_);
v___x_794_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_792_, v___f_793_);
return v___x_794_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__0));
v___x_797_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatchAt(lean_object* v_src_807_){
_start:
{
lean_object* v___x_808_; lean_object* v___y_810_; lean_object* v___x_833_; 
v___x_808_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1);
lean_inc(v_src_807_);
v___x_833_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_808_, v_src_807_);
if (lean_obj_tag(v___x_833_) == 0)
{
v___y_810_ = v___x_833_;
goto v___jp_809_;
}
else
{
lean_object* v_val_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v_val_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_val_834_);
lean_dec_ref_known(v___x_833_, 1);
v___x_835_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__4));
v___x_836_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_835_, v_val_834_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v___x_837_; 
v___x_837_ = lean_box(0);
v___y_810_ = v___x_837_;
goto v___jp_809_;
}
else
{
lean_object* v_val_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_851_; 
v_val_838_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_851_ == 0)
{
v___x_840_ = v___x_836_;
v_isShared_841_ = v_isSharedCheck_851_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_val_838_);
lean_dec(v___x_836_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_851_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_849_; 
v___x_842_ = lean_unsigned_to_nat(4u);
v___x_843_ = lean_nat_add(v___x_842_, v_val_838_);
lean_dec(v_val_838_);
v___x_844_ = lean_unsigned_to_nat(3u);
v___x_845_ = lean_nat_add(v___x_843_, v___x_844_);
lean_dec(v___x_843_);
v___x_846_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_src_807_);
v___x_847_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_807_, v_src_807_, v___x_845_, v___x_846_);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 0, v___x_847_);
v___x_849_ = v___x_840_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
v___y_810_ = v___x_849_;
goto v___jp_809_;
}
}
}
}
v___jp_809_:
{
if (lean_obj_tag(v_src_807_) == 1)
{
lean_object* v_head_811_; lean_object* v_tail_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v_head_811_ = lean_ctor_get(v_src_807_, 0);
v_tail_812_ = lean_ctor_get(v_src_807_, 1);
v___x_813_ = lean_unsigned_to_nat(10u);
v___x_814_ = lean_nat_dec_eq(v_head_811_, v___x_813_);
if (v___x_814_ == 0)
{
lean_dec_ref_known(v_src_807_, 2);
return v___y_810_;
}
else
{
lean_object* v___x_815_; 
lean_inc(v_tail_812_);
v___x_815_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_808_, v_tail_812_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_dec_ref_known(v_src_807_, 2);
return v___y_810_;
}
else
{
lean_object* v_val_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_val_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_val_816_);
lean_dec_ref_known(v___x_815_, 1);
v___x_817_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__4));
v___x_818_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_817_, v_val_816_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_dec_ref_known(v_src_807_, 2);
return v___y_810_;
}
else
{
lean_object* v_val_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_832_; 
lean_dec(v___y_810_);
v_val_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_832_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_832_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_val_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_832_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_823_ = lean_unsigned_to_nat(5u);
v___x_824_ = lean_nat_add(v___x_823_, v_val_819_);
lean_dec(v_val_819_);
v___x_825_ = lean_unsigned_to_nat(3u);
v___x_826_ = lean_nat_add(v___x_824_, v___x_825_);
lean_dec(v___x_824_);
v___x_827_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc_ref(v_src_807_);
v___x_828_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_807_, v_src_807_, v___x_826_, v___x_827_);
lean_dec_ref_known(v_src_807_, 2);
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 0, v___x_828_);
v___x_830_ = v___x_821_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
}
}
else
{
lean_dec(v_src_807_);
return v___y_810_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatches_go(lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
lean_object* v_zero_856_; uint8_t v_isZero_857_; 
v_zero_856_ = lean_unsigned_to_nat(0u);
v_isZero_857_ = lean_nat_dec_eq(v_a_854_, v_zero_856_);
if (v_isZero_857_ == 1)
{
lean_object* v___x_858_; 
lean_dec(v_a_854_);
lean_dec(v_a_853_);
lean_dec(v_a_852_);
v___x_858_ = l_List_reverse___redArg(v_a_855_);
return v___x_858_;
}
else
{
if (lean_obj_tag(v_a_852_) == 0)
{
lean_object* v___x_859_; 
lean_dec(v_a_854_);
lean_dec(v_a_853_);
v___x_859_ = l_List_reverse___redArg(v_a_855_);
return v___x_859_;
}
else
{
lean_object* v_tail_860_; lean_object* v_one_861_; lean_object* v_n_862_; lean_object* v___x_863_; 
v_tail_860_ = lean_ctor_get(v_a_852_, 1);
v_one_861_ = lean_unsigned_to_nat(1u);
v_n_862_ = lean_nat_sub(v_a_854_, v_one_861_);
lean_dec(v_a_854_);
lean_inc_ref(v_a_852_);
v___x_863_ = lp_lean_x2dftml_LeanFtml_commentMatchAt(v_a_852_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v___x_864_; 
lean_inc(v_tail_860_);
lean_dec_ref_known(v_a_852_, 2);
v___x_864_ = lean_nat_add(v_a_853_, v_one_861_);
lean_dec(v_a_853_);
v_a_852_ = v_tail_860_;
v_a_853_ = v___x_864_;
v_a_854_ = v_n_862_;
goto _start;
}
else
{
lean_object* v_val_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_878_; 
v_val_866_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_val_866_);
lean_dec_ref_known(v___x_863_, 1);
v___x_867_ = l_List_lengthTR___redArg(v_val_866_);
lean_inc(v___x_867_);
v___x_868_ = l_List_drop___redArg(v___x_867_, v_a_852_);
v_isSharedCheck_878_ = !lean_is_exclusive(v_a_852_);
if (v_isSharedCheck_878_ == 0)
{
lean_object* v_unused_879_; lean_object* v_unused_880_; 
v_unused_879_ = lean_ctor_get(v_a_852_, 1);
lean_dec(v_unused_879_);
v_unused_880_ = lean_ctor_get(v_a_852_, 0);
lean_dec(v_unused_880_);
v___x_870_ = v_a_852_;
v_isShared_871_ = v_isSharedCheck_878_;
goto v_resetjp_869_;
}
else
{
lean_dec(v_a_852_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_878_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_872_ = lean_nat_add(v_a_853_, v___x_867_);
lean_dec(v___x_867_);
v___x_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_873_, 0, v_a_853_);
lean_ctor_set(v___x_873_, 1, v_val_866_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 1, v_a_855_);
lean_ctor_set(v___x_870_, 0, v___x_873_);
v___x_875_ = v___x_870_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_a_855_);
v___x_875_ = v_reuseFailAlloc_877_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
v_a_852_ = v___x_868_;
v_a_853_ = v___x_872_;
v_a_854_ = v_n_862_;
v_a_855_ = v___x_875_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatches(lean_object* v_src_881_){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_882_ = lean_unsigned_to_nat(0u);
v___x_883_ = l_List_lengthTR___redArg(v_src_881_);
v___x_884_ = lean_unsigned_to_nat(1u);
v___x_885_ = lean_nat_add(v___x_883_, v___x_884_);
lean_dec(v___x_883_);
v___x_886_ = lean_box(0);
v___x_887_ = lp_lean_x2dftml_LeanFtml_commentMatches_go(v_src_881_, v___x_882_, v___x_885_, v___x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore_go(lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_){
_start:
{
if (lean_obj_tag(v_a_888_) == 0)
{
lean_dec(v_a_889_);
return v_a_890_;
}
else
{
lean_object* v_head_891_; lean_object* v_tail_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v_head_891_ = lean_ctor_get(v_a_888_, 0);
v_tail_892_ = lean_ctor_get(v_a_888_, 1);
v___x_893_ = lean_unsigned_to_nat(1u);
v___x_894_ = lean_nat_add(v_a_889_, v___x_893_);
lean_dec(v_a_889_);
v___x_895_ = lean_unsigned_to_nat(10u);
v___x_896_ = lean_nat_dec_eq(v_head_891_, v___x_895_);
if (v___x_896_ == 0)
{
v_a_888_ = v_tail_892_;
v_a_889_ = v___x_894_;
goto _start;
}
else
{
lean_dec(v_a_890_);
lean_inc(v___x_894_);
v_a_888_ = v_tail_892_;
v_a_889_ = v___x_894_;
v_a_890_ = v___x_894_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore_go___boxed(lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = lp_lean_x2dftml_LeanFtml_lastNlBefore_go(v_a_899_, v_a_900_, v_a_901_);
lean_dec(v_a_899_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore(lean_object* v_src_903_, lean_object* v_start_904_){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_905_ = lean_unsigned_to_nat(0u);
v___x_906_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_src_903_);
v___x_907_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_903_, v_src_903_, v_start_904_, v___x_906_);
lean_dec(v_src_903_);
v___x_908_ = lp_lean_x2dftml_LeanFtml_lastNlBefore_go(v___x_907_, v___x_905_, v___x_905_);
lean_dec(v___x_907_);
return v___x_908_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(lean_object* v_x_909_){
_start:
{
if (lean_obj_tag(v_x_909_) == 0)
{
uint8_t v___x_910_; 
v___x_910_ = 1;
return v___x_910_;
}
else
{
lean_object* v_head_911_; lean_object* v_tail_912_; lean_object* v___x_913_; uint8_t v___x_914_; 
v_head_911_ = lean_ctor_get(v_x_909_, 0);
v_tail_912_ = lean_ctor_get(v_x_909_, 1);
v___x_913_ = lean_unsigned_to_nat(32u);
v___x_914_ = lean_nat_dec_eq(v_head_911_, v___x_913_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; uint8_t v___x_916_; 
v___x_915_ = lean_unsigned_to_nat(9u);
v___x_916_ = lean_nat_dec_eq(v_head_911_, v___x_915_);
if (v___x_916_ == 0)
{
return v___x_916_;
}
else
{
v_x_909_ = v_tail_912_;
goto _start;
}
}
else
{
v_x_909_ = v_tail_912_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0___boxed(lean_object* v_x_919_){
_start:
{
uint8_t v_res_920_; lean_object* v_r_921_; 
v_res_920_ = lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(v_x_919_);
lean_dec(v_x_919_);
v_r_921_ = lean_box(v_res_920_);
return v_r_921_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1(lean_object* v_src_926_, lean_object* v_x_927_, lean_object* v_x_928_){
_start:
{
if (lean_obj_tag(v_x_928_) == 0)
{
lean_dec(v_src_926_);
return v_x_927_;
}
else
{
lean_object* v_snd_929_; lean_object* v_head_930_; lean_object* v_tail_931_; lean_object* v_fst_932_; lean_object* v_fst_933_; lean_object* v_snd_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_985_; 
v_snd_929_ = lean_ctor_get(v_x_927_, 1);
lean_inc(v_snd_929_);
v_head_930_ = lean_ctor_get(v_x_928_, 0);
lean_inc(v_head_930_);
v_tail_931_ = lean_ctor_get(v_x_928_, 1);
lean_inc(v_tail_931_);
lean_dec_ref_known(v_x_928_, 2);
v_fst_932_ = lean_ctor_get(v_x_927_, 0);
lean_inc(v_fst_932_);
lean_dec_ref(v_x_927_);
v_fst_933_ = lean_ctor_get(v_snd_929_, 0);
v_snd_934_ = lean_ctor_get(v_snd_929_, 1);
v_isSharedCheck_985_ = !lean_is_exclusive(v_snd_929_);
if (v_isSharedCheck_985_ == 0)
{
v___x_936_ = v_snd_929_;
v_isShared_937_ = v_isSharedCheck_985_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_snd_934_);
lean_inc(v_fst_933_);
lean_dec(v_snd_929_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_985_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v_fst_938_; lean_object* v_snd_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_984_; 
v_fst_938_ = lean_ctor_get(v_head_930_, 0);
v_snd_939_ = lean_ctor_get(v_head_930_, 1);
v_isSharedCheck_984_ = !lean_is_exclusive(v_head_930_);
if (v_isSharedCheck_984_ == 0)
{
v___x_941_ = v_head_930_;
v_isShared_942_ = v_isSharedCheck_984_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_snd_939_);
lean_inc(v_fst_938_);
lean_dec(v_head_930_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_984_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v_ls_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_pfx_947_; lean_object* v___x_948_; lean_object* v_endPos_949_; lean_object* v___y_951_; lean_object* v_fst_952_; lean_object* v_snd_953_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___y_970_; lean_object* v___x_980_; 
lean_inc(v_fst_938_);
lean_inc(v_src_926_);
v_ls_943_ = lp_lean_x2dftml_LeanFtml_lastNlBefore(v_src_926_, v_fst_938_);
v___x_944_ = lean_nat_sub(v_fst_938_, v_ls_943_);
lean_inc(v_ls_943_);
v___x_945_ = l_List_drop___redArg(v_ls_943_, v_src_926_);
v___x_946_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v___x_945_);
v_pfx_947_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_945_, v___x_945_, v___x_944_, v___x_946_);
lean_dec(v___x_945_);
v___x_948_ = l_List_lengthTR___redArg(v_snd_939_);
v_endPos_949_ = lean_nat_add(v_fst_938_, v___x_948_);
lean_dec(v___x_948_);
v___x_966_ = lean_box(0);
v___x_967_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__0));
lean_inc(v_endPos_949_);
v___x_968_ = l_List_drop___redArg(v_endPos_949_, v_src_926_);
lean_inc(v___x_968_);
v___x_980_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_967_, v___x_968_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v___x_981_; 
v___x_981_ = l_List_lengthTR___redArg(v_src_926_);
v___y_970_ = v___x_981_;
goto v___jp_969_;
}
else
{
lean_object* v_val_982_; lean_object* v___x_983_; 
v_val_982_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_val_982_);
lean_dec_ref_known(v___x_980_, 1);
v___x_983_ = lean_nat_add(v_endPos_949_, v_val_982_);
lean_dec(v_val_982_);
v___y_970_ = v___x_983_;
goto v___jp_969_;
}
v___jp_950_:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_954_ = lean_nat_sub(v___y_951_, v_snd_934_);
lean_dec(v___y_951_);
v___x_955_ = l_List_drop___redArg(v_snd_934_, v_src_926_);
lean_inc(v___x_955_);
v___x_956_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_955_, v___x_955_, v___x_954_, v___x_946_);
lean_dec(v___x_955_);
v___x_957_ = l_List_appendTR___redArg(v_fst_932_, v___x_956_);
v___x_958_ = l_List_appendTR___redArg(v___x_957_, v_fst_952_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 1, v_endPos_949_);
lean_ctor_set(v___x_941_, 0, v_snd_953_);
v___x_960_ = v___x_941_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_snd_953_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_endPos_949_);
v___x_960_ = v_reuseFailAlloc_965_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
lean_object* v___x_962_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v___x_960_);
lean_ctor_set(v___x_936_, 0, v___x_958_);
v___x_962_ = v___x_936_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v___x_960_);
v___x_962_ = v_reuseFailAlloc_964_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
v_x_927_ = v___x_962_;
v_x_928_ = v_tail_931_;
goto _start;
}
}
}
v___jp_969_:
{
uint8_t v___x_971_; 
v___x_971_ = l_List_isEmpty___redArg(v_pfx_947_);
if (v___x_971_ == 0)
{
uint8_t v___x_972_; 
v___x_972_ = lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(v_pfx_947_);
lean_dec(v_pfx_947_);
if (v___x_972_ == 0)
{
lean_dec(v___y_970_);
lean_dec(v___x_968_);
lean_dec(v_ls_943_);
lean_dec(v_snd_939_);
v___y_951_ = v_fst_938_;
v_fst_952_ = v___x_966_;
v_snd_953_ = v_fst_933_;
goto v___jp_950_;
}
else
{
lean_object* v___x_973_; lean_object* v_tail_974_; uint8_t v___x_975_; 
v___x_973_ = lean_nat_sub(v___y_970_, v_endPos_949_);
lean_dec(v___y_970_);
lean_inc(v___x_968_);
v_tail_974_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_968_, v___x_968_, v___x_973_, v___x_946_);
lean_dec(v___x_968_);
v___x_975_ = lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(v_tail_974_);
lean_dec(v_tail_974_);
if (v___x_975_ == 0)
{
lean_dec(v_ls_943_);
lean_dec(v_snd_939_);
v___y_951_ = v_fst_938_;
v_fst_952_ = v___x_966_;
v_snd_953_ = v_fst_933_;
goto v___jp_950_;
}
else
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v_fst_978_; lean_object* v_snd_979_; 
lean_dec(v_fst_938_);
v___x_976_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__1));
v___x_977_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_976_, v_snd_939_, v_fst_933_);
v_fst_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_fst_978_);
v_snd_979_ = lean_ctor_get(v___x_977_, 1);
lean_inc(v_snd_979_);
lean_dec_ref(v___x_977_);
v___y_951_ = v_ls_943_;
v_fst_952_ = v_fst_978_;
v_snd_953_ = v_snd_979_;
goto v___jp_950_;
}
}
}
else
{
lean_dec(v___y_970_);
lean_dec(v___x_968_);
lean_dec(v_pfx_947_);
lean_dec(v_ls_943_);
lean_dec(v_snd_939_);
v___y_951_ = v_fst_938_;
v_fst_952_ = v___x_966_;
v_snd_953_ = v_fst_933_;
goto v___jp_950_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentRule___lam__0(lean_object* v_src_986_, lean_object* v_toks_987_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1);
lean_inc(v_src_986_);
v___x_989_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_988_, v_src_986_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v___x_990_; 
v___x_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_990_, 0, v_src_986_);
lean_ctor_set(v___x_990_, 1, v_toks_987_);
return v___x_990_;
}
else
{
lean_object* v_cmatches_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v_snd_997_; lean_object* v_fst_998_; lean_object* v_fst_999_; lean_object* v_snd_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1009_; 
lean_dec_ref_known(v___x_989_, 1);
lean_inc_n(v_src_986_, 2);
v_cmatches_991_ = lp_lean_x2dftml_LeanFtml_commentMatches(v_src_986_);
v___x_992_ = lean_box(0);
v___x_993_ = lean_unsigned_to_nat(0u);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v_toks_987_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_992_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1(v_src_986_, v___x_995_, v_cmatches_991_);
v_snd_997_ = lean_ctor_get(v___x_996_, 1);
lean_inc(v_snd_997_);
v_fst_998_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_fst_998_);
lean_dec_ref(v___x_996_);
v_fst_999_ = lean_ctor_get(v_snd_997_, 0);
v_snd_1000_ = lean_ctor_get(v_snd_997_, 1);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_snd_997_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1002_ = v_snd_997_;
v_isShared_1003_ = v_isSharedCheck_1009_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_snd_1000_);
lean_inc(v_fst_999_);
lean_dec(v_snd_997_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1009_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1007_; 
v___x_1004_ = l_List_drop___redArg(v_snd_1000_, v_src_986_);
lean_dec(v_src_986_);
v___x_1005_ = l_List_appendTR___redArg(v_fst_998_, v___x_1004_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 1, v_fst_999_);
lean_ctor_set(v___x_1002_, 0, v___x_1005_);
v___x_1007_ = v___x_1002_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1005_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_fst_999_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentRule(lean_object* v_st_1011_){
_start:
{
lean_object* v___f_1012_; lean_object* v___x_1013_; 
v___f_1012_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_commentRule___closed__0));
v___x_1013_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1011_, v___f_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isSegByte(lean_object* v_b_1014_){
_start:
{
lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1015_ = lean_unsigned_to_nat(32u);
v___x_1016_ = lean_nat_dec_eq(v_b_1014_, v___x_1015_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1017_ = lean_unsigned_to_nat(47u);
v___x_1018_ = lean_nat_dec_eq(v_b_1014_, v___x_1017_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; uint8_t v___x_1020_; 
v___x_1019_ = lean_unsigned_to_nat(34u);
v___x_1020_ = lean_nat_dec_eq(v_b_1014_, v___x_1019_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; uint8_t v___x_1022_; 
v___x_1021_ = lean_unsigned_to_nat(39u);
v___x_1022_ = lean_nat_dec_eq(v_b_1014_, v___x_1021_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; uint8_t v___x_1024_; 
v___x_1023_ = lean_unsigned_to_nat(255u);
v___x_1024_ = lean_nat_dec_eq(v_b_1014_, v___x_1023_);
if (v___x_1024_ == 0)
{
uint8_t v___x_1025_; 
v___x_1025_ = 1;
return v___x_1025_;
}
else
{
return v___x_1022_;
}
}
else
{
return v___x_1020_;
}
}
else
{
return v___x_1018_;
}
}
else
{
return v___x_1016_;
}
}
else
{
uint8_t v___x_1026_; 
v___x_1026_ = 0;
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isSegByte___boxed(lean_object* v_b_1027_){
_start:
{
uint8_t v_res_1028_; lean_object* v_r_1029_; 
v_res_1028_ = lp_lean_x2dftml_LeanFtml_isSegByte(v_b_1027_);
lean_dec(v_b_1027_);
v_r_1029_ = lean_box(v_res_1028_);
return v_r_1029_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isFinalByte(lean_object* v_b_1030_){
_start:
{
lean_object* v___x_1031_; uint8_t v___x_1032_; 
v___x_1031_ = lean_unsigned_to_nat(32u);
v___x_1032_ = lean_nat_dec_eq(v_b_1030_, v___x_1031_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; uint8_t v___x_1034_; 
v___x_1033_ = lean_unsigned_to_nat(9u);
v___x_1034_ = lean_nat_dec_eq(v_b_1030_, v___x_1033_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; uint8_t v___x_1036_; 
v___x_1035_ = lean_unsigned_to_nat(10u);
v___x_1036_ = lean_nat_dec_eq(v_b_1030_, v___x_1035_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; uint8_t v___x_1038_; 
v___x_1037_ = lean_unsigned_to_nat(47u);
v___x_1038_ = lean_nat_dec_eq(v_b_1030_, v___x_1037_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1039_ = lean_unsigned_to_nat(34u);
v___x_1040_ = lean_nat_dec_eq(v_b_1030_, v___x_1039_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; uint8_t v___x_1042_; 
v___x_1041_ = lean_unsigned_to_nat(255u);
v___x_1042_ = lean_nat_dec_eq(v_b_1030_, v___x_1041_);
if (v___x_1042_ == 0)
{
uint8_t v___x_1043_; 
v___x_1043_ = 1;
return v___x_1043_;
}
else
{
return v___x_1040_;
}
}
else
{
return v___x_1038_;
}
}
else
{
return v___x_1036_;
}
}
else
{
return v___x_1034_;
}
}
else
{
return v___x_1032_;
}
}
else
{
uint8_t v___x_1044_; 
v___x_1044_ = 0;
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isFinalByte___boxed(lean_object* v_b_1045_){
_start:
{
uint8_t v_res_1046_; lean_object* v_r_1047_; 
v_res_1046_ = lp_lean_x2dftml_LeanFtml_isFinalByte(v_b_1045_);
lean_dec(v_b_1045_);
v_r_1047_ = lean_box(v_res_1046_);
return v_r_1047_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(lean_object* v_a_1048_, lean_object* v_a_1049_){
_start:
{
if (lean_obj_tag(v_a_1048_) == 0)
{
lean_object* v___x_1050_; 
v___x_1050_ = l_List_reverse___redArg(v_a_1049_);
return v___x_1050_;
}
else
{
lean_object* v_head_1051_; lean_object* v_tail_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1061_; 
v_head_1051_ = lean_ctor_get(v_a_1048_, 0);
v_tail_1052_ = lean_ctor_get(v_a_1048_, 1);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_a_1048_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1054_ = v_a_1048_;
v_isShared_1055_ = v_isSharedCheck_1061_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_tail_1052_);
lean_inc(v_head_1051_);
lean_dec(v_a_1048_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1061_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1056_ = lp_lean_x2dftml_LeanFtml_litBytes(v_head_1051_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v_a_1049_);
lean_ctor_set(v___x_1054_, 0, v___x_1056_);
v___x_1058_ = v___x_1054_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v_a_1049_);
v___x_1058_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
v_a_1048_ = v_tail_1052_;
v_a_1049_ = v___x_1058_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1090_ = lean_box(0);
v___x_1091_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__13));
v___x_1092_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(v___x_1091_, v___x_1090_);
return v___x_1092_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeSchemes(void){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14, &lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0(lean_object* v_l_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_){
_start:
{
if (lean_obj_tag(v_a_1095_) == 0)
{
lean_dec_ref(v_a_1096_);
lean_inc(v_l_1094_);
return v_l_1094_;
}
else
{
lean_object* v_head_1097_; lean_object* v_tail_1098_; uint8_t v___x_1099_; 
v_head_1097_ = lean_ctor_get(v_a_1095_, 0);
lean_inc(v_head_1097_);
v_tail_1098_ = lean_ctor_get(v_a_1095_, 1);
lean_inc(v_tail_1098_);
lean_dec_ref_known(v_a_1095_, 2);
v___x_1099_ = lp_lean_x2dftml_LeanFtml_isSegByte(v_head_1097_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; 
lean_dec(v_tail_1098_);
lean_dec(v_head_1097_);
v___x_1100_ = lean_array_to_list(v_a_1096_);
return v___x_1100_;
}
else
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_array_push(v_a_1096_, v_head_1097_);
v_a_1095_ = v_tail_1098_;
v_a_1096_ = v___x_1101_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0___boxed(lean_object* v_l_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0(v_l_1103_, v_a_1104_, v_a_1105_);
lean_dec(v_l_1103_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segEnds_go(lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v_zero_1111_; uint8_t v_isZero_1112_; 
v_zero_1111_ = lean_unsigned_to_nat(0u);
v_isZero_1112_ = lean_nat_dec_eq(v_a_1110_, v_zero_1111_);
if (v_isZero_1112_ == 1)
{
lean_object* v___x_1113_; 
lean_dec(v_a_1110_);
lean_dec(v_a_1108_);
lean_dec(v_a_1107_);
v___x_1113_ = l_List_reverse___redArg(v_a_1109_);
return v___x_1113_;
}
else
{
lean_object* v___x_1114_; lean_object* v_run_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1114_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_a_1107_);
v_run_1115_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0(v_a_1107_, v_a_1107_, v___x_1114_);
v___x_1116_ = l_List_lengthTR___redArg(v_run_1115_);
lean_dec(v_run_1115_);
lean_inc(v___x_1116_);
v___x_1117_ = l_List_drop___redArg(v___x_1116_, v_a_1107_);
lean_dec(v_a_1107_);
if (lean_obj_tag(v___x_1117_) == 1)
{
lean_object* v_head_1118_; lean_object* v_tail_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1134_; 
v_head_1118_ = lean_ctor_get(v___x_1117_, 0);
v_tail_1119_ = lean_ctor_get(v___x_1117_, 1);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1121_ = v___x_1117_;
v_isShared_1122_ = v_isSharedCheck_1134_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_tail_1119_);
lean_inc(v_head_1118_);
lean_dec(v___x_1117_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1134_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1123_; uint8_t v___x_1124_; 
v___x_1123_ = lean_unsigned_to_nat(47u);
v___x_1124_ = lean_nat_dec_eq(v_head_1118_, v___x_1123_);
lean_dec(v_head_1118_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1125_; 
lean_del_object(v___x_1121_);
lean_dec(v_tail_1119_);
lean_dec(v___x_1116_);
lean_dec(v_a_1110_);
lean_dec(v_a_1108_);
v___x_1125_ = l_List_reverse___redArg(v_a_1109_);
return v___x_1125_;
}
else
{
lean_object* v_one_1126_; lean_object* v_n_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1131_; 
v_one_1126_ = lean_unsigned_to_nat(1u);
v_n_1127_ = lean_nat_sub(v_a_1110_, v_one_1126_);
lean_dec(v_a_1110_);
v___x_1128_ = lean_nat_add(v_a_1108_, v___x_1116_);
lean_dec(v___x_1116_);
lean_dec(v_a_1108_);
v___x_1129_ = lean_nat_add(v___x_1128_, v_one_1126_);
lean_dec(v___x_1128_);
lean_inc(v___x_1129_);
if (v_isShared_1122_ == 0)
{
lean_ctor_set(v___x_1121_, 1, v_a_1109_);
lean_ctor_set(v___x_1121_, 0, v___x_1129_);
v___x_1131_ = v___x_1121_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1129_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_a_1109_);
v___x_1131_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
v_a_1107_ = v_tail_1119_;
v_a_1108_ = v___x_1129_;
v_a_1109_ = v___x_1131_;
v_a_1110_ = v_n_1127_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1135_; 
lean_dec(v___x_1117_);
lean_dec(v___x_1116_);
lean_dec(v_a_1110_);
lean_dec(v_a_1108_);
v___x_1135_ = l_List_reverse___redArg(v_a_1109_);
return v___x_1135_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segEnds(lean_object* v_s_1139_){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1140_ = lean_unsigned_to_nat(0u);
v___x_1141_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segEnds___closed__0));
v___x_1142_ = l_List_lengthTR___redArg(v_s_1139_);
v___x_1143_ = lean_unsigned_to_nat(1u);
v___x_1144_ = lean_nat_add(v___x_1142_, v___x_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lp_lean_x2dftml_LeanFtml_segEnds_go(v_s_1139_, v___x_1140_, v___x_1141_, v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(lean_object* v_l_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
if (lean_obj_tag(v_a_1147_) == 0)
{
lean_dec_ref(v_a_1148_);
lean_inc(v_l_1146_);
return v_l_1146_;
}
else
{
lean_object* v_head_1149_; lean_object* v_tail_1150_; uint8_t v___x_1151_; 
v_head_1149_ = lean_ctor_get(v_a_1147_, 0);
lean_inc(v_head_1149_);
v_tail_1150_ = lean_ctor_get(v_a_1147_, 1);
lean_inc(v_tail_1150_);
lean_dec_ref_known(v_a_1147_, 2);
v___x_1151_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1149_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; 
lean_dec(v_tail_1150_);
lean_dec(v_head_1149_);
v___x_1152_ = lean_array_to_list(v_a_1148_);
return v___x_1152_;
}
else
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_array_push(v_a_1148_, v_head_1149_);
v_a_1147_ = v_tail_1150_;
v_a_1148_ = v___x_1153_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1___boxed(lean_object* v_l_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_l_1155_, v_a_1156_, v_a_1157_);
lean_dec(v_l_1155_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__0(lean_object* v_r4_1159_, lean_object* v_url_1160_, lean_object* v_x_1161_){
_start:
{
if (lean_obj_tag(v_x_1161_) == 0)
{
lean_object* v___x_1162_; 
lean_dec(v_url_1160_);
lean_dec(v_r4_1159_);
v___x_1162_ = lean_box(0);
return v___x_1162_;
}
else
{
lean_object* v_head_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1180_; 
v_head_1163_ = lean_ctor_get(v_x_1161_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v_x_1161_);
if (v_isSharedCheck_1180_ == 0)
{
lean_object* v_unused_1181_; 
v_unused_1181_ = lean_ctor_get(v_x_1161_, 1);
lean_dec(v_unused_1181_);
v___x_1165_ = v_x_1161_;
v_isShared_1166_ = v_isSharedCheck_1180_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_head_1163_);
lean_dec(v_x_1161_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1180_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1176_; 
v___x_1167_ = l_List_lengthTR___redArg(v_r4_1159_);
v___x_1168_ = l_List_lengthTR___redArg(v_head_1163_);
v___x_1169_ = lean_nat_sub(v___x_1167_, v___x_1168_);
lean_dec(v___x_1168_);
lean_dec(v___x_1167_);
v___x_1170_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r4_1159_);
v___x_1171_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r4_1159_, v_r4_1159_, v___x_1169_, v___x_1170_);
lean_dec(v_r4_1159_);
v___x_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
v___x_1173_ = lean_unsigned_to_nat(2u);
v___x_1174_ = l_List_drop___redArg(v___x_1173_, v_head_1163_);
lean_dec(v_head_1163_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set_tag(v___x_1165_, 0);
lean_ctor_set(v___x_1165_, 1, v___x_1174_);
lean_ctor_set(v___x_1165_, 0, v___x_1172_);
v___x_1176_ = v___x_1165_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1172_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v___x_1174_);
v___x_1176_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v_url_1160_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
v___x_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
return v___x_1178_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2(lean_object* v_r4_1182_, lean_object* v_url_1183_, lean_object* v_x_1184_){
_start:
{
if (lean_obj_tag(v_x_1184_) == 0)
{
lean_object* v___x_1185_; 
lean_dec(v_url_1183_);
lean_dec(v_r4_1182_);
v___x_1185_ = lean_box(0);
return v___x_1185_;
}
else
{
lean_object* v_head_1186_; lean_object* v_tail_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v_r5_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_head_1186_ = lean_ctor_get(v_x_1184_, 0);
v_tail_1187_ = lean_ctor_get(v_x_1184_, 1);
v___x_1188_ = lean_unsigned_to_nat(1u);
v___x_1189_ = lean_nat_add(v_head_1186_, v___x_1188_);
v_r5_1190_ = l_List_drop___redArg(v___x_1189_, v_r4_1182_);
v___x_1191_ = lp_lean_x2dftml_LeanFtml_close2Suffixes(v_r5_1190_);
lean_inc(v_url_1183_);
lean_inc(v_r4_1182_);
v___x_1192_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__0(v_r4_1182_, v_url_1183_, v___x_1191_);
if (lean_obj_tag(v___x_1192_) == 0)
{
v_x_1184_ = v_tail_1187_;
goto _start;
}
else
{
lean_dec(v_url_1183_);
lean_dec(v_r4_1182_);
return v___x_1192_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2___boxed(lean_object* v_r4_1194_, lean_object* v_url_1195_, lean_object* v_x_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2(v_r4_1194_, v_url_1195_, v_x_1196_);
lean_dec(v_x_1196_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeTail(lean_object* v_r4_1198_, lean_object* v_url_1199_){
_start:
{
lean_object* v___y_1201_; lean_object* v___x_1225_; lean_object* v_wsRun_1226_; uint8_t v___x_1227_; 
v___x_1225_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r4_1198_);
v_wsRun_1226_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r4_1198_, v_r4_1198_, v___x_1225_);
v___x_1227_ = l_List_isEmpty___redArg(v_wsRun_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1228_ = l_List_lengthTR___redArg(v_wsRun_1226_);
lean_dec(v_wsRun_1226_);
v___x_1229_ = l_List_range(v___x_1228_);
v___x_1230_ = l_List_reverse___redArg(v___x_1229_);
lean_inc(v_url_1199_);
lean_inc(v_r4_1198_);
v___x_1231_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2(v_r4_1198_, v_url_1199_, v___x_1230_);
lean_dec(v___x_1230_);
if (lean_obj_tag(v___x_1231_) == 0)
{
v___y_1201_ = v___x_1231_;
goto v___jp_1200_;
}
else
{
lean_dec(v_url_1199_);
lean_dec(v_r4_1198_);
return v___x_1231_;
}
}
else
{
lean_object* v___x_1232_; 
lean_dec(v_wsRun_1226_);
v___x_1232_ = lean_box(0);
v___y_1201_ = v___x_1232_;
goto v___jp_1200_;
}
v___jp_1200_:
{
if (lean_obj_tag(v_r4_1198_) == 1)
{
lean_object* v_head_1202_; lean_object* v_tail_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1224_; 
v_head_1202_ = lean_ctor_get(v_r4_1198_, 0);
v_tail_1203_ = lean_ctor_get(v_r4_1198_, 1);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_r4_1198_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1205_ = v_r4_1198_;
v_isShared_1206_ = v_isSharedCheck_1224_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_tail_1203_);
lean_inc(v_head_1202_);
lean_dec(v_r4_1198_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1224_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; uint8_t v___x_1208_; 
v___x_1207_ = lean_unsigned_to_nat(93u);
v___x_1208_ = lean_nat_dec_eq(v_head_1202_, v___x_1207_);
lean_dec(v_head_1202_);
if (v___x_1208_ == 0)
{
lean_del_object(v___x_1205_);
lean_dec(v_tail_1203_);
lean_dec(v_url_1199_);
return v___y_1201_;
}
else
{
if (lean_obj_tag(v_tail_1203_) == 1)
{
lean_object* v_head_1209_; lean_object* v_tail_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1223_; 
v_head_1209_ = lean_ctor_get(v_tail_1203_, 0);
v_tail_1210_ = lean_ctor_get(v_tail_1203_, 1);
v_isSharedCheck_1223_ = !lean_is_exclusive(v_tail_1203_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1212_ = v_tail_1203_;
v_isShared_1213_ = v_isSharedCheck_1223_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_tail_1210_);
lean_inc(v_head_1209_);
lean_dec(v_tail_1203_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1223_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
uint8_t v___x_1214_; 
v___x_1214_ = lean_nat_dec_eq(v_head_1209_, v___x_1207_);
lean_dec(v_head_1209_);
if (v___x_1214_ == 0)
{
lean_del_object(v___x_1212_);
lean_dec(v_tail_1210_);
lean_del_object(v___x_1205_);
lean_dec(v_url_1199_);
return v___y_1201_;
}
else
{
lean_object* v___x_1215_; lean_object* v___x_1217_; 
lean_dec(v___y_1201_);
v___x_1215_ = lean_box(0);
if (v_isShared_1213_ == 0)
{
lean_ctor_set_tag(v___x_1212_, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1215_);
v___x_1217_ = v___x_1212_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1222_, 1, v_tail_1210_);
v___x_1217_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
lean_object* v___x_1219_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set_tag(v___x_1205_, 0);
lean_ctor_set(v___x_1205_, 1, v___x_1217_);
lean_ctor_set(v___x_1205_, 0, v_url_1199_);
v___x_1219_ = v___x_1205_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_url_1199_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v___x_1217_);
v___x_1219_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
}
}
}
}
else
{
lean_del_object(v___x_1205_);
lean_dec(v_tail_1203_);
lean_dec(v_url_1199_);
return v___y_1201_;
}
}
}
}
else
{
lean_dec(v_url_1199_);
lean_dec(v_r4_1198_);
return v___y_1201_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1(lean_object* v_r3_1233_, lean_object* v_sch_1234_, lean_object* v_e_1235_, lean_object* v_r1_1236_, lean_object* v_x_1237_){
_start:
{
if (lean_obj_tag(v_x_1237_) == 0)
{
lean_object* v___x_1238_; 
lean_dec(v_r1_1236_);
v___x_1238_ = lean_box(0);
return v___x_1238_;
}
else
{
lean_object* v_head_1239_; lean_object* v_tail_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v_head_1239_ = lean_ctor_get(v_x_1237_, 0);
lean_inc_n(v_head_1239_, 2);
v_tail_1240_ = lean_ctor_get(v_x_1237_, 1);
lean_inc(v_tail_1240_);
lean_dec_ref_known(v_x_1237_, 2);
v___x_1241_ = l_List_drop___redArg(v_head_1239_, v_r3_1233_);
v___x_1242_ = l_List_lengthTR___redArg(v_sch_1234_);
v___x_1243_ = lean_nat_add(v___x_1242_, v_e_1235_);
lean_dec(v___x_1242_);
v___x_1244_ = lean_nat_add(v___x_1243_, v_head_1239_);
lean_dec(v_head_1239_);
lean_dec(v___x_1243_);
v___x_1245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r1_1236_);
v___x_1246_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r1_1236_, v_r1_1236_, v___x_1244_, v___x_1245_);
v___x_1247_ = lp_lean_x2dftml_LeanFtml_iframeTail(v___x_1241_, v___x_1246_);
if (lean_obj_tag(v___x_1247_) == 0)
{
v_x_1237_ = v_tail_1240_;
goto _start;
}
else
{
lean_dec(v_tail_1240_);
lean_dec(v_r1_1236_);
return v___x_1247_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1___boxed(lean_object* v_r3_1249_, lean_object* v_sch_1250_, lean_object* v_e_1251_, lean_object* v_r1_1252_, lean_object* v_x_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1(v_r3_1249_, v_sch_1250_, v_e_1251_, v_r1_1252_, v_x_1253_);
lean_dec(v_e_1251_);
lean_dec(v_sch_1250_);
lean_dec(v_r3_1249_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0(lean_object* v_l_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_){
_start:
{
if (lean_obj_tag(v_a_1256_) == 0)
{
lean_dec_ref(v_a_1257_);
lean_inc(v_l_1255_);
return v_l_1255_;
}
else
{
lean_object* v_head_1258_; lean_object* v_tail_1259_; uint8_t v___x_1260_; 
v_head_1258_ = lean_ctor_get(v_a_1256_, 0);
lean_inc(v_head_1258_);
v_tail_1259_ = lean_ctor_get(v_a_1256_, 1);
lean_inc(v_tail_1259_);
lean_dec_ref_known(v_a_1256_, 2);
v___x_1260_ = lp_lean_x2dftml_LeanFtml_isFinalByte(v_head_1258_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; 
lean_dec(v_tail_1259_);
lean_dec(v_head_1258_);
v___x_1261_ = lean_array_to_list(v_a_1257_);
return v___x_1261_;
}
else
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_array_push(v_a_1257_, v_head_1258_);
v_a_1256_ = v_tail_1259_;
v_a_1257_ = v___x_1262_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0___boxed(lean_object* v_l_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0(v_l_1264_, v_a_1265_, v_a_1266_);
lean_dec(v_l_1264_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2(lean_object* v_val_1268_, lean_object* v_sch_1269_, lean_object* v_r1_1270_, lean_object* v_x_1271_){
_start:
{
if (lean_obj_tag(v_x_1271_) == 0)
{
lean_object* v___x_1272_; 
lean_dec(v_r1_1270_);
v___x_1272_ = lean_box(0);
return v___x_1272_;
}
else
{
lean_object* v_head_1273_; lean_object* v_tail_1274_; lean_object* v___x_1275_; lean_object* v_r3_1276_; lean_object* v___x_1277_; lean_object* v_finalRun_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v_head_1273_ = lean_ctor_get(v_x_1271_, 0);
lean_inc_n(v_head_1273_, 2);
v_tail_1274_ = lean_ctor_get(v_x_1271_, 1);
lean_inc(v_tail_1274_);
lean_dec_ref_known(v_x_1271_, 2);
v___x_1275_ = lean_unsigned_to_nat(1u);
v_r3_1276_ = l_List_drop___redArg(v_head_1273_, v_val_1268_);
v___x_1277_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r3_1276_);
v_finalRun_1278_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0(v_r3_1276_, v_r3_1276_, v___x_1277_);
v___x_1279_ = l_List_lengthTR___redArg(v_finalRun_1278_);
lean_dec(v_finalRun_1278_);
v___x_1280_ = lean_nat_add(v___x_1279_, v___x_1275_);
lean_dec(v___x_1279_);
v___x_1281_ = l_List_range(v___x_1280_);
lean_inc(v_r1_1270_);
v___x_1282_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1(v_r3_1276_, v_sch_1269_, v_head_1273_, v_r1_1270_, v___x_1281_);
lean_dec(v_head_1273_);
lean_dec(v_r3_1276_);
if (lean_obj_tag(v___x_1282_) == 0)
{
v_x_1271_ = v_tail_1274_;
goto _start;
}
else
{
lean_dec(v_tail_1274_);
lean_dec(v_r1_1270_);
return v___x_1282_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2___boxed(lean_object* v_val_1284_, lean_object* v_sch_1285_, lean_object* v_r1_1286_, lean_object* v_x_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2(v_val_1284_, v_sch_1285_, v_r1_1286_, v_x_1287_);
lean_dec(v_sch_1285_);
lean_dec(v_val_1284_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3(lean_object* v_r1_1289_, lean_object* v_x_1290_){
_start:
{
if (lean_obj_tag(v_x_1290_) == 0)
{
lean_object* v___x_1291_; 
lean_dec(v_r1_1289_);
v___x_1291_ = lean_box(0);
return v___x_1291_;
}
else
{
lean_object* v_head_1292_; lean_object* v_tail_1293_; lean_object* v___x_1294_; 
v_head_1292_ = lean_ctor_get(v_x_1290_, 0);
v_tail_1293_ = lean_ctor_get(v_x_1290_, 1);
lean_inc(v_r1_1289_);
v___x_1294_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_head_1292_, v_r1_1289_);
if (lean_obj_tag(v___x_1294_) == 0)
{
v_x_1290_ = v_tail_1293_;
goto _start;
}
else
{
lean_object* v_val_1296_; lean_object* v_ends_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v_val_1296_ = lean_ctor_get(v___x_1294_, 0);
lean_inc_n(v_val_1296_, 2);
lean_dec_ref_known(v___x_1294_, 1);
v_ends_1297_ = lp_lean_x2dftml_LeanFtml_segEnds(v_val_1296_);
v___x_1298_ = l_List_reverse___redArg(v_ends_1297_);
lean_inc(v_r1_1289_);
v___x_1299_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2(v_val_1296_, v_head_1292_, v_r1_1289_, v___x_1298_);
lean_dec(v_val_1296_);
if (lean_obj_tag(v___x_1299_) == 0)
{
v_x_1290_ = v_tail_1293_;
goto _start;
}
else
{
lean_dec(v_r1_1289_);
return v___x_1299_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3___boxed(lean_object* v_r1_1301_, lean_object* v_x_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3(v_r1_1301_, v_x_1302_);
lean_dec(v_x_1302_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4(lean_object* v_val_1304_, lean_object* v_x_1305_){
_start:
{
if (lean_obj_tag(v_x_1305_) == 0)
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_box(0);
return v___x_1306_;
}
else
{
lean_object* v_head_1307_; lean_object* v_tail_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v_r1_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_head_1307_ = lean_ctor_get(v_x_1305_, 0);
v_tail_1308_ = lean_ctor_get(v_x_1305_, 1);
v___x_1309_ = lean_unsigned_to_nat(1u);
v___x_1310_ = lean_nat_add(v_head_1307_, v___x_1309_);
v_r1_1311_ = l_List_drop___redArg(v___x_1310_, v_val_1304_);
v___x_1312_ = lp_lean_x2dftml_LeanFtml_iframeSchemes;
v___x_1313_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3(v_r1_1311_, v___x_1312_);
if (lean_obj_tag(v___x_1313_) == 0)
{
v_x_1305_ = v_tail_1308_;
goto _start;
}
else
{
return v___x_1313_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4___boxed(lean_object* v_val_1315_, lean_object* v_x_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4(v_val_1315_, v_x_1316_);
lean_dec(v_x_1316_);
lean_dec(v_val_1315_);
return v_res_1317_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeMatch___closed__0));
v___x_1320_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeMatch(lean_object* v_src_1321_){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1, &lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1);
v___x_1323_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1322_, v_src_1321_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v___x_1324_; 
v___x_1324_ = lean_box(0);
return v___x_1324_;
}
else
{
lean_object* v_val_1325_; lean_object* v___x_1326_; lean_object* v_wsRun_1327_; uint8_t v___x_1328_; 
v_val_1325_ = lean_ctor_get(v___x_1323_, 0);
lean_inc_n(v_val_1325_, 2);
lean_dec_ref_known(v___x_1323_, 1);
v___x_1326_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
v_wsRun_1327_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_1325_, v_val_1325_, v___x_1326_);
v___x_1328_ = l_List_isEmpty___redArg(v_wsRun_1327_);
if (v___x_1328_ == 0)
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1329_ = l_List_lengthTR___redArg(v_wsRun_1327_);
lean_dec(v_wsRun_1327_);
v___x_1330_ = l_List_range(v___x_1329_);
v___x_1331_ = l_List_reverse___redArg(v___x_1330_);
v___x_1332_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4(v_val_1325_, v___x_1331_);
lean_dec(v___x_1331_);
lean_dec(v_val_1325_);
return v___x_1332_;
}
else
{
lean_object* v___x_1333_; 
lean_dec(v_wsRun_1327_);
lean_dec(v_val_1325_);
v___x_1333_ = lean_box(0);
return v___x_1333_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1(lean_object* v_attrs_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_){
_start:
{
if (lean_obj_tag(v_a_1335_) == 0)
{
lean_object* v___x_1337_; 
v___x_1337_ = l_List_reverse___redArg(v_a_1336_);
return v___x_1337_;
}
else
{
lean_object* v_head_1338_; lean_object* v_tail_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1356_; 
v_head_1338_ = lean_ctor_get(v_a_1335_, 0);
v_tail_1339_ = lean_ctor_get(v_a_1335_, 1);
v_isSharedCheck_1356_ = !lean_is_exclusive(v_a_1335_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1341_ = v_a_1335_;
v_isShared_1342_ = v_isSharedCheck_1356_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_tail_1339_);
lean_inc(v_head_1338_);
lean_dec(v_a_1335_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1356_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___y_1344_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_inc(v_head_1338_);
v___x_1349_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_head_1338_);
v___x_1350_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attrs_1334_, v_head_1338_);
lean_dec(v_head_1338_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = lean_box(3);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1349_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
v___y_1344_ = v___x_1352_;
goto v___jp_1343_;
}
else
{
lean_object* v_val_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v_val_1353_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_val_1353_);
lean_dec_ref_known(v___x_1350_, 1);
v___x_1354_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_1353_);
v___x_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1349_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___y_1344_ = v___x_1355_;
goto v___jp_1343_;
}
v___jp_1343_:
{
lean_object* v___x_1346_; 
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 1, v_a_1336_);
lean_ctor_set(v___x_1341_, 0, v___y_1344_);
v___x_1346_ = v___x_1341_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___y_1344_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v_a_1336_);
v___x_1346_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
v_a_1335_ = v_tail_1339_;
v_a_1336_ = v___x_1346_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1___boxed(lean_object* v_attrs_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1(v_attrs_1357_, v_a_1358_, v_a_1359_);
lean_dec(v_attrs_1357_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_iframeProcess_spec__0(lean_object* v_a_1361_, lean_object* v_a_1362_){
_start:
{
if (lean_obj_tag(v_a_1361_) == 0)
{
lean_object* v___x_1363_; 
v___x_1363_ = l_List_reverse___redArg(v_a_1362_);
return v___x_1363_;
}
else
{
lean_object* v_head_1364_; lean_object* v_tail_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1379_; 
v_head_1364_ = lean_ctor_get(v_a_1361_, 0);
v_tail_1365_ = lean_ctor_get(v_a_1361_, 1);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_a_1361_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1367_ = v_a_1361_;
v_isShared_1368_ = v_isSharedCheck_1379_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_tail_1365_);
lean_inc(v_head_1364_);
lean_dec(v_a_1361_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1379_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1369_ = lean_unsigned_to_nat(13u);
v___x_1370_ = lean_nat_dec_eq(v_head_1364_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1371_; uint8_t v___x_1372_; 
v___x_1371_ = lean_unsigned_to_nat(10u);
v___x_1372_ = lean_nat_dec_eq(v_head_1364_, v___x_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1374_; 
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 1, v_a_1362_);
v___x_1374_ = v___x_1367_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_head_1364_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_a_1362_);
v___x_1374_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
v_a_1361_ = v_tail_1365_;
v_a_1362_ = v___x_1374_;
goto _start;
}
}
else
{
lean_del_object(v___x_1367_);
lean_dec(v_head_1364_);
v_a_1361_ = v_tail_1365_;
goto _start;
}
}
else
{
lean_del_object(v___x_1367_);
lean_dec(v_head_1364_);
v_a_1361_ = v_tail_1365_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14(void){
_start:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v_keys_1410_; 
v___x_1408_ = lean_box(0);
v___x_1409_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeProcess___closed__13));
v_keys_1410_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(v___x_1409_, v___x_1408_);
return v_keys_1410_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16(void){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1412_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeProcess___closed__15));
v___x_1413_ = l_String_toListImpl(v___x_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess(lean_object* v_url_1415_, lean_object* v_g2_1416_, lean_object* v_toks_1417_){
_start:
{
lean_object* v___x_1418_; lean_object* v_srcOpt_1419_; lean_object* v___y_1421_; 
v___x_1418_ = lean_box(0);
v_srcOpt_1419_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_iframeProcess_spec__0(v_url_1415_, v___x_1418_);
if (lean_obj_tag(v_g2_1416_) == 0)
{
v___y_1421_ = v___x_1418_;
goto v___jp_1420_;
}
else
{
lean_object* v_val_1436_; 
v_val_1436_ = lean_ctor_get(v_g2_1416_, 0);
lean_inc(v_val_1436_);
lean_dec_ref_known(v_g2_1416_, 1);
v___y_1421_ = v_val_1436_;
goto v___jp_1420_;
}
v___jp_1420_:
{
lean_object* v_attrs_1422_; lean_object* v_keys_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v_opts_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v_attrs_1422_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_1421_);
lean_dec(v___y_1421_);
v_keys_1423_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14, &lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14);
v___x_1424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16, &lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16);
v___x_1425_ = lp_lean_x2dftml_LeanFtml_textVal(v_srcOpt_1419_);
v___x_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1(v_attrs_1422_, v_keys_1423_, v___x_1418_);
lean_dec(v_attrs_1422_);
v_opts_1428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_opts_1428_, 0, v___x_1426_);
lean_ctor_set(v_opts_1428_, 1, v___x_1427_);
v___x_1429_ = l_List_lengthTR___redArg(v_toks_1417_);
v___x_1430_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1429_);
v___x_1431_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeProcess___closed__17));
v___x_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
lean_ctor_set(v___x_1432_, 1, v_opts_1428_);
v___x_1433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
lean_ctor_set(v___x_1433_, 1, v___x_1418_);
v___x_1434_ = l_List_appendTR___redArg(v_toks_1417_, v___x_1433_);
v___x_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1430_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
return v___x_1435_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeScan(lean_object* v_src_1437_, lean_object* v_toks_1438_, lean_object* v_x_1439_){
_start:
{
lean_object* v_zero_1443_; uint8_t v_isZero_1444_; 
v_zero_1443_ = lean_unsigned_to_nat(0u);
v_isZero_1444_ = lean_nat_dec_eq(v_x_1439_, v_zero_1443_);
if (v_isZero_1444_ == 1)
{
lean_dec(v_src_1437_);
goto v___jp_1440_;
}
else
{
if (lean_obj_tag(v_src_1437_) == 0)
{
goto v___jp_1440_;
}
else
{
lean_object* v_head_1445_; lean_object* v_tail_1446_; lean_object* v_one_1447_; lean_object* v_n_1448_; lean_object* v___x_1449_; 
v_head_1445_ = lean_ctor_get(v_src_1437_, 0);
lean_inc(v_head_1445_);
v_tail_1446_ = lean_ctor_get(v_src_1437_, 1);
lean_inc(v_tail_1446_);
v_one_1447_ = lean_unsigned_to_nat(1u);
v_n_1448_ = lean_nat_sub(v_x_1439_, v_one_1447_);
v___x_1449_ = lp_lean_x2dftml_LeanFtml_iframeMatch(v_src_1437_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v___x_1450_; lean_object* v_fst_1451_; lean_object* v_snd_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1460_; 
v___x_1450_ = lp_lean_x2dftml_LeanFtml_iframeScan(v_tail_1446_, v_toks_1438_, v_n_1448_);
lean_dec(v_n_1448_);
v_fst_1451_ = lean_ctor_get(v___x_1450_, 0);
v_snd_1452_ = lean_ctor_get(v___x_1450_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1454_ = v___x_1450_;
v_isShared_1455_ = v_isSharedCheck_1460_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_snd_1452_);
lean_inc(v_fst_1451_);
lean_dec(v___x_1450_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1460_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1456_; lean_object* v___x_1458_; 
v___x_1456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1456_, 0, v_head_1445_);
lean_ctor_set(v___x_1456_, 1, v_fst_1451_);
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 0, v___x_1456_);
v___x_1458_ = v___x_1454_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___x_1456_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_snd_1452_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
else
{
lean_object* v_val_1461_; lean_object* v_snd_1462_; lean_object* v_fst_1463_; lean_object* v_fst_1464_; lean_object* v_snd_1465_; lean_object* v___x_1466_; lean_object* v_fst_1467_; lean_object* v_snd_1468_; lean_object* v___x_1469_; lean_object* v_fst_1470_; lean_object* v_snd_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1479_; 
lean_dec(v_tail_1446_);
lean_dec(v_head_1445_);
v_val_1461_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_val_1461_);
lean_dec_ref_known(v___x_1449_, 1);
v_snd_1462_ = lean_ctor_get(v_val_1461_, 1);
lean_inc(v_snd_1462_);
v_fst_1463_ = lean_ctor_get(v_val_1461_, 0);
lean_inc(v_fst_1463_);
lean_dec(v_val_1461_);
v_fst_1464_ = lean_ctor_get(v_snd_1462_, 0);
lean_inc(v_fst_1464_);
v_snd_1465_ = lean_ctor_get(v_snd_1462_, 1);
lean_inc(v_snd_1465_);
lean_dec(v_snd_1462_);
v___x_1466_ = lp_lean_x2dftml_LeanFtml_iframeProcess(v_fst_1463_, v_fst_1464_, v_toks_1438_);
v_fst_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_fst_1467_);
v_snd_1468_ = lean_ctor_get(v___x_1466_, 1);
lean_inc(v_snd_1468_);
lean_dec_ref(v___x_1466_);
v___x_1469_ = lp_lean_x2dftml_LeanFtml_iframeScan(v_snd_1465_, v_snd_1468_, v_n_1448_);
lean_dec(v_n_1448_);
v_fst_1470_ = lean_ctor_get(v___x_1469_, 0);
v_snd_1471_ = lean_ctor_get(v___x_1469_, 1);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1473_ = v___x_1469_;
v_isShared_1474_ = v_isSharedCheck_1479_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_snd_1471_);
lean_inc(v_fst_1470_);
lean_dec(v___x_1469_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1479_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1475_; lean_object* v___x_1477_; 
v___x_1475_ = l_List_appendTR___redArg(v_fst_1467_, v_fst_1470_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1475_);
v___x_1477_ = v___x_1473_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1475_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_snd_1471_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
v___jp_1440_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1441_ = lean_box(0);
v___x_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1441_);
lean_ctor_set(v___x_1442_, 1, v_toks_1438_);
return v___x_1442_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeScan___boxed(lean_object* v_src_1480_, lean_object* v_toks_1481_, lean_object* v_x_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = lp_lean_x2dftml_LeanFtml_iframeScan(v_src_1480_, v_toks_1481_, v_x_1482_);
lean_dec(v_x_1482_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeRule___lam__0(lean_object* v_src_1484_, lean_object* v_toks_1485_){
_start:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1486_ = l_List_lengthTR___redArg(v_src_1484_);
v___x_1487_ = lean_unsigned_to_nat(1u);
v___x_1488_ = lean_nat_add(v___x_1486_, v___x_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lp_lean_x2dftml_LeanFtml_iframeScan(v_src_1484_, v_toks_1485_, v___x_1488_);
lean_dec(v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeRule(lean_object* v_st_1491_){
_start:
{
lean_object* v___f_1492_; lean_object* v___x_1493_; 
v___f_1492_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeRule___closed__0));
v___x_1493_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1491_, v___f_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0(lean_object* v_r_1494_, lean_object* v___y_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_){
_start:
{
if (lean_obj_tag(v_a_1496_) == 0)
{
lean_object* v___x_1498_; 
v___x_1498_ = l_List_reverse___redArg(v_a_1497_);
return v___x_1498_;
}
else
{
lean_object* v_head_1499_; lean_object* v_tail_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1513_; 
v_head_1499_ = lean_ctor_get(v_a_1496_, 0);
v_tail_1500_ = lean_ctor_get(v_a_1496_, 1);
v_isSharedCheck_1513_ = !lean_is_exclusive(v_a_1496_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1502_ = v_a_1496_;
v_isShared_1503_ = v_isSharedCheck_1513_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_tail_1500_);
lean_inc(v_head_1499_);
lean_dec(v_a_1496_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1513_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
v___x_1504_ = l_List_lengthTR___redArg(v_r_1494_);
v___x_1505_ = l_List_lengthTR___redArg(v_head_1499_);
v___x_1506_ = lean_nat_sub(v___x_1504_, v___x_1505_);
lean_dec(v___x_1505_);
lean_dec(v___x_1504_);
v___x_1507_ = lean_nat_dec_le(v___x_1506_, v___y_1495_);
lean_dec(v___x_1506_);
if (v___x_1507_ == 0)
{
lean_del_object(v___x_1502_);
lean_dec(v_head_1499_);
v_a_1496_ = v_tail_1500_;
goto _start;
}
else
{
lean_object* v___x_1510_; 
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 1, v_a_1497_);
v___x_1510_ = v___x_1502_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_head_1499_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_a_1497_);
v___x_1510_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
v_a_1496_ = v_tail_1500_;
v_a_1497_ = v___x_1510_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0___boxed(lean_object* v_r_1514_, lean_object* v___y_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0(v_r_1514_, v___y_1515_, v_a_1516_, v_a_1517_);
lean_dec(v___y_1515_);
lean_dec(v_r_1514_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_close2SuffixesNoNl(lean_object* v_r_1519_){
_start:
{
lean_object* v___y_1521_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1525_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__0));
lean_inc(v_r_1519_);
v___x_1526_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_1525_, v_r_1519_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v___x_1527_; 
v___x_1527_ = l_List_lengthTR___redArg(v_r_1519_);
v___y_1521_ = v___x_1527_;
goto v___jp_1520_;
}
else
{
lean_object* v_val_1528_; 
v_val_1528_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_val_1528_);
lean_dec_ref_known(v___x_1526_, 1);
v___y_1521_ = v_val_1528_;
goto v___jp_1520_;
}
v___jp_1520_:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
lean_inc(v_r_1519_);
v___x_1522_ = lp_lean_x2dftml_LeanFtml_close2Suffixes(v_r_1519_);
v___x_1523_ = lean_box(0);
v___x_1524_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0(v_r_1519_, v___y_1521_, v___x_1522_, v___x_1523_);
lean_dec(v___y_1521_);
lean_dec(v_r_1519_);
return v___x_1524_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__0(lean_object* v_g1_1529_, lean_object* v_r2_1530_, lean_object* v_x_1531_){
_start:
{
if (lean_obj_tag(v_x_1531_) == 0)
{
lean_object* v___x_1532_; 
lean_dec(v_r2_1530_);
lean_dec(v_g1_1529_);
v___x_1532_ = lean_box(0);
return v___x_1532_;
}
else
{
lean_object* v_head_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1551_; 
v_head_1533_ = lean_ctor_get(v_x_1531_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_x_1531_);
if (v_isSharedCheck_1551_ == 0)
{
lean_object* v_unused_1552_; 
v_unused_1552_ = lean_ctor_get(v_x_1531_, 1);
lean_dec(v_unused_1552_);
v___x_1535_ = v_x_1531_;
v_isShared_1536_ = v_isSharedCheck_1551_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_head_1533_);
lean_dec(v_x_1531_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1551_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1547_; 
v___x_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1537_, 0, v_g1_1529_);
v___x_1538_ = l_List_lengthTR___redArg(v_r2_1530_);
v___x_1539_ = l_List_lengthTR___redArg(v_head_1533_);
v___x_1540_ = lean_nat_sub(v___x_1538_, v___x_1539_);
lean_dec(v___x_1539_);
lean_dec(v___x_1538_);
v___x_1541_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r2_1530_);
v___x_1542_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r2_1530_, v_r2_1530_, v___x_1540_, v___x_1541_);
lean_dec(v_r2_1530_);
v___x_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1542_);
v___x_1544_ = lean_unsigned_to_nat(2u);
v___x_1545_ = l_List_drop___redArg(v___x_1544_, v_head_1533_);
lean_dec(v_head_1533_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set_tag(v___x_1535_, 0);
lean_ctor_set(v___x_1535_, 1, v___x_1545_);
lean_ctor_set(v___x_1535_, 0, v___x_1543_);
v___x_1547_ = v___x_1535_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v___x_1545_);
v___x_1547_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1537_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
v___x_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
return v___x_1549_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1(lean_object* v_r2_1553_, lean_object* v_g1_1554_, lean_object* v_x_1555_){
_start:
{
if (lean_obj_tag(v_x_1555_) == 0)
{
lean_object* v___x_1556_; 
lean_dec(v_g1_1554_);
lean_dec(v_r2_1553_);
v___x_1556_ = lean_box(0);
return v___x_1556_;
}
else
{
lean_object* v_head_1557_; lean_object* v_tail_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v_r3_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v_head_1557_ = lean_ctor_get(v_x_1555_, 0);
v_tail_1558_ = lean_ctor_get(v_x_1555_, 1);
v___x_1559_ = lean_unsigned_to_nat(1u);
v___x_1560_ = lean_nat_add(v_head_1557_, v___x_1559_);
v_r3_1561_ = l_List_drop___redArg(v___x_1560_, v_r2_1553_);
v___x_1562_ = lp_lean_x2dftml_LeanFtml_close2SuffixesNoNl(v_r3_1561_);
lean_inc(v_r2_1553_);
lean_inc(v_g1_1554_);
v___x_1563_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__0(v_g1_1554_, v_r2_1553_, v___x_1562_);
if (lean_obj_tag(v___x_1563_) == 0)
{
v_x_1555_ = v_tail_1558_;
goto _start;
}
else
{
lean_dec(v_g1_1554_);
lean_dec(v_r2_1553_);
return v___x_1563_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1___boxed(lean_object* v_r2_1565_, lean_object* v_g1_1566_, lean_object* v_x_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1(v_r2_1565_, v_g1_1566_, v_x_1567_);
lean_dec(v_x_1567_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateG1Tail(lean_object* v_r2_1569_, lean_object* v_g1_1570_){
_start:
{
lean_object* v___y_1572_; lean_object* v___x_1597_; lean_object* v_wsRun_1598_; uint8_t v___x_1599_; 
v___x_1597_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r2_1569_);
v_wsRun_1598_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r2_1569_, v_r2_1569_, v___x_1597_);
v___x_1599_ = l_List_isEmpty___redArg(v_wsRun_1598_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1600_ = l_List_lengthTR___redArg(v_wsRun_1598_);
lean_dec(v_wsRun_1598_);
v___x_1601_ = l_List_range(v___x_1600_);
v___x_1602_ = l_List_reverse___redArg(v___x_1601_);
lean_inc(v_g1_1570_);
lean_inc(v_r2_1569_);
v___x_1603_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1(v_r2_1569_, v_g1_1570_, v___x_1602_);
lean_dec(v___x_1602_);
if (lean_obj_tag(v___x_1603_) == 0)
{
v___y_1572_ = v___x_1603_;
goto v___jp_1571_;
}
else
{
lean_dec(v_g1_1570_);
lean_dec(v_r2_1569_);
return v___x_1603_;
}
}
else
{
lean_object* v___x_1604_; 
lean_dec(v_wsRun_1598_);
v___x_1604_ = lean_box(0);
v___y_1572_ = v___x_1604_;
goto v___jp_1571_;
}
v___jp_1571_:
{
if (lean_obj_tag(v_r2_1569_) == 1)
{
lean_object* v_head_1573_; lean_object* v_tail_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1596_; 
v_head_1573_ = lean_ctor_get(v_r2_1569_, 0);
v_tail_1574_ = lean_ctor_get(v_r2_1569_, 1);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_r2_1569_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1576_ = v_r2_1569_;
v_isShared_1577_ = v_isSharedCheck_1596_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_tail_1574_);
lean_inc(v_head_1573_);
lean_dec(v_r2_1569_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1596_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1578_; uint8_t v___x_1579_; 
v___x_1578_ = lean_unsigned_to_nat(93u);
v___x_1579_ = lean_nat_dec_eq(v_head_1573_, v___x_1578_);
lean_dec(v_head_1573_);
if (v___x_1579_ == 0)
{
lean_del_object(v___x_1576_);
lean_dec(v_tail_1574_);
lean_dec(v_g1_1570_);
return v___y_1572_;
}
else
{
if (lean_obj_tag(v_tail_1574_) == 1)
{
lean_object* v_head_1580_; lean_object* v_tail_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1595_; 
v_head_1580_ = lean_ctor_get(v_tail_1574_, 0);
v_tail_1581_ = lean_ctor_get(v_tail_1574_, 1);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_tail_1574_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1583_ = v_tail_1574_;
v_isShared_1584_ = v_isSharedCheck_1595_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_tail_1581_);
lean_inc(v_head_1580_);
lean_dec(v_tail_1574_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1595_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
uint8_t v___x_1585_; 
v___x_1585_ = lean_nat_dec_eq(v_head_1580_, v___x_1578_);
lean_dec(v_head_1580_);
if (v___x_1585_ == 0)
{
lean_del_object(v___x_1583_);
lean_dec(v_tail_1581_);
lean_del_object(v___x_1576_);
lean_dec(v_g1_1570_);
return v___y_1572_;
}
else
{
lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1589_; 
lean_dec(v___y_1572_);
v___x_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1586_, 0, v_g1_1570_);
v___x_1587_ = lean_box(0);
if (v_isShared_1584_ == 0)
{
lean_ctor_set_tag(v___x_1583_, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1587_);
v___x_1589_ = v___x_1583_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v_tail_1581_);
v___x_1589_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
lean_object* v___x_1591_; 
if (v_isShared_1577_ == 0)
{
lean_ctor_set_tag(v___x_1576_, 0);
lean_ctor_set(v___x_1576_, 1, v___x_1589_);
lean_ctor_set(v___x_1576_, 0, v___x_1586_);
v___x_1591_ = v___x_1576_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v___x_1586_);
lean_ctor_set(v_reuseFailAlloc_1593_, 1, v___x_1589_);
v___x_1591_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
return v___x_1592_;
}
}
}
}
}
else
{
lean_del_object(v___x_1576_);
lean_dec(v_tail_1574_);
lean_dec(v_g1_1570_);
return v___y_1572_;
}
}
}
}
else
{
lean_dec(v_g1_1570_);
lean_dec(v_r2_1569_);
return v___y_1572_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0(lean_object* v_l_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_){
_start:
{
if (lean_obj_tag(v_a_1606_) == 0)
{
lean_dec_ref(v_a_1607_);
lean_inc(v_l_1605_);
return v_l_1605_;
}
else
{
lean_object* v_head_1608_; lean_object* v_tail_1609_; uint8_t v___x_1610_; 
v_head_1608_ = lean_ctor_get(v_a_1606_, 0);
lean_inc(v_head_1608_);
v_tail_1609_ = lean_ctor_get(v_a_1606_, 1);
lean_inc(v_tail_1609_);
lean_dec_ref_known(v_a_1606_, 2);
v___x_1610_ = lp_lean_x2dftml_LeanFtml_isDigitByte(v_head_1608_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; 
lean_dec(v_tail_1609_);
lean_dec(v_head_1608_);
v___x_1611_ = lean_array_to_list(v_a_1607_);
return v___x_1611_;
}
else
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_array_push(v_a_1607_, v_head_1608_);
v_a_1606_ = v_tail_1609_;
v_a_1607_ = v___x_1612_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0___boxed(lean_object* v_l_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0(v_l_1614_, v_a_1615_, v_a_1616_);
lean_dec(v_l_1614_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1(lean_object* v_val_1621_, uint8_t v___x_1622_, lean_object* v_x_1623_){
_start:
{
if (lean_obj_tag(v_x_1623_) == 0)
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_box(0);
return v___x_1624_;
}
else
{
lean_object* v_head_1625_; lean_object* v_tail_1626_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; uint8_t v_fst_1635_; lean_object* v_snd_1636_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v_r1_1647_; 
v_head_1625_ = lean_ctor_get(v_x_1623_, 0);
v_tail_1626_ = lean_ctor_get(v_x_1623_, 1);
v___x_1645_ = lean_unsigned_to_nat(1u);
v___x_1646_ = lean_nat_add(v_head_1625_, v___x_1645_);
v_r1_1647_ = l_List_drop___redArg(v___x_1646_, v_val_1621_);
if (lean_obj_tag(v_r1_1647_) == 1)
{
lean_object* v_head_1648_; lean_object* v_tail_1649_; lean_object* v___x_1650_; uint8_t v___x_1651_; 
v_head_1648_ = lean_ctor_get(v_r1_1647_, 0);
v_tail_1649_ = lean_ctor_get(v_r1_1647_, 1);
v___x_1650_ = lean_unsigned_to_nat(45u);
v___x_1651_ = lean_nat_dec_eq(v_head_1648_, v___x_1650_);
if (v___x_1651_ == 0)
{
v_fst_1635_ = v___x_1622_;
v_snd_1636_ = v_r1_1647_;
goto v___jp_1634_;
}
else
{
lean_inc(v_tail_1649_);
lean_dec_ref_known(v_r1_1647_, 2);
v_fst_1635_ = v___x_1651_;
v_snd_1636_ = v_tail_1649_;
goto v___jp_1634_;
}
}
else
{
v_fst_1635_ = v___x_1622_;
v_snd_1636_ = v_r1_1647_;
goto v___jp_1634_;
}
v___jp_1627_:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
lean_inc(v___y_1630_);
v___x_1631_ = l_List_appendTR___redArg(v___y_1630_, v___y_1628_);
v___x_1632_ = lp_lean_x2dftml_LeanFtml_dateG1Tail(v___y_1629_, v___x_1631_);
if (lean_obj_tag(v___x_1632_) == 0)
{
v_x_1623_ = v_tail_1626_;
goto _start;
}
else
{
return v___x_1632_;
}
}
v___jp_1634_:
{
lean_object* v___x_1637_; lean_object* v_digs_1638_; uint8_t v___x_1639_; 
v___x_1637_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_snd_1636_);
v_digs_1638_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0(v_snd_1636_, v_snd_1636_, v___x_1637_);
v___x_1639_ = l_List_isEmpty___redArg(v_digs_1638_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1640_ = l_List_lengthTR___redArg(v_digs_1638_);
v___x_1641_ = l_List_drop___redArg(v___x_1640_, v_snd_1636_);
lean_dec(v_snd_1636_);
if (v_fst_1635_ == 0)
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_box(0);
v___y_1628_ = v_digs_1638_;
v___y_1629_ = v___x_1641_;
v___y_1630_ = v___x_1642_;
goto v___jp_1627_;
}
else
{
lean_object* v___x_1643_; 
v___x_1643_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1___closed__0));
v___y_1628_ = v_digs_1638_;
v___y_1629_ = v___x_1641_;
v___y_1630_ = v___x_1643_;
goto v___jp_1627_;
}
}
else
{
lean_dec(v_digs_1638_);
lean_dec(v_snd_1636_);
v_x_1623_ = v_tail_1626_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1___boxed(lean_object* v_val_1652_, lean_object* v___x_1653_, lean_object* v_x_1654_){
_start:
{
uint8_t v___x_343__boxed_1655_; lean_object* v_res_1656_; 
v___x_343__boxed_1655_ = lean_unbox(v___x_1653_);
v_res_1656_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1(v_val_1652_, v___x_343__boxed_1655_, v_x_1654_);
lean_dec(v_x_1654_);
lean_dec(v_val_1652_);
return v_res_1656_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1(void){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateMatch1___closed__0));
v___x_1659_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch1(lean_object* v_src_1660_){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1, &lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1);
v___x_1662_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1661_, v_src_1660_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v___x_1663_; 
v___x_1663_ = lean_box(0);
return v___x_1663_;
}
else
{
lean_object* v_val_1664_; lean_object* v___x_1665_; lean_object* v_wsRun_1666_; uint8_t v___x_1667_; 
v_val_1664_ = lean_ctor_get(v___x_1662_, 0);
lean_inc_n(v_val_1664_, 2);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1665_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
v_wsRun_1666_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_1664_, v_val_1664_, v___x_1665_);
v___x_1667_ = l_List_isEmpty___redArg(v_wsRun_1666_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1668_ = l_List_lengthTR___redArg(v_wsRun_1666_);
lean_dec(v_wsRun_1666_);
v___x_1669_ = l_List_range(v___x_1668_);
v___x_1670_ = l_List_reverse___redArg(v___x_1669_);
v___x_1671_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1(v_val_1664_, v___x_1667_, v___x_1670_);
lean_dec(v___x_1670_);
lean_dec(v_val_1664_);
return v___x_1671_;
}
else
{
lean_object* v___x_1672_; 
lean_dec(v_wsRun_1666_);
lean_dec(v_val_1664_);
v___x_1672_ = lean_box(0);
return v___x_1672_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__0(lean_object* v_r2_1673_, lean_object* v_x_1674_){
_start:
{
if (lean_obj_tag(v_x_1674_) == 0)
{
lean_object* v___x_1675_; 
lean_dec(v_r2_1673_);
v___x_1675_ = lean_box(0);
return v___x_1675_;
}
else
{
lean_object* v_head_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1694_; 
v_head_1676_ = lean_ctor_get(v_x_1674_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v_x_1674_);
if (v_isSharedCheck_1694_ == 0)
{
lean_object* v_unused_1695_; 
v_unused_1695_ = lean_ctor_get(v_x_1674_, 1);
lean_dec(v_unused_1695_);
v___x_1678_ = v_x_1674_;
v_isShared_1679_ = v_isSharedCheck_1694_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_head_1676_);
lean_dec(v_x_1674_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1694_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1690_; 
v___x_1680_ = l_List_lengthTR___redArg(v_r2_1673_);
v___x_1681_ = l_List_lengthTR___redArg(v_head_1676_);
v___x_1682_ = lean_nat_sub(v___x_1680_, v___x_1681_);
lean_dec(v___x_1681_);
lean_dec(v___x_1680_);
v___x_1683_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r2_1673_);
v___x_1684_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r2_1673_, v_r2_1673_, v___x_1682_, v___x_1683_);
lean_dec(v_r2_1673_);
v___x_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
v___x_1686_ = lean_box(0);
v___x_1687_ = lean_unsigned_to_nat(2u);
v___x_1688_ = l_List_drop___redArg(v___x_1687_, v_head_1676_);
lean_dec(v_head_1676_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set_tag(v___x_1678_, 0);
lean_ctor_set(v___x_1678_, 1, v___x_1688_);
lean_ctor_set(v___x_1678_, 0, v___x_1686_);
v___x_1690_ = v___x_1678_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v___x_1686_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v___x_1688_);
v___x_1690_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1685_);
lean_ctor_set(v___x_1691_, 1, v___x_1690_);
v___x_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
return v___x_1692_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1(lean_object* v_r1_1696_, lean_object* v_x_1697_){
_start:
{
if (lean_obj_tag(v_x_1697_) == 0)
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_box(0);
return v___x_1698_;
}
else
{
lean_object* v_head_1699_; lean_object* v_tail_1700_; lean_object* v_r2_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_head_1699_ = lean_ctor_get(v_x_1697_, 0);
lean_inc(v_head_1699_);
v_tail_1700_ = lean_ctor_get(v_x_1697_, 1);
lean_inc(v_tail_1700_);
lean_dec_ref_known(v_x_1697_, 2);
v_r2_1701_ = l_List_drop___redArg(v_head_1699_, v_r1_1696_);
lean_inc(v_r2_1701_);
v___x_1702_ = lp_lean_x2dftml_LeanFtml_close2SuffixesNoNl(v_r2_1701_);
v___x_1703_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__0(v_r2_1701_, v___x_1702_);
if (lean_obj_tag(v___x_1703_) == 0)
{
v_x_1697_ = v_tail_1700_;
goto _start;
}
else
{
lean_dec(v_tail_1700_);
return v___x_1703_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1___boxed(lean_object* v_r1_1705_, lean_object* v_x_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1(v_r1_1705_, v_x_1706_);
lean_dec(v_r1_1705_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2(lean_object* v_val_1711_, uint8_t v___x_1712_, lean_object* v_x_1713_){
_start:
{
if (lean_obj_tag(v_x_1713_) == 0)
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_box(0);
return v___x_1714_;
}
else
{
lean_object* v_head_1715_; lean_object* v_tail_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v_r1_1719_; uint8_t v___y_1730_; 
v_head_1715_ = lean_ctor_get(v_x_1713_, 0);
v_tail_1716_ = lean_ctor_get(v_x_1713_, 1);
v___x_1717_ = lean_unsigned_to_nat(1u);
v___x_1718_ = lean_nat_add(v_head_1715_, v___x_1717_);
v_r1_1719_ = l_List_drop___redArg(v___x_1718_, v_val_1711_);
if (lean_obj_tag(v_r1_1719_) == 0)
{
v___y_1730_ = v___x_1712_;
goto v___jp_1729_;
}
else
{
lean_object* v_head_1737_; uint8_t v___x_1738_; 
v_head_1737_ = lean_ctor_get(v_r1_1719_, 0);
v___x_1738_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1737_);
v___y_1730_ = v___x_1738_;
goto v___jp_1729_;
}
v___jp_1720_:
{
lean_object* v___x_1721_; lean_object* v_wsRun2_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1721_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r1_1719_);
v_wsRun2_1722_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r1_1719_, v_r1_1719_, v___x_1721_);
v___x_1723_ = l_List_lengthTR___redArg(v_wsRun2_1722_);
lean_dec(v_wsRun2_1722_);
v___x_1724_ = lean_nat_add(v___x_1723_, v___x_1717_);
lean_dec(v___x_1723_);
v___x_1725_ = l_List_range(v___x_1724_);
v___x_1726_ = l_List_reverse___redArg(v___x_1725_);
v___x_1727_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1(v_r1_1719_, v___x_1726_);
lean_dec(v_r1_1719_);
if (lean_obj_tag(v___x_1727_) == 0)
{
v_x_1713_ = v_tail_1716_;
goto _start;
}
else
{
return v___x_1727_;
}
}
v___jp_1729_:
{
if (v___y_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; uint8_t v___x_1735_; 
v___x_1731_ = lean_unsigned_to_nat(2u);
v___x_1732_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r1_1719_);
v___x_1733_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r1_1719_, v_r1_1719_, v___x_1731_, v___x_1732_);
v___x_1734_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2___closed__0));
v___x_1735_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1733_, v___x_1734_);
lean_dec(v___x_1733_);
if (v___x_1735_ == 0)
{
lean_dec(v_r1_1719_);
v_x_1713_ = v_tail_1716_;
goto _start;
}
else
{
goto v___jp_1720_;
}
}
else
{
goto v___jp_1720_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2___boxed(lean_object* v_val_1739_, lean_object* v___x_1740_, lean_object* v_x_1741_){
_start:
{
uint8_t v___x_604__boxed_1742_; lean_object* v_res_1743_; 
v___x_604__boxed_1742_ = lean_unbox(v___x_1740_);
v_res_1743_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2(v_val_1739_, v___x_604__boxed_1742_, v_x_1741_);
lean_dec(v_x_1741_);
lean_dec(v_val_1739_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch2(lean_object* v_src_1744_){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1, &lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1);
v___x_1746_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1745_, v_src_1744_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_box(0);
return v___x_1747_;
}
else
{
lean_object* v_val_1748_; lean_object* v___x_1749_; lean_object* v_wsRun_1750_; uint8_t v___x_1751_; 
v_val_1748_ = lean_ctor_get(v___x_1746_, 0);
lean_inc_n(v_val_1748_, 2);
lean_dec_ref_known(v___x_1746_, 1);
v___x_1749_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
v_wsRun_1750_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_1748_, v_val_1748_, v___x_1749_);
v___x_1751_ = l_List_isEmpty___redArg(v_wsRun_1750_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1752_ = l_List_lengthTR___redArg(v_wsRun_1750_);
lean_dec(v_wsRun_1750_);
v___x_1753_ = l_List_range(v___x_1752_);
v___x_1754_ = l_List_reverse___redArg(v___x_1753_);
v___x_1755_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2(v_val_1748_, v___x_1751_, v___x_1754_);
lean_dec(v___x_1754_);
lean_dec(v_val_1748_);
return v___x_1755_;
}
else
{
lean_object* v___x_1756_; 
lean_dec(v_wsRun_1750_);
lean_dec(v_val_1748_);
v___x_1756_ = lean_box(0);
return v___x_1756_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch3(lean_object* v_src_1757_){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1, &lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1);
v___x_1759_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1758_, v_src_1757_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_box(0);
return v___x_1760_;
}
else
{
lean_object* v_val_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1800_; 
v_val_1761_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1763_ = v___x_1759_;
v_isShared_1764_ = v_isSharedCheck_1800_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_val_1761_);
lean_dec(v___x_1759_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1800_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1765_; lean_object* v_wsRun_1766_; uint8_t v___x_1767_; 
v___x_1765_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_val_1761_);
v_wsRun_1766_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_1761_, v_val_1761_, v___x_1765_);
v___x_1767_ = l_List_isEmpty___redArg(v_wsRun_1766_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = l_List_lengthTR___redArg(v_wsRun_1766_);
lean_dec(v_wsRun_1766_);
v___x_1769_ = l_List_drop___redArg(v___x_1768_, v_val_1761_);
lean_dec(v_val_1761_);
if (lean_obj_tag(v___x_1769_) == 1)
{
lean_object* v_head_1770_; lean_object* v_tail_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1797_; 
v_head_1770_ = lean_ctor_get(v___x_1769_, 0);
v_tail_1771_ = lean_ctor_get(v___x_1769_, 1);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1773_ = v___x_1769_;
v_isShared_1774_ = v_isSharedCheck_1797_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_tail_1771_);
lean_inc(v_head_1770_);
lean_dec(v___x_1769_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1797_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = lean_unsigned_to_nat(93u);
v___x_1776_ = lean_nat_dec_eq(v_head_1770_, v___x_1775_);
lean_dec(v_head_1770_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; 
lean_del_object(v___x_1773_);
lean_dec(v_tail_1771_);
lean_del_object(v___x_1763_);
v___x_1777_ = lean_box(0);
return v___x_1777_;
}
else
{
if (lean_obj_tag(v_tail_1771_) == 1)
{
lean_object* v_head_1778_; lean_object* v_tail_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1795_; 
v_head_1778_ = lean_ctor_get(v_tail_1771_, 0);
v_tail_1779_ = lean_ctor_get(v_tail_1771_, 1);
v_isSharedCheck_1795_ = !lean_is_exclusive(v_tail_1771_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1781_ = v_tail_1771_;
v_isShared_1782_ = v_isSharedCheck_1795_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_tail_1779_);
lean_inc(v_head_1778_);
lean_dec(v_tail_1771_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1795_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
uint8_t v___x_1783_; 
v___x_1783_ = lean_nat_dec_eq(v_head_1778_, v___x_1775_);
lean_dec(v_head_1778_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; 
lean_del_object(v___x_1781_);
lean_dec(v_tail_1779_);
lean_del_object(v___x_1773_);
lean_del_object(v___x_1763_);
v___x_1784_ = lean_box(0);
return v___x_1784_;
}
else
{
lean_object* v___x_1785_; lean_object* v___x_1787_; 
v___x_1785_ = lean_box(0);
if (v_isShared_1782_ == 0)
{
lean_ctor_set_tag(v___x_1781_, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1785_);
v___x_1787_ = v___x_1781_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1785_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v_tail_1779_);
v___x_1787_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
lean_object* v___x_1789_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set_tag(v___x_1773_, 0);
lean_ctor_set(v___x_1773_, 1, v___x_1787_);
lean_ctor_set(v___x_1773_, 0, v___x_1785_);
v___x_1789_ = v___x_1773_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v___x_1785_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v___x_1787_);
v___x_1789_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
lean_object* v___x_1791_; 
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 0, v___x_1789_);
v___x_1791_ = v___x_1763_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
}
}
else
{
lean_object* v___x_1796_; 
lean_del_object(v___x_1773_);
lean_dec(v_tail_1771_);
lean_del_object(v___x_1763_);
v___x_1796_ = lean_box(0);
return v___x_1796_;
}
}
}
}
else
{
lean_object* v___x_1798_; 
lean_dec(v___x_1769_);
lean_del_object(v___x_1763_);
v___x_1798_ = lean_box(0);
return v___x_1798_;
}
}
else
{
lean_object* v___x_1799_; 
lean_dec(v_wsRun_1766_);
lean_del_object(v___x_1763_);
lean_dec(v_val_1761_);
v___x_1799_ = lean_box(0);
return v___x_1799_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0(lean_object* v_x_1801_){
_start:
{
if (lean_obj_tag(v_x_1801_) == 0)
{
uint8_t v___x_1802_; 
v___x_1802_ = 1;
return v___x_1802_;
}
else
{
lean_object* v_head_1803_; lean_object* v_tail_1804_; uint8_t v___x_1805_; 
v_head_1803_ = lean_ctor_get(v_x_1801_, 0);
v_tail_1804_ = lean_ctor_get(v_x_1801_, 1);
v___x_1805_ = lp_lean_x2dftml_LeanFtml_isDigitByte(v_head_1803_);
if (v___x_1805_ == 0)
{
return v___x_1805_;
}
else
{
v_x_1801_ = v_tail_1804_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0___boxed(lean_object* v_x_1807_){
_start:
{
uint8_t v_res_1808_; lean_object* v_r_1809_; 
v_res_1808_ = lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0(v_x_1807_);
lean_dec(v_x_1807_);
v_r_1809_ = lean_box(v_res_1808_);
return v_r_1809_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_dateNumeric(lean_object* v_g1_1810_){
_start:
{
lean_object* v_ds_1812_; 
if (lean_obj_tag(v_g1_1810_) == 1)
{
lean_object* v_head_1816_; lean_object* v_tail_1817_; lean_object* v___x_1818_; uint8_t v___x_1819_; 
v_head_1816_ = lean_ctor_get(v_g1_1810_, 0);
v_tail_1817_ = lean_ctor_get(v_g1_1810_, 1);
v___x_1818_ = lean_unsigned_to_nat(45u);
v___x_1819_ = lean_nat_dec_eq(v_head_1816_, v___x_1818_);
if (v___x_1819_ == 0)
{
v_ds_1812_ = v_g1_1810_;
goto v___jp_1811_;
}
else
{
v_ds_1812_ = v_tail_1817_;
goto v___jp_1811_;
}
}
else
{
v_ds_1812_ = v_g1_1810_;
goto v___jp_1811_;
}
v___jp_1811_:
{
uint8_t v___x_1813_; 
v___x_1813_ = l_List_isEmpty___redArg(v_ds_1812_);
if (v___x_1813_ == 0)
{
uint8_t v___x_1814_; 
v___x_1814_ = lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0(v_ds_1812_);
return v___x_1814_;
}
else
{
uint8_t v___x_1815_; 
v___x_1815_ = 0;
return v___x_1815_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateNumeric___boxed(lean_object* v_g1_1820_){
_start:
{
uint8_t v_res_1821_; lean_object* v_r_1822_; 
v_res_1821_ = lp_lean_x2dftml_LeanFtml_dateNumeric(v_g1_1820_);
lean_dec(v_g1_1820_);
v_r_1822_ = lean_box(v_res_1821_);
return v_r_1822_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_dateProcess_spec__0(lean_object* v_x_1823_, lean_object* v_x_1824_){
_start:
{
if (lean_obj_tag(v_x_1824_) == 0)
{
return v_x_1823_;
}
else
{
lean_object* v_head_1825_; lean_object* v_tail_1826_; lean_object* v_fst_1827_; lean_object* v_snd_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v_head_1825_ = lean_ctor_get(v_x_1824_, 0);
lean_inc(v_head_1825_);
v_tail_1826_ = lean_ctor_get(v_x_1824_, 1);
lean_inc(v_tail_1826_);
lean_dec_ref_known(v_x_1824_, 2);
v_fst_1827_ = lean_ctor_get(v_head_1825_, 0);
lean_inc(v_fst_1827_);
v_snd_1828_ = lean_ctor_get(v_head_1825_, 1);
lean_inc(v_snd_1828_);
lean_dec(v_head_1825_);
v___x_1829_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_fst_1827_);
v___x_1830_ = lp_lean_x2dftml_LeanFtml_textVal(v_snd_1828_);
v___x_1831_ = lp_lean_x2dftml_LeanFtml_omSet(v_x_1823_, v___x_1829_, v___x_1830_);
v_x_1823_ = v___x_1831_;
v_x_1824_ = v_tail_1826_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dateProcess___closed__1(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateProcess___closed__0));
v___x_1835_ = l_String_toListImpl(v___x_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateProcess(lean_object* v_g1_1837_, lean_object* v_g2_1838_, lean_object* v_toks_1839_){
_start:
{
lean_object* v___y_1841_; lean_object* v___y_1842_; 
if (lean_obj_tag(v_g1_1837_) == 0)
{
lean_dec(v_g2_1838_);
goto v___jp_1857_;
}
else
{
lean_object* v_val_1860_; uint8_t v___x_1861_; 
v_val_1860_ = lean_ctor_get(v_g1_1837_, 0);
v___x_1861_ = lp_lean_x2dftml_LeanFtml_dateNumeric(v_val_1860_);
if (v___x_1861_ == 0)
{
lean_dec(v_g2_1838_);
goto v___jp_1857_;
}
else
{
lean_inc(v_val_1860_);
lean_dec_ref_known(v_g1_1837_, 1);
if (lean_obj_tag(v_g2_1838_) == 0)
{
lean_object* v___x_1862_; 
v___x_1862_ = lean_box(0);
v___y_1841_ = v_val_1860_;
v___y_1842_ = v___x_1862_;
goto v___jp_1840_;
}
else
{
lean_object* v_val_1863_; 
v_val_1863_ = lean_ctor_get(v_g2_1838_, 0);
lean_inc(v_val_1863_);
lean_dec_ref_known(v_g2_1838_, 1);
v___y_1841_ = v_val_1860_;
v___y_1842_ = v_val_1863_;
goto v___jp_1840_;
}
}
}
v___jp_1840_:
{
lean_object* v_attrs_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v_opts_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v_attrs_1843_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_1842_);
lean_dec(v___y_1842_);
v___x_1844_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dateProcess___closed__1, &lp_lean_x2dftml_LeanFtml_dateProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dateProcess___closed__1);
v___x_1845_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_1841_);
v___x_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1844_);
lean_ctor_set(v___x_1846_, 1, v___x_1845_);
v___x_1847_ = lean_box(0);
v___x_1848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1846_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
v_opts_1849_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_dateProcess_spec__0(v___x_1848_, v_attrs_1843_);
v___x_1850_ = l_List_lengthTR___redArg(v_toks_1839_);
v___x_1851_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1850_);
v___x_1852_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateProcess___closed__2));
v___x_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
lean_ctor_set(v___x_1853_, 1, v_opts_1849_);
v___x_1854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
lean_ctor_set(v___x_1854_, 1, v___x_1847_);
v___x_1855_ = l_List_appendTR___redArg(v_toks_1839_, v___x_1854_);
v___x_1856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1851_);
lean_ctor_set(v___x_1856_, 1, v___x_1855_);
return v___x_1856_;
}
v___jp_1857_:
{
lean_object* v___x_1858_; 
v___x_1858_ = lean_box(0);
if (lean_obj_tag(v_g1_1837_) == 0)
{
v___y_1841_ = v___x_1858_;
v___y_1842_ = v___x_1858_;
goto v___jp_1840_;
}
else
{
lean_object* v_val_1859_; 
v_val_1859_ = lean_ctor_get(v_g1_1837_, 0);
lean_inc(v_val_1859_);
lean_dec_ref_known(v_g1_1837_, 1);
v___y_1841_ = v___x_1858_;
v___y_1842_ = v_val_1859_;
goto v___jp_1840_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateScan(lean_object* v_matcher_1864_, lean_object* v_src_1865_, lean_object* v_toks_1866_, lean_object* v_x_1867_){
_start:
{
lean_object* v_zero_1871_; uint8_t v_isZero_1872_; 
v_zero_1871_ = lean_unsigned_to_nat(0u);
v_isZero_1872_ = lean_nat_dec_eq(v_x_1867_, v_zero_1871_);
if (v_isZero_1872_ == 1)
{
lean_dec(v_src_1865_);
lean_dec_ref(v_matcher_1864_);
goto v___jp_1868_;
}
else
{
if (lean_obj_tag(v_src_1865_) == 0)
{
lean_dec_ref(v_matcher_1864_);
goto v___jp_1868_;
}
else
{
lean_object* v_head_1873_; lean_object* v_tail_1874_; lean_object* v_one_1875_; lean_object* v_n_1876_; lean_object* v___x_1877_; 
v_head_1873_ = lean_ctor_get(v_src_1865_, 0);
lean_inc(v_head_1873_);
v_tail_1874_ = lean_ctor_get(v_src_1865_, 1);
lean_inc(v_tail_1874_);
v_one_1875_ = lean_unsigned_to_nat(1u);
v_n_1876_ = lean_nat_sub(v_x_1867_, v_one_1875_);
lean_inc_ref(v_matcher_1864_);
v___x_1877_ = lean_apply_1(v_matcher_1864_, v_src_1865_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v___x_1878_; lean_object* v_fst_1879_; lean_object* v_snd_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1888_; 
v___x_1878_ = lp_lean_x2dftml_LeanFtml_dateScan(v_matcher_1864_, v_tail_1874_, v_toks_1866_, v_n_1876_);
lean_dec(v_n_1876_);
v_fst_1879_ = lean_ctor_get(v___x_1878_, 0);
v_snd_1880_ = lean_ctor_get(v___x_1878_, 1);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1882_ = v___x_1878_;
v_isShared_1883_ = v_isSharedCheck_1888_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_snd_1880_);
lean_inc(v_fst_1879_);
lean_dec(v___x_1878_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1888_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1884_; lean_object* v___x_1886_; 
v___x_1884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1884_, 0, v_head_1873_);
lean_ctor_set(v___x_1884_, 1, v_fst_1879_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 0, v___x_1884_);
v___x_1886_ = v___x_1882_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v___x_1884_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v_snd_1880_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
else
{
lean_object* v_val_1889_; lean_object* v_snd_1890_; lean_object* v_fst_1891_; lean_object* v_fst_1892_; lean_object* v_snd_1893_; lean_object* v___x_1894_; lean_object* v_fst_1895_; lean_object* v_snd_1896_; lean_object* v___x_1897_; lean_object* v_fst_1898_; lean_object* v_snd_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1907_; 
lean_dec(v_tail_1874_);
lean_dec(v_head_1873_);
v_val_1889_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_val_1889_);
lean_dec_ref_known(v___x_1877_, 1);
v_snd_1890_ = lean_ctor_get(v_val_1889_, 1);
lean_inc(v_snd_1890_);
v_fst_1891_ = lean_ctor_get(v_val_1889_, 0);
lean_inc(v_fst_1891_);
lean_dec(v_val_1889_);
v_fst_1892_ = lean_ctor_get(v_snd_1890_, 0);
lean_inc(v_fst_1892_);
v_snd_1893_ = lean_ctor_get(v_snd_1890_, 1);
lean_inc(v_snd_1893_);
lean_dec(v_snd_1890_);
v___x_1894_ = lp_lean_x2dftml_LeanFtml_dateProcess(v_fst_1891_, v_fst_1892_, v_toks_1866_);
v_fst_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_fst_1895_);
v_snd_1896_ = lean_ctor_get(v___x_1894_, 1);
lean_inc(v_snd_1896_);
lean_dec_ref(v___x_1894_);
v___x_1897_ = lp_lean_x2dftml_LeanFtml_dateScan(v_matcher_1864_, v_snd_1893_, v_snd_1896_, v_n_1876_);
lean_dec(v_n_1876_);
v_fst_1898_ = lean_ctor_get(v___x_1897_, 0);
v_snd_1899_ = lean_ctor_get(v___x_1897_, 1);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1901_ = v___x_1897_;
v_isShared_1902_ = v_isSharedCheck_1907_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_snd_1899_);
lean_inc(v_fst_1898_);
lean_dec(v___x_1897_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1907_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1903_; lean_object* v___x_1905_; 
v___x_1903_ = l_List_appendTR___redArg(v_fst_1895_, v_fst_1898_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 0, v___x_1903_);
v___x_1905_ = v___x_1901_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v_snd_1899_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
}
v___jp_1868_:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = lean_box(0);
v___x_1870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1869_);
lean_ctor_set(v___x_1870_, 1, v_toks_1866_);
return v___x_1870_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateScan___boxed(lean_object* v_matcher_1908_, lean_object* v_src_1909_, lean_object* v_toks_1910_, lean_object* v_x_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = lp_lean_x2dftml_LeanFtml_dateScan(v_matcher_1908_, v_src_1909_, v_toks_1910_, v_x_1911_);
lean_dec(v_x_1911_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateRule___lam__0(lean_object* v_src_1916_, lean_object* v_toks_1917_){
_start:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v_fst_1923_; lean_object* v_snd_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v_fst_1929_; lean_object* v_snd_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1918_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__0));
v___x_1919_ = l_List_lengthTR___redArg(v_src_1916_);
v___x_1920_ = lean_unsigned_to_nat(1u);
v___x_1921_ = lean_nat_add(v___x_1919_, v___x_1920_);
lean_dec(v___x_1919_);
v___x_1922_ = lp_lean_x2dftml_LeanFtml_dateScan(v___x_1918_, v_src_1916_, v_toks_1917_, v___x_1921_);
lean_dec(v___x_1921_);
v_fst_1923_ = lean_ctor_get(v___x_1922_, 0);
lean_inc(v_fst_1923_);
v_snd_1924_ = lean_ctor_get(v___x_1922_, 1);
lean_inc(v_snd_1924_);
lean_dec_ref(v___x_1922_);
v___x_1925_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__1));
v___x_1926_ = l_List_lengthTR___redArg(v_fst_1923_);
v___x_1927_ = lean_nat_add(v___x_1926_, v___x_1920_);
lean_dec(v___x_1926_);
v___x_1928_ = lp_lean_x2dftml_LeanFtml_dateScan(v___x_1925_, v_fst_1923_, v_snd_1924_, v___x_1927_);
lean_dec(v___x_1927_);
v_fst_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_fst_1929_);
v_snd_1930_ = lean_ctor_get(v___x_1928_, 1);
lean_inc(v_snd_1930_);
lean_dec_ref(v___x_1928_);
v___x_1931_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__2));
v___x_1932_ = l_List_lengthTR___redArg(v_fst_1929_);
v___x_1933_ = lean_nat_add(v___x_1932_, v___x_1920_);
lean_dec(v___x_1932_);
v___x_1934_ = lp_lean_x2dftml_LeanFtml_dateScan(v___x_1931_, v_fst_1929_, v_snd_1930_, v___x_1933_);
lean_dec(v___x_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateRule(lean_object* v_st_1936_){
_start:
{
lean_object* v___f_1937_; lean_object* v___x_1938_; 
v___f_1937_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateRule___closed__0));
v___x_1938_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1936_, v___f_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1(lean_object* v_head_1939_, uint8_t v___x_1940_, lean_object* v_l_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_){
_start:
{
if (lean_obj_tag(v_a_1942_) == 0)
{
lean_dec_ref(v_a_1943_);
lean_inc(v_l_1941_);
return v_l_1941_;
}
else
{
lean_object* v_head_1944_; lean_object* v_tail_1945_; uint8_t v___y_1947_; lean_object* v___x_1951_; uint8_t v___x_1952_; 
v_head_1944_ = lean_ctor_get(v_a_1942_, 0);
lean_inc(v_head_1944_);
v_tail_1945_ = lean_ctor_get(v_a_1942_, 1);
lean_inc(v_tail_1945_);
lean_dec_ref_known(v_a_1942_, 2);
v___x_1951_ = lean_unsigned_to_nat(34u);
v___x_1952_ = lean_nat_dec_eq(v_head_1944_, v___x_1951_);
if (v___x_1952_ == 0)
{
uint8_t v___x_1953_; 
v___x_1953_ = lean_nat_dec_eq(v_head_1939_, v___x_1951_);
v___y_1947_ = v___x_1953_;
goto v___jp_1946_;
}
else
{
v___y_1947_ = v___x_1940_;
goto v___jp_1946_;
}
v___jp_1946_:
{
if (v___y_1947_ == 0)
{
lean_object* v___x_1948_; 
lean_dec(v_tail_1945_);
lean_dec(v_head_1944_);
v___x_1948_ = lean_array_to_list(v_a_1943_);
return v___x_1948_;
}
else
{
lean_object* v___x_1949_; 
v___x_1949_ = lean_array_push(v_a_1943_, v_head_1944_);
v_a_1942_ = v_tail_1945_;
v_a_1943_ = v___x_1949_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1___boxed(lean_object* v_head_1954_, lean_object* v___x_1955_, lean_object* v_l_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_){
_start:
{
uint8_t v___x_379__boxed_1959_; lean_object* v_res_1960_; 
v___x_379__boxed_1959_ = lean_unbox(v___x_1955_);
v_res_1960_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1(v_head_1954_, v___x_379__boxed_1959_, v_l_1956_, v_a_1957_, v_a_1958_);
lean_dec(v_l_1956_);
lean_dec(v_head_1954_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0(lean_object* v_l_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
if (lean_obj_tag(v_a_1962_) == 0)
{
lean_dec_ref(v_a_1963_);
lean_inc(v_l_1961_);
return v_l_1961_;
}
else
{
lean_object* v_head_1964_; lean_object* v_tail_1965_; uint8_t v___x_1966_; 
v_head_1964_ = lean_ctor_get(v_a_1962_, 0);
lean_inc(v_head_1964_);
v_tail_1965_ = lean_ctor_get(v_a_1962_, 1);
lean_inc(v_tail_1965_);
lean_dec_ref_known(v_a_1962_, 2);
v___x_1966_ = lp_lean_x2dftml_LeanFtml_isKeyByte(v_head_1964_);
if (v___x_1966_ == 0)
{
lean_object* v___x_1967_; 
lean_dec(v_tail_1965_);
lean_dec(v_head_1964_);
v___x_1967_ = lean_array_to_list(v_a_1963_);
return v___x_1967_;
}
else
{
lean_object* v___x_1968_; 
v___x_1968_ = lean_array_push(v_a_1963_, v_head_1964_);
v_a_1962_ = v_tail_1965_;
v_a_1963_ = v___x_1968_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0___boxed(lean_object* v_l_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_){
_start:
{
lean_object* v_res_1973_; 
v_res_1973_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0(v_l_1970_, v_a_1971_, v_a_1972_);
lean_dec(v_l_1970_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrChunks_go(lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_zero_1978_; uint8_t v_isZero_1979_; 
v_zero_1978_ = lean_unsigned_to_nat(0u);
v_isZero_1979_ = lean_nat_dec_eq(v_a_1977_, v_zero_1978_);
if (v_isZero_1979_ == 1)
{
lean_object* v___x_1980_; 
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_1980_ = l_List_reverse___redArg(v_a_1976_);
return v___x_1980_;
}
else
{
lean_object* v___x_1981_; lean_object* v_wsRun_1982_; uint8_t v___x_1983_; 
v___x_1981_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_a_1974_);
v_wsRun_1982_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_a_1974_, v_a_1974_, v___x_1981_);
v___x_1983_ = l_List_isEmpty___redArg(v_wsRun_1982_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; lean_object* v_after1_1985_; lean_object* v_keyRun_1986_; uint8_t v___x_1987_; 
v___x_1984_ = l_List_lengthTR___redArg(v_wsRun_1982_);
lean_dec(v_wsRun_1982_);
v_after1_1985_ = l_List_drop___redArg(v___x_1984_, v_a_1974_);
lean_inc(v_after1_1985_);
v_keyRun_1986_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0(v_after1_1985_, v_after1_1985_, v___x_1981_);
v___x_1987_ = l_List_isEmpty___redArg(v_keyRun_1986_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; lean_object* v_after2_1989_; 
v___x_1988_ = l_List_lengthTR___redArg(v_keyRun_1986_);
lean_dec(v_keyRun_1986_);
v_after2_1989_ = l_List_drop___redArg(v___x_1988_, v_after1_1985_);
lean_dec(v_after1_1985_);
if (lean_obj_tag(v_after2_1989_) == 1)
{
lean_object* v_head_1990_; lean_object* v_tail_1991_; lean_object* v___x_1992_; uint8_t v___x_1993_; 
v_head_1990_ = lean_ctor_get(v_after2_1989_, 0);
lean_inc(v_head_1990_);
v_tail_1991_ = lean_ctor_get(v_after2_1989_, 1);
lean_inc(v_tail_1991_);
lean_dec_ref_known(v_after2_1989_, 2);
v___x_1992_ = lean_unsigned_to_nat(61u);
v___x_1993_ = lean_nat_dec_eq(v_head_1990_, v___x_1992_);
lean_dec(v_head_1990_);
if (v___x_1993_ == 0)
{
lean_object* v___x_1994_; 
lean_dec(v_tail_1991_);
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_1994_ = l_List_reverse___redArg(v_a_1976_);
return v___x_1994_;
}
else
{
if (lean_obj_tag(v_tail_1991_) == 1)
{
lean_object* v_head_1995_; lean_object* v_tail_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2029_; 
v_head_1995_ = lean_ctor_get(v_tail_1991_, 0);
v_tail_1996_ = lean_ctor_get(v_tail_1991_, 1);
v_isSharedCheck_2029_ = !lean_is_exclusive(v_tail_1991_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_1998_ = v_tail_1991_;
v_isShared_1999_ = v_isSharedCheck_2029_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_tail_1996_);
lean_inc(v_head_1995_);
lean_dec(v_tail_1991_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2029_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2000_; uint8_t v___x_2001_; 
v___x_2000_ = lean_unsigned_to_nat(34u);
v___x_2001_ = lean_nat_dec_eq(v_head_1995_, v___x_2000_);
if (v___x_2001_ == 0)
{
lean_object* v___x_2002_; 
lean_del_object(v___x_1998_);
lean_dec(v_tail_1996_);
lean_dec(v_head_1995_);
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_2002_ = l_List_reverse___redArg(v_a_1976_);
return v___x_2002_;
}
else
{
lean_object* v_val_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
lean_inc(v_tail_1996_);
v_val_2003_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1(v_head_1995_, v___x_1987_, v_tail_1996_, v_tail_1996_, v___x_1981_);
lean_dec(v_head_1995_);
v___x_2004_ = l_List_lengthTR___redArg(v_val_2003_);
lean_dec(v_val_2003_);
v___x_2005_ = l_List_drop___redArg(v___x_2004_, v_tail_1996_);
lean_dec(v_tail_1996_);
if (lean_obj_tag(v___x_2005_) == 1)
{
lean_object* v_head_2006_; lean_object* v_tail_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2027_; 
v_head_2006_ = lean_ctor_get(v___x_2005_, 0);
v_tail_2007_ = lean_ctor_get(v___x_2005_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2009_ = v___x_2005_;
v_isShared_2010_ = v_isSharedCheck_2027_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_tail_2007_);
lean_inc(v_head_2006_);
lean_dec(v___x_2005_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2027_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
uint8_t v___x_2011_; 
v___x_2011_ = lean_nat_dec_eq(v_head_2006_, v___x_2000_);
lean_dec(v_head_2006_);
if (v___x_2011_ == 0)
{
lean_object* v___x_2012_; 
lean_del_object(v___x_2009_);
lean_dec(v_tail_2007_);
lean_del_object(v___x_1998_);
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_2012_ = l_List_reverse___redArg(v_a_1976_);
return v___x_2012_;
}
else
{
lean_object* v_one_2013_; lean_object* v_n_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v_e_2018_; lean_object* v___x_2019_; lean_object* v___x_2021_; 
v_one_2013_ = lean_unsigned_to_nat(1u);
v_n_2014_ = lean_nat_sub(v_a_1977_, v_one_2013_);
lean_dec(v_a_1977_);
v___x_2015_ = l_List_lengthTR___redArg(v_a_1974_);
v___x_2016_ = l_List_lengthTR___redArg(v_tail_2007_);
v___x_2017_ = lean_nat_sub(v___x_2015_, v___x_2016_);
lean_dec(v___x_2016_);
lean_dec(v___x_2015_);
v_e_2018_ = lean_nat_add(v_a_1975_, v___x_2017_);
lean_dec(v_a_1975_);
lean_inc(v_a_1974_);
v___x_2019_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1974_, v_a_1974_, v___x_2017_, v___x_1981_);
lean_dec(v_a_1974_);
lean_inc(v_e_2018_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set_tag(v___x_1998_, 0);
lean_ctor_set(v___x_1998_, 1, v___x_2019_);
lean_ctor_set(v___x_1998_, 0, v_e_2018_);
v___x_2021_ = v___x_1998_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_e_2018_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v___x_2019_);
v___x_2021_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___x_2023_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 1, v_a_1976_);
lean_ctor_set(v___x_2009_, 0, v___x_2021_);
v___x_2023_ = v___x_2009_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v_a_1976_);
v___x_2023_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
v_a_1974_ = v_tail_2007_;
v_a_1975_ = v_e_2018_;
v_a_1976_ = v___x_2023_;
v_a_1977_ = v_n_2014_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_2028_; 
lean_dec(v___x_2005_);
lean_del_object(v___x_1998_);
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_2028_ = l_List_reverse___redArg(v_a_1976_);
return v___x_2028_;
}
}
}
}
else
{
lean_object* v___x_2030_; 
lean_dec(v_tail_1991_);
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_2030_ = l_List_reverse___redArg(v_a_1976_);
return v___x_2030_;
}
}
}
else
{
lean_object* v___x_2031_; 
lean_dec(v_after2_1989_);
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_2031_ = l_List_reverse___redArg(v_a_1976_);
return v___x_2031_;
}
}
else
{
lean_object* v___x_2032_; 
lean_dec(v_keyRun_1986_);
lean_dec(v_after1_1985_);
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_2032_ = l_List_reverse___redArg(v_a_1976_);
return v___x_2032_;
}
}
else
{
lean_object* v___x_2033_; 
lean_dec(v_wsRun_1982_);
lean_dec(v_a_1977_);
lean_dec(v_a_1975_);
lean_dec(v_a_1974_);
v___x_2033_ = l_List_reverse___redArg(v_a_1976_);
return v___x_2033_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrChunks(lean_object* v_s_2040_){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2041_ = lean_unsigned_to_nat(0u);
v___x_2042_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__1));
v___x_2043_ = l_List_lengthTR___redArg(v_s_2040_);
v___x_2044_ = lean_unsigned_to_nat(1u);
v___x_2045_ = lean_nat_add(v___x_2043_, v___x_2044_);
lean_dec(v___x_2043_);
v___x_2046_ = lp_lean_x2dftml_LeanFtml_mathAttrChunks_go(v_s_2040_, v___x_2041_, v___x_2042_, v___x_2045_);
return v___x_2046_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0(lean_object* v_after_2047_, lean_object* v_s_2048_, lean_object* v_fst_2049_, lean_object* v_snd_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_){
_start:
{
if (lean_obj_tag(v_a_2051_) == 0)
{
lean_object* v___x_2053_; 
lean_dec(v_snd_2050_);
lean_dec(v_fst_2049_);
lean_dec(v_s_2048_);
v___x_2053_ = lean_array_to_list(v_a_2052_);
return v___x_2053_;
}
else
{
lean_object* v_head_2054_; lean_object* v_tail_2055_; lean_object* v___x_2056_; 
v_head_2054_ = lean_ctor_get(v_a_2051_, 0);
lean_inc(v_head_2054_);
v_tail_2055_ = lean_ctor_get(v_a_2051_, 1);
lean_inc(v_tail_2055_);
lean_dec_ref_known(v_a_2051_, 2);
v___x_2056_ = l_List_drop___redArg(v_head_2054_, v_after_2047_);
if (lean_obj_tag(v___x_2056_) == 1)
{
lean_object* v_head_2057_; lean_object* v_tail_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2084_; 
v_head_2057_ = lean_ctor_get(v___x_2056_, 0);
v_tail_2058_ = lean_ctor_get(v___x_2056_, 1);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2060_ = v___x_2056_;
v_isShared_2061_ = v_isSharedCheck_2084_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_tail_2058_);
lean_inc(v_head_2057_);
lean_dec(v___x_2056_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2084_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2062_; uint8_t v___x_2063_; 
v___x_2062_ = lean_unsigned_to_nat(93u);
v___x_2063_ = lean_nat_dec_eq(v_head_2057_, v___x_2062_);
lean_dec(v_head_2057_);
if (v___x_2063_ == 0)
{
lean_del_object(v___x_2060_);
lean_dec(v_tail_2058_);
v_a_2051_ = v_tail_2055_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_2058_) == 1)
{
lean_object* v_head_2065_; lean_object* v_tail_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2082_; 
v_head_2065_ = lean_ctor_get(v_tail_2058_, 0);
v_tail_2066_ = lean_ctor_get(v_tail_2058_, 1);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_tail_2058_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2068_ = v_tail_2058_;
v_isShared_2069_ = v_isSharedCheck_2082_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_tail_2066_);
lean_inc(v_head_2065_);
lean_dec(v_tail_2058_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2082_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
uint8_t v___x_2070_; 
v___x_2070_ = lean_nat_dec_eq(v_head_2065_, v___x_2062_);
lean_dec(v_head_2065_);
if (v___x_2070_ == 0)
{
lean_del_object(v___x_2068_);
lean_dec(v_tail_2066_);
lean_del_object(v___x_2060_);
v_a_2051_ = v_tail_2055_;
goto _start;
}
else
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2075_; 
v___x_2072_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_fst_2049_);
lean_inc(v_s_2048_);
v___x_2073_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2048_, v_s_2048_, v_fst_2049_, v___x_2072_);
lean_inc(v_snd_2050_);
if (v_isShared_2069_ == 0)
{
lean_ctor_set_tag(v___x_2068_, 0);
lean_ctor_set(v___x_2068_, 0, v_snd_2050_);
v___x_2075_ = v___x_2068_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_snd_2050_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v_tail_2066_);
v___x_2075_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
lean_object* v___x_2077_; 
if (v_isShared_2061_ == 0)
{
lean_ctor_set_tag(v___x_2060_, 0);
lean_ctor_set(v___x_2060_, 1, v___x_2075_);
lean_ctor_set(v___x_2060_, 0, v___x_2073_);
v___x_2077_ = v___x_2060_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v___x_2073_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v___x_2075_);
v___x_2077_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
lean_object* v___x_2078_; 
v___x_2078_ = lean_array_push(v_a_2052_, v___x_2077_);
v_a_2051_ = v_tail_2055_;
v_a_2052_ = v___x_2078_;
goto _start;
}
}
}
}
}
else
{
lean_del_object(v___x_2060_);
lean_dec(v_tail_2058_);
v_a_2051_ = v_tail_2055_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_2056_);
v_a_2051_ = v_tail_2055_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0___boxed(lean_object* v_after_2086_, lean_object* v_s_2087_, lean_object* v_fst_2088_, lean_object* v_snd_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0(v_after_2086_, v_s_2087_, v_fst_2088_, v_snd_2089_, v_a_2090_, v_a_2091_);
lean_dec(v_after_2086_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathAttrs_spec__1(lean_object* v_s_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_){
_start:
{
if (lean_obj_tag(v_a_2094_) == 0)
{
lean_object* v___x_2096_; 
lean_dec(v_s_2093_);
v___x_2096_ = lean_array_to_list(v_a_2095_);
return v___x_2096_;
}
else
{
lean_object* v_head_2097_; lean_object* v_tail_2098_; lean_object* v_fst_2099_; lean_object* v_snd_2100_; lean_object* v_after_2101_; lean_object* v___x_2102_; lean_object* v_wsRun_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v_head_2097_ = lean_ctor_get(v_a_2094_, 0);
lean_inc(v_head_2097_);
v_tail_2098_ = lean_ctor_get(v_a_2094_, 1);
lean_inc(v_tail_2098_);
lean_dec_ref_known(v_a_2094_, 2);
v_fst_2099_ = lean_ctor_get(v_head_2097_, 0);
lean_inc_n(v_fst_2099_, 2);
v_snd_2100_ = lean_ctor_get(v_head_2097_, 1);
lean_inc(v_snd_2100_);
lean_dec(v_head_2097_);
v_after_2101_ = l_List_drop___redArg(v_fst_2099_, v_s_2093_);
v___x_2102_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_after_2101_);
v_wsRun_2103_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_after_2101_, v_after_2101_, v___x_2102_);
v___x_2104_ = l_List_lengthTR___redArg(v_wsRun_2103_);
lean_dec(v_wsRun_2103_);
v___x_2105_ = lean_unsigned_to_nat(1u);
v___x_2106_ = lean_nat_add(v___x_2104_, v___x_2105_);
lean_dec(v___x_2104_);
v___x_2107_ = l_List_range(v___x_2106_);
v___x_2108_ = l_List_reverse___redArg(v___x_2107_);
lean_inc(v_s_2093_);
v___x_2109_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0(v_after_2101_, v_s_2093_, v_fst_2099_, v_snd_2100_, v___x_2108_, v___x_2102_);
lean_dec(v_after_2101_);
v___x_2110_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2095_, v___x_2109_);
v_a_2094_ = v_tail_2098_;
v_a_2095_ = v___x_2110_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrs(lean_object* v_s_2114_){
_start:
{
lean_object* v_chunks_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
lean_inc(v_s_2114_);
v_chunks_2115_ = lp_lean_x2dftml_LeanFtml_mathAttrChunks(v_s_2114_);
v___x_2116_ = l_List_reverse___redArg(v_chunks_2115_);
v___x_2117_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathAttrs___closed__0));
v___x_2118_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathAttrs_spec__1(v_s_2114_, v___x_2116_, v___x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__0(lean_object* v_a_2119_, lean_object* v_a_2120_){
_start:
{
if (lean_obj_tag(v_a_2119_) == 0)
{
lean_object* v___x_2121_; 
v___x_2121_ = l_List_reverse___redArg(v_a_2120_);
return v___x_2121_;
}
else
{
lean_object* v_head_2122_; lean_object* v_tail_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2141_; 
v_head_2122_ = lean_ctor_get(v_a_2119_, 0);
v_tail_2123_ = lean_ctor_get(v_a_2119_, 1);
v_isSharedCheck_2141_ = !lean_is_exclusive(v_a_2119_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2125_ = v_a_2119_;
v_isShared_2126_ = v_isSharedCheck_2141_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_tail_2123_);
lean_inc(v_head_2122_);
lean_dec(v_a_2119_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2141_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_snd_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2139_; 
v_snd_2127_ = lean_ctor_get(v_head_2122_, 1);
v_isSharedCheck_2139_ = !lean_is_exclusive(v_head_2122_);
if (v_isSharedCheck_2139_ == 0)
{
lean_object* v_unused_2140_; 
v_unused_2140_ = lean_ctor_get(v_head_2122_, 0);
lean_dec(v_unused_2140_);
v___x_2129_ = v_head_2122_;
v_isShared_2130_ = v_isSharedCheck_2139_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_snd_2127_);
lean_dec(v_head_2122_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2139_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2131_; lean_object* v___x_2133_; 
v___x_2131_ = lean_box(0);
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 0, v___x_2131_);
v___x_2133_ = v___x_2129_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2131_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v_snd_2127_);
v___x_2133_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
lean_object* v___x_2135_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v_a_2120_);
lean_ctor_set(v___x_2125_, 0, v___x_2133_);
v___x_2135_ = v___x_2125_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2133_);
lean_ctor_set(v_reuseFailAlloc_2137_, 1, v_a_2120_);
v___x_2135_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
v_a_2119_ = v_tail_2123_;
v_a_2120_ = v___x_2135_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2(lean_object* v_l_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_){
_start:
{
if (lean_obj_tag(v_a_2143_) == 0)
{
lean_dec_ref(v_a_2144_);
lean_inc(v_l_2142_);
return v_l_2142_;
}
else
{
lean_object* v_head_2145_; lean_object* v_tail_2146_; uint8_t v___x_2147_; 
v_head_2145_ = lean_ctor_get(v_a_2143_, 0);
lean_inc(v_head_2145_);
v_tail_2146_ = lean_ctor_get(v_a_2143_, 1);
lean_inc(v_tail_2146_);
lean_dec_ref_known(v_a_2143_, 2);
v___x_2147_ = lp_lean_x2dftml_LeanFtml_isLabelByte(v_head_2145_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2148_; 
lean_dec(v_tail_2146_);
lean_dec(v_head_2145_);
v___x_2148_ = lean_array_to_list(v_a_2144_);
return v___x_2148_;
}
else
{
lean_object* v___x_2149_; 
v___x_2149_ = lean_array_push(v_a_2144_, v_head_2145_);
v_a_2143_ = v_tail_2146_;
v_a_2144_ = v___x_2149_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2___boxed(lean_object* v_l_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2(v_l_2151_, v_a_2152_, v_a_2153_);
lean_dec(v_l_2151_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(lean_object* v___x_2155_, lean_object* v_ll_2156_, lean_object* v_r0_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_){
_start:
{
if (lean_obj_tag(v_a_2158_) == 0)
{
lean_object* v___x_2160_; 
lean_dec(v_r0_2157_);
v___x_2160_ = l_List_reverse___redArg(v_a_2159_);
return v___x_2160_;
}
else
{
lean_object* v_head_2161_; lean_object* v_tail_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2183_; 
v_head_2161_ = lean_ctor_get(v_a_2158_, 0);
v_tail_2162_ = lean_ctor_get(v_a_2158_, 1);
v_isSharedCheck_2183_ = !lean_is_exclusive(v_a_2158_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2164_ = v_a_2158_;
v_isShared_2165_ = v_isSharedCheck_2183_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_tail_2162_);
lean_inc(v_head_2161_);
lean_dec(v_a_2158_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2183_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v_snd_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2181_; 
v_snd_2166_ = lean_ctor_get(v_head_2161_, 1);
v_isSharedCheck_2181_ = !lean_is_exclusive(v_head_2161_);
if (v_isSharedCheck_2181_ == 0)
{
lean_object* v_unused_2182_; 
v_unused_2182_ = lean_ctor_get(v_head_2161_, 0);
lean_dec(v_unused_2182_);
v___x_2168_ = v_head_2161_;
v_isShared_2169_ = v_isSharedCheck_2181_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_snd_2166_);
lean_dec(v_head_2161_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2181_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2170_ = lean_nat_add(v___x_2155_, v_ll_2156_);
v___x_2171_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r0_2157_);
v___x_2172_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r0_2157_, v_r0_2157_, v___x_2170_, v___x_2171_);
v___x_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 0, v___x_2173_);
v___x_2175_ = v___x_2168_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2173_);
lean_ctor_set(v_reuseFailAlloc_2180_, 1, v_snd_2166_);
v___x_2175_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2177_; 
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 1, v_a_2159_);
lean_ctor_set(v___x_2164_, 0, v___x_2175_);
v___x_2177_ = v___x_2164_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2175_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v_a_2159_);
v___x_2177_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
v_a_2158_ = v_tail_2162_;
v_a_2159_ = v___x_2177_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1___boxed(lean_object* v___x_2184_, lean_object* v_ll_2185_, lean_object* v_r0_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(v___x_2184_, v_ll_2185_, v_r0_2186_, v_a_2187_, v_a_2188_);
lean_dec(v_ll_2185_);
lean_dec(v___x_2184_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3(lean_object* v_after1_2190_, lean_object* v___x_2191_, lean_object* v_r0_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_){
_start:
{
if (lean_obj_tag(v_a_2193_) == 0)
{
lean_object* v___x_2195_; 
lean_dec(v_r0_2192_);
v___x_2195_ = lean_array_to_list(v_a_2194_);
return v___x_2195_;
}
else
{
lean_object* v_head_2196_; lean_object* v_tail_2197_; lean_object* v_after2_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v_head_2196_ = lean_ctor_get(v_a_2193_, 0);
lean_inc_n(v_head_2196_, 2);
v_tail_2197_ = lean_ctor_get(v_a_2193_, 1);
lean_inc(v_tail_2197_);
lean_dec_ref_known(v_a_2193_, 2);
v_after2_2198_ = l_List_drop___redArg(v_head_2196_, v_after1_2190_);
v___x_2199_ = lp_lean_x2dftml_LeanFtml_mathAttrs(v_after2_2198_);
v___x_2200_ = lean_box(0);
lean_inc(v_r0_2192_);
v___x_2201_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(v___x_2191_, v_head_2196_, v_r0_2192_, v___x_2199_, v___x_2200_);
lean_dec(v_head_2196_);
v___x_2202_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2194_, v___x_2201_);
v_a_2193_ = v_tail_2197_;
v_a_2194_ = v___x_2202_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3___boxed(lean_object* v_after1_2204_, lean_object* v___x_2205_, lean_object* v_r0_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3(v_after1_2204_, v___x_2205_, v_r0_2206_, v_a_2207_, v_a_2208_);
lean_dec(v___x_2205_);
lean_dec(v_after1_2204_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3(lean_object* v___x_2210_, lean_object* v_r0_2211_, lean_object* v_after1_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_){
_start:
{
if (lean_obj_tag(v_a_2213_) == 0)
{
lean_object* v___x_2215_; 
lean_dec(v_r0_2211_);
v___x_2215_ = lean_array_to_list(v_a_2214_);
return v___x_2215_;
}
else
{
lean_object* v_head_2216_; lean_object* v_tail_2217_; lean_object* v_after2_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v_head_2216_ = lean_ctor_get(v_a_2213_, 0);
lean_inc_n(v_head_2216_, 2);
v_tail_2217_ = lean_ctor_get(v_a_2213_, 1);
lean_inc(v_tail_2217_);
lean_dec_ref_known(v_a_2213_, 2);
v_after2_2218_ = l_List_drop___redArg(v_head_2216_, v_after1_2212_);
v___x_2219_ = lp_lean_x2dftml_LeanFtml_mathAttrs(v_after2_2218_);
v___x_2220_ = lean_box(0);
lean_inc(v_r0_2211_);
v___x_2221_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(v___x_2210_, v_head_2216_, v_r0_2211_, v___x_2219_, v___x_2220_);
lean_dec(v_head_2216_);
v___x_2222_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2214_, v___x_2221_);
v___x_2223_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3(v_after1_2212_, v___x_2210_, v_r0_2211_, v_tail_2217_, v___x_2222_);
return v___x_2223_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3___boxed(lean_object* v___x_2224_, lean_object* v_r0_2225_, lean_object* v_after1_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3(v___x_2224_, v_r0_2225_, v_after1_2226_, v_a_2227_, v_a_2228_);
lean_dec(v_after1_2226_);
lean_dec(v___x_2224_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4(lean_object* v_r0_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_){
_start:
{
if (lean_obj_tag(v_a_2231_) == 0)
{
lean_object* v___x_2233_; 
lean_dec(v_r0_2230_);
v___x_2233_ = lean_array_to_list(v_a_2232_);
return v___x_2233_;
}
else
{
lean_object* v_head_2234_; lean_object* v_tail_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v_after1_2238_; lean_object* v___x_2239_; lean_object* v_labelRun_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v_head_2234_ = lean_ctor_get(v_a_2231_, 0);
v_tail_2235_ = lean_ctor_get(v_a_2231_, 1);
v___x_2236_ = lean_unsigned_to_nat(1u);
v___x_2237_ = lean_nat_add(v_head_2234_, v___x_2236_);
lean_inc(v___x_2237_);
v_after1_2238_ = l_List_drop___redArg(v___x_2237_, v_r0_2230_);
v___x_2239_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_after1_2238_);
v_labelRun_2240_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2(v_after1_2238_, v_after1_2238_, v___x_2239_);
v___x_2241_ = l_List_lengthTR___redArg(v_labelRun_2240_);
lean_dec(v_labelRun_2240_);
v___x_2242_ = lean_nat_add(v___x_2241_, v___x_2236_);
lean_dec(v___x_2241_);
v___x_2243_ = l_List_range(v___x_2242_);
lean_inc(v_r0_2230_);
v___x_2244_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3(v___x_2237_, v_r0_2230_, v_after1_2238_, v___x_2243_, v___x_2239_);
lean_dec(v_after1_2238_);
lean_dec(v___x_2237_);
v___x_2245_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2232_, v___x_2244_);
v_a_2231_ = v_tail_2235_;
v_a_2232_ = v___x_2245_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4___boxed(lean_object* v_r0_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4(v_r0_2247_, v_a_2248_, v_a_2249_);
lean_dec(v_a_2248_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathHead(lean_object* v_r0_2251_){
_start:
{
lean_object* v___y_2253_; 
if (lean_obj_tag(v_r0_2251_) == 0)
{
lean_object* v___x_2258_; 
v___x_2258_ = lean_box(0);
v___y_2253_ = v___x_2258_;
goto v___jp_2252_;
}
else
{
lean_object* v_head_2259_; uint8_t v___x_2260_; 
v_head_2259_ = lean_ctor_get(v_r0_2251_, 0);
v___x_2260_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_2259_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_box(0);
v___y_2253_ = v___x_2261_;
goto v___jp_2252_;
}
else
{
lean_object* v___x_2262_; lean_object* v_wsRun_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2262_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc_ref_n(v_r0_2251_, 2);
v_wsRun_2263_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r0_2251_, v_r0_2251_, v___x_2262_);
v___x_2264_ = l_List_lengthTR___redArg(v_wsRun_2263_);
lean_dec(v_wsRun_2263_);
v___x_2265_ = l_List_range(v___x_2264_);
v___x_2266_ = l_List_reverse___redArg(v___x_2265_);
v___x_2267_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4(v_r0_2251_, v___x_2266_, v___x_2262_);
lean_dec(v___x_2266_);
v___y_2253_ = v___x_2267_;
goto v___jp_2252_;
}
}
v___jp_2252_:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v_absent_2256_; lean_object* v___x_2257_; 
v___x_2254_ = lp_lean_x2dftml_LeanFtml_mathAttrs(v_r0_2251_);
v___x_2255_ = lean_box(0);
v_absent_2256_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__0(v___x_2254_, v___x_2255_);
v___x_2257_ = l_List_appendTR___redArg(v___y_2253_, v_absent_2256_);
return v___x_2257_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1(void){
_start:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__0));
v___x_2270_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_lookaheadCloser(lean_object* v_r_2271_){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2272_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1, &lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1);
v___x_2273_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r_2271_);
v___x_2274_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r_2271_, v_r_2271_, v___x_2273_);
v___x_2275_ = l_List_lengthTR___redArg(v___x_2274_);
lean_dec(v___x_2274_);
v___x_2276_ = l_List_drop___redArg(v___x_2275_, v_r_2271_);
lean_dec(v_r_2271_);
v___x_2277_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2272_, v___x_2276_);
if (lean_obj_tag(v___x_2277_) == 0)
{
uint8_t v___x_2278_; 
v___x_2278_ = 0;
return v___x_2278_;
}
else
{
uint8_t v___x_2279_; 
lean_dec_ref_known(v___x_2277_, 1);
v___x_2279_ = 1;
return v___x_2279_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookaheadCloser___boxed(lean_object* v_r_2280_){
_start:
{
uint8_t v_res_2281_; lean_object* v_r_2282_; 
v_res_2281_ = lp_lean_x2dftml_LeanFtml_lookaheadCloser(v_r_2280_);
v_r_2282_ = lean_box(v_res_2281_);
return v_r_2282_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathPattern_spec__0(lean_object* v_fst_2283_, lean_object* v_fst_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_){
_start:
{
if (lean_obj_tag(v_a_2285_) == 0)
{
lean_object* v___x_2287_; 
lean_dec(v_fst_2284_);
lean_dec(v_fst_2283_);
v___x_2287_ = l_List_reverse___redArg(v_a_2286_);
return v___x_2287_;
}
else
{
lean_object* v_head_2288_; lean_object* v_tail_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2299_; 
v_head_2288_ = lean_ctor_get(v_a_2285_, 0);
v_tail_2289_ = lean_ctor_get(v_a_2285_, 1);
v_isSharedCheck_2299_ = !lean_is_exclusive(v_a_2285_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2291_ = v_a_2285_;
v_isShared_2292_ = v_isSharedCheck_2299_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_tail_2289_);
lean_inc(v_head_2288_);
lean_dec(v_a_2285_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2299_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2296_; 
lean_inc(v_fst_2283_);
v___x_2293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2293_, 0, v_fst_2283_);
lean_ctor_set(v___x_2293_, 1, v_head_2288_);
lean_inc(v_fst_2284_);
v___x_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2294_, 0, v_fst_2284_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 1, v_a_2286_);
lean_ctor_set(v___x_2291_, 0, v___x_2294_);
v___x_2296_ = v___x_2291_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v___x_2294_);
lean_ctor_set(v_reuseFailAlloc_2298_, 1, v_a_2286_);
v___x_2296_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
v_a_2285_ = v_tail_2289_;
v_a_2286_ = v___x_2296_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathPattern___closed__1(void){
_start:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathPattern___closed__0));
v___x_2302_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2301_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathPattern(lean_object* v_s_2305_, uint8_t v_atLineStart_2306_, lean_object* v_x_2307_){
_start:
{
lean_object* v_zero_2308_; uint8_t v_isZero_2309_; 
v_zero_2308_ = lean_unsigned_to_nat(0u);
v_isZero_2309_ = lean_nat_dec_eq(v_x_2307_, v_zero_2308_);
if (v_isZero_2309_ == 1)
{
lean_object* v___x_2310_; 
lean_dec(v_s_2305_);
v___x_2310_ = lean_box(0);
return v___x_2310_;
}
else
{
if (v_atLineStart_2306_ == 0)
{
lean_object* v___x_2311_; 
lean_dec(v_s_2305_);
v___x_2311_ = lean_box(0);
return v___x_2311_;
}
else
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathPattern___closed__1, &lp_lean_x2dftml_LeanFtml_mathPattern___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_mathPattern___closed__1);
v___x_2313_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2312_, v_s_2305_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v___x_2314_; 
v___x_2314_ = lean_box(0);
return v___x_2314_;
}
else
{
lean_object* v_val_2315_; lean_object* v_one_2316_; lean_object* v_n_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v_val_2315_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_val_2315_);
lean_dec_ref_known(v___x_2313_, 1);
v_one_2316_ = lean_unsigned_to_nat(1u);
v_n_2317_ = lean_nat_sub(v_x_2307_, v_one_2316_);
v___x_2318_ = lp_lean_x2dftml_LeanFtml_mathHead(v_val_2315_);
v___x_2319_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathPattern___closed__2));
v___x_2320_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1(v_n_2317_, v___x_2318_, v___x_2319_);
lean_dec(v_n_2317_);
return v___x_2320_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3(lean_object* v_s_2323_, lean_object* v_n_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_){
_start:
{
if (lean_obj_tag(v_a_2325_) == 0)
{
lean_object* v___x_2327_; 
lean_dec(v_s_2323_);
v___x_2327_ = lean_array_to_list(v_a_2326_);
return v___x_2327_;
}
else
{
lean_object* v_head_2328_; lean_object* v_tail_2329_; lean_object* v___y_2331_; lean_object* v_snd_2334_; lean_object* v_snd_2335_; lean_object* v_snd_2336_; uint8_t v___x_2337_; 
v_head_2328_ = lean_ctor_get(v_a_2325_, 0);
lean_inc(v_head_2328_);
v_tail_2329_ = lean_ctor_get(v_a_2325_, 1);
lean_inc(v_tail_2329_);
lean_dec_ref_known(v_a_2325_, 2);
v_snd_2334_ = lean_ctor_get(v_head_2328_, 1);
lean_inc(v_snd_2334_);
lean_dec(v_head_2328_);
v_snd_2335_ = lean_ctor_get(v_snd_2334_, 1);
lean_inc(v_snd_2335_);
lean_dec(v_snd_2334_);
v_snd_2336_ = lean_ctor_get(v_snd_2335_, 1);
lean_inc_n(v_snd_2336_, 2);
lean_dec(v_snd_2335_);
v___x_2337_ = lp_lean_x2dftml_LeanFtml_lookaheadCloser(v_snd_2336_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2338_ = l_List_lengthTR___redArg(v_s_2323_);
v___x_2339_ = l_List_lengthTR___redArg(v_snd_2336_);
v___x_2340_ = lean_nat_sub(v___x_2338_, v___x_2339_);
lean_dec(v___x_2339_);
lean_dec(v___x_2338_);
v___x_2341_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc_n(v_s_2323_, 2);
v___x_2342_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2323_, v_s_2323_, v___x_2340_, v___x_2341_);
v___x_2343_ = l_List_getLast_x3f___redArg(v___x_2342_);
lean_dec(v___x_2342_);
v___x_2344_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0));
v___x_2345_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2343_, v___x_2344_);
lean_dec(v___x_2343_);
lean_inc(v_snd_2336_);
v___x_2346_ = lp_lean_x2dftml_LeanFtml_mathBody(v_snd_2336_, v___x_2345_, v_n_2324_);
v___x_2347_ = lean_box(0);
v___x_2348_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_s_2323_, v_snd_2336_, v___x_2346_, v___x_2347_);
lean_dec(v_snd_2336_);
v___y_2331_ = v___x_2348_;
goto v___jp_2330_;
}
else
{
lean_object* v___x_2349_; 
lean_dec(v_snd_2336_);
v___x_2349_ = lean_box(0);
v___y_2331_ = v___x_2349_;
goto v___jp_2330_;
}
v___jp_2330_:
{
lean_object* v___x_2332_; 
v___x_2332_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2326_, v___y_2331_);
v_a_2325_ = v_tail_2329_;
v_a_2326_ = v___x_2332_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBody(lean_object* v_s_2350_, uint8_t v_lineStart_2351_, lean_object* v_x_2352_){
_start:
{
lean_object* v___y_2354_; lean_object* v___y_2355_; lean_object* v___y_2356_; lean_object* v_zero_2359_; uint8_t v_isZero_2360_; 
v_zero_2359_ = lean_unsigned_to_nat(0u);
v_isZero_2360_ = lean_nat_dec_eq(v_x_2352_, v_zero_2359_);
if (v_isZero_2360_ == 1)
{
lean_object* v___x_2361_; 
lean_dec(v_s_2350_);
v___x_2361_ = lean_box(0);
return v___x_2361_;
}
else
{
lean_object* v_one_2362_; lean_object* v_n_2363_; lean_object* v___y_2365_; 
v_one_2362_ = lean_unsigned_to_nat(1u);
v_n_2363_ = lean_nat_sub(v_x_2352_, v_one_2362_);
if (lean_obj_tag(v_s_2350_) == 1)
{
lean_object* v_head_2379_; lean_object* v_tail_2380_; lean_object* v___x_2381_; uint8_t v___x_2382_; 
v_head_2379_ = lean_ctor_get(v_s_2350_, 0);
v_tail_2380_ = lean_ctor_get(v_s_2350_, 1);
v___x_2381_ = lean_unsigned_to_nat(10u);
v___x_2382_ = lean_nat_dec_eq(v_head_2379_, v___x_2381_);
if (v___x_2382_ == 0)
{
goto v___jp_2377_;
}
else
{
lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2383_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1, &lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1);
lean_inc(v_tail_2380_);
v___x_2384_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2383_, v_tail_2380_);
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v___x_2385_; 
v___x_2385_ = lean_box(0);
v___y_2365_ = v___x_2385_;
goto v___jp_2364_;
}
else
{
lean_object* v_val_2386_; lean_object* v___y_2388_; lean_object* v___y_2394_; 
v_val_2386_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_val_2386_);
lean_dec_ref_known(v___x_2384_, 1);
if (lean_obj_tag(v_val_2386_) == 0)
{
lean_object* v___x_2401_; 
v___x_2401_ = lean_box(0);
v___y_2394_ = v___x_2401_;
goto v___jp_2393_;
}
else
{
lean_object* v_head_2402_; lean_object* v_tail_2403_; uint8_t v___x_2404_; 
v_head_2402_ = lean_ctor_get(v_val_2386_, 0);
v_tail_2403_ = lean_ctor_get(v_val_2386_, 1);
v___x_2404_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_2402_);
if (v___x_2404_ == 0)
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_box(0);
v___y_2394_ = v___x_2405_;
goto v___jp_2393_;
}
else
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2406_ = lean_box(0);
lean_inc(v_tail_2403_);
v___x_2407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2406_);
lean_ctor_set(v___x_2407_, 1, v_tail_2403_);
v___x_2408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
lean_ctor_set(v___x_2408_, 1, v___x_2406_);
v___y_2394_ = v___x_2408_;
goto v___jp_2393_;
}
}
v___jp_2387_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2389_ = lean_box(0);
v___x_2390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2389_);
lean_ctor_set(v___x_2390_, 1, v_val_2386_);
v___x_2391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
lean_ctor_set(v___x_2391_, 1, v___x_2389_);
v___x_2392_ = l_List_appendTR___redArg(v___y_2388_, v___x_2391_);
v___y_2365_ = v___x_2392_;
goto v___jp_2364_;
}
v___jp_2393_:
{
uint8_t v___x_2395_; 
v___x_2395_ = l_List_isEmpty___redArg(v_val_2386_);
if (v___x_2395_ == 0)
{
lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
v___x_2396_ = l_List_head_x3f___redArg(v_val_2386_);
v___x_2397_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0));
v___x_2398_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2396_, v___x_2397_);
lean_dec(v___x_2396_);
if (v___x_2398_ == 0)
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
lean_dec(v_val_2386_);
v___x_2399_ = lean_box(0);
v___x_2400_ = l_List_appendTR___redArg(v___y_2394_, v___x_2399_);
v___y_2365_ = v___x_2400_;
goto v___jp_2364_;
}
else
{
v___y_2388_ = v___y_2394_;
goto v___jp_2387_;
}
}
else
{
v___y_2388_ = v___y_2394_;
goto v___jp_2387_;
}
}
}
}
}
else
{
goto v___jp_2377_;
}
v___jp_2364_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v_recs_2368_; 
lean_inc_n(v_s_2350_, 2);
v___x_2366_ = lp_lean_x2dftml_LeanFtml_mathPattern(v_s_2350_, v_lineStart_2351_, v_n_2363_);
v___x_2367_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsBody___closed__0));
v_recs_2368_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3(v_s_2350_, v_n_2363_, v___x_2366_, v___x_2367_);
if (lean_obj_tag(v_s_2350_) == 0)
{
lean_object* v___x_2369_; 
lean_dec(v_n_2363_);
v___x_2369_ = lean_box(0);
v___y_2354_ = v___y_2365_;
v___y_2355_ = v_recs_2368_;
v___y_2356_ = v___x_2369_;
goto v___jp_2353_;
}
else
{
lean_object* v_head_2370_; lean_object* v_tail_2371_; lean_object* v___x_2372_; uint8_t v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v_head_2370_ = lean_ctor_get(v_s_2350_, 0);
lean_inc(v_head_2370_);
v_tail_2371_ = lean_ctor_get(v_s_2350_, 1);
lean_inc(v_tail_2371_);
lean_dec_ref_known(v_s_2350_, 2);
v___x_2372_ = lean_unsigned_to_nat(10u);
v___x_2373_ = lean_nat_dec_eq(v_head_2370_, v___x_2372_);
v___x_2374_ = lp_lean_x2dftml_LeanFtml_mathBody(v_tail_2371_, v___x_2373_, v_n_2363_);
lean_dec(v_n_2363_);
v___x_2375_ = lean_box(0);
v___x_2376_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(v_head_2370_, v___x_2374_, v___x_2375_);
v___y_2354_ = v___y_2365_;
v___y_2355_ = v_recs_2368_;
v___y_2356_ = v___x_2376_;
goto v___jp_2353_;
}
}
v___jp_2377_:
{
lean_object* v___x_2378_; 
v___x_2378_ = lean_box(0);
v___y_2365_ = v___x_2378_;
goto v___jp_2364_;
}
}
v___jp_2353_:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; 
v___x_2357_ = l_List_appendTR___redArg(v___y_2354_, v___y_2355_);
v___x_2358_ = l_List_appendTR___redArg(v___x_2357_, v___y_2356_);
return v___x_2358_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1(lean_object* v_n_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
if (lean_obj_tag(v_a_2410_) == 0)
{
lean_object* v___x_2412_; 
v___x_2412_ = lean_array_to_list(v_a_2411_);
return v___x_2412_;
}
else
{
lean_object* v_head_2413_; lean_object* v_snd_2414_; lean_object* v_tail_2415_; lean_object* v_fst_2416_; lean_object* v_fst_2417_; lean_object* v_snd_2418_; uint8_t v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v_head_2413_ = lean_ctor_get(v_a_2410_, 0);
lean_inc(v_head_2413_);
v_snd_2414_ = lean_ctor_get(v_head_2413_, 1);
lean_inc(v_snd_2414_);
v_tail_2415_ = lean_ctor_get(v_a_2410_, 1);
lean_inc(v_tail_2415_);
lean_dec_ref_known(v_a_2410_, 2);
v_fst_2416_ = lean_ctor_get(v_head_2413_, 0);
lean_inc(v_fst_2416_);
lean_dec(v_head_2413_);
v_fst_2417_ = lean_ctor_get(v_snd_2414_, 0);
lean_inc(v_fst_2417_);
v_snd_2418_ = lean_ctor_get(v_snd_2414_, 1);
lean_inc(v_snd_2418_);
lean_dec(v_snd_2414_);
v___x_2419_ = 0;
v___x_2420_ = lp_lean_x2dftml_LeanFtml_mathBody(v_snd_2418_, v___x_2419_, v_n_2409_);
v___x_2421_ = lean_box(0);
v___x_2422_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathPattern_spec__0(v_fst_2417_, v_fst_2416_, v___x_2420_, v___x_2421_);
v___x_2423_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2411_, v___x_2422_);
v_a_2410_ = v_tail_2415_;
v_a_2411_ = v___x_2423_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1___boxed(lean_object* v_n_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1(v_n_2425_, v_a_2426_, v_a_2427_);
lean_dec(v_n_2425_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathPattern___boxed(lean_object* v_s_2429_, lean_object* v_atLineStart_2430_, lean_object* v_x_2431_){
_start:
{
uint8_t v_atLineStart_boxed_2432_; lean_object* v_res_2433_; 
v_atLineStart_boxed_2432_ = lean_unbox(v_atLineStart_2430_);
v_res_2433_ = lp_lean_x2dftml_LeanFtml_mathPattern(v_s_2429_, v_atLineStart_boxed_2432_, v_x_2431_);
lean_dec(v_x_2431_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___boxed(lean_object* v_s_2434_, lean_object* v_n_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3(v_s_2434_, v_n_2435_, v_a_2436_, v_a_2437_);
lean_dec(v_n_2435_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBody___boxed(lean_object* v_s_2439_, lean_object* v_lineStart_2440_, lean_object* v_x_2441_){
_start:
{
uint8_t v_lineStart_boxed_2442_; lean_object* v_res_2443_; 
v_lineStart_boxed_2442_ = lean_unbox(v_lineStart_2440_);
v_res_2443_ = lp_lean_x2dftml_LeanFtml_mathBody(v_s_2439_, v_lineStart_boxed_2442_, v_x_2441_);
lean_dec(v_x_2441_);
return v_res_2443_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(lean_object* v_r_2446_){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; uint8_t v___x_2453_; 
v___x_2447_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r_2446_);
v___x_2448_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r_2446_, v_r_2446_, v___x_2447_);
v___x_2449_ = l_List_lengthTR___redArg(v___x_2448_);
lean_dec(v___x_2448_);
v___x_2450_ = l_List_drop___redArg(v___x_2449_, v_r_2446_);
lean_dec(v_r_2446_);
v___x_2451_ = l_List_head_x3f___redArg(v___x_2450_);
lean_dec(v___x_2450_);
v___x_2452_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0___closed__0));
v___x_2453_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2451_, v___x_2452_);
lean_dec(v___x_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0___boxed(lean_object* v_r_2454_){
_start:
{
uint8_t v_res_2455_; lean_object* v_r_2456_; 
v_res_2455_ = lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(v_r_2454_);
v_r_2456_ = lean_box(v_res_2455_);
return v_r_2456_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1(void){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2458_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__0));
v___x_2459_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2458_);
return v___x_2459_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3(void){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__2));
v___x_2462_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard_go(lean_object* v_a_2463_){
_start:
{
if (lean_obj_tag(v_a_2463_) == 0)
{
uint8_t v___x_2464_; 
v___x_2464_ = 0;
return v___x_2464_;
}
else
{
lean_object* v_tail_2465_; uint8_t v___y_2467_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v_tail_2465_ = lean_ctor_get(v_a_2463_, 1);
lean_inc(v_tail_2465_);
v___x_2469_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1, &lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1);
lean_inc_ref(v_a_2463_);
v___x_2470_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2469_, v_a_2463_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2471_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3, &lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3);
v___x_2472_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2471_, v_a_2463_);
if (lean_obj_tag(v___x_2472_) == 0)
{
v_a_2463_ = v_tail_2465_;
goto _start;
}
else
{
lean_object* v_val_2474_; uint8_t v___x_2475_; 
v_val_2474_ = lean_ctor_get(v___x_2472_, 0);
lean_inc(v_val_2474_);
lean_dec_ref_known(v___x_2472_, 1);
v___x_2475_ = lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(v_val_2474_);
v___y_2467_ = v___x_2475_;
goto v___jp_2466_;
}
}
else
{
lean_object* v_val_2476_; uint8_t v___x_2477_; 
lean_dec_ref_known(v_a_2463_, 2);
v_val_2476_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_val_2476_);
lean_dec_ref_known(v___x_2470_, 1);
v___x_2477_ = lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(v_val_2476_);
v___y_2467_ = v___x_2477_;
goto v___jp_2466_;
}
v___jp_2466_:
{
if (v___y_2467_ == 0)
{
v_a_2463_ = v_tail_2465_;
goto _start;
}
else
{
lean_dec(v_tail_2465_);
return v___y_2467_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___boxed(lean_object* v_a_2478_){
_start:
{
uint8_t v_res_2479_; lean_object* v_r_2480_; 
v_res_2479_ = lp_lean_x2dftml_LeanFtml_mathGuard_go(v_a_2478_);
v_r_2480_ = lean_box(v_res_2479_);
return v_r_2480_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard(lean_object* v_content_2481_){
_start:
{
uint8_t v___x_2482_; 
v___x_2482_ = lp_lean_x2dftml_LeanFtml_mathGuard_go(v_content_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard___boxed(lean_object* v_content_2483_){
_start:
{
uint8_t v_res_2484_; lean_object* v_r_2485_; 
v_res_2484_ = lp_lean_x2dftml_LeanFtml_mathGuard(v_content_2483_);
v_r_2485_ = lean_box(v_res_2484_);
return v_r_2485_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_eqSet(lean_object* v_m_2486_, lean_object* v_k_2487_, lean_object* v_v_2488_){
_start:
{
if (lean_obj_tag(v_m_2486_) == 0)
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2489_, 0, v_k_2487_);
lean_ctor_set(v___x_2489_, 1, v_v_2488_);
v___x_2490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
lean_ctor_set(v___x_2490_, 1, v_m_2486_);
return v___x_2490_;
}
else
{
lean_object* v_head_2491_; lean_object* v_tail_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2514_; 
v_head_2491_ = lean_ctor_get(v_m_2486_, 0);
v_tail_2492_ = lean_ctor_get(v_m_2486_, 1);
v_isSharedCheck_2514_ = !lean_is_exclusive(v_m_2486_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2494_ = v_m_2486_;
v_isShared_2495_ = v_isSharedCheck_2514_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_tail_2492_);
lean_inc(v_head_2491_);
lean_dec(v_m_2486_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2514_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v_fst_2496_; uint8_t v___x_2497_; 
v_fst_2496_ = lean_ctor_get(v_head_2491_, 0);
v___x_2497_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_2496_, v_k_2487_);
if (v___x_2497_ == 0)
{
lean_object* v___x_2498_; lean_object* v___x_2500_; 
v___x_2498_ = lp_lean_x2dftml_LeanFtml_eqSet(v_tail_2492_, v_k_2487_, v_v_2488_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 1, v___x_2498_);
v___x_2500_ = v___x_2494_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_head_2491_);
lean_ctor_set(v_reuseFailAlloc_2501_, 1, v___x_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
else
{
lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2511_; 
v_isSharedCheck_2511_ = !lean_is_exclusive(v_head_2491_);
if (v_isSharedCheck_2511_ == 0)
{
lean_object* v_unused_2512_; lean_object* v_unused_2513_; 
v_unused_2512_ = lean_ctor_get(v_head_2491_, 1);
lean_dec(v_unused_2512_);
v_unused_2513_ = lean_ctor_get(v_head_2491_, 0);
lean_dec(v_unused_2513_);
v___x_2503_ = v_head_2491_;
v_isShared_2504_ = v_isSharedCheck_2511_;
goto v_resetjp_2502_;
}
else
{
lean_dec(v_head_2491_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2511_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 1, v_v_2488_);
lean_ctor_set(v___x_2503_, 0, v_k_2487_);
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v_k_2487_);
lean_ctor_set(v_reuseFailAlloc_2510_, 1, v_v_2488_);
v___x_2506_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
lean_object* v___x_2508_; 
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v___x_2506_);
v___x_2508_ = v___x_2494_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v___x_2506_);
lean_ctor_set(v_reuseFailAlloc_2509_, 1, v_tail_2492_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_mathProcess_spec__0(lean_object* v_x_2515_){
_start:
{
if (lean_obj_tag(v_x_2515_) == 0)
{
uint8_t v___x_2516_; 
v___x_2516_ = 0;
return v___x_2516_;
}
else
{
lean_object* v_head_2517_; lean_object* v_tail_2518_; lean_object* v_fst_2519_; uint8_t v___x_2520_; 
v_head_2517_ = lean_ctor_get(v_x_2515_, 0);
lean_inc(v_head_2517_);
v_tail_2518_ = lean_ctor_get(v_x_2515_, 1);
lean_inc(v_tail_2518_);
lean_dec_ref_known(v_x_2515_, 2);
v_fst_2519_ = lean_ctor_get(v_head_2517_, 0);
lean_inc(v_fst_2519_);
lean_dec(v_head_2517_);
v___x_2520_ = lp_lean_x2dftml_LeanFtml_isTypeVariantKey(v_fst_2519_);
if (v___x_2520_ == 0)
{
v_x_2515_ = v_tail_2518_;
goto _start;
}
else
{
lean_dec(v_tail_2518_);
return v___x_2520_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_mathProcess_spec__0___boxed(lean_object* v_x_2522_){
_start:
{
uint8_t v_res_2523_; lean_object* v_r_2524_; 
v_res_2523_ = lp_lean_x2dftml_List_any___at___00LeanFtml_mathProcess_spec__0(v_x_2522_);
v_r_2524_ = lean_box(v_res_2523_);
return v_r_2524_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__2(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__1));
v___x_2528_ = l_String_toListImpl(v___x_2527_);
return v___x_2528_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__4(void){
_start:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__3));
v___x_2531_ = l_String_toListImpl(v___x_2530_);
return v___x_2531_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__6(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__5));
v___x_2534_ = l_String_toListImpl(v___x_2533_);
return v___x_2534_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__7(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeProcess___closed__0));
v___x_2536_ = l_String_toListImpl(v___x_2535_);
return v___x_2536_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__8(void){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2537_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__7, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__7);
v___x_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2537_);
return v___x_2538_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__10(void){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2540_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__9));
v___x_2541_ = l_String_toListImpl(v___x_2540_);
return v___x_2541_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__11(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__10, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__10);
v___x_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathProcess(lean_object* v_g1_2544_, lean_object* v_g2_2545_, lean_object* v_g3_2546_, lean_object* v_doc_2547_){
_start:
{
lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v___y_2604_; lean_object* v___y_2605_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v_page_2622_; lean_object* v_site_2623_; lean_object* v_inclusions_2624_; lean_object* v_inclusionsNotExist_2625_; lean_object* v_footnotes_2626_; lean_object* v_bibitems_2627_; lean_object* v_bibitemIds_2628_; lean_object* v_headlineId_2629_; lean_object* v_mathId_2630_; lean_object* v_equations_2631_; lean_object* v_collapsibleCount_2632_; lean_object* v_tabviewCounter_2633_; lean_object* v_scoredAnchors_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2650_; 
v_page_2622_ = lean_ctor_get(v_doc_2547_, 0);
v_site_2623_ = lean_ctor_get(v_doc_2547_, 1);
v_inclusions_2624_ = lean_ctor_get(v_doc_2547_, 2);
v_inclusionsNotExist_2625_ = lean_ctor_get(v_doc_2547_, 3);
v_footnotes_2626_ = lean_ctor_get(v_doc_2547_, 4);
v_bibitems_2627_ = lean_ctor_get(v_doc_2547_, 5);
v_bibitemIds_2628_ = lean_ctor_get(v_doc_2547_, 6);
v_headlineId_2629_ = lean_ctor_get(v_doc_2547_, 7);
v_mathId_2630_ = lean_ctor_get(v_doc_2547_, 8);
v_equations_2631_ = lean_ctor_get(v_doc_2547_, 9);
v_collapsibleCount_2632_ = lean_ctor_get(v_doc_2547_, 10);
v_tabviewCounter_2633_ = lean_ctor_get(v_doc_2547_, 11);
v_scoredAnchors_2634_ = lean_ctor_get(v_doc_2547_, 12);
v_isSharedCheck_2650_ = !lean_is_exclusive(v_doc_2547_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2636_ = v_doc_2547_;
v_isShared_2637_ = v_isSharedCheck_2650_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_scoredAnchors_2634_);
lean_inc(v_tabviewCounter_2633_);
lean_inc(v_collapsibleCount_2632_);
lean_inc(v_equations_2631_);
lean_inc(v_mathId_2630_);
lean_inc(v_headlineId_2629_);
lean_inc(v_bibitemIds_2628_);
lean_inc(v_bibitems_2627_);
lean_inc(v_footnotes_2626_);
lean_inc(v_inclusionsNotExist_2625_);
lean_inc(v_inclusions_2624_);
lean_inc(v_site_2623_);
lean_inc(v_page_2622_);
lean_dec(v_doc_2547_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2650_;
goto v_resetjp_2635_;
}
v___jp_2548_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v_entry_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2567_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__0));
v___x_2568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__2, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__2);
lean_inc(v___y_2564_);
v___x_2569_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_2564_);
v___x_2570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2568_);
lean_ctor_set(v___x_2570_, 1, v___x_2569_);
v___x_2571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__4, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__4);
v___x_2572_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_2550_);
v___x_2573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2571_);
lean_ctor_set(v___x_2573_, 1, v___x_2572_);
v___x_2574_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__6, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__6);
lean_inc(v___y_2555_);
v___x_2575_ = lean_nat_to_int(v___y_2555_);
v___x_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2574_);
lean_ctor_set(v___x_2577_, 1, v___x_2576_);
lean_inc_ref(v___y_2556_);
v___x_2578_ = l_String_toListImpl(v___y_2556_);
v___x_2579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2578_);
lean_ctor_set(v___x_2579_, 1, v___y_2566_);
v___x_2580_ = lean_box(0);
v___x_2581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2579_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2577_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2573_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2570_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v_entry_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_entry_2585_, 0, v___x_2567_);
lean_ctor_set(v_entry_2585_, 1, v___x_2584_);
v___x_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_entry_2585_);
v___x_2587_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___y_2564_);
v___x_2588_ = lp_lean_x2dftml_LeanFtml_eqSet(v___y_2551_, v___x_2587_, v___y_2555_);
v___x_2589_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2589_, 0, v___y_2560_);
lean_ctor_set(v___x_2589_, 1, v___y_2563_);
lean_ctor_set(v___x_2589_, 2, v___y_2553_);
lean_ctor_set(v___x_2589_, 3, v___y_2557_);
lean_ctor_set(v___x_2589_, 4, v___y_2559_);
lean_ctor_set(v___x_2589_, 5, v___y_2549_);
lean_ctor_set(v___x_2589_, 6, v___y_2565_);
lean_ctor_set(v___x_2589_, 7, v___y_2561_);
lean_ctor_set(v___x_2589_, 8, v___y_2554_);
lean_ctor_set(v___x_2589_, 9, v___x_2588_);
lean_ctor_set(v___x_2589_, 10, v___y_2562_);
lean_ctor_set(v___x_2589_, 11, v___y_2552_);
lean_ctor_set(v___x_2589_, 12, v___y_2558_);
v___x_2590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2586_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
return v___x_2590_;
}
v___jp_2591_:
{
lean_object* v_content_2608_; uint8_t v___x_2609_; 
v_content_2608_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_g3_2546_);
lean_inc(v_content_2608_);
v___x_2609_ = lp_lean_x2dftml_LeanFtml_mathGuard_go(v_content_2608_);
if (v___x_2609_ == 0)
{
lean_object* v_label_2610_; lean_object* v_attrs_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
lean_dec_ref(v___y_2594_);
v_label_2610_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_2607_);
v_attrs_2611_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_g2_2545_);
v___x_2612_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__0));
v___x_2613_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1, &lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_isTypeVariantKey___closed__1);
v___x_2614_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attrs_2611_, v___x_2613_);
if (lean_obj_tag(v___x_2614_) == 0)
{
uint8_t v___x_2615_; 
v___x_2615_ = lp_lean_x2dftml_List_any___at___00LeanFtml_mathProcess_spec__0(v_attrs_2611_);
if (v___x_2615_ == 0)
{
lean_object* v___x_2616_; 
v___x_2616_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__8, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__8);
v___y_2549_ = v___y_2592_;
v___y_2550_ = v_content_2608_;
v___y_2551_ = v___y_2593_;
v___y_2552_ = v___y_2595_;
v___y_2553_ = v___y_2596_;
v___y_2554_ = v___y_2597_;
v___y_2555_ = v___y_2598_;
v___y_2556_ = v___x_2612_;
v___y_2557_ = v___y_2599_;
v___y_2558_ = v___y_2600_;
v___y_2559_ = v___y_2601_;
v___y_2560_ = v___y_2602_;
v___y_2561_ = v___y_2603_;
v___y_2562_ = v___y_2604_;
v___y_2563_ = v___y_2605_;
v___y_2564_ = v_label_2610_;
v___y_2565_ = v___y_2606_;
v___y_2566_ = v___x_2616_;
goto v___jp_2548_;
}
else
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__11, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__11);
v___y_2549_ = v___y_2592_;
v___y_2550_ = v_content_2608_;
v___y_2551_ = v___y_2593_;
v___y_2552_ = v___y_2595_;
v___y_2553_ = v___y_2596_;
v___y_2554_ = v___y_2597_;
v___y_2555_ = v___y_2598_;
v___y_2556_ = v___x_2612_;
v___y_2557_ = v___y_2599_;
v___y_2558_ = v___y_2600_;
v___y_2559_ = v___y_2601_;
v___y_2560_ = v___y_2602_;
v___y_2561_ = v___y_2603_;
v___y_2562_ = v___y_2604_;
v___y_2563_ = v___y_2605_;
v___y_2564_ = v_label_2610_;
v___y_2565_ = v___y_2606_;
v___y_2566_ = v___x_2617_;
goto v___jp_2548_;
}
}
else
{
lean_object* v_val_2618_; lean_object* v___x_2619_; 
lean_dec(v_attrs_2611_);
v_val_2618_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_val_2618_);
lean_dec_ref_known(v___x_2614_, 1);
v___x_2619_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_2618_);
v___y_2549_ = v___y_2592_;
v___y_2550_ = v_content_2608_;
v___y_2551_ = v___y_2593_;
v___y_2552_ = v___y_2595_;
v___y_2553_ = v___y_2596_;
v___y_2554_ = v___y_2597_;
v___y_2555_ = v___y_2598_;
v___y_2556_ = v___x_2612_;
v___y_2557_ = v___y_2599_;
v___y_2558_ = v___y_2600_;
v___y_2559_ = v___y_2601_;
v___y_2560_ = v___y_2602_;
v___y_2561_ = v___y_2603_;
v___y_2562_ = v___y_2604_;
v___y_2563_ = v___y_2605_;
v___y_2564_ = v_label_2610_;
v___y_2565_ = v___y_2606_;
v___y_2566_ = v___x_2619_;
goto v___jp_2548_;
}
}
else
{
lean_object* v___x_2620_; lean_object* v___x_2621_; 
lean_dec(v_content_2608_);
lean_dec(v___y_2606_);
lean_dec(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec(v___y_2601_);
lean_dec(v___y_2600_);
lean_dec(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec(v___y_2597_);
lean_dec(v___y_2596_);
lean_dec(v___y_2595_);
lean_dec(v___y_2593_);
lean_dec(v___y_2592_);
v___x_2620_ = lean_box(0);
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2620_);
lean_ctor_set(v___x_2621_, 1, v___y_2594_);
return v___x_2621_;
}
}
v_resetjp_2635_:
{
lean_object* v___y_2639_; 
if (lean_obj_tag(v_mathId_2630_) == 0)
{
lean_object* v___x_2648_; 
v___x_2648_ = lean_unsigned_to_nat(1u);
v___y_2639_ = v___x_2648_;
goto v___jp_2638_;
}
else
{
lean_object* v_val_2649_; 
v_val_2649_ = lean_ctor_get(v_mathId_2630_, 0);
lean_inc(v_val_2649_);
lean_dec_ref_known(v_mathId_2630_, 1);
v___y_2639_ = v_val_2649_;
goto v___jp_2638_;
}
v___jp_2638_:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v_doc1_2644_; 
v___x_2640_ = lean_unsigned_to_nat(1u);
v___x_2641_ = lean_nat_add(v___y_2639_, v___x_2640_);
v___x_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2641_);
lean_inc(v_scoredAnchors_2634_);
lean_inc(v_tabviewCounter_2633_);
lean_inc(v_collapsibleCount_2632_);
lean_inc(v_equations_2631_);
lean_inc_ref(v___x_2642_);
lean_inc(v_headlineId_2629_);
lean_inc(v_bibitemIds_2628_);
lean_inc(v_bibitems_2627_);
lean_inc(v_footnotes_2626_);
lean_inc(v_inclusionsNotExist_2625_);
lean_inc(v_inclusions_2624_);
lean_inc(v_site_2623_);
lean_inc_ref(v_page_2622_);
if (v_isShared_2637_ == 0)
{
lean_ctor_set(v___x_2636_, 8, v___x_2642_);
v_doc1_2644_ = v___x_2636_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_page_2622_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v_site_2623_);
lean_ctor_set(v_reuseFailAlloc_2647_, 2, v_inclusions_2624_);
lean_ctor_set(v_reuseFailAlloc_2647_, 3, v_inclusionsNotExist_2625_);
lean_ctor_set(v_reuseFailAlloc_2647_, 4, v_footnotes_2626_);
lean_ctor_set(v_reuseFailAlloc_2647_, 5, v_bibitems_2627_);
lean_ctor_set(v_reuseFailAlloc_2647_, 6, v_bibitemIds_2628_);
lean_ctor_set(v_reuseFailAlloc_2647_, 7, v_headlineId_2629_);
lean_ctor_set(v_reuseFailAlloc_2647_, 8, v___x_2642_);
lean_ctor_set(v_reuseFailAlloc_2647_, 9, v_equations_2631_);
lean_ctor_set(v_reuseFailAlloc_2647_, 10, v_collapsibleCount_2632_);
lean_ctor_set(v_reuseFailAlloc_2647_, 11, v_tabviewCounter_2633_);
lean_ctor_set(v_reuseFailAlloc_2647_, 12, v_scoredAnchors_2634_);
v_doc1_2644_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
if (lean_obj_tag(v_g1_2544_) == 0)
{
lean_object* v___x_2645_; 
v___x_2645_ = lean_box(0);
v___y_2592_ = v_bibitems_2627_;
v___y_2593_ = v_equations_2631_;
v___y_2594_ = v_doc1_2644_;
v___y_2595_ = v_tabviewCounter_2633_;
v___y_2596_ = v_inclusions_2624_;
v___y_2597_ = v___x_2642_;
v___y_2598_ = v___y_2639_;
v___y_2599_ = v_inclusionsNotExist_2625_;
v___y_2600_ = v_scoredAnchors_2634_;
v___y_2601_ = v_footnotes_2626_;
v___y_2602_ = v_page_2622_;
v___y_2603_ = v_headlineId_2629_;
v___y_2604_ = v_collapsibleCount_2632_;
v___y_2605_ = v_site_2623_;
v___y_2606_ = v_bibitemIds_2628_;
v___y_2607_ = v___x_2645_;
goto v___jp_2591_;
}
else
{
lean_object* v_val_2646_; 
v_val_2646_ = lean_ctor_get(v_g1_2544_, 0);
v___y_2592_ = v_bibitems_2627_;
v___y_2593_ = v_equations_2631_;
v___y_2594_ = v_doc1_2644_;
v___y_2595_ = v_tabviewCounter_2633_;
v___y_2596_ = v_inclusions_2624_;
v___y_2597_ = v___x_2642_;
v___y_2598_ = v___y_2639_;
v___y_2599_ = v_inclusionsNotExist_2625_;
v___y_2600_ = v_scoredAnchors_2634_;
v___y_2601_ = v_footnotes_2626_;
v___y_2602_ = v_page_2622_;
v___y_2603_ = v_headlineId_2629_;
v___y_2604_ = v_collapsibleCount_2632_;
v___y_2605_ = v_site_2623_;
v___y_2606_ = v_bibitemIds_2628_;
v___y_2607_ = v_val_2646_;
goto v___jp_2591_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___boxed(lean_object* v_g1_2651_, lean_object* v_g2_2652_, lean_object* v_g3_2653_, lean_object* v_doc_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = lp_lean_x2dftml_LeanFtml_mathProcess(v_g1_2651_, v_g2_2652_, v_g3_2653_, v_doc_2654_);
lean_dec(v_g3_2653_);
lean_dec(v_g2_2652_);
lean_dec(v_g1_2651_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathScan(lean_object* v_input_2662_, lean_object* v_src_2663_, lean_object* v_prev_2664_, lean_object* v_toks_2665_, lean_object* v_doc_2666_, lean_object* v_x_2667_){
_start:
{
lean_object* v_zero_2675_; uint8_t v_isZero_2676_; 
v_zero_2675_ = lean_unsigned_to_nat(0u);
v_isZero_2676_ = lean_nat_dec_eq(v_x_2667_, v_zero_2675_);
if (v_isZero_2676_ == 1)
{
lean_dec(v_src_2663_);
lean_dec(v_input_2662_);
goto v___jp_2668_;
}
else
{
if (lean_obj_tag(v_src_2663_) == 0)
{
lean_dec(v_input_2662_);
goto v___jp_2668_;
}
else
{
lean_object* v_head_2677_; lean_object* v_tail_2678_; lean_object* v_one_2679_; lean_object* v_n_2680_; uint8_t v___y_2682_; 
v_head_2677_ = lean_ctor_get(v_src_2663_, 0);
v_tail_2678_ = lean_ctor_get(v_src_2663_, 1);
v_one_2679_ = lean_unsigned_to_nat(1u);
v_n_2680_ = lean_nat_sub(v_x_2667_, v_one_2679_);
if (lean_obj_tag(v_prev_2664_) == 0)
{
goto v___jp_2728_;
}
else
{
lean_object* v___x_2830_; uint8_t v___x_2831_; 
v___x_2830_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0));
v___x_2831_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_2664_, v___x_2830_);
if (v___x_2831_ == 0)
{
uint8_t v___x_2832_; 
lean_inc(v_tail_2678_);
lean_inc(v_head_2677_);
lean_dec_ref_known(v_src_2663_, 2);
v___x_2832_ = 1;
v___y_2682_ = v___x_2832_;
goto v___jp_2681_;
}
else
{
goto v___jp_2728_;
}
}
v___jp_2681_:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v_snd_2685_; lean_object* v_snd_2686_; lean_object* v_snd_2687_; uint8_t v___x_2688_; 
lean_inc(v_head_2677_);
v___x_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2683_, 0, v_head_2677_);
lean_inc(v_input_2662_);
v___x_2684_ = lp_lean_x2dftml_LeanFtml_mathScan(v_input_2662_, v_tail_2678_, v___x_2683_, v_toks_2665_, v_doc_2666_, v_n_2680_);
lean_dec(v_n_2680_);
lean_dec_ref_known(v___x_2683_, 1);
v_snd_2685_ = lean_ctor_get(v___x_2684_, 1);
lean_inc(v_snd_2685_);
v_snd_2686_ = lean_ctor_get(v_snd_2685_, 1);
lean_inc(v_snd_2686_);
v_snd_2687_ = lean_ctor_get(v_snd_2686_, 1);
v___x_2688_ = lean_unbox(v_snd_2687_);
if (v___x_2688_ == 0)
{
lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2697_; 
lean_dec(v_input_2662_);
v_isSharedCheck_2697_ = !lean_is_exclusive(v_snd_2686_);
if (v_isSharedCheck_2697_ == 0)
{
lean_object* v_unused_2698_; lean_object* v_unused_2699_; 
v_unused_2698_ = lean_ctor_get(v_snd_2686_, 1);
lean_dec(v_unused_2698_);
v_unused_2699_ = lean_ctor_get(v_snd_2686_, 0);
lean_dec(v_unused_2699_);
v___x_2690_ = v_snd_2686_;
v_isShared_2691_ = v_isSharedCheck_2697_;
goto v_resetjp_2689_;
}
else
{
lean_dec(v_snd_2686_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2697_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v_fst_2692_; lean_object* v___x_2693_; lean_object* v___x_2695_; 
v_fst_2692_ = lean_ctor_get(v___x_2684_, 0);
lean_inc(v_fst_2692_);
lean_dec_ref(v___x_2684_);
v___x_2693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2693_, 0, v_head_2677_);
lean_ctor_set(v___x_2693_, 1, v_fst_2692_);
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 1, v_snd_2685_);
lean_ctor_set(v___x_2690_, 0, v___x_2693_);
v___x_2695_ = v___x_2690_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2693_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v_snd_2685_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
else
{
lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2725_; 
lean_dec(v_head_2677_);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2725_ == 0)
{
lean_object* v_unused_2726_; lean_object* v_unused_2727_; 
v_unused_2726_ = lean_ctor_get(v___x_2684_, 1);
lean_dec(v_unused_2726_);
v_unused_2727_ = lean_ctor_get(v___x_2684_, 0);
lean_dec(v_unused_2727_);
v___x_2701_ = v___x_2684_;
v_isShared_2702_ = v_isSharedCheck_2725_;
goto v_resetjp_2700_;
}
else
{
lean_dec(v___x_2684_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2725_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v_fst_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2723_; 
v_fst_2703_ = lean_ctor_get(v_snd_2685_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v_snd_2685_);
if (v_isSharedCheck_2723_ == 0)
{
lean_object* v_unused_2724_; 
v_unused_2724_ = lean_ctor_get(v_snd_2685_, 1);
lean_dec(v_unused_2724_);
v___x_2705_ = v_snd_2685_;
v_isShared_2706_ = v_isSharedCheck_2723_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_fst_2703_);
lean_dec(v_snd_2685_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2723_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v_fst_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2721_; 
v_fst_2707_ = lean_ctor_get(v_snd_2686_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v_snd_2686_);
if (v_isSharedCheck_2721_ == 0)
{
lean_object* v_unused_2722_; 
v_unused_2722_ = lean_ctor_get(v_snd_2686_, 1);
lean_dec(v_unused_2722_);
v___x_2709_ = v_snd_2686_;
v_isShared_2710_ = v_isSharedCheck_2721_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_fst_2707_);
lean_dec(v_snd_2686_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2721_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2711_; lean_object* v___x_2713_; 
v___x_2711_ = lean_box(v___y_2682_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 1, v___x_2711_);
v___x_2713_ = v___x_2709_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_fst_2707_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v___x_2711_);
v___x_2713_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
lean_object* v___x_2715_; 
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 1, v___x_2713_);
v___x_2715_ = v___x_2705_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_fst_2703_);
lean_ctor_set(v_reuseFailAlloc_2719_, 1, v___x_2713_);
v___x_2715_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
lean_object* v___x_2717_; 
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 1, v___x_2715_);
lean_ctor_set(v___x_2701_, 0, v_input_2662_);
v___x_2717_ = v___x_2701_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_input_2662_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v___x_2715_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
}
}
}
}
v___jp_2728_:
{
uint8_t v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2729_ = 1;
v___x_2730_ = l_List_lengthTR___redArg(v_src_2663_);
v___x_2731_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_2730_);
lean_dec(v___x_2730_);
lean_inc_ref(v_src_2663_);
v___x_2732_ = lp_lean_x2dftml_LeanFtml_mathPattern(v_src_2663_, v___x_2729_, v___x_2731_);
lean_dec(v___x_2731_);
v___x_2733_ = l_List_head_x3f___redArg(v___x_2732_);
lean_dec(v___x_2732_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_inc(v_tail_2678_);
lean_inc(v_head_2677_);
lean_dec_ref_known(v_src_2663_, 2);
v___y_2682_ = v___x_2729_;
goto v___jp_2681_;
}
else
{
lean_object* v_val_2734_; lean_object* v_snd_2735_; lean_object* v_snd_2736_; lean_object* v_fst_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2828_; 
v_val_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_val_2734_);
lean_dec_ref_known(v___x_2733_, 1);
v_snd_2735_ = lean_ctor_get(v_val_2734_, 1);
lean_inc(v_snd_2735_);
v_snd_2736_ = lean_ctor_get(v_snd_2735_, 1);
lean_inc(v_snd_2736_);
v_fst_2737_ = lean_ctor_get(v_val_2734_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v_val_2734_);
if (v_isSharedCheck_2828_ == 0)
{
lean_object* v_unused_2829_; 
v_unused_2829_ = lean_ctor_get(v_val_2734_, 1);
lean_dec(v_unused_2829_);
v___x_2739_ = v_val_2734_;
v_isShared_2740_ = v_isSharedCheck_2828_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_fst_2737_);
lean_dec(v_val_2734_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2828_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v_fst_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2826_; 
v_fst_2741_ = lean_ctor_get(v_snd_2735_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_snd_2735_);
if (v_isSharedCheck_2826_ == 0)
{
lean_object* v_unused_2827_; 
v_unused_2827_ = lean_ctor_get(v_snd_2735_, 1);
lean_dec(v_unused_2827_);
v___x_2743_ = v_snd_2735_;
v_isShared_2744_ = v_isSharedCheck_2826_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_fst_2741_);
lean_dec(v_snd_2735_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2826_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v_fst_2745_; lean_object* v_snd_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2825_; 
v_fst_2745_ = lean_ctor_get(v_snd_2736_, 0);
v_snd_2746_ = lean_ctor_get(v_snd_2736_, 1);
v_isSharedCheck_2825_ = !lean_is_exclusive(v_snd_2736_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2748_ = v_snd_2736_;
v_isShared_2749_ = v_isSharedCheck_2825_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_snd_2746_);
lean_inc(v_fst_2745_);
lean_dec(v_snd_2736_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2825_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2750_; lean_object* v_fst_2751_; 
v___x_2750_ = lp_lean_x2dftml_LeanFtml_mathProcess(v_fst_2737_, v_fst_2741_, v_fst_2745_, v_doc_2666_);
lean_dec(v_fst_2745_);
lean_dec(v_fst_2741_);
lean_dec(v_fst_2737_);
v_fst_2751_ = lean_ctor_get(v___x_2750_, 0);
if (lean_obj_tag(v_fst_2751_) == 0)
{
lean_object* v_snd_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2766_; 
lean_dec(v_snd_2746_);
lean_del_object(v___x_2739_);
lean_dec(v_n_2680_);
lean_dec_ref_known(v_src_2663_, 2);
v_snd_2752_ = lean_ctor_get(v___x_2750_, 1);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2766_ == 0)
{
lean_object* v_unused_2767_; 
v_unused_2767_ = lean_ctor_get(v___x_2750_, 0);
lean_dec(v_unused_2767_);
v___x_2754_ = v___x_2750_;
v_isShared_2755_ = v_isSharedCheck_2766_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_snd_2752_);
lean_dec(v___x_2750_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2766_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2756_; lean_object* v___x_2758_; 
v___x_2756_ = lean_box(v___x_2729_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 1, v___x_2756_);
lean_ctor_set(v___x_2754_, 0, v_snd_2752_);
v___x_2758_ = v___x_2754_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_snd_2752_);
lean_ctor_set(v_reuseFailAlloc_2765_, 1, v___x_2756_);
v___x_2758_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
lean_object* v___x_2760_; 
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 1, v___x_2758_);
lean_ctor_set(v___x_2748_, 0, v_toks_2665_);
v___x_2760_ = v___x_2748_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_toks_2665_);
lean_ctor_set(v_reuseFailAlloc_2764_, 1, v___x_2758_);
v___x_2760_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
lean_object* v___x_2762_; 
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 1, v___x_2760_);
lean_ctor_set(v___x_2743_, 0, v_input_2662_);
v___x_2762_ = v___x_2743_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_input_2662_);
lean_ctor_set(v_reuseFailAlloc_2763_, 1, v___x_2760_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
}
}
else
{
lean_object* v_snd_2768_; lean_object* v_val_2769_; lean_object* v___x_2770_; lean_object* v___x_2772_; 
lean_inc_ref(v_fst_2751_);
lean_del_object(v___x_2748_);
lean_del_object(v___x_2743_);
v_snd_2768_ = lean_ctor_get(v___x_2750_, 1);
lean_inc(v_snd_2768_);
lean_dec_ref(v___x_2750_);
v_val_2769_ = lean_ctor_get(v_fst_2751_, 0);
lean_inc(v_val_2769_);
lean_dec_ref_known(v_fst_2751_, 1);
v___x_2770_ = lean_box(0);
if (v_isShared_2740_ == 0)
{
lean_ctor_set_tag(v___x_2739_, 1);
lean_ctor_set(v___x_2739_, 1, v___x_2770_);
lean_ctor_set(v___x_2739_, 0, v_val_2769_);
v___x_2772_ = v___x_2739_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_val_2769_);
lean_ctor_set(v_reuseFailAlloc_2824_, 1, v___x_2770_);
v___x_2772_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
lean_object* v_t1_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v_snd_2776_; lean_object* v_snd_2777_; lean_object* v_snd_2778_; uint8_t v___x_2779_; 
lean_inc(v_toks_2665_);
v_t1_2773_ = l_List_appendTR___redArg(v_toks_2665_, v___x_2772_);
v___x_2774_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_2663_, v_snd_2746_);
lean_inc(v_input_2662_);
v___x_2775_ = lp_lean_x2dftml_LeanFtml_mathScan(v_input_2662_, v_snd_2746_, v___x_2774_, v_t1_2773_, v_snd_2768_, v_n_2680_);
lean_dec(v_n_2680_);
lean_dec(v___x_2774_);
v_snd_2776_ = lean_ctor_get(v___x_2775_, 1);
lean_inc(v_snd_2776_);
v_snd_2777_ = lean_ctor_get(v_snd_2776_, 1);
lean_inc(v_snd_2777_);
v_snd_2778_ = lean_ctor_get(v_snd_2777_, 1);
v___x_2779_ = lean_unbox(v_snd_2778_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2793_; 
lean_dec(v_input_2662_);
v_isSharedCheck_2793_ = !lean_is_exclusive(v_snd_2777_);
if (v_isSharedCheck_2793_ == 0)
{
lean_object* v_unused_2794_; lean_object* v_unused_2795_; 
v_unused_2794_ = lean_ctor_get(v_snd_2777_, 1);
lean_dec(v_unused_2794_);
v_unused_2795_ = lean_ctor_get(v_snd_2777_, 0);
lean_dec(v_unused_2795_);
v___x_2781_ = v_snd_2777_;
v_isShared_2782_ = v_isSharedCheck_2793_;
goto v_resetjp_2780_;
}
else
{
lean_dec(v_snd_2777_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2793_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v_fst_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v_repl_2788_; lean_object* v___x_2789_; lean_object* v___x_2791_; 
v_fst_2783_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_fst_2783_);
lean_dec_ref(v___x_2775_);
v___x_2784_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathScan___closed__1));
v___x_2785_ = l_List_lengthTR___redArg(v_toks_2665_);
lean_dec(v_toks_2665_);
v___x_2786_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_2785_);
v___x_2787_ = l_List_appendTR___redArg(v___x_2784_, v___x_2786_);
v_repl_2788_ = l_List_appendTR___redArg(v___x_2787_, v___x_2784_);
v___x_2789_ = l_List_appendTR___redArg(v_repl_2788_, v_fst_2783_);
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 1, v_snd_2776_);
lean_ctor_set(v___x_2781_, 0, v___x_2789_);
v___x_2791_ = v___x_2781_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v___x_2789_);
lean_ctor_set(v_reuseFailAlloc_2792_, 1, v_snd_2776_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
else
{
lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2821_; 
lean_dec(v_toks_2665_);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2821_ == 0)
{
lean_object* v_unused_2822_; lean_object* v_unused_2823_; 
v_unused_2822_ = lean_ctor_get(v___x_2775_, 1);
lean_dec(v_unused_2822_);
v_unused_2823_ = lean_ctor_get(v___x_2775_, 0);
lean_dec(v_unused_2823_);
v___x_2797_ = v___x_2775_;
v_isShared_2798_ = v_isSharedCheck_2821_;
goto v_resetjp_2796_;
}
else
{
lean_dec(v___x_2775_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2821_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v_fst_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2819_; 
v_fst_2799_ = lean_ctor_get(v_snd_2776_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v_snd_2776_);
if (v_isSharedCheck_2819_ == 0)
{
lean_object* v_unused_2820_; 
v_unused_2820_ = lean_ctor_get(v_snd_2776_, 1);
lean_dec(v_unused_2820_);
v___x_2801_ = v_snd_2776_;
v_isShared_2802_ = v_isSharedCheck_2819_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_fst_2799_);
lean_dec(v_snd_2776_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2819_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v_fst_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2817_; 
v_fst_2803_ = lean_ctor_get(v_snd_2777_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v_snd_2777_);
if (v_isSharedCheck_2817_ == 0)
{
lean_object* v_unused_2818_; 
v_unused_2818_ = lean_ctor_get(v_snd_2777_, 1);
lean_dec(v_unused_2818_);
v___x_2805_ = v_snd_2777_;
v_isShared_2806_ = v_isSharedCheck_2817_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_fst_2803_);
lean_dec(v_snd_2777_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2817_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
v___x_2807_ = lean_box(v___x_2729_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 1, v___x_2807_);
v___x_2809_ = v___x_2805_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_fst_2803_);
lean_ctor_set(v_reuseFailAlloc_2816_, 1, v___x_2807_);
v___x_2809_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
lean_object* v___x_2811_; 
if (v_isShared_2802_ == 0)
{
lean_ctor_set(v___x_2801_, 1, v___x_2809_);
v___x_2811_ = v___x_2801_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_fst_2799_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v___x_2809_);
v___x_2811_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
lean_object* v___x_2813_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 1, v___x_2811_);
lean_ctor_set(v___x_2797_, 0, v_input_2662_);
v___x_2813_ = v___x_2797_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_input_2662_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v___x_2811_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
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
v___jp_2668_:
{
lean_object* v___x_2669_; uint8_t v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___x_2669_ = lean_box(0);
v___x_2670_ = 0;
v___x_2671_ = lean_box(v___x_2670_);
v___x_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2672_, 0, v_doc_2666_);
lean_ctor_set(v___x_2672_, 1, v___x_2671_);
v___x_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2673_, 0, v_toks_2665_);
lean_ctor_set(v___x_2673_, 1, v___x_2672_);
v___x_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2669_);
lean_ctor_set(v___x_2674_, 1, v___x_2673_);
return v___x_2674_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathScan___boxed(lean_object* v_input_2833_, lean_object* v_src_2834_, lean_object* v_prev_2835_, lean_object* v_toks_2836_, lean_object* v_doc_2837_, lean_object* v_x_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = lp_lean_x2dftml_LeanFtml_mathScan(v_input_2833_, v_src_2834_, v_prev_2835_, v_toks_2836_, v_doc_2837_, v_x_2838_);
lean_dec(v_x_2838_);
lean_dec(v_prev_2835_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathRule(lean_object* v_st_2840_){
_start:
{
lean_object* v_work_2841_; lean_object* v_tokens_2842_; lean_object* v_doc_2843_; uint8_t v_fatal_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2868_; 
v_work_2841_ = lean_ctor_get(v_st_2840_, 0);
v_tokens_2842_ = lean_ctor_get(v_st_2840_, 1);
v_doc_2843_ = lean_ctor_get(v_st_2840_, 2);
v_fatal_2844_ = lean_ctor_get_uint8(v_st_2840_, sizeof(void*)*3);
v_isSharedCheck_2868_ = !lean_is_exclusive(v_st_2840_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2846_ = v_st_2840_;
v_isShared_2847_ = v_isSharedCheck_2868_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_doc_2843_);
lean_inc(v_tokens_2842_);
lean_inc(v_work_2841_);
lean_dec(v_st_2840_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2868_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v_input_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v_snd_2854_; lean_object* v_snd_2855_; lean_object* v_fst_2856_; lean_object* v_fst_2857_; lean_object* v_fst_2858_; lean_object* v_snd_2859_; lean_object* v___x_2860_; 
v_input_2848_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_2841_);
v___x_2849_ = lean_box(0);
v___x_2850_ = l_List_lengthTR___redArg(v_input_2848_);
v___x_2851_ = lean_unsigned_to_nat(1u);
v___x_2852_ = lean_nat_add(v___x_2850_, v___x_2851_);
lean_dec(v___x_2850_);
lean_inc(v_input_2848_);
v___x_2853_ = lp_lean_x2dftml_LeanFtml_mathScan(v_input_2848_, v_input_2848_, v___x_2849_, v_tokens_2842_, v_doc_2843_, v___x_2852_);
lean_dec(v___x_2852_);
v_snd_2854_ = lean_ctor_get(v___x_2853_, 1);
lean_inc(v_snd_2854_);
v_snd_2855_ = lean_ctor_get(v_snd_2854_, 1);
lean_inc(v_snd_2855_);
v_fst_2856_ = lean_ctor_get(v___x_2853_, 0);
lean_inc(v_fst_2856_);
lean_dec_ref(v___x_2853_);
v_fst_2857_ = lean_ctor_get(v_snd_2854_, 0);
lean_inc(v_fst_2857_);
lean_dec(v_snd_2854_);
v_fst_2858_ = lean_ctor_get(v_snd_2855_, 0);
lean_inc(v_fst_2858_);
v_snd_2859_ = lean_ctor_get(v_snd_2855_, 1);
lean_inc(v_snd_2859_);
lean_dec(v_snd_2855_);
v___x_2860_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_2856_);
if (v_fatal_2844_ == 0)
{
lean_object* v___x_2862_; 
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 2, v_fst_2858_);
lean_ctor_set(v___x_2846_, 1, v_fst_2857_);
lean_ctor_set(v___x_2846_, 0, v___x_2860_);
v___x_2862_ = v___x_2846_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v___x_2860_);
lean_ctor_set(v_reuseFailAlloc_2864_, 1, v_fst_2857_);
lean_ctor_set(v_reuseFailAlloc_2864_, 2, v_fst_2858_);
v___x_2862_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
uint8_t v___x_2863_; 
v___x_2863_ = lean_unbox(v_snd_2859_);
lean_dec(v_snd_2859_);
lean_ctor_set_uint8(v___x_2862_, sizeof(void*)*3, v___x_2863_);
return v___x_2862_;
}
}
else
{
lean_object* v___x_2866_; 
lean_dec(v_snd_2859_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 2, v_fst_2858_);
lean_ctor_set(v___x_2846_, 1, v_fst_2857_);
lean_ctor_set(v___x_2846_, 0, v___x_2860_);
v___x_2866_ = v___x_2846_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v___x_2860_);
lean_ctor_set(v_reuseFailAlloc_2867_, 1, v_fst_2857_);
lean_ctor_set(v_reuseFailAlloc_2867_, 2, v_fst_2858_);
lean_ctor_set_uint8(v_reuseFailAlloc_2867_, sizeof(void*)*3, v_fatal_2844_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeRule(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_NextRules(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_iframeSchemes = _init_lp_lean_x2dftml_LeanFtml_iframeSchemes();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_iframeSchemes);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
