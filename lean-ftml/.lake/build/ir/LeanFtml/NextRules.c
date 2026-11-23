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
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathProcess___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathProcess___closed__7_value;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes_go(lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
if (lean_obj_tag(v_a_208_) == 0)
{
lean_dec(v_a_209_);
return v_a_210_;
}
else
{
lean_object* v_head_211_; lean_object* v_tail_212_; lean_object* v_fst_214_; lean_object* v_snd_215_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_head_211_ = lean_ctor_get(v_a_208_, 0);
lean_inc(v_head_211_);
v_tail_212_ = lean_ctor_get(v_a_208_, 1);
lean_inc(v_tail_212_);
lean_dec_ref_known(v_a_208_, 2);
v___x_218_ = lean_unsigned_to_nat(34u);
v___x_219_ = lp_lean_x2dftml_LeanFtml_lastIdxOfB(v___x_218_, v_head_211_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_220_ = lean_box(0);
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = l_List_drop___redArg(v___x_221_, v_head_211_);
lean_dec(v_head_211_);
v___x_223_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_222_);
lean_dec(v___x_222_);
v_fst_214_ = v___x_220_;
v_snd_215_ = v___x_223_;
goto v___jp_213_;
}
else
{
lean_object* v_val_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_val_224_ = lean_ctor_get(v___x_219_, 0);
lean_inc_n(v_val_224_, 2);
lean_dec_ref_known(v___x_219_, 1);
v___x_225_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_head_211_);
v___x_226_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_head_211_, v_head_211_, v_val_224_, v___x_225_);
v___x_227_ = lp_lean_x2dftml_LeanFtml_stripslashesB(v___x_226_);
v___x_228_ = lean_unsigned_to_nat(1u);
v___x_229_ = lean_nat_add(v_val_224_, v___x_228_);
lean_dec(v_val_224_);
v___x_230_ = l_List_drop___redArg(v___x_229_, v_head_211_);
lean_dec(v_head_211_);
v___x_231_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_230_);
lean_dec(v___x_230_);
v_fst_214_ = v___x_227_;
v_snd_215_ = v___x_231_;
goto v___jp_213_;
}
v___jp_213_:
{
lean_object* v___x_216_; 
v___x_216_ = lp_lean_x2dftml_LeanFtml_omSetB(v_a_210_, v_a_209_, v_fst_214_);
v_a_208_ = v_tail_212_;
v_a_209_ = v_snd_215_;
v_a_210_ = v___x_216_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object* v_text_232_){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_text_232_);
v___x_234_ = lp_lean_x2dftml_LeanFtml_explodeEqB(v___x_233_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v___x_235_; 
v___x_235_ = lean_box(0);
return v___x_235_;
}
else
{
lean_object* v_head_236_; lean_object* v_tail_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_head_236_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_head_236_);
v_tail_237_ = lean_ctor_get(v___x_234_, 1);
lean_inc(v_tail_237_);
lean_dec_ref_known(v___x_234_, 2);
v___x_238_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_head_236_);
lean_dec(v_head_236_);
v___x_239_ = lean_box(0);
v___x_240_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes_go(v_tail_237_, v___x_238_, v___x_239_);
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes___boxed(lean_object* v_text_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_text_241_);
lean_dec(v_text_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec_go(lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, uint8_t v_a_246_){
_start:
{
if (lean_obj_tag(v_a_243_) == 0)
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = l_List_reverse___redArg(v_a_244_);
v___x_248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v_a_245_);
v___x_249_ = l_List_reverse___redArg(v___x_248_);
return v___x_249_;
}
else
{
lean_object* v_head_250_; lean_object* v_tail_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_270_; 
v_head_250_ = lean_ctor_get(v_a_243_, 0);
v_tail_251_ = lean_ctor_get(v_a_243_, 1);
v_isSharedCheck_270_ = !lean_is_exclusive(v_a_243_);
if (v_isSharedCheck_270_ == 0)
{
v___x_253_ = v_a_243_;
v_isShared_254_ = v_isSharedCheck_270_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_tail_251_);
lean_inc(v_head_250_);
lean_dec(v_a_243_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_270_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_264_ = lean_unsigned_to_nat(44u);
v___x_265_ = lean_nat_dec_eq(v_head_250_, v___x_264_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_266_ = lean_unsigned_to_nat(32u);
v___x_267_ = lean_nat_dec_eq(v_head_250_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; 
lean_del_object(v___x_253_);
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v_head_250_);
lean_ctor_set(v___x_268_, 1, v_a_244_);
v_a_243_ = v_tail_251_;
v_a_244_ = v___x_268_;
v_a_246_ = v___x_267_;
goto _start;
}
else
{
lean_dec(v_head_250_);
goto v___jp_255_;
}
}
else
{
lean_dec(v_head_250_);
goto v___jp_255_;
}
v___jp_255_:
{
uint8_t v___x_256_; 
v___x_256_ = 1;
if (v_a_246_ == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_257_ = lean_box(0);
v___x_258_ = l_List_reverse___redArg(v_a_244_);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 1, v_a_245_);
lean_ctor_set(v___x_253_, 0, v___x_258_);
v___x_260_ = v___x_253_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_a_245_);
v___x_260_ = v_reuseFailAlloc_262_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
v_a_243_ = v_tail_251_;
v_a_244_ = v___x_257_;
v_a_245_ = v___x_260_;
v_a_246_ = v___x_256_;
goto _start;
}
}
else
{
lean_del_object(v___x_253_);
v_a_243_ = v_tail_251_;
v_a_246_ = v___x_256_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec_go___boxed(lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
uint8_t v_a_150__boxed_275_; lean_object* v_res_276_; 
v_a_150__boxed_275_ = lean_unbox(v_a_274_);
v_res_276_ = lp_lean_x2dftml_LeanFtml_splitSpec_go(v_a_271_, v_a_272_, v_a_273_, v_a_150__boxed_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitSpec(lean_object* v_s_277_){
_start:
{
lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_box(0);
v___x_279_ = 0;
v___x_280_ = lp_lean_x2dftml_LeanFtml_splitSpec_go(v_s_277_, v___x_278_, v___x_278_, v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_iftagsGate_spec__1(lean_object* v_x_281_, lean_object* v_x_282_){
_start:
{
if (lean_obj_tag(v_x_282_) == 0)
{
return v_x_281_;
}
else
{
lean_object* v_snd_283_; lean_object* v_head_284_; lean_object* v_tail_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_343_; 
v_snd_283_ = lean_ctor_get(v_x_281_, 1);
lean_inc(v_snd_283_);
v_head_284_ = lean_ctor_get(v_x_282_, 0);
v_tail_285_ = lean_ctor_get(v_x_282_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v_x_282_);
if (v_isSharedCheck_343_ == 0)
{
v___x_287_ = v_x_282_;
v_isShared_288_ = v_isSharedCheck_343_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_tail_285_);
lean_inc(v_head_284_);
lean_dec(v_x_282_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_343_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v_fst_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_341_; 
v_fst_289_ = lean_ctor_get(v_x_281_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v_x_281_);
if (v_isSharedCheck_341_ == 0)
{
lean_object* v_unused_342_; 
v_unused_342_ = lean_ctor_get(v_x_281_, 1);
lean_dec(v_unused_342_);
v___x_291_ = v_x_281_;
v_isShared_292_ = v_isSharedCheck_341_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_fst_289_);
lean_dec(v_x_281_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_341_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v_fst_293_; lean_object* v_snd_294_; 
v_fst_293_ = lean_ctor_get(v_snd_283_, 0);
v_snd_294_ = lean_ctor_get(v_snd_283_, 1);
if (lean_obj_tag(v_head_284_) == 1)
{
lean_object* v_head_304_; lean_object* v_tail_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v_head_304_ = lean_ctor_get(v_head_284_, 0);
v_tail_305_ = lean_ctor_get(v_head_284_, 1);
v___x_306_ = lean_unsigned_to_nat(43u);
v___x_307_ = lean_nat_dec_eq(v_head_304_, v___x_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_327_; 
lean_inc(v_snd_294_);
lean_inc(v_fst_293_);
v_isSharedCheck_327_ = !lean_is_exclusive(v_snd_283_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; lean_object* v_unused_329_; 
v_unused_328_ = lean_ctor_get(v_snd_283_, 1);
lean_dec(v_unused_328_);
v_unused_329_ = lean_ctor_get(v_snd_283_, 0);
lean_dec(v_unused_329_);
v___x_309_ = v_snd_283_;
v_isShared_310_ = v_isSharedCheck_327_;
goto v_resetjp_308_;
}
else
{
lean_dec(v_snd_283_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_327_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(45u);
v___x_312_ = lean_nat_dec_eq(v_head_304_, v___x_311_);
if (v___x_312_ == 0)
{
lean_del_object(v___x_309_);
goto v___jp_295_;
}
else
{
lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_324_; 
lean_inc(v_tail_305_);
lean_del_object(v___x_291_);
lean_del_object(v___x_287_);
v_isSharedCheck_324_ = !lean_is_exclusive(v_head_284_);
if (v_isSharedCheck_324_ == 0)
{
lean_object* v_unused_325_; lean_object* v_unused_326_; 
v_unused_325_ = lean_ctor_get(v_head_284_, 1);
lean_dec(v_unused_325_);
v_unused_326_ = lean_ctor_get(v_head_284_, 0);
lean_dec(v_unused_326_);
v___x_314_ = v_head_284_;
v_isShared_315_ = v_isSharedCheck_324_;
goto v_resetjp_313_;
}
else
{
lean_dec(v_head_284_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_324_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_fst_293_);
lean_ctor_set(v___x_314_, 0, v_tail_305_);
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_tail_305_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_fst_293_);
v___x_317_ = v_reuseFailAlloc_323_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_319_; 
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_317_);
v___x_319_ = v___x_309_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_snd_294_);
v___x_319_ = v_reuseFailAlloc_322_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
lean_object* v___x_320_; 
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v_fst_289_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v_x_281_ = v___x_320_;
v_x_282_ = v_tail_285_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_338_; 
lean_inc(v_tail_305_);
lean_del_object(v___x_291_);
lean_del_object(v___x_287_);
v_isSharedCheck_338_ = !lean_is_exclusive(v_head_284_);
if (v_isSharedCheck_338_ == 0)
{
lean_object* v_unused_339_; lean_object* v_unused_340_; 
v_unused_339_ = lean_ctor_get(v_head_284_, 1);
lean_dec(v_unused_339_);
v_unused_340_ = lean_ctor_get(v_head_284_, 0);
lean_dec(v_unused_340_);
v___x_331_ = v_head_284_;
v_isShared_332_ = v_isSharedCheck_338_;
goto v_resetjp_330_;
}
else
{
lean_dec(v_head_284_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_338_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 1, v_fst_289_);
lean_ctor_set(v___x_331_, 0, v_tail_305_);
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_tail_305_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_fst_289_);
v___x_334_ = v_reuseFailAlloc_337_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_335_; 
v___x_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set(v___x_335_, 1, v_snd_283_);
v_x_281_ = v___x_335_;
v_x_282_ = v_tail_285_;
goto _start;
}
}
}
}
else
{
lean_inc(v_snd_294_);
lean_inc(v_fst_293_);
lean_dec(v_snd_283_);
goto v___jp_295_;
}
v___jp_295_:
{
lean_object* v___x_297_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v_snd_294_);
v___x_297_ = v___x_287_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_head_284_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v_snd_294_);
v___x_297_ = v_reuseFailAlloc_303_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_299_; 
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v___x_297_);
lean_ctor_set(v___x_291_, 0, v_fst_293_);
v___x_299_ = v___x_291_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_fst_293_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v___x_297_);
v___x_299_ = v_reuseFailAlloc_302_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_300_; 
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v_fst_289_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v_x_281_ = v___x_300_;
v_x_282_ = v_tail_285_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(lean_object* v_needle_344_, lean_object* v_x_345_){
_start:
{
if (lean_obj_tag(v_x_345_) == 0)
{
uint8_t v___x_346_; 
lean_dec(v_needle_344_);
v___x_346_ = 0;
return v___x_346_;
}
else
{
lean_object* v_head_347_; lean_object* v_tail_348_; uint8_t v___x_349_; 
v_head_347_ = lean_ctor_get(v_x_345_, 0);
lean_inc(v_head_347_);
v_tail_348_ = lean_ctor_get(v_x_345_, 1);
lean_inc(v_tail_348_);
lean_dec_ref_known(v_x_345_, 2);
lean_inc(v_needle_344_);
v___x_349_ = lp_lean_x2dftml_LeanFtml_ciBytesEq(v_head_347_, v_needle_344_);
if (v___x_349_ == 0)
{
v_x_345_ = v_tail_348_;
goto _start;
}
else
{
lean_dec(v_tail_348_);
lean_dec(v_needle_344_);
return v___x_349_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0___boxed(lean_object* v_needle_351_, lean_object* v_x_352_){
_start:
{
uint8_t v_res_353_; lean_object* v_r_354_; 
v_res_353_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(v_needle_351_, v_x_352_);
v_r_354_ = lean_box(v_res_353_);
return v_r_354_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2(lean_object* v_tags_355_, lean_object* v_x_356_){
_start:
{
if (lean_obj_tag(v_x_356_) == 0)
{
uint8_t v___x_357_; 
lean_dec(v_tags_355_);
v___x_357_ = 1;
return v___x_357_;
}
else
{
lean_object* v_head_358_; lean_object* v_tail_359_; uint8_t v___x_360_; 
v_head_358_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_head_358_);
v_tail_359_ = lean_ctor_get(v_x_356_, 1);
lean_inc(v_tail_359_);
lean_dec_ref_known(v_x_356_, 2);
lean_inc(v_tags_355_);
v___x_360_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(v_head_358_, v_tags_355_);
if (v___x_360_ == 0)
{
lean_dec(v_tail_359_);
lean_dec(v_tags_355_);
return v___x_360_;
}
else
{
v_x_356_ = v_tail_359_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2___boxed(lean_object* v_tags_362_, lean_object* v_x_363_){
_start:
{
uint8_t v_res_364_; lean_object* v_r_365_; 
v_res_364_ = lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2(v_tags_362_, v_x_363_);
v_r_365_ = lean_box(v_res_364_);
return v_r_365_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(lean_object* v_tags_366_, lean_object* v_x_367_){
_start:
{
if (lean_obj_tag(v_x_367_) == 0)
{
uint8_t v___x_368_; 
lean_dec(v_tags_366_);
v___x_368_ = 0;
return v___x_368_;
}
else
{
lean_object* v_head_369_; lean_object* v_tail_370_; uint8_t v___x_371_; 
v_head_369_ = lean_ctor_get(v_x_367_, 0);
lean_inc(v_head_369_);
v_tail_370_ = lean_ctor_get(v_x_367_, 1);
lean_inc(v_tail_370_);
lean_dec_ref_known(v_x_367_, 2);
lean_inc(v_tags_366_);
v___x_371_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__0(v_head_369_, v_tags_366_);
if (v___x_371_ == 0)
{
v_x_367_ = v_tail_370_;
goto _start;
}
else
{
lean_dec(v_tail_370_);
lean_dec(v_tags_366_);
return v___x_371_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3___boxed(lean_object* v_tags_373_, lean_object* v_x_374_){
_start:
{
uint8_t v_res_375_; lean_object* v_r_376_; 
v_res_375_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(v_tags_373_, v_x_374_);
v_r_376_ = lean_box(v_res_375_);
return v_r_376_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iftagsGate(lean_object* v_tags_382_, lean_object* v_spec_383_){
_start:
{
lean_object* v___y_385_; 
if (lean_obj_tag(v_spec_383_) == 0)
{
lean_object* v___x_399_; 
v___x_399_ = lean_box(0);
v___y_385_ = v___x_399_;
goto v___jp_384_;
}
else
{
lean_object* v_val_400_; 
v_val_400_ = lean_ctor_get(v_spec_383_, 0);
v___y_385_ = v_val_400_;
goto v___jp_384_;
}
v___jp_384_:
{
lean_object* v___x_386_; lean_object* v_toks_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v_snd_390_; lean_object* v_fst_391_; lean_object* v_fst_392_; lean_object* v_snd_393_; uint8_t v___x_394_; 
v___x_386_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_385_);
v_toks_387_ = lp_lean_x2dftml_LeanFtml_splitSpec(v___x_386_);
v___x_388_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsGate___closed__1));
v___x_389_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_iftagsGate_spec__1(v___x_388_, v_toks_387_);
v_snd_390_ = lean_ctor_get(v___x_389_, 1);
lean_inc(v_snd_390_);
v_fst_391_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_fst_391_);
lean_dec_ref(v___x_389_);
v_fst_392_ = lean_ctor_get(v_snd_390_, 0);
lean_inc(v_fst_392_);
v_snd_393_ = lean_ctor_get(v_snd_390_, 1);
lean_inc(v_snd_393_);
lean_dec(v_snd_390_);
lean_inc(v_tags_382_);
v___x_394_ = lp_lean_x2dftml_List_all___at___00LeanFtml_iftagsGate_spec__2(v_tags_382_, v_fst_391_);
if (v___x_394_ == 0)
{
lean_dec(v_snd_393_);
lean_dec(v_fst_392_);
lean_dec(v_tags_382_);
return v___x_394_;
}
else
{
uint8_t v___x_395_; 
lean_inc(v_tags_382_);
v___x_395_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(v_tags_382_, v_fst_392_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; 
v___x_396_ = l_List_isEmpty___redArg(v_snd_393_);
if (v___x_396_ == 0)
{
uint8_t v___x_397_; 
v___x_397_ = lp_lean_x2dftml_List_any___at___00LeanFtml_iftagsGate_spec__3(v_tags_382_, v_snd_393_);
return v___x_397_;
}
else
{
lean_dec(v_snd_393_);
lean_dec(v_tags_382_);
return v___x_394_;
}
}
else
{
uint8_t v___x_398_; 
lean_dec(v_snd_393_);
lean_dec(v_tags_382_);
v___x_398_ = 0;
return v___x_398_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsGate___boxed(lean_object* v_tags_401_, lean_object* v_spec_402_){
_start:
{
uint8_t v_res_403_; lean_object* v_r_404_; 
v_res_403_ = lp_lean_x2dftml_LeanFtml_iftagsGate(v_tags_401_, v_spec_402_);
lean_dec(v_spec_402_);
v_r_404_ = lean_box(v_res_403_);
return v_r_404_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(lean_object* v_src_405_, lean_object* v_snd_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
if (lean_obj_tag(v_a_407_) == 0)
{
lean_object* v___x_409_; 
lean_dec(v_src_405_);
v___x_409_ = l_List_reverse___redArg(v_a_408_);
return v___x_409_;
}
else
{
lean_object* v_head_410_; lean_object* v_tail_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_434_; 
v_head_410_ = lean_ctor_get(v_a_407_, 0);
v_tail_411_ = lean_ctor_get(v_a_407_, 1);
v_isSharedCheck_434_ = !lean_is_exclusive(v_a_407_);
if (v_isSharedCheck_434_ == 0)
{
v___x_413_ = v_a_407_;
v_isShared_414_ = v_isSharedCheck_434_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_tail_411_);
lean_inc(v_head_410_);
lean_dec(v_a_407_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_434_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v_fst_415_; lean_object* v_snd_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_433_; 
v_fst_415_ = lean_ctor_get(v_head_410_, 0);
v_snd_416_ = lean_ctor_get(v_head_410_, 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v_head_410_);
if (v_isSharedCheck_433_ == 0)
{
v___x_418_ = v_head_410_;
v_isShared_419_ = v_isSharedCheck_433_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_snd_416_);
lean_inc(v_fst_415_);
lean_dec(v_head_410_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_433_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_420_ = l_List_lengthTR___redArg(v_src_405_);
v___x_421_ = l_List_lengthTR___redArg(v_snd_406_);
v___x_422_ = lean_nat_sub(v___x_420_, v___x_421_);
lean_dec(v___x_421_);
lean_dec(v___x_420_);
v___x_423_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_src_405_);
v___x_424_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_405_, v_src_405_, v___x_422_, v___x_423_);
v___x_425_ = l_List_appendTR___redArg(v___x_424_, v_fst_415_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_425_);
v___x_427_ = v___x_418_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_425_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_snd_416_);
v___x_427_ = v_reuseFailAlloc_432_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 1, v_a_408_);
lean_ctor_set(v___x_413_, 0, v___x_427_);
v___x_429_ = v___x_413_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_a_408_);
v___x_429_ = v_reuseFailAlloc_431_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
v_a_407_ = v_tail_411_;
v_a_408_ = v___x_429_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4___boxed(lean_object* v_src_435_, lean_object* v_snd_436_, lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_src_435_, v_snd_436_, v_a_437_, v_a_438_);
lean_dec(v_snd_436_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(lean_object* v_head_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
if (lean_obj_tag(v_a_441_) == 0)
{
lean_object* v___x_443_; 
lean_dec(v_head_440_);
v___x_443_ = l_List_reverse___redArg(v_a_442_);
return v___x_443_;
}
else
{
lean_object* v_head_444_; lean_object* v_tail_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_463_; 
v_head_444_ = lean_ctor_get(v_a_441_, 0);
v_tail_445_ = lean_ctor_get(v_a_441_, 1);
v_isSharedCheck_463_ = !lean_is_exclusive(v_a_441_);
if (v_isSharedCheck_463_ == 0)
{
v___x_447_ = v_a_441_;
v_isShared_448_ = v_isSharedCheck_463_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_tail_445_);
lean_inc(v_head_444_);
lean_dec(v_a_441_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_463_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v_fst_449_; lean_object* v_snd_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_462_; 
v_fst_449_ = lean_ctor_get(v_head_444_, 0);
v_snd_450_ = lean_ctor_get(v_head_444_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v_head_444_);
if (v_isSharedCheck_462_ == 0)
{
v___x_452_ = v_head_444_;
v_isShared_453_ = v_isSharedCheck_462_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_snd_450_);
lean_inc(v_fst_449_);
lean_dec(v_head_444_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_462_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
lean_inc(v_head_440_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 1, v_fst_449_);
lean_ctor_set(v___x_447_, 0, v_head_440_);
v___x_455_ = v___x_447_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_head_440_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_fst_449_);
v___x_455_ = v_reuseFailAlloc_461_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v___x_457_; 
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_455_);
v___x_457_ = v___x_452_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_snd_450_);
v___x_457_ = v_reuseFailAlloc_460_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_458_; 
v___x_458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v_a_442_);
v_a_441_ = v_tail_445_;
v_a_442_ = v___x_458_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsPattern_spec__0(lean_object* v_fst_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
if (lean_obj_tag(v_a_465_) == 0)
{
lean_object* v___x_467_; 
lean_dec(v_fst_464_);
v___x_467_ = l_List_reverse___redArg(v_a_466_);
return v___x_467_;
}
else
{
lean_object* v_head_468_; lean_object* v_tail_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_478_; 
v_head_468_ = lean_ctor_get(v_a_465_, 0);
v_tail_469_ = lean_ctor_get(v_a_465_, 1);
v_isSharedCheck_478_ = !lean_is_exclusive(v_a_465_);
if (v_isSharedCheck_478_ == 0)
{
v___x_471_ = v_a_465_;
v_isShared_472_ = v_isSharedCheck_478_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_tail_469_);
lean_inc(v_head_468_);
lean_dec(v_a_465_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_478_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_475_; 
lean_inc(v_fst_464_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v_fst_464_);
lean_ctor_set(v___x_473_, 1, v_head_468_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 1, v_a_466_);
lean_ctor_set(v___x_471_, 0, v___x_473_);
v___x_475_ = v___x_471_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v_a_466_);
v___x_475_ = v_reuseFailAlloc_477_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
v_a_465_ = v_tail_469_;
v_a_466_ = v___x_475_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(uint8_t v___x_479_, lean_object* v_l_480_, lean_object* v_a_481_, lean_object* v_a_482_){
_start:
{
if (lean_obj_tag(v_a_481_) == 0)
{
lean_dec_ref(v_a_482_);
lean_inc(v_l_480_);
return v_l_480_;
}
else
{
lean_object* v_head_483_; lean_object* v_tail_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v_head_483_ = lean_ctor_get(v_a_481_, 0);
lean_inc(v_head_483_);
v_tail_484_ = lean_ctor_get(v_a_481_, 1);
lean_inc(v_tail_484_);
lean_dec_ref_known(v_a_481_, 2);
v___x_485_ = lean_unsigned_to_nat(93u);
v___x_486_ = lean_nat_dec_eq(v_head_483_, v___x_485_);
if (v___x_486_ == 0)
{
if (v___x_479_ == 0)
{
lean_object* v___x_487_; 
lean_dec(v_tail_484_);
lean_dec(v_head_483_);
v___x_487_ = lean_array_to_list(v_a_482_);
return v___x_487_;
}
else
{
lean_object* v___x_488_; 
v___x_488_ = lean_array_push(v_a_482_, v_head_483_);
v_a_481_ = v_tail_484_;
v_a_482_ = v___x_488_;
goto _start;
}
}
else
{
lean_object* v___x_490_; 
lean_dec(v_tail_484_);
lean_dec(v_head_483_);
v___x_490_ = lean_array_to_list(v_a_482_);
return v___x_490_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2___boxed(lean_object* v___x_491_, lean_object* v_l_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
uint8_t v___x_1163__boxed_495_; lean_object* v_res_496_; 
v___x_1163__boxed_495_ = lean_unbox(v___x_491_);
v_res_496_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(v___x_1163__boxed_495_, v_l_492_, v_a_493_, v_a_494_);
lean_dec(v_l_492_);
return v_res_496_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__0));
v___x_499_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern(lean_object* v_src_502_, lean_object* v_x_503_){
_start:
{
lean_object* v_zero_504_; uint8_t v_isZero_505_; 
v_zero_504_ = lean_unsigned_to_nat(0u);
v_isZero_505_ = lean_nat_dec_eq(v_x_503_, v_zero_504_);
if (v_isZero_505_ == 1)
{
lean_object* v___x_506_; 
lean_dec(v_src_502_);
v___x_506_ = lean_box(0);
return v___x_506_;
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1, &lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__1);
v___x_508_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_507_, v_src_502_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v___x_509_; 
v___x_509_ = lean_box(0);
return v___x_509_;
}
else
{
lean_object* v_val_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_592_; 
v_val_510_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_592_ == 0)
{
v___x_512_ = v___x_508_;
v_isShared_513_ = v_isSharedCheck_592_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_val_510_);
lean_dec(v___x_508_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_592_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v_one_514_; lean_object* v_n_515_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_523_; lean_object* v___y_526_; lean_object* v___y_529_; 
v_one_514_ = lean_unsigned_to_nat(1u);
v_n_515_ = lean_nat_sub(v_x_503_, v_one_514_);
if (lean_obj_tag(v_val_510_) == 0)
{
lean_object* v___x_553_; 
lean_del_object(v___x_512_);
v___x_553_ = lean_box(0);
v___y_529_ = v___x_553_;
goto v___jp_528_;
}
else
{
lean_object* v_head_554_; lean_object* v_tail_555_; uint8_t v___x_556_; 
v_head_554_ = lean_ctor_get(v_val_510_, 0);
v_tail_555_ = lean_ctor_get(v_val_510_, 1);
v___x_556_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_554_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; 
lean_del_object(v___x_512_);
v___x_557_ = lean_box(0);
v___y_529_ = v___x_557_;
goto v___jp_528_;
}
else
{
lean_object* v___x_558_; lean_object* v_run_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_558_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_tail_555_);
v_run_559_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(v___x_556_, v_tail_555_, v_tail_555_, v___x_558_);
v___x_560_ = l_List_lengthTR___redArg(v_run_559_);
v___x_561_ = l_List_drop___redArg(v___x_560_, v_tail_555_);
if (lean_obj_tag(v___x_561_) == 1)
{
lean_object* v_head_562_; lean_object* v_tail_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_590_; 
v_head_562_ = lean_ctor_get(v___x_561_, 0);
v_tail_563_ = lean_ctor_get(v___x_561_, 1);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_590_ == 0)
{
v___x_565_ = v___x_561_;
v_isShared_566_ = v_isSharedCheck_590_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_tail_563_);
lean_inc(v_head_562_);
lean_dec(v___x_561_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_590_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_567_ = lean_unsigned_to_nat(93u);
v___x_568_ = lean_nat_dec_eq(v_head_562_, v___x_567_);
lean_dec(v_head_562_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; 
lean_del_object(v___x_565_);
lean_dec(v_tail_563_);
lean_dec(v_run_559_);
lean_del_object(v___x_512_);
v___x_569_ = lean_box(0);
v___y_529_ = v___x_569_;
goto v___jp_528_;
}
else
{
if (lean_obj_tag(v_tail_563_) == 1)
{
lean_object* v_head_570_; lean_object* v_tail_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_588_; 
v_head_570_ = lean_ctor_get(v_tail_563_, 0);
v_tail_571_ = lean_ctor_get(v_tail_563_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v_tail_563_);
if (v_isSharedCheck_588_ == 0)
{
v___x_573_ = v_tail_563_;
v_isShared_574_ = v_isSharedCheck_588_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_tail_571_);
lean_inc(v_head_570_);
lean_dec(v_tail_563_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_588_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
uint8_t v___x_575_; 
v___x_575_ = lean_nat_dec_eq(v_head_570_, v___x_567_);
lean_dec(v_head_570_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; 
lean_del_object(v___x_573_);
lean_dec(v_tail_571_);
lean_del_object(v___x_565_);
lean_dec(v_run_559_);
lean_del_object(v___x_512_);
v___x_576_ = lean_box(0);
v___y_529_ = v___x_576_;
goto v___jp_528_;
}
else
{
lean_object* v___x_578_; 
lean_inc(v_head_554_);
if (v_isShared_574_ == 0)
{
lean_ctor_set(v___x_573_, 1, v_run_559_);
lean_ctor_set(v___x_573_, 0, v_head_554_);
v___x_578_ = v___x_573_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_head_554_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_run_559_);
v___x_578_ = v_reuseFailAlloc_587_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_580_; 
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 0, v___x_578_);
v___x_580_ = v___x_512_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_578_);
v___x_580_ = v_reuseFailAlloc_586_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_ctor_set(v___x_581_, 1, v_tail_571_);
v___x_582_ = lean_box(0);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 1, v___x_582_);
lean_ctor_set(v___x_565_, 0, v___x_581_);
v___x_584_ = v___x_565_;
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
v___y_529_ = v___x_584_;
goto v___jp_528_;
}
}
}
}
}
}
else
{
lean_object* v___x_589_; 
lean_del_object(v___x_565_);
lean_dec(v_tail_563_);
lean_dec(v_run_559_);
lean_del_object(v___x_512_);
v___x_589_ = lean_box(0);
v___y_529_ = v___x_589_;
goto v___jp_528_;
}
}
}
}
else
{
lean_object* v___x_591_; 
lean_dec(v___x_561_);
lean_dec(v_run_559_);
lean_del_object(v___x_512_);
v___x_591_ = lean_box(0);
v___y_529_ = v___x_591_;
goto v___jp_528_;
}
}
}
v___jp_516_:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_519_ = l_List_appendTR___redArg(v___y_517_, v___y_518_);
v___x_520_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsPattern___closed__2));
v___x_521_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1(v_n_515_, v___x_519_, v___x_520_);
lean_dec(v_n_515_);
return v___x_521_;
}
v___jp_522_:
{
lean_object* v___x_524_; 
v___x_524_ = lean_box(0);
v___y_517_ = v___y_523_;
v___y_518_ = v___x_524_;
goto v___jp_516_;
}
v___jp_525_:
{
lean_object* v___x_527_; 
v___x_527_ = lean_box(0);
v___y_517_ = v___y_526_;
v___y_518_ = v___x_527_;
goto v___jp_516_;
}
v___jp_528_:
{
if (lean_obj_tag(v_val_510_) == 1)
{
lean_object* v_head_530_; lean_object* v_tail_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_552_; 
v_head_530_ = lean_ctor_get(v_val_510_, 0);
v_tail_531_ = lean_ctor_get(v_val_510_, 1);
v_isSharedCheck_552_ = !lean_is_exclusive(v_val_510_);
if (v_isSharedCheck_552_ == 0)
{
v___x_533_ = v_val_510_;
v_isShared_534_ = v_isSharedCheck_552_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_tail_531_);
lean_inc(v_head_530_);
lean_dec(v_val_510_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_552_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_535_ = lean_unsigned_to_nat(93u);
v___x_536_ = lean_nat_dec_eq(v_head_530_, v___x_535_);
lean_dec(v_head_530_);
if (v___x_536_ == 0)
{
lean_del_object(v___x_533_);
lean_dec(v_tail_531_);
v___y_526_ = v___y_529_;
goto v___jp_525_;
}
else
{
if (lean_obj_tag(v_tail_531_) == 1)
{
lean_object* v_head_537_; lean_object* v_tail_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_551_; 
v_head_537_ = lean_ctor_get(v_tail_531_, 0);
v_tail_538_ = lean_ctor_get(v_tail_531_, 1);
v_isSharedCheck_551_ = !lean_is_exclusive(v_tail_531_);
if (v_isSharedCheck_551_ == 0)
{
v___x_540_ = v_tail_531_;
v_isShared_541_ = v_isSharedCheck_551_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_tail_538_);
lean_inc(v_head_537_);
lean_dec(v_tail_531_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_551_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
uint8_t v___x_542_; 
v___x_542_ = lean_nat_dec_eq(v_head_537_, v___x_535_);
lean_dec(v_head_537_);
if (v___x_542_ == 0)
{
lean_del_object(v___x_540_);
lean_dec(v_tail_538_);
lean_del_object(v___x_533_);
v___y_523_ = v___y_529_;
goto v___jp_522_;
}
else
{
lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_543_ = lean_box(0);
if (v_isShared_534_ == 0)
{
lean_ctor_set_tag(v___x_533_, 0);
lean_ctor_set(v___x_533_, 1, v_tail_538_);
lean_ctor_set(v___x_533_, 0, v___x_543_);
v___x_545_ = v___x_533_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_543_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v_tail_538_);
v___x_545_ = v_reuseFailAlloc_550_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_546_ = lean_box(0);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v___x_546_);
lean_ctor_set(v___x_540_, 0, v___x_545_);
v___x_548_ = v___x_540_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
v___y_517_ = v___y_529_;
v___y_518_ = v___x_548_;
goto v___jp_516_;
}
}
}
}
}
else
{
lean_del_object(v___x_533_);
lean_dec(v_tail_531_);
v___y_523_ = v___y_529_;
goto v___jp_522_;
}
}
}
}
else
{
lean_dec(v_val_510_);
v___y_526_ = v___y_529_;
goto v___jp_525_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5(lean_object* v_n_595_, lean_object* v_src_596_, lean_object* v_a_597_, lean_object* v_a_598_){
_start:
{
if (lean_obj_tag(v_a_597_) == 0)
{
lean_object* v___x_599_; 
lean_dec(v_src_596_);
v___x_599_ = lean_array_to_list(v_a_598_);
return v___x_599_;
}
else
{
lean_object* v_head_600_; lean_object* v_snd_601_; lean_object* v_tail_602_; lean_object* v_snd_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_head_600_ = lean_ctor_get(v_a_597_, 0);
v_snd_601_ = lean_ctor_get(v_head_600_, 1);
lean_inc(v_snd_601_);
v_tail_602_ = lean_ctor_get(v_a_597_, 1);
lean_inc(v_tail_602_);
lean_dec_ref_known(v_a_597_, 2);
v_snd_603_ = lean_ctor_get(v_snd_601_, 1);
lean_inc_n(v_snd_603_, 2);
lean_dec(v_snd_601_);
v___x_604_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_snd_603_, v_n_595_);
v___x_605_ = lean_box(0);
lean_inc(v_src_596_);
v___x_606_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_src_596_, v_snd_603_, v___x_604_, v___x_605_);
lean_dec(v_snd_603_);
v___x_607_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_598_, v___x_606_);
v_a_597_ = v_tail_602_;
v_a_598_ = v___x_607_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5(lean_object* v_src_609_, lean_object* v_n_610_, lean_object* v_a_611_, lean_object* v_a_612_){
_start:
{
if (lean_obj_tag(v_a_611_) == 0)
{
lean_object* v___x_613_; 
lean_dec(v_src_609_);
v___x_613_ = lean_array_to_list(v_a_612_);
return v___x_613_;
}
else
{
lean_object* v_head_614_; lean_object* v_snd_615_; lean_object* v_tail_616_; lean_object* v_snd_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v_head_614_ = lean_ctor_get(v_a_611_, 0);
v_snd_615_ = lean_ctor_get(v_head_614_, 1);
lean_inc(v_snd_615_);
v_tail_616_ = lean_ctor_get(v_a_611_, 1);
lean_inc(v_tail_616_);
lean_dec_ref_known(v_a_611_, 2);
v_snd_617_ = lean_ctor_get(v_snd_615_, 1);
lean_inc_n(v_snd_617_, 2);
lean_dec(v_snd_615_);
v___x_618_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_snd_617_, v_n_610_);
v___x_619_ = lean_box(0);
lean_inc(v_src_609_);
v___x_620_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_src_609_, v_snd_617_, v___x_618_, v___x_619_);
lean_dec(v_snd_617_);
v___x_621_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_612_, v___x_620_);
v___x_622_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5(v_n_610_, v_src_609_, v_tail_616_, v___x_621_);
return v___x_622_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsBody___closed__1));
v___x_625_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody(lean_object* v_src_626_, lean_object* v_x_627_){
_start:
{
lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v_zero_634_; uint8_t v_isZero_635_; 
v_zero_634_ = lean_unsigned_to_nat(0u);
v_isZero_635_ = lean_nat_dec_eq(v_x_627_, v_zero_634_);
if (v_isZero_635_ == 1)
{
lean_object* v___x_636_; 
lean_dec(v_src_626_);
v___x_636_ = lean_box(0);
return v___x_636_;
}
else
{
lean_object* v_one_637_; lean_object* v_n_638_; lean_object* v___y_640_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_one_637_ = lean_unsigned_to_nat(1u);
v_n_638_ = lean_nat_sub(v_x_627_, v_one_637_);
v___x_650_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2, &lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_iftagsBody___closed__2);
lean_inc(v_src_626_);
v___x_651_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_650_, v_src_626_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v___x_652_; 
v___x_652_ = lean_box(0);
v___y_640_ = v___x_652_;
goto v___jp_639_;
}
else
{
lean_object* v_val_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_val_653_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_val_653_);
lean_dec_ref_known(v___x_651_, 1);
v___x_654_ = lean_box(0);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v_val_653_);
v___x_656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
lean_ctor_set(v___x_656_, 1, v___x_654_);
v___y_640_ = v___x_656_;
goto v___jp_639_;
}
v___jp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v_recs_643_; 
lean_inc_n(v_src_626_, 2);
v___x_641_ = lp_lean_x2dftml_LeanFtml_iftagsPattern(v_src_626_, v_n_638_);
v___x_642_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsBody___closed__0));
v_recs_643_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5(v_src_626_, v_n_638_, v___x_641_, v___x_642_);
if (lean_obj_tag(v_src_626_) == 0)
{
lean_object* v___x_644_; 
lean_dec(v_n_638_);
v___x_644_ = lean_box(0);
v___y_629_ = v_recs_643_;
v___y_630_ = v___y_640_;
v___y_631_ = v___x_644_;
goto v___jp_628_;
}
else
{
lean_object* v_head_645_; lean_object* v_tail_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_head_645_ = lean_ctor_get(v_src_626_, 0);
lean_inc(v_head_645_);
v_tail_646_ = lean_ctor_get(v_src_626_, 1);
lean_inc(v_tail_646_);
lean_dec_ref_known(v_src_626_, 2);
v___x_647_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_tail_646_, v_n_638_);
lean_dec(v_n_638_);
v___x_648_ = lean_box(0);
v___x_649_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(v_head_645_, v___x_647_, v___x_648_);
v___y_629_ = v_recs_643_;
v___y_630_ = v___y_640_;
v___y_631_ = v___x_649_;
goto v___jp_628_;
}
}
}
v___jp_628_:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = l_List_appendTR___redArg(v___y_630_, v___y_629_);
v___x_633_ = l_List_appendTR___redArg(v___x_632_, v___y_631_);
return v___x_633_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1(lean_object* v_n_657_, lean_object* v_a_658_, lean_object* v_a_659_){
_start:
{
if (lean_obj_tag(v_a_658_) == 0)
{
lean_object* v___x_660_; 
v___x_660_ = lean_array_to_list(v_a_659_);
return v___x_660_;
}
else
{
lean_object* v_head_661_; lean_object* v_tail_662_; lean_object* v_fst_663_; lean_object* v_snd_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_head_661_ = lean_ctor_get(v_a_658_, 0);
lean_inc(v_head_661_);
v_tail_662_ = lean_ctor_get(v_a_658_, 1);
lean_inc(v_tail_662_);
lean_dec_ref_known(v_a_658_, 2);
v_fst_663_ = lean_ctor_get(v_head_661_, 0);
lean_inc(v_fst_663_);
v_snd_664_ = lean_ctor_get(v_head_661_, 1);
lean_inc(v_snd_664_);
lean_dec(v_head_661_);
v___x_665_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_snd_664_, v_n_657_);
v___x_666_ = lean_box(0);
v___x_667_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsPattern_spec__0(v_fst_663_, v___x_665_, v___x_666_);
v___x_668_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_659_, v___x_667_);
v_a_658_ = v_tail_662_;
v_a_659_ = v___x_668_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1___boxed(lean_object* v_n_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsPattern_spec__1(v_n_670_, v_a_671_, v_a_672_);
lean_dec(v_n_670_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5___boxed(lean_object* v_src_674_, lean_object* v_n_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5(v_src_674_, v_n_675_, v_a_676_, v_a_677_);
lean_dec(v_n_675_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5___boxed(lean_object* v_n_679_, lean_object* v_src_680_, lean_object* v_a_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_iftagsBody_spec__5_spec__5(v_n_679_, v_src_680_, v_a_681_, v_a_682_);
lean_dec(v_n_679_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsBody___boxed(lean_object* v_src_684_, lean_object* v_x_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = lp_lean_x2dftml_LeanFtml_iftagsBody(v_src_684_, v_x_685_);
lean_dec(v_x_685_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsPattern___boxed(lean_object* v_src_687_, lean_object* v_x_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = lp_lean_x2dftml_LeanFtml_iftagsPattern(v_src_687_, v_x_688_);
lean_dec(v_x_688_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsScan(lean_object* v_tags_690_, lean_object* v_src_691_, lean_object* v_x_692_){
_start:
{
lean_object* v_zero_693_; uint8_t v_isZero_694_; 
v_zero_693_ = lean_unsigned_to_nat(0u);
v_isZero_694_ = lean_nat_dec_eq(v_x_692_, v_zero_693_);
if (v_isZero_694_ == 1)
{
lean_object* v___x_695_; 
lean_dec(v_src_691_);
lean_dec(v_tags_690_);
v___x_695_ = lean_box(0);
return v___x_695_;
}
else
{
if (lean_obj_tag(v_src_691_) == 0)
{
lean_dec(v_tags_690_);
return v_src_691_;
}
else
{
lean_object* v_head_696_; lean_object* v_tail_697_; lean_object* v_one_698_; lean_object* v_n_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_head_696_ = lean_ctor_get(v_src_691_, 0);
lean_inc(v_head_696_);
v_tail_697_ = lean_ctor_get(v_src_691_, 1);
lean_inc(v_tail_697_);
v_one_698_ = lean_unsigned_to_nat(1u);
v_n_699_ = lean_nat_sub(v_x_692_, v_one_698_);
v___x_700_ = l_List_lengthTR___redArg(v_src_691_);
v___x_701_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_700_);
lean_dec(v___x_700_);
v___x_702_ = lp_lean_x2dftml_LeanFtml_iftagsPattern(v_src_691_, v___x_701_);
lean_dec(v___x_701_);
v___x_703_ = l_List_head_x3f___redArg(v___x_702_);
lean_dec(v___x_702_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lp_lean_x2dftml_LeanFtml_iftagsScan(v_tags_690_, v_tail_697_, v_n_699_);
lean_dec(v_n_699_);
v___x_705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_705_, 0, v_head_696_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
return v___x_705_;
}
else
{
lean_object* v_val_706_; lean_object* v_snd_707_; lean_object* v_fst_708_; lean_object* v_fst_709_; lean_object* v_snd_710_; lean_object* v___y_712_; uint8_t v___x_715_; 
lean_dec(v_tail_697_);
lean_dec(v_head_696_);
v_val_706_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_val_706_);
lean_dec_ref_known(v___x_703_, 1);
v_snd_707_ = lean_ctor_get(v_val_706_, 1);
lean_inc(v_snd_707_);
v_fst_708_ = lean_ctor_get(v_val_706_, 0);
lean_inc(v_fst_708_);
lean_dec(v_val_706_);
v_fst_709_ = lean_ctor_get(v_snd_707_, 0);
lean_inc(v_fst_709_);
v_snd_710_ = lean_ctor_get(v_snd_707_, 1);
lean_inc(v_snd_710_);
lean_dec(v_snd_707_);
lean_inc(v_tags_690_);
v___x_715_ = lp_lean_x2dftml_LeanFtml_iftagsGate(v_tags_690_, v_fst_708_);
lean_dec(v_fst_708_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; 
lean_dec(v_fst_709_);
v___x_716_ = lean_box(0);
v___y_712_ = v___x_716_;
goto v___jp_711_;
}
else
{
v___y_712_ = v_fst_709_;
goto v___jp_711_;
}
v___jp_711_:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lp_lean_x2dftml_LeanFtml_iftagsScan(v_tags_690_, v_snd_710_, v_n_699_);
lean_dec(v_n_699_);
v___x_714_ = l_List_appendTR___redArg(v___y_712_, v___x_713_);
return v___x_714_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsScan___boxed(lean_object* v_tags_717_, lean_object* v_src_718_, lean_object* v_x_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = lp_lean_x2dftml_LeanFtml_iftagsScan(v_tags_717_, v_src_718_, v_x_719_);
lean_dec(v_x_719_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsRule_spec__0(lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
if (lean_obj_tag(v_a_721_) == 0)
{
lean_object* v___x_723_; 
v___x_723_ = l_List_reverse___redArg(v_a_722_);
return v___x_723_;
}
else
{
lean_object* v_head_724_; lean_object* v_tail_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_735_; 
v_head_724_ = lean_ctor_get(v_a_721_, 0);
v_tail_725_ = lean_ctor_get(v_a_721_, 1);
v_isSharedCheck_735_ = !lean_is_exclusive(v_a_721_);
if (v_isSharedCheck_735_ == 0)
{
v___x_727_ = v_a_721_;
v_isShared_728_ = v_isSharedCheck_735_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_tail_725_);
lean_inc(v_head_724_);
lean_dec(v_a_721_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_735_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_729_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
v___x_730_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_head_724_, v___x_729_);
lean_dec(v_head_724_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v_a_722_);
lean_ctor_set(v___x_727_, 0, v___x_730_);
v___x_732_ = v___x_727_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_a_722_);
v___x_732_ = v_reuseFailAlloc_734_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
v_a_721_ = v_tail_725_;
v_a_722_ = v___x_732_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsRule___lam__0(lean_object* v_st_736_, lean_object* v_src_737_, lean_object* v_toks_738_){
_start:
{
lean_object* v_doc_739_; lean_object* v_page_740_; lean_object* v_tags_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_754_; 
v_doc_739_ = lean_ctor_get(v_st_736_, 2);
lean_inc_ref(v_doc_739_);
lean_dec_ref(v_st_736_);
v_page_740_ = lean_ctor_get(v_doc_739_, 0);
lean_inc_ref(v_page_740_);
lean_dec_ref(v_doc_739_);
v_tags_741_ = lean_ctor_get(v_page_740_, 1);
v_isSharedCheck_754_ = !lean_is_exclusive(v_page_740_);
if (v_isSharedCheck_754_ == 0)
{
lean_object* v_unused_755_; 
v_unused_755_ = lean_ctor_get(v_page_740_, 0);
lean_dec(v_unused_755_);
v___x_743_ = v_page_740_;
v_isShared_744_ = v_isSharedCheck_754_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_tags_741_);
lean_dec(v_page_740_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_754_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_752_; 
v___x_745_ = lean_box(0);
v___x_746_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsRule_spec__0(v_tags_741_, v___x_745_);
v___x_747_ = l_List_lengthTR___redArg(v_src_737_);
v___x_748_ = lean_unsigned_to_nat(1u);
v___x_749_ = lean_nat_add(v___x_747_, v___x_748_);
lean_dec(v___x_747_);
v___x_750_ = lp_lean_x2dftml_LeanFtml_iftagsScan(v___x_746_, v_src_737_, v___x_749_);
lean_dec(v___x_749_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 1, v_toks_738_);
lean_ctor_set(v___x_743_, 0, v___x_750_);
v___x_752_ = v___x_743_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_toks_738_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iftagsRule(lean_object* v_st_756_){
_start:
{
lean_object* v___f_757_; lean_object* v___x_758_; 
lean_inc_ref(v_st_756_);
v___f_757_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_iftagsRule___lam__0), 3, 1);
lean_closure_set(v___f_757_, 0, v_st_756_);
v___x_758_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_756_, v___f_757_);
return v___x_758_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_760_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__0));
v___x_761_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatchAt(lean_object* v_src_771_){
_start:
{
lean_object* v___x_772_; lean_object* v___y_774_; lean_object* v___x_797_; 
v___x_772_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1);
lean_inc(v_src_771_);
v___x_797_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_772_, v_src_771_);
if (lean_obj_tag(v___x_797_) == 0)
{
v___y_774_ = v___x_797_;
goto v___jp_773_;
}
else
{
lean_object* v_val_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v_val_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_val_798_);
lean_dec_ref_known(v___x_797_, 1);
v___x_799_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__4));
v___x_800_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_799_, v_val_798_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v___x_801_; 
v___x_801_ = lean_box(0);
v___y_774_ = v___x_801_;
goto v___jp_773_;
}
else
{
lean_object* v_val_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_815_; 
v_val_802_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_815_ == 0)
{
v___x_804_ = v___x_800_;
v_isShared_805_ = v_isSharedCheck_815_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_val_802_);
lean_dec(v___x_800_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_815_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_806_ = lean_unsigned_to_nat(4u);
v___x_807_ = lean_nat_add(v___x_806_, v_val_802_);
lean_dec(v_val_802_);
v___x_808_ = lean_unsigned_to_nat(3u);
v___x_809_ = lean_nat_add(v___x_807_, v___x_808_);
lean_dec(v___x_807_);
v___x_810_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_src_771_);
v___x_811_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_771_, v_src_771_, v___x_809_, v___x_810_);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 0, v___x_811_);
v___x_813_ = v___x_804_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
v___y_774_ = v___x_813_;
goto v___jp_773_;
}
}
}
}
v___jp_773_:
{
if (lean_obj_tag(v_src_771_) == 1)
{
lean_object* v_head_775_; lean_object* v_tail_776_; lean_object* v___x_777_; uint8_t v___x_778_; 
v_head_775_ = lean_ctor_get(v_src_771_, 0);
v_tail_776_ = lean_ctor_get(v_src_771_, 1);
v___x_777_ = lean_unsigned_to_nat(10u);
v___x_778_ = lean_nat_dec_eq(v_head_775_, v___x_777_);
if (v___x_778_ == 0)
{
lean_dec_ref_known(v_src_771_, 2);
return v___y_774_;
}
else
{
lean_object* v___x_779_; 
lean_inc(v_tail_776_);
v___x_779_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_772_, v_tail_776_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_dec_ref_known(v_src_771_, 2);
return v___y_774_;
}
else
{
lean_object* v_val_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_val_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_val_780_);
lean_dec_ref_known(v___x_779_, 1);
v___x_781_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__4));
v___x_782_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_781_, v_val_780_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_dec_ref_known(v_src_771_, 2);
return v___y_774_;
}
else
{
lean_object* v_val_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_796_; 
lean_dec(v___y_774_);
v_val_783_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_796_ == 0)
{
v___x_785_ = v___x_782_;
v_isShared_786_ = v_isSharedCheck_796_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_val_783_);
lean_dec(v___x_782_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_796_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_787_ = lean_unsigned_to_nat(5u);
v___x_788_ = lean_nat_add(v___x_787_, v_val_783_);
lean_dec(v_val_783_);
v___x_789_ = lean_unsigned_to_nat(3u);
v___x_790_ = lean_nat_add(v___x_788_, v___x_789_);
lean_dec(v___x_788_);
v___x_791_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc_ref(v_src_771_);
v___x_792_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_771_, v_src_771_, v___x_790_, v___x_791_);
lean_dec_ref_known(v_src_771_, 2);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_792_);
v___x_794_ = v___x_785_;
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
}
}
else
{
lean_dec(v_src_771_);
return v___y_774_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatches_go(lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_){
_start:
{
lean_object* v_zero_820_; uint8_t v_isZero_821_; 
v_zero_820_ = lean_unsigned_to_nat(0u);
v_isZero_821_ = lean_nat_dec_eq(v_a_818_, v_zero_820_);
if (v_isZero_821_ == 1)
{
lean_object* v___x_822_; 
lean_dec(v_a_818_);
lean_dec(v_a_817_);
lean_dec(v_a_816_);
v___x_822_ = l_List_reverse___redArg(v_a_819_);
return v___x_822_;
}
else
{
if (lean_obj_tag(v_a_816_) == 0)
{
lean_object* v___x_823_; 
lean_dec(v_a_818_);
lean_dec(v_a_817_);
v___x_823_ = l_List_reverse___redArg(v_a_819_);
return v___x_823_;
}
else
{
lean_object* v_tail_824_; lean_object* v_one_825_; lean_object* v_n_826_; lean_object* v___x_827_; 
v_tail_824_ = lean_ctor_get(v_a_816_, 1);
v_one_825_ = lean_unsigned_to_nat(1u);
v_n_826_ = lean_nat_sub(v_a_818_, v_one_825_);
lean_dec(v_a_818_);
lean_inc_ref(v_a_816_);
v___x_827_ = lp_lean_x2dftml_LeanFtml_commentMatchAt(v_a_816_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v___x_828_; 
lean_inc(v_tail_824_);
lean_dec_ref_known(v_a_816_, 2);
v___x_828_ = lean_nat_add(v_a_817_, v_one_825_);
lean_dec(v_a_817_);
v_a_816_ = v_tail_824_;
v_a_817_ = v___x_828_;
v_a_818_ = v_n_826_;
goto _start;
}
else
{
lean_object* v_val_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_842_; 
v_val_830_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_val_830_);
lean_dec_ref_known(v___x_827_, 1);
v___x_831_ = l_List_lengthTR___redArg(v_val_830_);
lean_inc(v___x_831_);
v___x_832_ = l_List_drop___redArg(v___x_831_, v_a_816_);
v_isSharedCheck_842_ = !lean_is_exclusive(v_a_816_);
if (v_isSharedCheck_842_ == 0)
{
lean_object* v_unused_843_; lean_object* v_unused_844_; 
v_unused_843_ = lean_ctor_get(v_a_816_, 1);
lean_dec(v_unused_843_);
v_unused_844_ = lean_ctor_get(v_a_816_, 0);
lean_dec(v_unused_844_);
v___x_834_ = v_a_816_;
v_isShared_835_ = v_isSharedCheck_842_;
goto v_resetjp_833_;
}
else
{
lean_dec(v_a_816_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_842_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_836_ = lean_nat_add(v_a_817_, v___x_831_);
lean_dec(v___x_831_);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v_a_817_);
lean_ctor_set(v___x_837_, 1, v_val_830_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v_a_819_);
lean_ctor_set(v___x_834_, 0, v___x_837_);
v___x_839_ = v___x_834_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_a_819_);
v___x_839_ = v_reuseFailAlloc_841_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
v_a_816_ = v___x_832_;
v_a_817_ = v___x_836_;
v_a_818_ = v_n_826_;
v_a_819_ = v___x_839_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentMatches(lean_object* v_src_845_){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_846_ = lean_unsigned_to_nat(0u);
v___x_847_ = l_List_lengthTR___redArg(v_src_845_);
v___x_848_ = lean_unsigned_to_nat(1u);
v___x_849_ = lean_nat_add(v___x_847_, v___x_848_);
lean_dec(v___x_847_);
v___x_850_ = lean_box(0);
v___x_851_ = lp_lean_x2dftml_LeanFtml_commentMatches_go(v_src_845_, v___x_846_, v___x_849_, v___x_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore_go(lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_){
_start:
{
if (lean_obj_tag(v_a_852_) == 0)
{
lean_dec(v_a_853_);
return v_a_854_;
}
else
{
lean_object* v_head_855_; lean_object* v_tail_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; uint8_t v___x_860_; 
v_head_855_ = lean_ctor_get(v_a_852_, 0);
v_tail_856_ = lean_ctor_get(v_a_852_, 1);
v___x_857_ = lean_unsigned_to_nat(1u);
v___x_858_ = lean_nat_add(v_a_853_, v___x_857_);
lean_dec(v_a_853_);
v___x_859_ = lean_unsigned_to_nat(10u);
v___x_860_ = lean_nat_dec_eq(v_head_855_, v___x_859_);
if (v___x_860_ == 0)
{
v_a_852_ = v_tail_856_;
v_a_853_ = v___x_858_;
goto _start;
}
else
{
lean_dec(v_a_854_);
lean_inc(v___x_858_);
v_a_852_ = v_tail_856_;
v_a_853_ = v___x_858_;
v_a_854_ = v___x_858_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore_go___boxed(lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = lp_lean_x2dftml_LeanFtml_lastNlBefore_go(v_a_863_, v_a_864_, v_a_865_);
lean_dec(v_a_863_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNlBefore(lean_object* v_src_867_, lean_object* v_start_868_){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_869_ = lean_unsigned_to_nat(0u);
v___x_870_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_src_867_);
v___x_871_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_867_, v_src_867_, v_start_868_, v___x_870_);
lean_dec(v_src_867_);
v___x_872_ = lp_lean_x2dftml_LeanFtml_lastNlBefore_go(v___x_871_, v___x_869_, v___x_869_);
lean_dec(v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_873_) == 0)
{
uint8_t v___x_874_; 
v___x_874_ = 1;
return v___x_874_;
}
else
{
lean_object* v_head_875_; lean_object* v_tail_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v_head_875_ = lean_ctor_get(v_x_873_, 0);
v_tail_876_ = lean_ctor_get(v_x_873_, 1);
v___x_877_ = lean_unsigned_to_nat(32u);
v___x_878_ = lean_nat_dec_eq(v_head_875_, v___x_877_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; uint8_t v___x_880_; 
v___x_879_ = lean_unsigned_to_nat(9u);
v___x_880_ = lean_nat_dec_eq(v_head_875_, v___x_879_);
if (v___x_880_ == 0)
{
return v___x_880_;
}
else
{
v_x_873_ = v_tail_876_;
goto _start;
}
}
else
{
v_x_873_ = v_tail_876_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0___boxed(lean_object* v_x_883_){
_start:
{
uint8_t v_res_884_; lean_object* v_r_885_; 
v_res_884_ = lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(v_x_883_);
lean_dec(v_x_883_);
v_r_885_ = lean_box(v_res_884_);
return v_r_885_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1(lean_object* v_src_890_, lean_object* v_x_891_, lean_object* v_x_892_){
_start:
{
if (lean_obj_tag(v_x_892_) == 0)
{
lean_dec(v_src_890_);
return v_x_891_;
}
else
{
lean_object* v_snd_893_; lean_object* v_head_894_; lean_object* v_tail_895_; lean_object* v_fst_896_; lean_object* v_fst_897_; lean_object* v_snd_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_949_; 
v_snd_893_ = lean_ctor_get(v_x_891_, 1);
lean_inc(v_snd_893_);
v_head_894_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_head_894_);
v_tail_895_ = lean_ctor_get(v_x_892_, 1);
lean_inc(v_tail_895_);
lean_dec_ref_known(v_x_892_, 2);
v_fst_896_ = lean_ctor_get(v_x_891_, 0);
lean_inc(v_fst_896_);
lean_dec_ref(v_x_891_);
v_fst_897_ = lean_ctor_get(v_snd_893_, 0);
v_snd_898_ = lean_ctor_get(v_snd_893_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v_snd_893_);
if (v_isSharedCheck_949_ == 0)
{
v___x_900_ = v_snd_893_;
v_isShared_901_ = v_isSharedCheck_949_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_snd_898_);
lean_inc(v_fst_897_);
lean_dec(v_snd_893_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_949_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v_fst_902_; lean_object* v_snd_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_948_; 
v_fst_902_ = lean_ctor_get(v_head_894_, 0);
v_snd_903_ = lean_ctor_get(v_head_894_, 1);
v_isSharedCheck_948_ = !lean_is_exclusive(v_head_894_);
if (v_isSharedCheck_948_ == 0)
{
v___x_905_ = v_head_894_;
v_isShared_906_ = v_isSharedCheck_948_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_snd_903_);
lean_inc(v_fst_902_);
lean_dec(v_head_894_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_948_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v_ls_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v_pfx_911_; lean_object* v___x_912_; lean_object* v_endPos_913_; lean_object* v___y_915_; lean_object* v_fst_916_; lean_object* v_snd_917_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___y_934_; lean_object* v___x_944_; 
lean_inc(v_fst_902_);
lean_inc(v_src_890_);
v_ls_907_ = lp_lean_x2dftml_LeanFtml_lastNlBefore(v_src_890_, v_fst_902_);
v___x_908_ = lean_nat_sub(v_fst_902_, v_ls_907_);
lean_inc(v_ls_907_);
v___x_909_ = l_List_drop___redArg(v_ls_907_, v_src_890_);
v___x_910_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v___x_909_);
v_pfx_911_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_909_, v___x_909_, v___x_908_, v___x_910_);
lean_dec(v___x_909_);
v___x_912_ = l_List_lengthTR___redArg(v_snd_903_);
v_endPos_913_ = lean_nat_add(v_fst_902_, v___x_912_);
lean_dec(v___x_912_);
v___x_930_ = lean_box(0);
v___x_931_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__0));
lean_inc(v_endPos_913_);
v___x_932_ = l_List_drop___redArg(v_endPos_913_, v_src_890_);
lean_inc(v___x_932_);
v___x_944_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_931_, v___x_932_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v___x_945_; 
v___x_945_ = l_List_lengthTR___redArg(v_src_890_);
v___y_934_ = v___x_945_;
goto v___jp_933_;
}
else
{
lean_object* v_val_946_; lean_object* v___x_947_; 
v_val_946_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_val_946_);
lean_dec_ref_known(v___x_944_, 1);
v___x_947_ = lean_nat_add(v_endPos_913_, v_val_946_);
lean_dec(v_val_946_);
v___y_934_ = v___x_947_;
goto v___jp_933_;
}
v___jp_914_:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_918_ = lean_nat_sub(v___y_915_, v_snd_898_);
lean_dec(v___y_915_);
v___x_919_ = l_List_drop___redArg(v_snd_898_, v_src_890_);
lean_inc(v___x_919_);
v___x_920_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_919_, v___x_919_, v___x_918_, v___x_910_);
lean_dec(v___x_919_);
v___x_921_ = l_List_appendTR___redArg(v_fst_896_, v___x_920_);
v___x_922_ = l_List_appendTR___redArg(v___x_921_, v_fst_916_);
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 1, v_endPos_913_);
lean_ctor_set(v___x_905_, 0, v_snd_917_);
v___x_924_ = v___x_905_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_snd_917_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_endPos_913_);
v___x_924_ = v_reuseFailAlloc_929_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_926_; 
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 1, v___x_924_);
lean_ctor_set(v___x_900_, 0, v___x_922_);
v___x_926_ = v___x_900_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_922_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v___x_924_);
v___x_926_ = v_reuseFailAlloc_928_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
v_x_891_ = v___x_926_;
v_x_892_ = v_tail_895_;
goto _start;
}
}
}
v___jp_933_:
{
uint8_t v___x_935_; 
v___x_935_ = l_List_isEmpty___redArg(v_pfx_911_);
if (v___x_935_ == 0)
{
uint8_t v___x_936_; 
v___x_936_ = lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(v_pfx_911_);
lean_dec(v_pfx_911_);
if (v___x_936_ == 0)
{
lean_dec(v___y_934_);
lean_dec(v___x_932_);
lean_dec(v_ls_907_);
lean_dec(v_snd_903_);
v___y_915_ = v_fst_902_;
v_fst_916_ = v___x_930_;
v_snd_917_ = v_fst_897_;
goto v___jp_914_;
}
else
{
lean_object* v___x_937_; lean_object* v_tail_938_; uint8_t v___x_939_; 
v___x_937_ = lean_nat_sub(v___y_934_, v_endPos_913_);
lean_dec(v___y_934_);
lean_inc(v___x_932_);
v_tail_938_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_932_, v___x_932_, v___x_937_, v___x_910_);
lean_dec(v___x_932_);
v___x_939_ = lp_lean_x2dftml_List_all___at___00LeanFtml_commentRule_spec__0(v_tail_938_);
lean_dec(v_tail_938_);
if (v___x_939_ == 0)
{
lean_dec(v_ls_907_);
lean_dec(v_snd_903_);
v___y_915_ = v_fst_902_;
v_fst_916_ = v___x_930_;
v_snd_917_ = v_fst_897_;
goto v___jp_914_;
}
else
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v_fst_942_; lean_object* v_snd_943_; 
lean_dec(v_fst_902_);
v___x_940_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__1));
v___x_941_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_940_, v_snd_903_, v_fst_897_);
v_fst_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_fst_942_);
v_snd_943_ = lean_ctor_get(v___x_941_, 1);
lean_inc(v_snd_943_);
lean_dec_ref(v___x_941_);
v___y_915_ = v_ls_907_;
v_fst_916_ = v_fst_942_;
v_snd_917_ = v_snd_943_;
goto v___jp_914_;
}
}
}
else
{
lean_dec(v___y_934_);
lean_dec(v___x_932_);
lean_dec(v_pfx_911_);
lean_dec(v_ls_907_);
lean_dec(v_snd_903_);
v___y_915_ = v_fst_902_;
v_fst_916_ = v___x_930_;
v_snd_917_ = v_fst_897_;
goto v___jp_914_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentRule___lam__0(lean_object* v_src_950_, lean_object* v_toks_951_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_commentMatchAt___closed__1);
lean_inc(v_src_950_);
v___x_953_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_952_, v_src_950_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v___x_954_; 
v___x_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_954_, 0, v_src_950_);
lean_ctor_set(v___x_954_, 1, v_toks_951_);
return v___x_954_;
}
else
{
lean_object* v_cmatches_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v_snd_961_; lean_object* v_fst_962_; lean_object* v_fst_963_; lean_object* v_snd_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_973_; 
lean_dec_ref_known(v___x_953_, 1);
lean_inc_n(v_src_950_, 2);
v_cmatches_955_ = lp_lean_x2dftml_LeanFtml_commentMatches(v_src_950_);
v___x_956_ = lean_box(0);
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_958_, 0, v_toks_951_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_956_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1(v_src_950_, v___x_959_, v_cmatches_955_);
v_snd_961_ = lean_ctor_get(v___x_960_, 1);
lean_inc(v_snd_961_);
v_fst_962_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_fst_962_);
lean_dec_ref(v___x_960_);
v_fst_963_ = lean_ctor_get(v_snd_961_, 0);
v_snd_964_ = lean_ctor_get(v_snd_961_, 1);
v_isSharedCheck_973_ = !lean_is_exclusive(v_snd_961_);
if (v_isSharedCheck_973_ == 0)
{
v___x_966_ = v_snd_961_;
v_isShared_967_ = v_isSharedCheck_973_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_snd_964_);
lean_inc(v_fst_963_);
lean_dec(v_snd_961_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_973_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_971_; 
v___x_968_ = l_List_drop___redArg(v_snd_964_, v_src_950_);
lean_dec(v_src_950_);
v___x_969_ = l_List_appendTR___redArg(v_fst_962_, v___x_968_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 1, v_fst_963_);
lean_ctor_set(v___x_966_, 0, v___x_969_);
v___x_971_ = v___x_966_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v_fst_963_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_commentRule(lean_object* v_st_975_){
_start:
{
lean_object* v___f_976_; lean_object* v___x_977_; 
v___f_976_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_commentRule___closed__0));
v___x_977_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_975_, v___f_976_);
return v___x_977_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isSegByte(lean_object* v_b_978_){
_start:
{
lean_object* v___x_979_; uint8_t v___x_980_; 
v___x_979_ = lean_unsigned_to_nat(32u);
v___x_980_ = lean_nat_dec_eq(v_b_978_, v___x_979_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_981_ = lean_unsigned_to_nat(47u);
v___x_982_ = lean_nat_dec_eq(v_b_978_, v___x_981_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_983_ = lean_unsigned_to_nat(34u);
v___x_984_ = lean_nat_dec_eq(v_b_978_, v___x_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; uint8_t v___x_986_; 
v___x_985_ = lean_unsigned_to_nat(39u);
v___x_986_ = lean_nat_dec_eq(v_b_978_, v___x_985_);
if (v___x_986_ == 0)
{
lean_object* v___x_987_; uint8_t v___x_988_; 
v___x_987_ = lean_unsigned_to_nat(255u);
v___x_988_ = lean_nat_dec_eq(v_b_978_, v___x_987_);
if (v___x_988_ == 0)
{
uint8_t v___x_989_; 
v___x_989_ = 1;
return v___x_989_;
}
else
{
return v___x_986_;
}
}
else
{
return v___x_984_;
}
}
else
{
return v___x_982_;
}
}
else
{
return v___x_980_;
}
}
else
{
uint8_t v___x_990_; 
v___x_990_ = 0;
return v___x_990_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isSegByte___boxed(lean_object* v_b_991_){
_start:
{
uint8_t v_res_992_; lean_object* v_r_993_; 
v_res_992_ = lp_lean_x2dftml_LeanFtml_isSegByte(v_b_991_);
lean_dec(v_b_991_);
v_r_993_ = lean_box(v_res_992_);
return v_r_993_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isFinalByte(lean_object* v_b_994_){
_start:
{
lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_995_ = lean_unsigned_to_nat(32u);
v___x_996_ = lean_nat_dec_eq(v_b_994_, v___x_995_);
if (v___x_996_ == 0)
{
lean_object* v___x_997_; uint8_t v___x_998_; 
v___x_997_ = lean_unsigned_to_nat(9u);
v___x_998_ = lean_nat_dec_eq(v_b_994_, v___x_997_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_999_ = lean_unsigned_to_nat(10u);
v___x_1000_ = lean_nat_dec_eq(v_b_994_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_1001_ = lean_unsigned_to_nat(47u);
v___x_1002_ = lean_nat_dec_eq(v_b_994_, v___x_1001_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; uint8_t v___x_1004_; 
v___x_1003_ = lean_unsigned_to_nat(34u);
v___x_1004_ = lean_nat_dec_eq(v_b_994_, v___x_1003_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1005_ = lean_unsigned_to_nat(255u);
v___x_1006_ = lean_nat_dec_eq(v_b_994_, v___x_1005_);
if (v___x_1006_ == 0)
{
uint8_t v___x_1007_; 
v___x_1007_ = 1;
return v___x_1007_;
}
else
{
return v___x_1004_;
}
}
else
{
return v___x_1002_;
}
}
else
{
return v___x_1000_;
}
}
else
{
return v___x_998_;
}
}
else
{
return v___x_996_;
}
}
else
{
uint8_t v___x_1008_; 
v___x_1008_ = 0;
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isFinalByte___boxed(lean_object* v_b_1009_){
_start:
{
uint8_t v_res_1010_; lean_object* v_r_1011_; 
v_res_1010_ = lp_lean_x2dftml_LeanFtml_isFinalByte(v_b_1009_);
lean_dec(v_b_1009_);
v_r_1011_ = lean_box(v_res_1010_);
return v_r_1011_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(lean_object* v_a_1012_, lean_object* v_a_1013_){
_start:
{
if (lean_obj_tag(v_a_1012_) == 0)
{
lean_object* v___x_1014_; 
v___x_1014_ = l_List_reverse___redArg(v_a_1013_);
return v___x_1014_;
}
else
{
lean_object* v_head_1015_; lean_object* v_tail_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1025_; 
v_head_1015_ = lean_ctor_get(v_a_1012_, 0);
v_tail_1016_ = lean_ctor_get(v_a_1012_, 1);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_a_1012_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1018_ = v_a_1012_;
v_isShared_1019_ = v_isSharedCheck_1025_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_tail_1016_);
lean_inc(v_head_1015_);
lean_dec(v_a_1012_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1025_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
v___x_1020_ = lp_lean_x2dftml_LeanFtml_litBytes(v_head_1015_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 1, v_a_1013_);
lean_ctor_set(v___x_1018_, 0, v___x_1020_);
v___x_1022_ = v___x_1018_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v_a_1013_);
v___x_1022_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
v_a_1012_ = v_tail_1016_;
v_a_1013_ = v___x_1022_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1054_ = lean_box(0);
v___x_1055_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__13));
v___x_1056_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(v___x_1055_, v___x_1054_);
return v___x_1056_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeSchemes(void){
_start:
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14, &lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_iframeSchemes___closed__14);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0(lean_object* v_l_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
if (lean_obj_tag(v_a_1059_) == 0)
{
lean_dec_ref(v_a_1060_);
lean_inc(v_l_1058_);
return v_l_1058_;
}
else
{
lean_object* v_head_1061_; lean_object* v_tail_1062_; uint8_t v___x_1063_; 
v_head_1061_ = lean_ctor_get(v_a_1059_, 0);
lean_inc(v_head_1061_);
v_tail_1062_ = lean_ctor_get(v_a_1059_, 1);
lean_inc(v_tail_1062_);
lean_dec_ref_known(v_a_1059_, 2);
v___x_1063_ = lp_lean_x2dftml_LeanFtml_isSegByte(v_head_1061_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; 
lean_dec(v_tail_1062_);
lean_dec(v_head_1061_);
v___x_1064_ = lean_array_to_list(v_a_1060_);
return v___x_1064_;
}
else
{
lean_object* v___x_1065_; 
v___x_1065_ = lean_array_push(v_a_1060_, v_head_1061_);
v_a_1059_ = v_tail_1062_;
v_a_1060_ = v___x_1065_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0___boxed(lean_object* v_l_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0(v_l_1067_, v_a_1068_, v_a_1069_);
lean_dec(v_l_1067_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segEnds_go(lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v_zero_1075_; uint8_t v_isZero_1076_; 
v_zero_1075_ = lean_unsigned_to_nat(0u);
v_isZero_1076_ = lean_nat_dec_eq(v_a_1074_, v_zero_1075_);
if (v_isZero_1076_ == 1)
{
lean_object* v___x_1077_; 
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
lean_dec(v_a_1071_);
v___x_1077_ = l_List_reverse___redArg(v_a_1073_);
return v___x_1077_;
}
else
{
lean_object* v___x_1078_; lean_object* v_run_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1078_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_a_1071_);
v_run_1079_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_segEnds_go_spec__0(v_a_1071_, v_a_1071_, v___x_1078_);
v___x_1080_ = l_List_lengthTR___redArg(v_run_1079_);
lean_dec(v_run_1079_);
lean_inc(v___x_1080_);
v___x_1081_ = l_List_drop___redArg(v___x_1080_, v_a_1071_);
lean_dec(v_a_1071_);
if (lean_obj_tag(v___x_1081_) == 1)
{
lean_object* v_head_1082_; lean_object* v_tail_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1098_; 
v_head_1082_ = lean_ctor_get(v___x_1081_, 0);
v_tail_1083_ = lean_ctor_get(v___x_1081_, 1);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1085_ = v___x_1081_;
v_isShared_1086_ = v_isSharedCheck_1098_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_tail_1083_);
lean_inc(v_head_1082_);
lean_dec(v___x_1081_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1098_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; uint8_t v___x_1088_; 
v___x_1087_ = lean_unsigned_to_nat(47u);
v___x_1088_ = lean_nat_dec_eq(v_head_1082_, v___x_1087_);
lean_dec(v_head_1082_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; 
lean_del_object(v___x_1085_);
lean_dec(v_tail_1083_);
lean_dec(v___x_1080_);
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___x_1089_ = l_List_reverse___redArg(v_a_1073_);
return v___x_1089_;
}
else
{
lean_object* v_one_1090_; lean_object* v_n_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1095_; 
v_one_1090_ = lean_unsigned_to_nat(1u);
v_n_1091_ = lean_nat_sub(v_a_1074_, v_one_1090_);
lean_dec(v_a_1074_);
v___x_1092_ = lean_nat_add(v_a_1072_, v___x_1080_);
lean_dec(v___x_1080_);
lean_dec(v_a_1072_);
v___x_1093_ = lean_nat_add(v___x_1092_, v_one_1090_);
lean_dec(v___x_1092_);
lean_inc(v___x_1093_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 1, v_a_1073_);
lean_ctor_set(v___x_1085_, 0, v___x_1093_);
v___x_1095_ = v___x_1085_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___x_1093_);
lean_ctor_set(v_reuseFailAlloc_1097_, 1, v_a_1073_);
v___x_1095_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
v_a_1071_ = v_tail_1083_;
v_a_1072_ = v___x_1093_;
v_a_1073_ = v___x_1095_;
v_a_1074_ = v_n_1091_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1099_; 
lean_dec(v___x_1081_);
lean_dec(v___x_1080_);
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___x_1099_ = l_List_reverse___redArg(v_a_1073_);
return v___x_1099_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segEnds(lean_object* v_s_1103_){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1104_ = lean_unsigned_to_nat(0u);
v___x_1105_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segEnds___closed__0));
v___x_1106_ = l_List_lengthTR___redArg(v_s_1103_);
v___x_1107_ = lean_unsigned_to_nat(1u);
v___x_1108_ = lean_nat_add(v___x_1106_, v___x_1107_);
lean_dec(v___x_1106_);
v___x_1109_ = lp_lean_x2dftml_LeanFtml_segEnds_go(v_s_1103_, v___x_1104_, v___x_1105_, v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(lean_object* v_l_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_){
_start:
{
if (lean_obj_tag(v_a_1111_) == 0)
{
lean_dec_ref(v_a_1112_);
lean_inc(v_l_1110_);
return v_l_1110_;
}
else
{
lean_object* v_head_1113_; lean_object* v_tail_1114_; uint8_t v___x_1115_; 
v_head_1113_ = lean_ctor_get(v_a_1111_, 0);
lean_inc(v_head_1113_);
v_tail_1114_ = lean_ctor_get(v_a_1111_, 1);
lean_inc(v_tail_1114_);
lean_dec_ref_known(v_a_1111_, 2);
v___x_1115_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1113_);
if (v___x_1115_ == 0)
{
lean_object* v___x_1116_; 
lean_dec(v_tail_1114_);
lean_dec(v_head_1113_);
v___x_1116_ = lean_array_to_list(v_a_1112_);
return v___x_1116_;
}
else
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_array_push(v_a_1112_, v_head_1113_);
v_a_1111_ = v_tail_1114_;
v_a_1112_ = v___x_1117_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1___boxed(lean_object* v_l_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_l_1119_, v_a_1120_, v_a_1121_);
lean_dec(v_l_1119_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__0(lean_object* v_r4_1123_, lean_object* v_url_1124_, lean_object* v_x_1125_){
_start:
{
if (lean_obj_tag(v_x_1125_) == 0)
{
lean_object* v___x_1126_; 
lean_dec(v_url_1124_);
lean_dec(v_r4_1123_);
v___x_1126_ = lean_box(0);
return v___x_1126_;
}
else
{
lean_object* v_head_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1144_; 
v_head_1127_ = lean_ctor_get(v_x_1125_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_x_1125_);
if (v_isSharedCheck_1144_ == 0)
{
lean_object* v_unused_1145_; 
v_unused_1145_ = lean_ctor_get(v_x_1125_, 1);
lean_dec(v_unused_1145_);
v___x_1129_ = v_x_1125_;
v_isShared_1130_ = v_isSharedCheck_1144_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_head_1127_);
lean_dec(v_x_1125_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1144_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1140_; 
v___x_1131_ = l_List_lengthTR___redArg(v_r4_1123_);
v___x_1132_ = l_List_lengthTR___redArg(v_head_1127_);
v___x_1133_ = lean_nat_sub(v___x_1131_, v___x_1132_);
lean_dec(v___x_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r4_1123_);
v___x_1135_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r4_1123_, v_r4_1123_, v___x_1133_, v___x_1134_);
lean_dec(v_r4_1123_);
v___x_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
v___x_1137_ = lean_unsigned_to_nat(2u);
v___x_1138_ = l_List_drop___redArg(v___x_1137_, v_head_1127_);
lean_dec(v_head_1127_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set_tag(v___x_1129_, 0);
lean_ctor_set(v___x_1129_, 1, v___x_1138_);
lean_ctor_set(v___x_1129_, 0, v___x_1136_);
v___x_1140_ = v___x_1129_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1141_, 0, v_url_1124_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
return v___x_1142_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2(lean_object* v_r4_1146_, lean_object* v_url_1147_, lean_object* v_x_1148_){
_start:
{
if (lean_obj_tag(v_x_1148_) == 0)
{
lean_object* v___x_1149_; 
lean_dec(v_url_1147_);
lean_dec(v_r4_1146_);
v___x_1149_ = lean_box(0);
return v___x_1149_;
}
else
{
lean_object* v_head_1150_; lean_object* v_tail_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v_r5_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v_head_1150_ = lean_ctor_get(v_x_1148_, 0);
v_tail_1151_ = lean_ctor_get(v_x_1148_, 1);
v___x_1152_ = lean_unsigned_to_nat(1u);
v___x_1153_ = lean_nat_add(v_head_1150_, v___x_1152_);
v_r5_1154_ = l_List_drop___redArg(v___x_1153_, v_r4_1146_);
v___x_1155_ = lp_lean_x2dftml_LeanFtml_close2Suffixes(v_r5_1154_);
lean_inc(v_url_1147_);
lean_inc(v_r4_1146_);
v___x_1156_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__0(v_r4_1146_, v_url_1147_, v___x_1155_);
if (lean_obj_tag(v___x_1156_) == 0)
{
v_x_1148_ = v_tail_1151_;
goto _start;
}
else
{
lean_dec(v_url_1147_);
lean_dec(v_r4_1146_);
return v___x_1156_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2___boxed(lean_object* v_r4_1158_, lean_object* v_url_1159_, lean_object* v_x_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2(v_r4_1158_, v_url_1159_, v_x_1160_);
lean_dec(v_x_1160_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeTail(lean_object* v_r4_1162_, lean_object* v_url_1163_){
_start:
{
lean_object* v___y_1165_; lean_object* v___x_1189_; lean_object* v_wsRun_1190_; uint8_t v___x_1191_; 
v___x_1189_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r4_1162_);
v_wsRun_1190_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r4_1162_, v_r4_1162_, v___x_1189_);
v___x_1191_ = l_List_isEmpty___redArg(v_wsRun_1190_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1192_ = l_List_lengthTR___redArg(v_wsRun_1190_);
lean_dec(v_wsRun_1190_);
v___x_1193_ = l_List_range(v___x_1192_);
v___x_1194_ = l_List_reverse___redArg(v___x_1193_);
lean_inc(v_url_1163_);
lean_inc(v_r4_1162_);
v___x_1195_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeTail_spec__2(v_r4_1162_, v_url_1163_, v___x_1194_);
lean_dec(v___x_1194_);
if (lean_obj_tag(v___x_1195_) == 0)
{
v___y_1165_ = v___x_1195_;
goto v___jp_1164_;
}
else
{
lean_dec(v_url_1163_);
lean_dec(v_r4_1162_);
return v___x_1195_;
}
}
else
{
lean_object* v___x_1196_; 
lean_dec(v_wsRun_1190_);
v___x_1196_ = lean_box(0);
v___y_1165_ = v___x_1196_;
goto v___jp_1164_;
}
v___jp_1164_:
{
if (lean_obj_tag(v_r4_1162_) == 1)
{
lean_object* v_head_1166_; lean_object* v_tail_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1188_; 
v_head_1166_ = lean_ctor_get(v_r4_1162_, 0);
v_tail_1167_ = lean_ctor_get(v_r4_1162_, 1);
v_isSharedCheck_1188_ = !lean_is_exclusive(v_r4_1162_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1169_ = v_r4_1162_;
v_isShared_1170_ = v_isSharedCheck_1188_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_tail_1167_);
lean_inc(v_head_1166_);
lean_dec(v_r4_1162_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1188_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = lean_unsigned_to_nat(93u);
v___x_1172_ = lean_nat_dec_eq(v_head_1166_, v___x_1171_);
lean_dec(v_head_1166_);
if (v___x_1172_ == 0)
{
lean_del_object(v___x_1169_);
lean_dec(v_tail_1167_);
lean_dec(v_url_1163_);
return v___y_1165_;
}
else
{
if (lean_obj_tag(v_tail_1167_) == 1)
{
lean_object* v_head_1173_; lean_object* v_tail_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1187_; 
v_head_1173_ = lean_ctor_get(v_tail_1167_, 0);
v_tail_1174_ = lean_ctor_get(v_tail_1167_, 1);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_tail_1167_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1176_ = v_tail_1167_;
v_isShared_1177_ = v_isSharedCheck_1187_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_tail_1174_);
lean_inc(v_head_1173_);
lean_dec(v_tail_1167_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1187_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
uint8_t v___x_1178_; 
v___x_1178_ = lean_nat_dec_eq(v_head_1173_, v___x_1171_);
lean_dec(v_head_1173_);
if (v___x_1178_ == 0)
{
lean_del_object(v___x_1176_);
lean_dec(v_tail_1174_);
lean_del_object(v___x_1169_);
lean_dec(v_url_1163_);
return v___y_1165_;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1181_; 
lean_dec(v___y_1165_);
v___x_1179_ = lean_box(0);
if (v_isShared_1177_ == 0)
{
lean_ctor_set_tag(v___x_1176_, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1179_);
v___x_1181_ = v___x_1176_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v_tail_1174_);
v___x_1181_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1183_; 
if (v_isShared_1170_ == 0)
{
lean_ctor_set_tag(v___x_1169_, 0);
lean_ctor_set(v___x_1169_, 1, v___x_1181_);
lean_ctor_set(v___x_1169_, 0, v_url_1163_);
v___x_1183_ = v___x_1169_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_url_1163_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v___x_1181_);
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
}
else
{
lean_del_object(v___x_1169_);
lean_dec(v_tail_1167_);
lean_dec(v_url_1163_);
return v___y_1165_;
}
}
}
}
else
{
lean_dec(v_url_1163_);
lean_dec(v_r4_1162_);
return v___y_1165_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1(lean_object* v_r3_1197_, lean_object* v_sch_1198_, lean_object* v_e_1199_, lean_object* v_r1_1200_, lean_object* v_x_1201_){
_start:
{
if (lean_obj_tag(v_x_1201_) == 0)
{
lean_object* v___x_1202_; 
lean_dec(v_r1_1200_);
v___x_1202_ = lean_box(0);
return v___x_1202_;
}
else
{
lean_object* v_head_1203_; lean_object* v_tail_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_head_1203_ = lean_ctor_get(v_x_1201_, 0);
lean_inc_n(v_head_1203_, 2);
v_tail_1204_ = lean_ctor_get(v_x_1201_, 1);
lean_inc(v_tail_1204_);
lean_dec_ref_known(v_x_1201_, 2);
v___x_1205_ = l_List_drop___redArg(v_head_1203_, v_r3_1197_);
v___x_1206_ = l_List_lengthTR___redArg(v_sch_1198_);
v___x_1207_ = lean_nat_add(v___x_1206_, v_e_1199_);
lean_dec(v___x_1206_);
v___x_1208_ = lean_nat_add(v___x_1207_, v_head_1203_);
lean_dec(v_head_1203_);
lean_dec(v___x_1207_);
v___x_1209_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r1_1200_);
v___x_1210_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r1_1200_, v_r1_1200_, v___x_1208_, v___x_1209_);
v___x_1211_ = lp_lean_x2dftml_LeanFtml_iframeTail(v___x_1205_, v___x_1210_);
if (lean_obj_tag(v___x_1211_) == 0)
{
v_x_1201_ = v_tail_1204_;
goto _start;
}
else
{
lean_dec(v_tail_1204_);
lean_dec(v_r1_1200_);
return v___x_1211_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1___boxed(lean_object* v_r3_1213_, lean_object* v_sch_1214_, lean_object* v_e_1215_, lean_object* v_r1_1216_, lean_object* v_x_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1(v_r3_1213_, v_sch_1214_, v_e_1215_, v_r1_1216_, v_x_1217_);
lean_dec(v_e_1215_);
lean_dec(v_sch_1214_);
lean_dec(v_r3_1213_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0(lean_object* v_l_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_){
_start:
{
if (lean_obj_tag(v_a_1220_) == 0)
{
lean_dec_ref(v_a_1221_);
lean_inc(v_l_1219_);
return v_l_1219_;
}
else
{
lean_object* v_head_1222_; lean_object* v_tail_1223_; uint8_t v___x_1224_; 
v_head_1222_ = lean_ctor_get(v_a_1220_, 0);
lean_inc(v_head_1222_);
v_tail_1223_ = lean_ctor_get(v_a_1220_, 1);
lean_inc(v_tail_1223_);
lean_dec_ref_known(v_a_1220_, 2);
v___x_1224_ = lp_lean_x2dftml_LeanFtml_isFinalByte(v_head_1222_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; 
lean_dec(v_tail_1223_);
lean_dec(v_head_1222_);
v___x_1225_ = lean_array_to_list(v_a_1221_);
return v___x_1225_;
}
else
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_array_push(v_a_1221_, v_head_1222_);
v_a_1220_ = v_tail_1223_;
v_a_1221_ = v___x_1226_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0___boxed(lean_object* v_l_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0(v_l_1228_, v_a_1229_, v_a_1230_);
lean_dec(v_l_1228_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2(lean_object* v_val_1232_, lean_object* v_sch_1233_, lean_object* v_r1_1234_, lean_object* v_x_1235_){
_start:
{
if (lean_obj_tag(v_x_1235_) == 0)
{
lean_object* v___x_1236_; 
lean_dec(v_r1_1234_);
v___x_1236_ = lean_box(0);
return v___x_1236_;
}
else
{
lean_object* v_head_1237_; lean_object* v_tail_1238_; lean_object* v___x_1239_; lean_object* v_r3_1240_; lean_object* v___x_1241_; lean_object* v_finalRun_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_head_1237_ = lean_ctor_get(v_x_1235_, 0);
lean_inc_n(v_head_1237_, 2);
v_tail_1238_ = lean_ctor_get(v_x_1235_, 1);
lean_inc(v_tail_1238_);
lean_dec_ref_known(v_x_1235_, 2);
v___x_1239_ = lean_unsigned_to_nat(1u);
v_r3_1240_ = l_List_drop___redArg(v_head_1237_, v_val_1232_);
v___x_1241_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r3_1240_);
v_finalRun_1242_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeMatch_spec__0(v_r3_1240_, v_r3_1240_, v___x_1241_);
v___x_1243_ = l_List_lengthTR___redArg(v_finalRun_1242_);
lean_dec(v_finalRun_1242_);
v___x_1244_ = lean_nat_add(v___x_1243_, v___x_1239_);
lean_dec(v___x_1243_);
v___x_1245_ = l_List_range(v___x_1244_);
lean_inc(v_r1_1234_);
v___x_1246_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__1(v_r3_1240_, v_sch_1233_, v_head_1237_, v_r1_1234_, v___x_1245_);
lean_dec(v_head_1237_);
lean_dec(v_r3_1240_);
if (lean_obj_tag(v___x_1246_) == 0)
{
v_x_1235_ = v_tail_1238_;
goto _start;
}
else
{
lean_dec(v_tail_1238_);
lean_dec(v_r1_1234_);
return v___x_1246_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2___boxed(lean_object* v_val_1248_, lean_object* v_sch_1249_, lean_object* v_r1_1250_, lean_object* v_x_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2(v_val_1248_, v_sch_1249_, v_r1_1250_, v_x_1251_);
lean_dec(v_sch_1249_);
lean_dec(v_val_1248_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3(lean_object* v_r1_1253_, lean_object* v_x_1254_){
_start:
{
if (lean_obj_tag(v_x_1254_) == 0)
{
lean_object* v___x_1255_; 
lean_dec(v_r1_1253_);
v___x_1255_ = lean_box(0);
return v___x_1255_;
}
else
{
lean_object* v_head_1256_; lean_object* v_tail_1257_; lean_object* v___x_1258_; 
v_head_1256_ = lean_ctor_get(v_x_1254_, 0);
v_tail_1257_ = lean_ctor_get(v_x_1254_, 1);
lean_inc(v_r1_1253_);
v___x_1258_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_head_1256_, v_r1_1253_);
if (lean_obj_tag(v___x_1258_) == 0)
{
v_x_1254_ = v_tail_1257_;
goto _start;
}
else
{
lean_object* v_val_1260_; lean_object* v_ends_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v_val_1260_ = lean_ctor_get(v___x_1258_, 0);
lean_inc_n(v_val_1260_, 2);
lean_dec_ref_known(v___x_1258_, 1);
v_ends_1261_ = lp_lean_x2dftml_LeanFtml_segEnds(v_val_1260_);
v___x_1262_ = l_List_reverse___redArg(v_ends_1261_);
lean_inc(v_r1_1253_);
v___x_1263_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__2(v_val_1260_, v_head_1256_, v_r1_1253_, v___x_1262_);
lean_dec(v_val_1260_);
if (lean_obj_tag(v___x_1263_) == 0)
{
v_x_1254_ = v_tail_1257_;
goto _start;
}
else
{
lean_dec(v_r1_1253_);
return v___x_1263_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3___boxed(lean_object* v_r1_1265_, lean_object* v_x_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3(v_r1_1265_, v_x_1266_);
lean_dec(v_x_1266_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4(lean_object* v_val_1268_, lean_object* v_x_1269_){
_start:
{
if (lean_obj_tag(v_x_1269_) == 0)
{
lean_object* v___x_1270_; 
v___x_1270_ = lean_box(0);
return v___x_1270_;
}
else
{
lean_object* v_head_1271_; lean_object* v_tail_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v_r1_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v_head_1271_ = lean_ctor_get(v_x_1269_, 0);
v_tail_1272_ = lean_ctor_get(v_x_1269_, 1);
v___x_1273_ = lean_unsigned_to_nat(1u);
v___x_1274_ = lean_nat_add(v_head_1271_, v___x_1273_);
v_r1_1275_ = l_List_drop___redArg(v___x_1274_, v_val_1268_);
v___x_1276_ = lp_lean_x2dftml_LeanFtml_iframeSchemes;
v___x_1277_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__3(v_r1_1275_, v___x_1276_);
if (lean_obj_tag(v___x_1277_) == 0)
{
v_x_1269_ = v_tail_1272_;
goto _start;
}
else
{
return v___x_1277_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4___boxed(lean_object* v_val_1279_, lean_object* v_x_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4(v_val_1279_, v_x_1280_);
lean_dec(v_x_1280_);
lean_dec(v_val_1279_);
return v_res_1281_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1(void){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1283_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeMatch___closed__0));
v___x_1284_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1283_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeMatch(lean_object* v_src_1285_){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1, &lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_iframeMatch___closed__1);
v___x_1287_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1286_, v_src_1285_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_box(0);
return v___x_1288_;
}
else
{
lean_object* v_val_1289_; lean_object* v___x_1290_; lean_object* v_wsRun_1291_; uint8_t v___x_1292_; 
v_val_1289_ = lean_ctor_get(v___x_1287_, 0);
lean_inc_n(v_val_1289_, 2);
lean_dec_ref_known(v___x_1287_, 1);
v___x_1290_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
v_wsRun_1291_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_1289_, v_val_1289_, v___x_1290_);
v___x_1292_ = l_List_isEmpty___redArg(v_wsRun_1291_);
if (v___x_1292_ == 0)
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1293_ = l_List_lengthTR___redArg(v_wsRun_1291_);
lean_dec(v_wsRun_1291_);
v___x_1294_ = l_List_range(v___x_1293_);
v___x_1295_ = l_List_reverse___redArg(v___x_1294_);
v___x_1296_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_iframeMatch_spec__4(v_val_1289_, v___x_1295_);
lean_dec(v___x_1295_);
lean_dec(v_val_1289_);
return v___x_1296_;
}
else
{
lean_object* v___x_1297_; 
lean_dec(v_wsRun_1291_);
lean_dec(v_val_1289_);
v___x_1297_ = lean_box(0);
return v___x_1297_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1(lean_object* v_attrs_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_){
_start:
{
if (lean_obj_tag(v_a_1299_) == 0)
{
lean_object* v___x_1301_; 
v___x_1301_ = l_List_reverse___redArg(v_a_1300_);
return v___x_1301_;
}
else
{
lean_object* v_head_1302_; lean_object* v_tail_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1320_; 
v_head_1302_ = lean_ctor_get(v_a_1299_, 0);
v_tail_1303_ = lean_ctor_get(v_a_1299_, 1);
v_isSharedCheck_1320_ = !lean_is_exclusive(v_a_1299_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1305_ = v_a_1299_;
v_isShared_1306_ = v_isSharedCheck_1320_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_tail_1303_);
lean_inc(v_head_1302_);
lean_dec(v_a_1299_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1320_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___y_1308_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
lean_inc(v_head_1302_);
v___x_1313_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_head_1302_);
v___x_1314_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attrs_1298_, v_head_1302_);
lean_dec(v_head_1302_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_box(3);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1313_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___y_1308_ = v___x_1316_;
goto v___jp_1307_;
}
else
{
lean_object* v_val_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v_val_1317_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_val_1317_);
lean_dec_ref_known(v___x_1314_, 1);
v___x_1318_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_1317_);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1313_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___y_1308_ = v___x_1319_;
goto v___jp_1307_;
}
v___jp_1307_:
{
lean_object* v___x_1310_; 
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 1, v_a_1300_);
lean_ctor_set(v___x_1305_, 0, v___y_1308_);
v___x_1310_ = v___x_1305_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___y_1308_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v_a_1300_);
v___x_1310_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
v_a_1299_ = v_tail_1303_;
v_a_1300_ = v___x_1310_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1___boxed(lean_object* v_attrs_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1(v_attrs_1321_, v_a_1322_, v_a_1323_);
lean_dec(v_attrs_1321_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_iframeProcess_spec__0(lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
if (lean_obj_tag(v_a_1325_) == 0)
{
lean_object* v___x_1327_; 
v___x_1327_ = l_List_reverse___redArg(v_a_1326_);
return v___x_1327_;
}
else
{
lean_object* v_head_1328_; lean_object* v_tail_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1343_; 
v_head_1328_ = lean_ctor_get(v_a_1325_, 0);
v_tail_1329_ = lean_ctor_get(v_a_1325_, 1);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_a_1325_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1331_ = v_a_1325_;
v_isShared_1332_ = v_isSharedCheck_1343_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_tail_1329_);
lean_inc(v_head_1328_);
lean_dec(v_a_1325_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1343_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1333_; uint8_t v___x_1334_; 
v___x_1333_ = lean_unsigned_to_nat(13u);
v___x_1334_ = lean_nat_dec_eq(v_head_1328_, v___x_1333_);
if (v___x_1334_ == 0)
{
lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1335_ = lean_unsigned_to_nat(10u);
v___x_1336_ = lean_nat_dec_eq(v_head_1328_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1338_; 
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 1, v_a_1326_);
v___x_1338_ = v___x_1331_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_head_1328_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v_a_1326_);
v___x_1338_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
v_a_1325_ = v_tail_1329_;
v_a_1326_ = v___x_1338_;
goto _start;
}
}
else
{
lean_del_object(v___x_1331_);
lean_dec(v_head_1328_);
v_a_1325_ = v_tail_1329_;
goto _start;
}
}
else
{
lean_del_object(v___x_1331_);
lean_dec(v_head_1328_);
v_a_1325_ = v_tail_1329_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14(void){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v_keys_1374_; 
v___x_1372_ = lean_box(0);
v___x_1373_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeProcess___closed__13));
v_keys_1374_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(v___x_1373_, v___x_1372_);
return v_keys_1374_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeProcess___closed__15));
v___x_1377_ = l_String_toListImpl(v___x_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeProcess(lean_object* v_url_1379_, lean_object* v_g2_1380_, lean_object* v_toks_1381_){
_start:
{
lean_object* v___x_1382_; lean_object* v_srcOpt_1383_; lean_object* v___y_1385_; 
v___x_1382_ = lean_box(0);
v_srcOpt_1383_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_iframeProcess_spec__0(v_url_1379_, v___x_1382_);
if (lean_obj_tag(v_g2_1380_) == 0)
{
v___y_1385_ = v___x_1382_;
goto v___jp_1384_;
}
else
{
lean_object* v_val_1400_; 
v_val_1400_ = lean_ctor_get(v_g2_1380_, 0);
lean_inc(v_val_1400_);
lean_dec_ref_known(v_g2_1380_, 1);
v___y_1385_ = v_val_1400_;
goto v___jp_1384_;
}
v___jp_1384_:
{
lean_object* v_attrs_1386_; lean_object* v_keys_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v_opts_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v_attrs_1386_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_1385_);
lean_dec(v___y_1385_);
v_keys_1387_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14, &lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_iframeProcess___closed__14);
v___x_1388_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16, &lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_iframeProcess___closed__16);
v___x_1389_ = lp_lean_x2dftml_LeanFtml_textVal(v_srcOpt_1383_);
v___x_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1388_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
v___x_1391_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeProcess_spec__1(v_attrs_1386_, v_keys_1387_, v___x_1382_);
lean_dec(v_attrs_1386_);
v_opts_1392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_opts_1392_, 0, v___x_1390_);
lean_ctor_set(v_opts_1392_, 1, v___x_1391_);
v___x_1393_ = l_List_lengthTR___redArg(v_toks_1381_);
v___x_1394_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1393_);
v___x_1395_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeProcess___closed__17));
v___x_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
lean_ctor_set(v___x_1396_, 1, v_opts_1392_);
v___x_1397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1396_);
lean_ctor_set(v___x_1397_, 1, v___x_1382_);
v___x_1398_ = l_List_appendTR___redArg(v_toks_1381_, v___x_1397_);
v___x_1399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1394_);
lean_ctor_set(v___x_1399_, 1, v___x_1398_);
return v___x_1399_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeScan(lean_object* v_src_1401_, lean_object* v_toks_1402_, lean_object* v_x_1403_){
_start:
{
lean_object* v_zero_1407_; uint8_t v_isZero_1408_; 
v_zero_1407_ = lean_unsigned_to_nat(0u);
v_isZero_1408_ = lean_nat_dec_eq(v_x_1403_, v_zero_1407_);
if (v_isZero_1408_ == 1)
{
lean_dec(v_src_1401_);
goto v___jp_1404_;
}
else
{
if (lean_obj_tag(v_src_1401_) == 0)
{
goto v___jp_1404_;
}
else
{
lean_object* v_head_1409_; lean_object* v_tail_1410_; lean_object* v_one_1411_; lean_object* v_n_1412_; lean_object* v___x_1413_; 
v_head_1409_ = lean_ctor_get(v_src_1401_, 0);
lean_inc(v_head_1409_);
v_tail_1410_ = lean_ctor_get(v_src_1401_, 1);
lean_inc(v_tail_1410_);
v_one_1411_ = lean_unsigned_to_nat(1u);
v_n_1412_ = lean_nat_sub(v_x_1403_, v_one_1411_);
v___x_1413_ = lp_lean_x2dftml_LeanFtml_iframeMatch(v_src_1401_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v___x_1414_; lean_object* v_fst_1415_; lean_object* v_snd_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1424_; 
v___x_1414_ = lp_lean_x2dftml_LeanFtml_iframeScan(v_tail_1410_, v_toks_1402_, v_n_1412_);
lean_dec(v_n_1412_);
v_fst_1415_ = lean_ctor_get(v___x_1414_, 0);
v_snd_1416_ = lean_ctor_get(v___x_1414_, 1);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1418_ = v___x_1414_;
v_isShared_1419_ = v_isSharedCheck_1424_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_snd_1416_);
lean_inc(v_fst_1415_);
lean_dec(v___x_1414_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1424_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1420_; lean_object* v___x_1422_; 
v___x_1420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1420_, 0, v_head_1409_);
lean_ctor_set(v___x_1420_, 1, v_fst_1415_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 0, v___x_1420_);
v___x_1422_ = v___x_1418_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v_snd_1416_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
else
{
lean_object* v_val_1425_; lean_object* v_snd_1426_; lean_object* v_fst_1427_; lean_object* v_fst_1428_; lean_object* v_snd_1429_; lean_object* v___x_1430_; lean_object* v_fst_1431_; lean_object* v_snd_1432_; lean_object* v___x_1433_; lean_object* v_fst_1434_; lean_object* v_snd_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1443_; 
lean_dec(v_tail_1410_);
lean_dec(v_head_1409_);
v_val_1425_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_val_1425_);
lean_dec_ref_known(v___x_1413_, 1);
v_snd_1426_ = lean_ctor_get(v_val_1425_, 1);
lean_inc(v_snd_1426_);
v_fst_1427_ = lean_ctor_get(v_val_1425_, 0);
lean_inc(v_fst_1427_);
lean_dec(v_val_1425_);
v_fst_1428_ = lean_ctor_get(v_snd_1426_, 0);
lean_inc(v_fst_1428_);
v_snd_1429_ = lean_ctor_get(v_snd_1426_, 1);
lean_inc(v_snd_1429_);
lean_dec(v_snd_1426_);
v___x_1430_ = lp_lean_x2dftml_LeanFtml_iframeProcess(v_fst_1427_, v_fst_1428_, v_toks_1402_);
v_fst_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_fst_1431_);
v_snd_1432_ = lean_ctor_get(v___x_1430_, 1);
lean_inc(v_snd_1432_);
lean_dec_ref(v___x_1430_);
v___x_1433_ = lp_lean_x2dftml_LeanFtml_iframeScan(v_snd_1429_, v_snd_1432_, v_n_1412_);
lean_dec(v_n_1412_);
v_fst_1434_ = lean_ctor_get(v___x_1433_, 0);
v_snd_1435_ = lean_ctor_get(v___x_1433_, 1);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1437_ = v___x_1433_;
v_isShared_1438_ = v_isSharedCheck_1443_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_snd_1435_);
lean_inc(v_fst_1434_);
lean_dec(v___x_1433_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1443_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1441_; 
v___x_1439_ = l_List_appendTR___redArg(v_fst_1431_, v_fst_1434_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1439_);
v___x_1441_ = v___x_1437_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1439_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_snd_1435_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
v___jp_1404_:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1405_ = lean_box(0);
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
lean_ctor_set(v___x_1406_, 1, v_toks_1402_);
return v___x_1406_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeScan___boxed(lean_object* v_src_1444_, lean_object* v_toks_1445_, lean_object* v_x_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = lp_lean_x2dftml_LeanFtml_iframeScan(v_src_1444_, v_toks_1445_, v_x_1446_);
lean_dec(v_x_1446_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeRule___lam__0(lean_object* v_src_1448_, lean_object* v_toks_1449_){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1450_ = l_List_lengthTR___redArg(v_src_1448_);
v___x_1451_ = lean_unsigned_to_nat(1u);
v___x_1452_ = lean_nat_add(v___x_1450_, v___x_1451_);
lean_dec(v___x_1450_);
v___x_1453_ = lp_lean_x2dftml_LeanFtml_iframeScan(v_src_1448_, v_toks_1449_, v___x_1452_);
lean_dec(v___x_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iframeRule(lean_object* v_st_1455_){
_start:
{
lean_object* v___f_1456_; lean_object* v___x_1457_; 
v___f_1456_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iframeRule___closed__0));
v___x_1457_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1455_, v___f_1456_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0(lean_object* v_r_1458_, lean_object* v___y_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_){
_start:
{
if (lean_obj_tag(v_a_1460_) == 0)
{
lean_object* v___x_1462_; 
v___x_1462_ = l_List_reverse___redArg(v_a_1461_);
return v___x_1462_;
}
else
{
lean_object* v_head_1463_; lean_object* v_tail_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1477_; 
v_head_1463_ = lean_ctor_get(v_a_1460_, 0);
v_tail_1464_ = lean_ctor_get(v_a_1460_, 1);
v_isSharedCheck_1477_ = !lean_is_exclusive(v_a_1460_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1466_ = v_a_1460_;
v_isShared_1467_ = v_isSharedCheck_1477_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_tail_1464_);
lean_inc(v_head_1463_);
lean_dec(v_a_1460_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1477_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; uint8_t v___x_1471_; 
v___x_1468_ = l_List_lengthTR___redArg(v_r_1458_);
v___x_1469_ = l_List_lengthTR___redArg(v_head_1463_);
v___x_1470_ = lean_nat_sub(v___x_1468_, v___x_1469_);
lean_dec(v___x_1469_);
lean_dec(v___x_1468_);
v___x_1471_ = lean_nat_dec_le(v___x_1470_, v___y_1459_);
lean_dec(v___x_1470_);
if (v___x_1471_ == 0)
{
lean_del_object(v___x_1466_);
lean_dec(v_head_1463_);
v_a_1460_ = v_tail_1464_;
goto _start;
}
else
{
lean_object* v___x_1474_; 
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 1, v_a_1461_);
v___x_1474_ = v___x_1466_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_head_1463_);
lean_ctor_set(v_reuseFailAlloc_1476_, 1, v_a_1461_);
v___x_1474_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
v_a_1460_ = v_tail_1464_;
v_a_1461_ = v___x_1474_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0___boxed(lean_object* v_r_1478_, lean_object* v___y_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0(v_r_1478_, v___y_1479_, v_a_1480_, v_a_1481_);
lean_dec(v___y_1479_);
lean_dec(v_r_1478_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_close2SuffixesNoNl(lean_object* v_r_1483_){
_start:
{
lean_object* v___y_1485_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1489_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_commentRule_spec__1___closed__0));
lean_inc(v_r_1483_);
v___x_1490_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_1489_, v_r_1483_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v___x_1491_; 
v___x_1491_ = l_List_lengthTR___redArg(v_r_1483_);
v___y_1485_ = v___x_1491_;
goto v___jp_1484_;
}
else
{
lean_object* v_val_1492_; 
v_val_1492_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_val_1492_);
lean_dec_ref_known(v___x_1490_, 1);
v___y_1485_ = v_val_1492_;
goto v___jp_1484_;
}
v___jp_1484_:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
lean_inc(v_r_1483_);
v___x_1486_ = lp_lean_x2dftml_LeanFtml_close2Suffixes(v_r_1483_);
v___x_1487_ = lean_box(0);
v___x_1488_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_close2SuffixesNoNl_spec__0(v_r_1483_, v___y_1485_, v___x_1486_, v___x_1487_);
lean_dec(v___y_1485_);
lean_dec(v_r_1483_);
return v___x_1488_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__0(lean_object* v_g1_1493_, lean_object* v_r2_1494_, lean_object* v_x_1495_){
_start:
{
if (lean_obj_tag(v_x_1495_) == 0)
{
lean_object* v___x_1496_; 
lean_dec(v_r2_1494_);
lean_dec(v_g1_1493_);
v___x_1496_ = lean_box(0);
return v___x_1496_;
}
else
{
lean_object* v_head_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1515_; 
v_head_1497_ = lean_ctor_get(v_x_1495_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v_x_1495_);
if (v_isSharedCheck_1515_ == 0)
{
lean_object* v_unused_1516_; 
v_unused_1516_ = lean_ctor_get(v_x_1495_, 1);
lean_dec(v_unused_1516_);
v___x_1499_ = v_x_1495_;
v_isShared_1500_ = v_isSharedCheck_1515_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_head_1497_);
lean_dec(v_x_1495_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1515_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1511_; 
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v_g1_1493_);
v___x_1502_ = l_List_lengthTR___redArg(v_r2_1494_);
v___x_1503_ = l_List_lengthTR___redArg(v_head_1497_);
v___x_1504_ = lean_nat_sub(v___x_1502_, v___x_1503_);
lean_dec(v___x_1503_);
lean_dec(v___x_1502_);
v___x_1505_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r2_1494_);
v___x_1506_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r2_1494_, v_r2_1494_, v___x_1504_, v___x_1505_);
lean_dec(v_r2_1494_);
v___x_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1506_);
v___x_1508_ = lean_unsigned_to_nat(2u);
v___x_1509_ = l_List_drop___redArg(v___x_1508_, v_head_1497_);
lean_dec(v_head_1497_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set_tag(v___x_1499_, 0);
lean_ctor_set(v___x_1499_, 1, v___x_1509_);
lean_ctor_set(v___x_1499_, 0, v___x_1507_);
v___x_1511_ = v___x_1499_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1507_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v___x_1509_);
v___x_1511_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1501_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
return v___x_1513_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1(lean_object* v_r2_1517_, lean_object* v_g1_1518_, lean_object* v_x_1519_){
_start:
{
if (lean_obj_tag(v_x_1519_) == 0)
{
lean_object* v___x_1520_; 
lean_dec(v_g1_1518_);
lean_dec(v_r2_1517_);
v___x_1520_ = lean_box(0);
return v___x_1520_;
}
else
{
lean_object* v_head_1521_; lean_object* v_tail_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v_r3_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v_head_1521_ = lean_ctor_get(v_x_1519_, 0);
v_tail_1522_ = lean_ctor_get(v_x_1519_, 1);
v___x_1523_ = lean_unsigned_to_nat(1u);
v___x_1524_ = lean_nat_add(v_head_1521_, v___x_1523_);
v_r3_1525_ = l_List_drop___redArg(v___x_1524_, v_r2_1517_);
v___x_1526_ = lp_lean_x2dftml_LeanFtml_close2SuffixesNoNl(v_r3_1525_);
lean_inc(v_r2_1517_);
lean_inc(v_g1_1518_);
v___x_1527_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__0(v_g1_1518_, v_r2_1517_, v___x_1526_);
if (lean_obj_tag(v___x_1527_) == 0)
{
v_x_1519_ = v_tail_1522_;
goto _start;
}
else
{
lean_dec(v_g1_1518_);
lean_dec(v_r2_1517_);
return v___x_1527_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1___boxed(lean_object* v_r2_1529_, lean_object* v_g1_1530_, lean_object* v_x_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1(v_r2_1529_, v_g1_1530_, v_x_1531_);
lean_dec(v_x_1531_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateG1Tail(lean_object* v_r2_1533_, lean_object* v_g1_1534_){
_start:
{
lean_object* v___y_1536_; lean_object* v___x_1561_; lean_object* v_wsRun_1562_; uint8_t v___x_1563_; 
v___x_1561_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r2_1533_);
v_wsRun_1562_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r2_1533_, v_r2_1533_, v___x_1561_);
v___x_1563_ = l_List_isEmpty___redArg(v_wsRun_1562_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1564_ = l_List_lengthTR___redArg(v_wsRun_1562_);
lean_dec(v_wsRun_1562_);
v___x_1565_ = l_List_range(v___x_1564_);
v___x_1566_ = l_List_reverse___redArg(v___x_1565_);
lean_inc(v_g1_1534_);
lean_inc(v_r2_1533_);
v___x_1567_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateG1Tail_spec__1(v_r2_1533_, v_g1_1534_, v___x_1566_);
lean_dec(v___x_1566_);
if (lean_obj_tag(v___x_1567_) == 0)
{
v___y_1536_ = v___x_1567_;
goto v___jp_1535_;
}
else
{
lean_dec(v_g1_1534_);
lean_dec(v_r2_1533_);
return v___x_1567_;
}
}
else
{
lean_object* v___x_1568_; 
lean_dec(v_wsRun_1562_);
v___x_1568_ = lean_box(0);
v___y_1536_ = v___x_1568_;
goto v___jp_1535_;
}
v___jp_1535_:
{
if (lean_obj_tag(v_r2_1533_) == 1)
{
lean_object* v_head_1537_; lean_object* v_tail_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1560_; 
v_head_1537_ = lean_ctor_get(v_r2_1533_, 0);
v_tail_1538_ = lean_ctor_get(v_r2_1533_, 1);
v_isSharedCheck_1560_ = !lean_is_exclusive(v_r2_1533_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1540_ = v_r2_1533_;
v_isShared_1541_ = v_isSharedCheck_1560_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_tail_1538_);
lean_inc(v_head_1537_);
lean_dec(v_r2_1533_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1560_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; uint8_t v___x_1543_; 
v___x_1542_ = lean_unsigned_to_nat(93u);
v___x_1543_ = lean_nat_dec_eq(v_head_1537_, v___x_1542_);
lean_dec(v_head_1537_);
if (v___x_1543_ == 0)
{
lean_del_object(v___x_1540_);
lean_dec(v_tail_1538_);
lean_dec(v_g1_1534_);
return v___y_1536_;
}
else
{
if (lean_obj_tag(v_tail_1538_) == 1)
{
lean_object* v_head_1544_; lean_object* v_tail_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1559_; 
v_head_1544_ = lean_ctor_get(v_tail_1538_, 0);
v_tail_1545_ = lean_ctor_get(v_tail_1538_, 1);
v_isSharedCheck_1559_ = !lean_is_exclusive(v_tail_1538_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1547_ = v_tail_1538_;
v_isShared_1548_ = v_isSharedCheck_1559_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_tail_1545_);
lean_inc(v_head_1544_);
lean_dec(v_tail_1538_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1559_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
uint8_t v___x_1549_; 
v___x_1549_ = lean_nat_dec_eq(v_head_1544_, v___x_1542_);
lean_dec(v_head_1544_);
if (v___x_1549_ == 0)
{
lean_del_object(v___x_1547_);
lean_dec(v_tail_1545_);
lean_del_object(v___x_1540_);
lean_dec(v_g1_1534_);
return v___y_1536_;
}
else
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
lean_dec(v___y_1536_);
v___x_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1550_, 0, v_g1_1534_);
v___x_1551_ = lean_box(0);
if (v_isShared_1548_ == 0)
{
lean_ctor_set_tag(v___x_1547_, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1551_);
v___x_1553_ = v___x_1547_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v___x_1551_);
lean_ctor_set(v_reuseFailAlloc_1558_, 1, v_tail_1545_);
v___x_1553_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1555_; 
if (v_isShared_1541_ == 0)
{
lean_ctor_set_tag(v___x_1540_, 0);
lean_ctor_set(v___x_1540_, 1, v___x_1553_);
lean_ctor_set(v___x_1540_, 0, v___x_1550_);
v___x_1555_ = v___x_1540_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1557_, 1, v___x_1553_);
v___x_1555_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
return v___x_1556_;
}
}
}
}
}
else
{
lean_del_object(v___x_1540_);
lean_dec(v_tail_1538_);
lean_dec(v_g1_1534_);
return v___y_1536_;
}
}
}
}
else
{
lean_dec(v_g1_1534_);
lean_dec(v_r2_1533_);
return v___y_1536_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0(lean_object* v_l_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_){
_start:
{
if (lean_obj_tag(v_a_1570_) == 0)
{
lean_dec_ref(v_a_1571_);
lean_inc(v_l_1569_);
return v_l_1569_;
}
else
{
lean_object* v_head_1572_; lean_object* v_tail_1573_; uint8_t v___x_1574_; 
v_head_1572_ = lean_ctor_get(v_a_1570_, 0);
lean_inc(v_head_1572_);
v_tail_1573_ = lean_ctor_get(v_a_1570_, 1);
lean_inc(v_tail_1573_);
lean_dec_ref_known(v_a_1570_, 2);
v___x_1574_ = lp_lean_x2dftml_LeanFtml_isDigitByte(v_head_1572_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; 
lean_dec(v_tail_1573_);
lean_dec(v_head_1572_);
v___x_1575_ = lean_array_to_list(v_a_1571_);
return v___x_1575_;
}
else
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_array_push(v_a_1571_, v_head_1572_);
v_a_1570_ = v_tail_1573_;
v_a_1571_ = v___x_1576_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0___boxed(lean_object* v_l_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0(v_l_1578_, v_a_1579_, v_a_1580_);
lean_dec(v_l_1578_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1(lean_object* v_val_1585_, uint8_t v___x_1586_, lean_object* v_x_1587_){
_start:
{
if (lean_obj_tag(v_x_1587_) == 0)
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_box(0);
return v___x_1588_;
}
else
{
lean_object* v_head_1589_; lean_object* v_tail_1590_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1594_; uint8_t v_fst_1599_; lean_object* v_snd_1600_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v_r1_1611_; 
v_head_1589_ = lean_ctor_get(v_x_1587_, 0);
v_tail_1590_ = lean_ctor_get(v_x_1587_, 1);
v___x_1609_ = lean_unsigned_to_nat(1u);
v___x_1610_ = lean_nat_add(v_head_1589_, v___x_1609_);
v_r1_1611_ = l_List_drop___redArg(v___x_1610_, v_val_1585_);
if (lean_obj_tag(v_r1_1611_) == 1)
{
lean_object* v_head_1612_; lean_object* v_tail_1613_; lean_object* v___x_1614_; uint8_t v___x_1615_; 
v_head_1612_ = lean_ctor_get(v_r1_1611_, 0);
v_tail_1613_ = lean_ctor_get(v_r1_1611_, 1);
v___x_1614_ = lean_unsigned_to_nat(45u);
v___x_1615_ = lean_nat_dec_eq(v_head_1612_, v___x_1614_);
if (v___x_1615_ == 0)
{
v_fst_1599_ = v___x_1586_;
v_snd_1600_ = v_r1_1611_;
goto v___jp_1598_;
}
else
{
lean_inc(v_tail_1613_);
lean_dec_ref_known(v_r1_1611_, 2);
v_fst_1599_ = v___x_1615_;
v_snd_1600_ = v_tail_1613_;
goto v___jp_1598_;
}
}
else
{
v_fst_1599_ = v___x_1586_;
v_snd_1600_ = v_r1_1611_;
goto v___jp_1598_;
}
v___jp_1591_:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
lean_inc(v___y_1594_);
v___x_1595_ = l_List_appendTR___redArg(v___y_1594_, v___y_1593_);
v___x_1596_ = lp_lean_x2dftml_LeanFtml_dateG1Tail(v___y_1592_, v___x_1595_);
if (lean_obj_tag(v___x_1596_) == 0)
{
v_x_1587_ = v_tail_1590_;
goto _start;
}
else
{
return v___x_1596_;
}
}
v___jp_1598_:
{
lean_object* v___x_1601_; lean_object* v_digs_1602_; uint8_t v___x_1603_; 
v___x_1601_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_snd_1600_);
v_digs_1602_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_dateMatch1_spec__0(v_snd_1600_, v_snd_1600_, v___x_1601_);
v___x_1603_ = l_List_isEmpty___redArg(v_digs_1602_);
if (v___x_1603_ == 0)
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = l_List_lengthTR___redArg(v_digs_1602_);
v___x_1605_ = l_List_drop___redArg(v___x_1604_, v_snd_1600_);
lean_dec(v_snd_1600_);
if (v_fst_1599_ == 0)
{
lean_object* v___x_1606_; 
v___x_1606_ = lean_box(0);
v___y_1592_ = v___x_1605_;
v___y_1593_ = v_digs_1602_;
v___y_1594_ = v___x_1606_;
goto v___jp_1591_;
}
else
{
lean_object* v___x_1607_; 
v___x_1607_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1___closed__0));
v___y_1592_ = v___x_1605_;
v___y_1593_ = v_digs_1602_;
v___y_1594_ = v___x_1607_;
goto v___jp_1591_;
}
}
else
{
lean_dec(v_digs_1602_);
lean_dec(v_snd_1600_);
v_x_1587_ = v_tail_1590_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1___boxed(lean_object* v_val_1616_, lean_object* v___x_1617_, lean_object* v_x_1618_){
_start:
{
uint8_t v___x_343__boxed_1619_; lean_object* v_res_1620_; 
v___x_343__boxed_1619_ = lean_unbox(v___x_1617_);
v_res_1620_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1(v_val_1616_, v___x_343__boxed_1619_, v_x_1618_);
lean_dec(v_x_1618_);
lean_dec(v_val_1616_);
return v_res_1620_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1(void){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateMatch1___closed__0));
v___x_1623_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch1(lean_object* v_src_1624_){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1, &lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1);
v___x_1626_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1625_, v_src_1624_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v___x_1627_; 
v___x_1627_ = lean_box(0);
return v___x_1627_;
}
else
{
lean_object* v_val_1628_; lean_object* v___x_1629_; lean_object* v_wsRun_1630_; uint8_t v___x_1631_; 
v_val_1628_ = lean_ctor_get(v___x_1626_, 0);
lean_inc_n(v_val_1628_, 2);
lean_dec_ref_known(v___x_1626_, 1);
v___x_1629_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
v_wsRun_1630_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_1628_, v_val_1628_, v___x_1629_);
v___x_1631_ = l_List_isEmpty___redArg(v_wsRun_1630_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1632_ = l_List_lengthTR___redArg(v_wsRun_1630_);
lean_dec(v_wsRun_1630_);
v___x_1633_ = l_List_range(v___x_1632_);
v___x_1634_ = l_List_reverse___redArg(v___x_1633_);
v___x_1635_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch1_spec__1(v_val_1628_, v___x_1631_, v___x_1634_);
lean_dec(v___x_1634_);
lean_dec(v_val_1628_);
return v___x_1635_;
}
else
{
lean_object* v___x_1636_; 
lean_dec(v_wsRun_1630_);
lean_dec(v_val_1628_);
v___x_1636_ = lean_box(0);
return v___x_1636_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__0(lean_object* v_r2_1637_, lean_object* v_x_1638_){
_start:
{
if (lean_obj_tag(v_x_1638_) == 0)
{
lean_object* v___x_1639_; 
lean_dec(v_r2_1637_);
v___x_1639_ = lean_box(0);
return v___x_1639_;
}
else
{
lean_object* v_head_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1658_; 
v_head_1640_ = lean_ctor_get(v_x_1638_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v_x_1638_);
if (v_isSharedCheck_1658_ == 0)
{
lean_object* v_unused_1659_; 
v_unused_1659_ = lean_ctor_get(v_x_1638_, 1);
lean_dec(v_unused_1659_);
v___x_1642_ = v_x_1638_;
v_isShared_1643_ = v_isSharedCheck_1658_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_head_1640_);
lean_dec(v_x_1638_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1658_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1654_; 
v___x_1644_ = l_List_lengthTR___redArg(v_r2_1637_);
v___x_1645_ = l_List_lengthTR___redArg(v_head_1640_);
v___x_1646_ = lean_nat_sub(v___x_1644_, v___x_1645_);
lean_dec(v___x_1645_);
lean_dec(v___x_1644_);
v___x_1647_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r2_1637_);
v___x_1648_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r2_1637_, v_r2_1637_, v___x_1646_, v___x_1647_);
lean_dec(v_r2_1637_);
v___x_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1648_);
v___x_1650_ = lean_box(0);
v___x_1651_ = lean_unsigned_to_nat(2u);
v___x_1652_ = l_List_drop___redArg(v___x_1651_, v_head_1640_);
lean_dec(v_head_1640_);
if (v_isShared_1643_ == 0)
{
lean_ctor_set_tag(v___x_1642_, 0);
lean_ctor_set(v___x_1642_, 1, v___x_1652_);
lean_ctor_set(v___x_1642_, 0, v___x_1650_);
v___x_1654_ = v___x_1642_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v___x_1650_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v___x_1652_);
v___x_1654_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1649_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
return v___x_1656_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1(lean_object* v_r1_1660_, lean_object* v_x_1661_){
_start:
{
if (lean_obj_tag(v_x_1661_) == 0)
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_box(0);
return v___x_1662_;
}
else
{
lean_object* v_head_1663_; lean_object* v_tail_1664_; lean_object* v_r2_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_head_1663_ = lean_ctor_get(v_x_1661_, 0);
lean_inc(v_head_1663_);
v_tail_1664_ = lean_ctor_get(v_x_1661_, 1);
lean_inc(v_tail_1664_);
lean_dec_ref_known(v_x_1661_, 2);
v_r2_1665_ = l_List_drop___redArg(v_head_1663_, v_r1_1660_);
lean_inc(v_r2_1665_);
v___x_1666_ = lp_lean_x2dftml_LeanFtml_close2SuffixesNoNl(v_r2_1665_);
v___x_1667_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__0(v_r2_1665_, v___x_1666_);
if (lean_obj_tag(v___x_1667_) == 0)
{
v_x_1661_ = v_tail_1664_;
goto _start;
}
else
{
lean_dec(v_tail_1664_);
return v___x_1667_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1___boxed(lean_object* v_r1_1669_, lean_object* v_x_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1(v_r1_1669_, v_x_1670_);
lean_dec(v_r1_1669_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2(lean_object* v_val_1675_, uint8_t v___x_1676_, lean_object* v_x_1677_){
_start:
{
if (lean_obj_tag(v_x_1677_) == 0)
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_box(0);
return v___x_1678_;
}
else
{
lean_object* v_head_1679_; lean_object* v_tail_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v_r1_1683_; uint8_t v___y_1694_; 
v_head_1679_ = lean_ctor_get(v_x_1677_, 0);
v_tail_1680_ = lean_ctor_get(v_x_1677_, 1);
v___x_1681_ = lean_unsigned_to_nat(1u);
v___x_1682_ = lean_nat_add(v_head_1679_, v___x_1681_);
v_r1_1683_ = l_List_drop___redArg(v___x_1682_, v_val_1675_);
if (lean_obj_tag(v_r1_1683_) == 0)
{
v___y_1694_ = v___x_1676_;
goto v___jp_1693_;
}
else
{
lean_object* v_head_1701_; uint8_t v___x_1702_; 
v_head_1701_ = lean_ctor_get(v_r1_1683_, 0);
v___x_1702_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1701_);
v___y_1694_ = v___x_1702_;
goto v___jp_1693_;
}
v___jp_1684_:
{
lean_object* v___x_1685_; lean_object* v_wsRun2_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1685_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r1_1683_);
v_wsRun2_1686_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r1_1683_, v_r1_1683_, v___x_1685_);
v___x_1687_ = l_List_lengthTR___redArg(v_wsRun2_1686_);
lean_dec(v_wsRun2_1686_);
v___x_1688_ = lean_nat_add(v___x_1687_, v___x_1681_);
lean_dec(v___x_1687_);
v___x_1689_ = l_List_range(v___x_1688_);
v___x_1690_ = l_List_reverse___redArg(v___x_1689_);
v___x_1691_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__1(v_r1_1683_, v___x_1690_);
lean_dec(v_r1_1683_);
if (lean_obj_tag(v___x_1691_) == 0)
{
v_x_1677_ = v_tail_1680_;
goto _start;
}
else
{
return v___x_1691_;
}
}
v___jp_1693_:
{
if (v___y_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; 
v___x_1695_ = lean_unsigned_to_nat(2u);
v___x_1696_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r1_1683_);
v___x_1697_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r1_1683_, v_r1_1683_, v___x_1695_, v___x_1696_);
v___x_1698_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2___closed__0));
v___x_1699_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1697_, v___x_1698_);
lean_dec(v___x_1697_);
if (v___x_1699_ == 0)
{
lean_dec(v_r1_1683_);
v_x_1677_ = v_tail_1680_;
goto _start;
}
else
{
goto v___jp_1684_;
}
}
else
{
goto v___jp_1684_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2___boxed(lean_object* v_val_1703_, lean_object* v___x_1704_, lean_object* v_x_1705_){
_start:
{
uint8_t v___x_604__boxed_1706_; lean_object* v_res_1707_; 
v___x_604__boxed_1706_ = lean_unbox(v___x_1704_);
v_res_1707_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2(v_val_1703_, v___x_604__boxed_1706_, v_x_1705_);
lean_dec(v_x_1705_);
lean_dec(v_val_1703_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch2(lean_object* v_src_1708_){
_start:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1, &lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1);
v___x_1710_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1709_, v_src_1708_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v___x_1711_; 
v___x_1711_ = lean_box(0);
return v___x_1711_;
}
else
{
lean_object* v_val_1712_; lean_object* v___x_1713_; lean_object* v_wsRun_1714_; uint8_t v___x_1715_; 
v_val_1712_ = lean_ctor_get(v___x_1710_, 0);
lean_inc_n(v_val_1712_, 2);
lean_dec_ref_known(v___x_1710_, 1);
v___x_1713_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
v_wsRun_1714_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_1712_, v_val_1712_, v___x_1713_);
v___x_1715_ = l_List_isEmpty___redArg(v_wsRun_1714_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1716_ = l_List_lengthTR___redArg(v_wsRun_1714_);
lean_dec(v_wsRun_1714_);
v___x_1717_ = l_List_range(v___x_1716_);
v___x_1718_ = l_List_reverse___redArg(v___x_1717_);
v___x_1719_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_dateMatch2_spec__2(v_val_1712_, v___x_1715_, v___x_1718_);
lean_dec(v___x_1718_);
lean_dec(v_val_1712_);
return v___x_1719_;
}
else
{
lean_object* v___x_1720_; 
lean_dec(v_wsRun_1714_);
lean_dec(v_val_1712_);
v___x_1720_ = lean_box(0);
return v___x_1720_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateMatch3(lean_object* v_src_1721_){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1, &lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dateMatch1___closed__1);
v___x_1723_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1722_, v_src_1721_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v___x_1724_; 
v___x_1724_ = lean_box(0);
return v___x_1724_;
}
else
{
lean_object* v_val_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1764_; 
v_val_1725_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1727_ = v___x_1723_;
v_isShared_1728_ = v_isSharedCheck_1764_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_val_1725_);
lean_dec(v___x_1723_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1764_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1729_; lean_object* v_wsRun_1730_; uint8_t v___x_1731_; 
v___x_1729_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_val_1725_);
v_wsRun_1730_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_1725_, v_val_1725_, v___x_1729_);
v___x_1731_ = l_List_isEmpty___redArg(v_wsRun_1730_);
if (v___x_1731_ == 0)
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = l_List_lengthTR___redArg(v_wsRun_1730_);
lean_dec(v_wsRun_1730_);
v___x_1733_ = l_List_drop___redArg(v___x_1732_, v_val_1725_);
lean_dec(v_val_1725_);
if (lean_obj_tag(v___x_1733_) == 1)
{
lean_object* v_head_1734_; lean_object* v_tail_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1761_; 
v_head_1734_ = lean_ctor_get(v___x_1733_, 0);
v_tail_1735_ = lean_ctor_get(v___x_1733_, 1);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1737_ = v___x_1733_;
v_isShared_1738_ = v_isSharedCheck_1761_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_tail_1735_);
lean_inc(v_head_1734_);
lean_dec(v___x_1733_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1761_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1739_; uint8_t v___x_1740_; 
v___x_1739_ = lean_unsigned_to_nat(93u);
v___x_1740_ = lean_nat_dec_eq(v_head_1734_, v___x_1739_);
lean_dec(v_head_1734_);
if (v___x_1740_ == 0)
{
lean_object* v___x_1741_; 
lean_del_object(v___x_1737_);
lean_dec(v_tail_1735_);
lean_del_object(v___x_1727_);
v___x_1741_ = lean_box(0);
return v___x_1741_;
}
else
{
if (lean_obj_tag(v_tail_1735_) == 1)
{
lean_object* v_head_1742_; lean_object* v_tail_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1759_; 
v_head_1742_ = lean_ctor_get(v_tail_1735_, 0);
v_tail_1743_ = lean_ctor_get(v_tail_1735_, 1);
v_isSharedCheck_1759_ = !lean_is_exclusive(v_tail_1735_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1745_ = v_tail_1735_;
v_isShared_1746_ = v_isSharedCheck_1759_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_tail_1743_);
lean_inc(v_head_1742_);
lean_dec(v_tail_1735_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1759_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
uint8_t v___x_1747_; 
v___x_1747_ = lean_nat_dec_eq(v_head_1742_, v___x_1739_);
lean_dec(v_head_1742_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; 
lean_del_object(v___x_1745_);
lean_dec(v_tail_1743_);
lean_del_object(v___x_1737_);
lean_del_object(v___x_1727_);
v___x_1748_ = lean_box(0);
return v___x_1748_;
}
else
{
lean_object* v___x_1749_; lean_object* v___x_1751_; 
v___x_1749_ = lean_box(0);
if (v_isShared_1746_ == 0)
{
lean_ctor_set_tag(v___x_1745_, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1749_);
v___x_1751_ = v___x_1745_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1749_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v_tail_1743_);
v___x_1751_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
lean_object* v___x_1753_; 
if (v_isShared_1738_ == 0)
{
lean_ctor_set_tag(v___x_1737_, 0);
lean_ctor_set(v___x_1737_, 1, v___x_1751_);
lean_ctor_set(v___x_1737_, 0, v___x_1749_);
v___x_1753_ = v___x_1737_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v___x_1749_);
lean_ctor_set(v_reuseFailAlloc_1757_, 1, v___x_1751_);
v___x_1753_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
lean_object* v___x_1755_; 
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 0, v___x_1753_);
v___x_1755_ = v___x_1727_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v___x_1753_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
}
}
else
{
lean_object* v___x_1760_; 
lean_del_object(v___x_1737_);
lean_dec(v_tail_1735_);
lean_del_object(v___x_1727_);
v___x_1760_ = lean_box(0);
return v___x_1760_;
}
}
}
}
else
{
lean_object* v___x_1762_; 
lean_dec(v___x_1733_);
lean_del_object(v___x_1727_);
v___x_1762_ = lean_box(0);
return v___x_1762_;
}
}
else
{
lean_object* v___x_1763_; 
lean_dec(v_wsRun_1730_);
lean_del_object(v___x_1727_);
lean_dec(v_val_1725_);
v___x_1763_ = lean_box(0);
return v___x_1763_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0(lean_object* v_x_1765_){
_start:
{
if (lean_obj_tag(v_x_1765_) == 0)
{
uint8_t v___x_1766_; 
v___x_1766_ = 1;
return v___x_1766_;
}
else
{
lean_object* v_head_1767_; lean_object* v_tail_1768_; uint8_t v___x_1769_; 
v_head_1767_ = lean_ctor_get(v_x_1765_, 0);
v_tail_1768_ = lean_ctor_get(v_x_1765_, 1);
v___x_1769_ = lp_lean_x2dftml_LeanFtml_isDigitByte(v_head_1767_);
if (v___x_1769_ == 0)
{
return v___x_1769_;
}
else
{
v_x_1765_ = v_tail_1768_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0___boxed(lean_object* v_x_1771_){
_start:
{
uint8_t v_res_1772_; lean_object* v_r_1773_; 
v_res_1772_ = lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0(v_x_1771_);
lean_dec(v_x_1771_);
v_r_1773_ = lean_box(v_res_1772_);
return v_r_1773_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_dateNumeric(lean_object* v_g1_1774_){
_start:
{
lean_object* v_ds_1776_; 
if (lean_obj_tag(v_g1_1774_) == 1)
{
lean_object* v_head_1780_; lean_object* v_tail_1781_; lean_object* v___x_1782_; uint8_t v___x_1783_; 
v_head_1780_ = lean_ctor_get(v_g1_1774_, 0);
v_tail_1781_ = lean_ctor_get(v_g1_1774_, 1);
v___x_1782_ = lean_unsigned_to_nat(45u);
v___x_1783_ = lean_nat_dec_eq(v_head_1780_, v___x_1782_);
if (v___x_1783_ == 0)
{
v_ds_1776_ = v_g1_1774_;
goto v___jp_1775_;
}
else
{
v_ds_1776_ = v_tail_1781_;
goto v___jp_1775_;
}
}
else
{
v_ds_1776_ = v_g1_1774_;
goto v___jp_1775_;
}
v___jp_1775_:
{
uint8_t v___x_1777_; 
v___x_1777_ = l_List_isEmpty___redArg(v_ds_1776_);
if (v___x_1777_ == 0)
{
uint8_t v___x_1778_; 
v___x_1778_ = lp_lean_x2dftml_List_all___at___00LeanFtml_dateNumeric_spec__0(v_ds_1776_);
return v___x_1778_;
}
else
{
uint8_t v___x_1779_; 
v___x_1779_ = 0;
return v___x_1779_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateNumeric___boxed(lean_object* v_g1_1784_){
_start:
{
uint8_t v_res_1785_; lean_object* v_r_1786_; 
v_res_1785_ = lp_lean_x2dftml_LeanFtml_dateNumeric(v_g1_1784_);
lean_dec(v_g1_1784_);
v_r_1786_ = lean_box(v_res_1785_);
return v_r_1786_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_dateProcess_spec__0(lean_object* v_x_1787_, lean_object* v_x_1788_){
_start:
{
if (lean_obj_tag(v_x_1788_) == 0)
{
return v_x_1787_;
}
else
{
lean_object* v_head_1789_; lean_object* v_tail_1790_; lean_object* v_fst_1791_; lean_object* v_snd_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v_head_1789_ = lean_ctor_get(v_x_1788_, 0);
lean_inc(v_head_1789_);
v_tail_1790_ = lean_ctor_get(v_x_1788_, 1);
lean_inc(v_tail_1790_);
lean_dec_ref_known(v_x_1788_, 2);
v_fst_1791_ = lean_ctor_get(v_head_1789_, 0);
lean_inc(v_fst_1791_);
v_snd_1792_ = lean_ctor_get(v_head_1789_, 1);
lean_inc(v_snd_1792_);
lean_dec(v_head_1789_);
v___x_1793_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_fst_1791_);
v___x_1794_ = lp_lean_x2dftml_LeanFtml_textVal(v_snd_1792_);
v___x_1795_ = lp_lean_x2dftml_LeanFtml_omSet(v_x_1787_, v___x_1793_, v___x_1794_);
v_x_1787_ = v___x_1795_;
v_x_1788_ = v_tail_1790_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dateProcess___closed__1(void){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateProcess___closed__0));
v___x_1799_ = l_String_toListImpl(v___x_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateProcess(lean_object* v_g1_1801_, lean_object* v_g2_1802_, lean_object* v_toks_1803_){
_start:
{
lean_object* v___y_1805_; lean_object* v___y_1806_; 
if (lean_obj_tag(v_g1_1801_) == 0)
{
lean_dec(v_g2_1802_);
goto v___jp_1821_;
}
else
{
lean_object* v_val_1824_; uint8_t v___x_1825_; 
v_val_1824_ = lean_ctor_get(v_g1_1801_, 0);
v___x_1825_ = lp_lean_x2dftml_LeanFtml_dateNumeric(v_val_1824_);
if (v___x_1825_ == 0)
{
lean_dec(v_g2_1802_);
goto v___jp_1821_;
}
else
{
lean_inc(v_val_1824_);
lean_dec_ref_known(v_g1_1801_, 1);
if (lean_obj_tag(v_g2_1802_) == 0)
{
lean_object* v___x_1826_; 
v___x_1826_ = lean_box(0);
v___y_1805_ = v_val_1824_;
v___y_1806_ = v___x_1826_;
goto v___jp_1804_;
}
else
{
lean_object* v_val_1827_; 
v_val_1827_ = lean_ctor_get(v_g2_1802_, 0);
lean_inc(v_val_1827_);
lean_dec_ref_known(v_g2_1802_, 1);
v___y_1805_ = v_val_1824_;
v___y_1806_ = v_val_1827_;
goto v___jp_1804_;
}
}
}
v___jp_1804_:
{
lean_object* v_attrs_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v_opts_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v_attrs_1807_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_1806_);
lean_dec(v___y_1806_);
v___x_1808_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dateProcess___closed__1, &lp_lean_x2dftml_LeanFtml_dateProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dateProcess___closed__1);
v___x_1809_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_1805_);
v___x_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1808_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
v___x_1811_ = lean_box(0);
v___x_1812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1810_);
lean_ctor_set(v___x_1812_, 1, v___x_1811_);
v_opts_1813_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_dateProcess_spec__0(v___x_1812_, v_attrs_1807_);
v___x_1814_ = l_List_lengthTR___redArg(v_toks_1803_);
v___x_1815_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1814_);
v___x_1816_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateProcess___closed__2));
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1816_);
lean_ctor_set(v___x_1817_, 1, v_opts_1813_);
v___x_1818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
lean_ctor_set(v___x_1818_, 1, v___x_1811_);
v___x_1819_ = l_List_appendTR___redArg(v_toks_1803_, v___x_1818_);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1815_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
return v___x_1820_;
}
v___jp_1821_:
{
lean_object* v___x_1822_; 
v___x_1822_ = lean_box(0);
if (lean_obj_tag(v_g1_1801_) == 0)
{
v___y_1805_ = v___x_1822_;
v___y_1806_ = v___x_1822_;
goto v___jp_1804_;
}
else
{
lean_object* v_val_1823_; 
v_val_1823_ = lean_ctor_get(v_g1_1801_, 0);
lean_inc(v_val_1823_);
lean_dec_ref_known(v_g1_1801_, 1);
v___y_1805_ = v___x_1822_;
v___y_1806_ = v_val_1823_;
goto v___jp_1804_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateScan(lean_object* v_matcher_1828_, lean_object* v_src_1829_, lean_object* v_toks_1830_, lean_object* v_x_1831_){
_start:
{
lean_object* v_zero_1835_; uint8_t v_isZero_1836_; 
v_zero_1835_ = lean_unsigned_to_nat(0u);
v_isZero_1836_ = lean_nat_dec_eq(v_x_1831_, v_zero_1835_);
if (v_isZero_1836_ == 1)
{
lean_dec(v_src_1829_);
lean_dec_ref(v_matcher_1828_);
goto v___jp_1832_;
}
else
{
if (lean_obj_tag(v_src_1829_) == 0)
{
lean_dec_ref(v_matcher_1828_);
goto v___jp_1832_;
}
else
{
lean_object* v_head_1837_; lean_object* v_tail_1838_; lean_object* v_one_1839_; lean_object* v_n_1840_; lean_object* v___x_1841_; 
v_head_1837_ = lean_ctor_get(v_src_1829_, 0);
lean_inc(v_head_1837_);
v_tail_1838_ = lean_ctor_get(v_src_1829_, 1);
lean_inc(v_tail_1838_);
v_one_1839_ = lean_unsigned_to_nat(1u);
v_n_1840_ = lean_nat_sub(v_x_1831_, v_one_1839_);
lean_inc_ref(v_matcher_1828_);
v___x_1841_ = lean_apply_1(v_matcher_1828_, v_src_1829_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v___x_1842_; lean_object* v_fst_1843_; lean_object* v_snd_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1852_; 
v___x_1842_ = lp_lean_x2dftml_LeanFtml_dateScan(v_matcher_1828_, v_tail_1838_, v_toks_1830_, v_n_1840_);
lean_dec(v_n_1840_);
v_fst_1843_ = lean_ctor_get(v___x_1842_, 0);
v_snd_1844_ = lean_ctor_get(v___x_1842_, 1);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1846_ = v___x_1842_;
v_isShared_1847_ = v_isSharedCheck_1852_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_snd_1844_);
lean_inc(v_fst_1843_);
lean_dec(v___x_1842_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1852_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1848_; lean_object* v___x_1850_; 
v___x_1848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1848_, 0, v_head_1837_);
lean_ctor_set(v___x_1848_, 1, v_fst_1843_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 0, v___x_1848_);
v___x_1850_ = v___x_1846_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1848_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_snd_1844_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
else
{
lean_object* v_val_1853_; lean_object* v_snd_1854_; lean_object* v_fst_1855_; lean_object* v_fst_1856_; lean_object* v_snd_1857_; lean_object* v___x_1858_; lean_object* v_fst_1859_; lean_object* v_snd_1860_; lean_object* v___x_1861_; lean_object* v_fst_1862_; lean_object* v_snd_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1871_; 
lean_dec(v_tail_1838_);
lean_dec(v_head_1837_);
v_val_1853_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_val_1853_);
lean_dec_ref_known(v___x_1841_, 1);
v_snd_1854_ = lean_ctor_get(v_val_1853_, 1);
lean_inc(v_snd_1854_);
v_fst_1855_ = lean_ctor_get(v_val_1853_, 0);
lean_inc(v_fst_1855_);
lean_dec(v_val_1853_);
v_fst_1856_ = lean_ctor_get(v_snd_1854_, 0);
lean_inc(v_fst_1856_);
v_snd_1857_ = lean_ctor_get(v_snd_1854_, 1);
lean_inc(v_snd_1857_);
lean_dec(v_snd_1854_);
v___x_1858_ = lp_lean_x2dftml_LeanFtml_dateProcess(v_fst_1855_, v_fst_1856_, v_toks_1830_);
v_fst_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_fst_1859_);
v_snd_1860_ = lean_ctor_get(v___x_1858_, 1);
lean_inc(v_snd_1860_);
lean_dec_ref(v___x_1858_);
v___x_1861_ = lp_lean_x2dftml_LeanFtml_dateScan(v_matcher_1828_, v_snd_1857_, v_snd_1860_, v_n_1840_);
lean_dec(v_n_1840_);
v_fst_1862_ = lean_ctor_get(v___x_1861_, 0);
v_snd_1863_ = lean_ctor_get(v___x_1861_, 1);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1865_ = v___x_1861_;
v_isShared_1866_ = v_isSharedCheck_1871_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_snd_1863_);
lean_inc(v_fst_1862_);
lean_dec(v___x_1861_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1871_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1867_; lean_object* v___x_1869_; 
v___x_1867_ = l_List_appendTR___redArg(v_fst_1859_, v_fst_1862_);
if (v_isShared_1866_ == 0)
{
lean_ctor_set(v___x_1865_, 0, v___x_1867_);
v___x_1869_ = v___x_1865_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1867_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_snd_1863_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
}
v___jp_1832_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = lean_box(0);
v___x_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1833_);
lean_ctor_set(v___x_1834_, 1, v_toks_1830_);
return v___x_1834_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateScan___boxed(lean_object* v_matcher_1872_, lean_object* v_src_1873_, lean_object* v_toks_1874_, lean_object* v_x_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = lp_lean_x2dftml_LeanFtml_dateScan(v_matcher_1872_, v_src_1873_, v_toks_1874_, v_x_1875_);
lean_dec(v_x_1875_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateRule___lam__0(lean_object* v_src_1880_, lean_object* v_toks_1881_){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v_fst_1887_; lean_object* v_snd_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v_fst_1893_; lean_object* v_snd_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1882_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__0));
v___x_1883_ = l_List_lengthTR___redArg(v_src_1880_);
v___x_1884_ = lean_unsigned_to_nat(1u);
v___x_1885_ = lean_nat_add(v___x_1883_, v___x_1884_);
lean_dec(v___x_1883_);
v___x_1886_ = lp_lean_x2dftml_LeanFtml_dateScan(v___x_1882_, v_src_1880_, v_toks_1881_, v___x_1885_);
lean_dec(v___x_1885_);
v_fst_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc(v_fst_1887_);
v_snd_1888_ = lean_ctor_get(v___x_1886_, 1);
lean_inc(v_snd_1888_);
lean_dec_ref(v___x_1886_);
v___x_1889_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__1));
v___x_1890_ = l_List_lengthTR___redArg(v_fst_1887_);
v___x_1891_ = lean_nat_add(v___x_1890_, v___x_1884_);
lean_dec(v___x_1890_);
v___x_1892_ = lp_lean_x2dftml_LeanFtml_dateScan(v___x_1889_, v_fst_1887_, v_snd_1888_, v___x_1891_);
lean_dec(v___x_1891_);
v_fst_1893_ = lean_ctor_get(v___x_1892_, 0);
lean_inc(v_fst_1893_);
v_snd_1894_ = lean_ctor_get(v___x_1892_, 1);
lean_inc(v_snd_1894_);
lean_dec_ref(v___x_1892_);
v___x_1895_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateRule___lam__0___closed__2));
v___x_1896_ = l_List_lengthTR___redArg(v_fst_1893_);
v___x_1897_ = lean_nat_add(v___x_1896_, v___x_1884_);
lean_dec(v___x_1896_);
v___x_1898_ = lp_lean_x2dftml_LeanFtml_dateScan(v___x_1895_, v_fst_1893_, v_snd_1894_, v___x_1897_);
lean_dec(v___x_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dateRule(lean_object* v_st_1900_){
_start:
{
lean_object* v___f_1901_; lean_object* v___x_1902_; 
v___f_1901_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dateRule___closed__0));
v___x_1902_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1900_, v___f_1901_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1(lean_object* v_head_1903_, uint8_t v___x_1904_, lean_object* v_l_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_){
_start:
{
if (lean_obj_tag(v_a_1906_) == 0)
{
lean_dec_ref(v_a_1907_);
lean_inc(v_l_1905_);
return v_l_1905_;
}
else
{
lean_object* v_head_1908_; lean_object* v_tail_1909_; uint8_t v___y_1911_; lean_object* v___x_1915_; uint8_t v___x_1916_; 
v_head_1908_ = lean_ctor_get(v_a_1906_, 0);
lean_inc(v_head_1908_);
v_tail_1909_ = lean_ctor_get(v_a_1906_, 1);
lean_inc(v_tail_1909_);
lean_dec_ref_known(v_a_1906_, 2);
v___x_1915_ = lean_unsigned_to_nat(34u);
v___x_1916_ = lean_nat_dec_eq(v_head_1908_, v___x_1915_);
if (v___x_1916_ == 0)
{
uint8_t v___x_1917_; 
v___x_1917_ = lean_nat_dec_eq(v_head_1903_, v___x_1915_);
v___y_1911_ = v___x_1917_;
goto v___jp_1910_;
}
else
{
v___y_1911_ = v___x_1904_;
goto v___jp_1910_;
}
v___jp_1910_:
{
if (v___y_1911_ == 0)
{
lean_object* v___x_1912_; 
lean_dec(v_tail_1909_);
lean_dec(v_head_1908_);
v___x_1912_ = lean_array_to_list(v_a_1907_);
return v___x_1912_;
}
else
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_array_push(v_a_1907_, v_head_1908_);
v_a_1906_ = v_tail_1909_;
v_a_1907_ = v___x_1913_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1___boxed(lean_object* v_head_1918_, lean_object* v___x_1919_, lean_object* v_l_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_){
_start:
{
uint8_t v___x_379__boxed_1923_; lean_object* v_res_1924_; 
v___x_379__boxed_1923_ = lean_unbox(v___x_1919_);
v_res_1924_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1(v_head_1918_, v___x_379__boxed_1923_, v_l_1920_, v_a_1921_, v_a_1922_);
lean_dec(v_l_1920_);
lean_dec(v_head_1918_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0(lean_object* v_l_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_){
_start:
{
if (lean_obj_tag(v_a_1926_) == 0)
{
lean_dec_ref(v_a_1927_);
lean_inc(v_l_1925_);
return v_l_1925_;
}
else
{
lean_object* v_head_1928_; lean_object* v_tail_1929_; uint8_t v___x_1930_; 
v_head_1928_ = lean_ctor_get(v_a_1926_, 0);
lean_inc(v_head_1928_);
v_tail_1929_ = lean_ctor_get(v_a_1926_, 1);
lean_inc(v_tail_1929_);
lean_dec_ref_known(v_a_1926_, 2);
v___x_1930_ = lp_lean_x2dftml_LeanFtml_isKeyByte(v_head_1928_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; 
lean_dec(v_tail_1929_);
lean_dec(v_head_1928_);
v___x_1931_ = lean_array_to_list(v_a_1927_);
return v___x_1931_;
}
else
{
lean_object* v___x_1932_; 
v___x_1932_ = lean_array_push(v_a_1927_, v_head_1928_);
v_a_1926_ = v_tail_1929_;
v_a_1927_ = v___x_1932_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0___boxed(lean_object* v_l_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0(v_l_1934_, v_a_1935_, v_a_1936_);
lean_dec(v_l_1934_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrChunks_go(lean_object* v_a_1938_, lean_object* v_a_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_){
_start:
{
lean_object* v_zero_1942_; uint8_t v_isZero_1943_; 
v_zero_1942_ = lean_unsigned_to_nat(0u);
v_isZero_1943_ = lean_nat_dec_eq(v_a_1941_, v_zero_1942_);
if (v_isZero_1943_ == 1)
{
lean_object* v___x_1944_; 
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1944_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1944_;
}
else
{
lean_object* v___x_1945_; lean_object* v_wsRun_1946_; uint8_t v___x_1947_; 
v___x_1945_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_a_1938_);
v_wsRun_1946_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_a_1938_, v_a_1938_, v___x_1945_);
v___x_1947_ = l_List_isEmpty___redArg(v_wsRun_1946_);
if (v___x_1947_ == 0)
{
lean_object* v___x_1948_; lean_object* v_after1_1949_; lean_object* v_keyRun_1950_; uint8_t v___x_1951_; 
v___x_1948_ = l_List_lengthTR___redArg(v_wsRun_1946_);
lean_dec(v_wsRun_1946_);
v_after1_1949_ = l_List_drop___redArg(v___x_1948_, v_a_1938_);
lean_inc(v_after1_1949_);
v_keyRun_1950_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__0(v_after1_1949_, v_after1_1949_, v___x_1945_);
v___x_1951_ = l_List_isEmpty___redArg(v_keyRun_1950_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; lean_object* v_after2_1953_; 
v___x_1952_ = l_List_lengthTR___redArg(v_keyRun_1950_);
lean_dec(v_keyRun_1950_);
v_after2_1953_ = l_List_drop___redArg(v___x_1952_, v_after1_1949_);
lean_dec(v_after1_1949_);
if (lean_obj_tag(v_after2_1953_) == 1)
{
lean_object* v_head_1954_; lean_object* v_tail_1955_; lean_object* v___x_1956_; uint8_t v___x_1957_; 
v_head_1954_ = lean_ctor_get(v_after2_1953_, 0);
lean_inc(v_head_1954_);
v_tail_1955_ = lean_ctor_get(v_after2_1953_, 1);
lean_inc(v_tail_1955_);
lean_dec_ref_known(v_after2_1953_, 2);
v___x_1956_ = lean_unsigned_to_nat(61u);
v___x_1957_ = lean_nat_dec_eq(v_head_1954_, v___x_1956_);
lean_dec(v_head_1954_);
if (v___x_1957_ == 0)
{
lean_object* v___x_1958_; 
lean_dec(v_tail_1955_);
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1958_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1958_;
}
else
{
if (lean_obj_tag(v_tail_1955_) == 1)
{
lean_object* v_head_1959_; lean_object* v_tail_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1993_; 
v_head_1959_ = lean_ctor_get(v_tail_1955_, 0);
v_tail_1960_ = lean_ctor_get(v_tail_1955_, 1);
v_isSharedCheck_1993_ = !lean_is_exclusive(v_tail_1955_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1962_ = v_tail_1955_;
v_isShared_1963_ = v_isSharedCheck_1993_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_tail_1960_);
lean_inc(v_head_1959_);
lean_dec(v_tail_1955_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1993_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; uint8_t v___x_1965_; 
v___x_1964_ = lean_unsigned_to_nat(34u);
v___x_1965_ = lean_nat_dec_eq(v_head_1959_, v___x_1964_);
if (v___x_1965_ == 0)
{
lean_object* v___x_1966_; 
lean_del_object(v___x_1962_);
lean_dec(v_tail_1960_);
lean_dec(v_head_1959_);
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1966_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1966_;
}
else
{
lean_object* v_val_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; 
lean_inc(v_tail_1960_);
v_val_1967_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathAttrChunks_go_spec__1(v_head_1959_, v___x_1951_, v_tail_1960_, v_tail_1960_, v___x_1945_);
lean_dec(v_head_1959_);
v___x_1968_ = l_List_lengthTR___redArg(v_val_1967_);
lean_dec(v_val_1967_);
v___x_1969_ = l_List_drop___redArg(v___x_1968_, v_tail_1960_);
lean_dec(v_tail_1960_);
if (lean_obj_tag(v___x_1969_) == 1)
{
lean_object* v_head_1970_; lean_object* v_tail_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1991_; 
v_head_1970_ = lean_ctor_get(v___x_1969_, 0);
v_tail_1971_ = lean_ctor_get(v___x_1969_, 1);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1973_ = v___x_1969_;
v_isShared_1974_ = v_isSharedCheck_1991_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_tail_1971_);
lean_inc(v_head_1970_);
lean_dec(v___x_1969_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1991_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
uint8_t v___x_1975_; 
v___x_1975_ = lean_nat_dec_eq(v_head_1970_, v___x_1964_);
lean_dec(v_head_1970_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; 
lean_del_object(v___x_1973_);
lean_dec(v_tail_1971_);
lean_del_object(v___x_1962_);
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1976_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1976_;
}
else
{
lean_object* v_one_1977_; lean_object* v_n_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v_e_1982_; lean_object* v___x_1983_; lean_object* v___x_1985_; 
v_one_1977_ = lean_unsigned_to_nat(1u);
v_n_1978_ = lean_nat_sub(v_a_1941_, v_one_1977_);
lean_dec(v_a_1941_);
v___x_1979_ = l_List_lengthTR___redArg(v_a_1938_);
v___x_1980_ = l_List_lengthTR___redArg(v_tail_1971_);
v___x_1981_ = lean_nat_sub(v___x_1979_, v___x_1980_);
lean_dec(v___x_1980_);
lean_dec(v___x_1979_);
v_e_1982_ = lean_nat_add(v_a_1939_, v___x_1981_);
lean_dec(v_a_1939_);
lean_inc(v_a_1938_);
v___x_1983_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1938_, v_a_1938_, v___x_1981_, v___x_1945_);
lean_dec(v_a_1938_);
lean_inc(v_e_1982_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set_tag(v___x_1962_, 0);
lean_ctor_set(v___x_1962_, 1, v___x_1983_);
lean_ctor_set(v___x_1962_, 0, v_e_1982_);
v___x_1985_ = v___x_1962_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_e_1982_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v___x_1983_);
v___x_1985_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
lean_object* v___x_1987_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 1, v_a_1940_);
lean_ctor_set(v___x_1973_, 0, v___x_1985_);
v___x_1987_ = v___x_1973_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1985_);
lean_ctor_set(v_reuseFailAlloc_1989_, 1, v_a_1940_);
v___x_1987_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
v_a_1938_ = v_tail_1971_;
v_a_1939_ = v_e_1982_;
v_a_1940_ = v___x_1987_;
v_a_1941_ = v_n_1978_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_1992_; 
lean_dec(v___x_1969_);
lean_del_object(v___x_1962_);
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1992_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1992_;
}
}
}
}
else
{
lean_object* v___x_1994_; 
lean_dec(v_tail_1955_);
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1994_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1994_;
}
}
}
else
{
lean_object* v___x_1995_; 
lean_dec(v_after2_1953_);
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1995_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1995_;
}
}
else
{
lean_object* v___x_1996_; 
lean_dec(v_keyRun_1950_);
lean_dec(v_after1_1949_);
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1996_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1996_;
}
}
else
{
lean_object* v___x_1997_; 
lean_dec(v_wsRun_1946_);
lean_dec(v_a_1941_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
v___x_1997_ = l_List_reverse___redArg(v_a_1940_);
return v___x_1997_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrChunks(lean_object* v_s_2004_){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2005_ = lean_unsigned_to_nat(0u);
v___x_2006_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathAttrChunks___closed__1));
v___x_2007_ = l_List_lengthTR___redArg(v_s_2004_);
v___x_2008_ = lean_unsigned_to_nat(1u);
v___x_2009_ = lean_nat_add(v___x_2007_, v___x_2008_);
lean_dec(v___x_2007_);
v___x_2010_ = lp_lean_x2dftml_LeanFtml_mathAttrChunks_go(v_s_2004_, v___x_2005_, v___x_2006_, v___x_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0(lean_object* v_after_2011_, lean_object* v_s_2012_, lean_object* v_fst_2013_, lean_object* v_snd_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_){
_start:
{
if (lean_obj_tag(v_a_2015_) == 0)
{
lean_object* v___x_2017_; 
lean_dec(v_snd_2014_);
lean_dec(v_fst_2013_);
lean_dec(v_s_2012_);
v___x_2017_ = lean_array_to_list(v_a_2016_);
return v___x_2017_;
}
else
{
lean_object* v_head_2018_; lean_object* v_tail_2019_; lean_object* v___x_2020_; 
v_head_2018_ = lean_ctor_get(v_a_2015_, 0);
lean_inc(v_head_2018_);
v_tail_2019_ = lean_ctor_get(v_a_2015_, 1);
lean_inc(v_tail_2019_);
lean_dec_ref_known(v_a_2015_, 2);
v___x_2020_ = l_List_drop___redArg(v_head_2018_, v_after_2011_);
if (lean_obj_tag(v___x_2020_) == 1)
{
lean_object* v_head_2021_; lean_object* v_tail_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2048_; 
v_head_2021_ = lean_ctor_get(v___x_2020_, 0);
v_tail_2022_ = lean_ctor_get(v___x_2020_, 1);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2024_ = v___x_2020_;
v_isShared_2025_ = v_isSharedCheck_2048_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_tail_2022_);
lean_inc(v_head_2021_);
lean_dec(v___x_2020_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2048_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2026_; uint8_t v___x_2027_; 
v___x_2026_ = lean_unsigned_to_nat(93u);
v___x_2027_ = lean_nat_dec_eq(v_head_2021_, v___x_2026_);
lean_dec(v_head_2021_);
if (v___x_2027_ == 0)
{
lean_del_object(v___x_2024_);
lean_dec(v_tail_2022_);
v_a_2015_ = v_tail_2019_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_2022_) == 1)
{
lean_object* v_head_2029_; lean_object* v_tail_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2046_; 
v_head_2029_ = lean_ctor_get(v_tail_2022_, 0);
v_tail_2030_ = lean_ctor_get(v_tail_2022_, 1);
v_isSharedCheck_2046_ = !lean_is_exclusive(v_tail_2022_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2032_ = v_tail_2022_;
v_isShared_2033_ = v_isSharedCheck_2046_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_tail_2030_);
lean_inc(v_head_2029_);
lean_dec(v_tail_2022_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2046_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
uint8_t v___x_2034_; 
v___x_2034_ = lean_nat_dec_eq(v_head_2029_, v___x_2026_);
lean_dec(v_head_2029_);
if (v___x_2034_ == 0)
{
lean_del_object(v___x_2032_);
lean_dec(v_tail_2030_);
lean_del_object(v___x_2024_);
v_a_2015_ = v_tail_2019_;
goto _start;
}
else
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2039_; 
v___x_2036_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_fst_2013_);
lean_inc(v_s_2012_);
v___x_2037_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2012_, v_s_2012_, v_fst_2013_, v___x_2036_);
lean_inc(v_snd_2014_);
if (v_isShared_2033_ == 0)
{
lean_ctor_set_tag(v___x_2032_, 0);
lean_ctor_set(v___x_2032_, 0, v_snd_2014_);
v___x_2039_ = v___x_2032_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_snd_2014_);
lean_ctor_set(v_reuseFailAlloc_2045_, 1, v_tail_2030_);
v___x_2039_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
lean_object* v___x_2041_; 
if (v_isShared_2025_ == 0)
{
lean_ctor_set_tag(v___x_2024_, 0);
lean_ctor_set(v___x_2024_, 1, v___x_2039_);
lean_ctor_set(v___x_2024_, 0, v___x_2037_);
v___x_2041_ = v___x_2024_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v___x_2037_);
lean_ctor_set(v_reuseFailAlloc_2044_, 1, v___x_2039_);
v___x_2041_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
lean_object* v___x_2042_; 
v___x_2042_ = lean_array_push(v_a_2016_, v___x_2041_);
v_a_2015_ = v_tail_2019_;
v_a_2016_ = v___x_2042_;
goto _start;
}
}
}
}
}
else
{
lean_del_object(v___x_2024_);
lean_dec(v_tail_2022_);
v_a_2015_ = v_tail_2019_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_2020_);
v_a_2015_ = v_tail_2019_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0___boxed(lean_object* v_after_2050_, lean_object* v_s_2051_, lean_object* v_fst_2052_, lean_object* v_snd_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0(v_after_2050_, v_s_2051_, v_fst_2052_, v_snd_2053_, v_a_2054_, v_a_2055_);
lean_dec(v_after_2050_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathAttrs_spec__1(lean_object* v_s_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_){
_start:
{
if (lean_obj_tag(v_a_2058_) == 0)
{
lean_object* v___x_2060_; 
lean_dec(v_s_2057_);
v___x_2060_ = lean_array_to_list(v_a_2059_);
return v___x_2060_;
}
else
{
lean_object* v_head_2061_; lean_object* v_tail_2062_; lean_object* v_fst_2063_; lean_object* v_snd_2064_; lean_object* v_after_2065_; lean_object* v___x_2066_; lean_object* v_wsRun_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v_head_2061_ = lean_ctor_get(v_a_2058_, 0);
lean_inc(v_head_2061_);
v_tail_2062_ = lean_ctor_get(v_a_2058_, 1);
lean_inc(v_tail_2062_);
lean_dec_ref_known(v_a_2058_, 2);
v_fst_2063_ = lean_ctor_get(v_head_2061_, 0);
lean_inc_n(v_fst_2063_, 2);
v_snd_2064_ = lean_ctor_get(v_head_2061_, 1);
lean_inc(v_snd_2064_);
lean_dec(v_head_2061_);
v_after_2065_ = l_List_drop___redArg(v_fst_2063_, v_s_2057_);
v___x_2066_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_after_2065_);
v_wsRun_2067_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_after_2065_, v_after_2065_, v___x_2066_);
v___x_2068_ = l_List_lengthTR___redArg(v_wsRun_2067_);
lean_dec(v_wsRun_2067_);
v___x_2069_ = lean_unsigned_to_nat(1u);
v___x_2070_ = lean_nat_add(v___x_2068_, v___x_2069_);
lean_dec(v___x_2068_);
v___x_2071_ = l_List_range(v___x_2070_);
v___x_2072_ = l_List_reverse___redArg(v___x_2071_);
lean_inc(v_s_2057_);
v___x_2073_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_mathAttrs_spec__0(v_after_2065_, v_s_2057_, v_fst_2063_, v_snd_2064_, v___x_2072_, v___x_2066_);
lean_dec(v_after_2065_);
v___x_2074_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2059_, v___x_2073_);
v_a_2058_ = v_tail_2062_;
v_a_2059_ = v___x_2074_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathAttrs(lean_object* v_s_2078_){
_start:
{
lean_object* v_chunks_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
lean_inc(v_s_2078_);
v_chunks_2079_ = lp_lean_x2dftml_LeanFtml_mathAttrChunks(v_s_2078_);
v___x_2080_ = l_List_reverse___redArg(v_chunks_2079_);
v___x_2081_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathAttrs___closed__0));
v___x_2082_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathAttrs_spec__1(v_s_2078_, v___x_2080_, v___x_2081_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__0(lean_object* v_a_2083_, lean_object* v_a_2084_){
_start:
{
if (lean_obj_tag(v_a_2083_) == 0)
{
lean_object* v___x_2085_; 
v___x_2085_ = l_List_reverse___redArg(v_a_2084_);
return v___x_2085_;
}
else
{
lean_object* v_head_2086_; lean_object* v_tail_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2105_; 
v_head_2086_ = lean_ctor_get(v_a_2083_, 0);
v_tail_2087_ = lean_ctor_get(v_a_2083_, 1);
v_isSharedCheck_2105_ = !lean_is_exclusive(v_a_2083_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2089_ = v_a_2083_;
v_isShared_2090_ = v_isSharedCheck_2105_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_tail_2087_);
lean_inc(v_head_2086_);
lean_dec(v_a_2083_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2105_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v_snd_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2103_; 
v_snd_2091_ = lean_ctor_get(v_head_2086_, 1);
v_isSharedCheck_2103_ = !lean_is_exclusive(v_head_2086_);
if (v_isSharedCheck_2103_ == 0)
{
lean_object* v_unused_2104_; 
v_unused_2104_ = lean_ctor_get(v_head_2086_, 0);
lean_dec(v_unused_2104_);
v___x_2093_ = v_head_2086_;
v_isShared_2094_ = v_isSharedCheck_2103_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_snd_2091_);
lean_dec(v_head_2086_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2103_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2095_ = lean_box(0);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 0, v___x_2095_);
v___x_2097_ = v___x_2093_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2095_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_snd_2091_);
v___x_2097_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
lean_object* v___x_2099_; 
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 1, v_a_2084_);
lean_ctor_set(v___x_2089_, 0, v___x_2097_);
v___x_2099_ = v___x_2089_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v_a_2084_);
v___x_2099_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
v_a_2083_ = v_tail_2087_;
v_a_2084_ = v___x_2099_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2(lean_object* v_l_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_){
_start:
{
if (lean_obj_tag(v_a_2107_) == 0)
{
lean_dec_ref(v_a_2108_);
lean_inc(v_l_2106_);
return v_l_2106_;
}
else
{
lean_object* v_head_2109_; lean_object* v_tail_2110_; uint8_t v___x_2111_; 
v_head_2109_ = lean_ctor_get(v_a_2107_, 0);
lean_inc(v_head_2109_);
v_tail_2110_ = lean_ctor_get(v_a_2107_, 1);
lean_inc(v_tail_2110_);
lean_dec_ref_known(v_a_2107_, 2);
v___x_2111_ = lp_lean_x2dftml_LeanFtml_isLabelByte(v_head_2109_);
if (v___x_2111_ == 0)
{
lean_object* v___x_2112_; 
lean_dec(v_tail_2110_);
lean_dec(v_head_2109_);
v___x_2112_ = lean_array_to_list(v_a_2108_);
return v___x_2112_;
}
else
{
lean_object* v___x_2113_; 
v___x_2113_ = lean_array_push(v_a_2108_, v_head_2109_);
v_a_2107_ = v_tail_2110_;
v_a_2108_ = v___x_2113_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2___boxed(lean_object* v_l_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2(v_l_2115_, v_a_2116_, v_a_2117_);
lean_dec(v_l_2115_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(lean_object* v___x_2119_, lean_object* v_ll_2120_, lean_object* v_r0_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_){
_start:
{
if (lean_obj_tag(v_a_2122_) == 0)
{
lean_object* v___x_2124_; 
lean_dec(v_r0_2121_);
v___x_2124_ = l_List_reverse___redArg(v_a_2123_);
return v___x_2124_;
}
else
{
lean_object* v_head_2125_; lean_object* v_tail_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2147_; 
v_head_2125_ = lean_ctor_get(v_a_2122_, 0);
v_tail_2126_ = lean_ctor_get(v_a_2122_, 1);
v_isSharedCheck_2147_ = !lean_is_exclusive(v_a_2122_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2128_ = v_a_2122_;
v_isShared_2129_ = v_isSharedCheck_2147_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_tail_2126_);
lean_inc(v_head_2125_);
lean_dec(v_a_2122_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2147_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v_snd_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2145_; 
v_snd_2130_ = lean_ctor_get(v_head_2125_, 1);
v_isSharedCheck_2145_ = !lean_is_exclusive(v_head_2125_);
if (v_isSharedCheck_2145_ == 0)
{
lean_object* v_unused_2146_; 
v_unused_2146_ = lean_ctor_get(v_head_2125_, 0);
lean_dec(v_unused_2146_);
v___x_2132_ = v_head_2125_;
v_isShared_2133_ = v_isSharedCheck_2145_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_snd_2130_);
lean_dec(v_head_2125_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2145_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2139_; 
v___x_2134_ = lean_nat_add(v___x_2119_, v_ll_2120_);
v___x_2135_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r0_2121_);
v___x_2136_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r0_2121_, v_r0_2121_, v___x_2134_, v___x_2135_);
v___x_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 0, v___x_2137_);
v___x_2139_ = v___x_2132_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v___x_2137_);
lean_ctor_set(v_reuseFailAlloc_2144_, 1, v_snd_2130_);
v___x_2139_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
lean_object* v___x_2141_; 
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 1, v_a_2123_);
lean_ctor_set(v___x_2128_, 0, v___x_2139_);
v___x_2141_ = v___x_2128_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2143_, 1, v_a_2123_);
v___x_2141_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
v_a_2122_ = v_tail_2126_;
v_a_2123_ = v___x_2141_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1___boxed(lean_object* v___x_2148_, lean_object* v_ll_2149_, lean_object* v_r0_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(v___x_2148_, v_ll_2149_, v_r0_2150_, v_a_2151_, v_a_2152_);
lean_dec(v_ll_2149_);
lean_dec(v___x_2148_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3(lean_object* v_after1_2154_, lean_object* v___x_2155_, lean_object* v_r0_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_){
_start:
{
if (lean_obj_tag(v_a_2157_) == 0)
{
lean_object* v___x_2159_; 
lean_dec(v_r0_2156_);
v___x_2159_ = lean_array_to_list(v_a_2158_);
return v___x_2159_;
}
else
{
lean_object* v_head_2160_; lean_object* v_tail_2161_; lean_object* v_after2_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v_head_2160_ = lean_ctor_get(v_a_2157_, 0);
lean_inc_n(v_head_2160_, 2);
v_tail_2161_ = lean_ctor_get(v_a_2157_, 1);
lean_inc(v_tail_2161_);
lean_dec_ref_known(v_a_2157_, 2);
v_after2_2162_ = l_List_drop___redArg(v_head_2160_, v_after1_2154_);
v___x_2163_ = lp_lean_x2dftml_LeanFtml_mathAttrs(v_after2_2162_);
v___x_2164_ = lean_box(0);
lean_inc(v_r0_2156_);
v___x_2165_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(v___x_2155_, v_head_2160_, v_r0_2156_, v___x_2163_, v___x_2164_);
lean_dec(v_head_2160_);
v___x_2166_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2158_, v___x_2165_);
v_a_2157_ = v_tail_2161_;
v_a_2158_ = v___x_2166_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3___boxed(lean_object* v_after1_2168_, lean_object* v___x_2169_, lean_object* v_r0_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3(v_after1_2168_, v___x_2169_, v_r0_2170_, v_a_2171_, v_a_2172_);
lean_dec(v___x_2169_);
lean_dec(v_after1_2168_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3(lean_object* v___x_2174_, lean_object* v_r0_2175_, lean_object* v_after1_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_){
_start:
{
if (lean_obj_tag(v_a_2177_) == 0)
{
lean_object* v___x_2179_; 
lean_dec(v_r0_2175_);
v___x_2179_ = lean_array_to_list(v_a_2178_);
return v___x_2179_;
}
else
{
lean_object* v_head_2180_; lean_object* v_tail_2181_; lean_object* v_after2_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v_head_2180_ = lean_ctor_get(v_a_2177_, 0);
lean_inc_n(v_head_2180_, 2);
v_tail_2181_ = lean_ctor_get(v_a_2177_, 1);
lean_inc(v_tail_2181_);
lean_dec_ref_known(v_a_2177_, 2);
v_after2_2182_ = l_List_drop___redArg(v_head_2180_, v_after1_2176_);
v___x_2183_ = lp_lean_x2dftml_LeanFtml_mathAttrs(v_after2_2182_);
v___x_2184_ = lean_box(0);
lean_inc(v_r0_2175_);
v___x_2185_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__1(v___x_2174_, v_head_2180_, v_r0_2175_, v___x_2183_, v___x_2184_);
lean_dec(v_head_2180_);
v___x_2186_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2178_, v___x_2185_);
v___x_2187_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3_spec__3(v_after1_2176_, v___x_2174_, v_r0_2175_, v_tail_2181_, v___x_2186_);
return v___x_2187_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3___boxed(lean_object* v___x_2188_, lean_object* v_r0_2189_, lean_object* v_after1_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3(v___x_2188_, v_r0_2189_, v_after1_2190_, v_a_2191_, v_a_2192_);
lean_dec(v_after1_2190_);
lean_dec(v___x_2188_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4(lean_object* v_r0_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_){
_start:
{
if (lean_obj_tag(v_a_2195_) == 0)
{
lean_object* v___x_2197_; 
lean_dec(v_r0_2194_);
v___x_2197_ = lean_array_to_list(v_a_2196_);
return v___x_2197_;
}
else
{
lean_object* v_head_2198_; lean_object* v_tail_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v_after1_2202_; lean_object* v___x_2203_; lean_object* v_labelRun_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v_head_2198_ = lean_ctor_get(v_a_2195_, 0);
v_tail_2199_ = lean_ctor_get(v_a_2195_, 1);
v___x_2200_ = lean_unsigned_to_nat(1u);
v___x_2201_ = lean_nat_add(v_head_2198_, v___x_2200_);
lean_inc(v___x_2201_);
v_after1_2202_ = l_List_drop___redArg(v___x_2201_, v_r0_2194_);
v___x_2203_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_after1_2202_);
v_labelRun_2204_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_mathHead_spec__2(v_after1_2202_, v_after1_2202_, v___x_2203_);
v___x_2205_ = l_List_lengthTR___redArg(v_labelRun_2204_);
lean_dec(v_labelRun_2204_);
v___x_2206_ = lean_nat_add(v___x_2205_, v___x_2200_);
lean_dec(v___x_2205_);
v___x_2207_ = l_List_range(v___x_2206_);
lean_inc(v_r0_2194_);
v___x_2208_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__3(v___x_2201_, v_r0_2194_, v_after1_2202_, v___x_2207_, v___x_2203_);
lean_dec(v_after1_2202_);
lean_dec(v___x_2201_);
v___x_2209_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2196_, v___x_2208_);
v_a_2195_ = v_tail_2199_;
v_a_2196_ = v___x_2209_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4___boxed(lean_object* v_r0_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4(v_r0_2211_, v_a_2212_, v_a_2213_);
lean_dec(v_a_2212_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathHead(lean_object* v_r0_2215_){
_start:
{
lean_object* v___y_2217_; 
if (lean_obj_tag(v_r0_2215_) == 0)
{
lean_object* v___x_2222_; 
v___x_2222_ = lean_box(0);
v___y_2217_ = v___x_2222_;
goto v___jp_2216_;
}
else
{
lean_object* v_head_2223_; uint8_t v___x_2224_; 
v_head_2223_ = lean_ctor_get(v_r0_2215_, 0);
v___x_2224_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_2223_);
if (v___x_2224_ == 0)
{
lean_object* v___x_2225_; 
v___x_2225_ = lean_box(0);
v___y_2217_ = v___x_2225_;
goto v___jp_2216_;
}
else
{
lean_object* v___x_2226_; lean_object* v_wsRun_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2226_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc_ref_n(v_r0_2215_, 2);
v_wsRun_2227_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r0_2215_, v_r0_2215_, v___x_2226_);
v___x_2228_ = l_List_lengthTR___redArg(v_wsRun_2227_);
lean_dec(v_wsRun_2227_);
v___x_2229_ = l_List_range(v___x_2228_);
v___x_2230_ = l_List_reverse___redArg(v___x_2229_);
v___x_2231_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathHead_spec__4(v_r0_2215_, v___x_2230_, v___x_2226_);
lean_dec(v___x_2230_);
v___y_2217_ = v___x_2231_;
goto v___jp_2216_;
}
}
v___jp_2216_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v_absent_2220_; lean_object* v___x_2221_; 
v___x_2218_ = lp_lean_x2dftml_LeanFtml_mathAttrs(v_r0_2215_);
v___x_2219_ = lean_box(0);
v_absent_2220_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathHead_spec__0(v___x_2218_, v___x_2219_);
v___x_2221_ = l_List_appendTR___redArg(v___y_2217_, v_absent_2220_);
return v___x_2221_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1(void){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2233_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__0));
v___x_2234_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_lookaheadCloser(lean_object* v_r_2235_){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2236_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1, &lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1);
v___x_2237_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r_2235_);
v___x_2238_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r_2235_, v_r_2235_, v___x_2237_);
v___x_2239_ = l_List_lengthTR___redArg(v___x_2238_);
lean_dec(v___x_2238_);
v___x_2240_ = l_List_drop___redArg(v___x_2239_, v_r_2235_);
lean_dec(v_r_2235_);
v___x_2241_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2236_, v___x_2240_);
if (lean_obj_tag(v___x_2241_) == 0)
{
uint8_t v___x_2242_; 
v___x_2242_ = 0;
return v___x_2242_;
}
else
{
uint8_t v___x_2243_; 
lean_dec_ref_known(v___x_2241_, 1);
v___x_2243_ = 1;
return v___x_2243_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookaheadCloser___boxed(lean_object* v_r_2244_){
_start:
{
uint8_t v_res_2245_; lean_object* v_r_2246_; 
v_res_2245_ = lp_lean_x2dftml_LeanFtml_lookaheadCloser(v_r_2244_);
v_r_2246_ = lean_box(v_res_2245_);
return v_r_2246_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathPattern_spec__0(lean_object* v_fst_2247_, lean_object* v_fst_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_){
_start:
{
if (lean_obj_tag(v_a_2249_) == 0)
{
lean_object* v___x_2251_; 
lean_dec(v_fst_2248_);
lean_dec(v_fst_2247_);
v___x_2251_ = l_List_reverse___redArg(v_a_2250_);
return v___x_2251_;
}
else
{
lean_object* v_head_2252_; lean_object* v_tail_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2263_; 
v_head_2252_ = lean_ctor_get(v_a_2249_, 0);
v_tail_2253_ = lean_ctor_get(v_a_2249_, 1);
v_isSharedCheck_2263_ = !lean_is_exclusive(v_a_2249_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2255_ = v_a_2249_;
v_isShared_2256_ = v_isSharedCheck_2263_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_tail_2253_);
lean_inc(v_head_2252_);
lean_dec(v_a_2249_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2263_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2260_; 
lean_inc(v_fst_2247_);
v___x_2257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2257_, 0, v_fst_2247_);
lean_ctor_set(v___x_2257_, 1, v_head_2252_);
lean_inc(v_fst_2248_);
v___x_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2258_, 0, v_fst_2248_);
lean_ctor_set(v___x_2258_, 1, v___x_2257_);
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 1, v_a_2250_);
lean_ctor_set(v___x_2255_, 0, v___x_2258_);
v___x_2260_ = v___x_2255_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v___x_2258_);
lean_ctor_set(v_reuseFailAlloc_2262_, 1, v_a_2250_);
v___x_2260_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
v_a_2249_ = v_tail_2253_;
v_a_2250_ = v___x_2260_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathPattern___closed__1(void){
_start:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2265_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathPattern___closed__0));
v___x_2266_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathPattern(lean_object* v_s_2269_, uint8_t v_atLineStart_2270_, lean_object* v_x_2271_){
_start:
{
lean_object* v_zero_2272_; uint8_t v_isZero_2273_; 
v_zero_2272_ = lean_unsigned_to_nat(0u);
v_isZero_2273_ = lean_nat_dec_eq(v_x_2271_, v_zero_2272_);
if (v_isZero_2273_ == 1)
{
lean_object* v___x_2274_; 
lean_dec(v_s_2269_);
v___x_2274_ = lean_box(0);
return v___x_2274_;
}
else
{
if (v_atLineStart_2270_ == 0)
{
lean_object* v___x_2275_; 
lean_dec(v_s_2269_);
v___x_2275_ = lean_box(0);
return v___x_2275_;
}
else
{
lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2276_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathPattern___closed__1, &lp_lean_x2dftml_LeanFtml_mathPattern___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_mathPattern___closed__1);
v___x_2277_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2276_, v_s_2269_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_box(0);
return v___x_2278_;
}
else
{
lean_object* v_val_2279_; lean_object* v_one_2280_; lean_object* v_n_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v_val_2279_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_val_2279_);
lean_dec_ref_known(v___x_2277_, 1);
v_one_2280_ = lean_unsigned_to_nat(1u);
v_n_2281_ = lean_nat_sub(v_x_2271_, v_one_2280_);
v___x_2282_ = lp_lean_x2dftml_LeanFtml_mathHead(v_val_2279_);
v___x_2283_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathPattern___closed__2));
v___x_2284_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1(v_n_2281_, v___x_2282_, v___x_2283_);
lean_dec(v_n_2281_);
return v___x_2284_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3(lean_object* v_s_2287_, lean_object* v_n_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_){
_start:
{
if (lean_obj_tag(v_a_2289_) == 0)
{
lean_object* v___x_2291_; 
lean_dec(v_s_2287_);
v___x_2291_ = lean_array_to_list(v_a_2290_);
return v___x_2291_;
}
else
{
lean_object* v_head_2292_; lean_object* v_tail_2293_; lean_object* v___y_2295_; lean_object* v_snd_2298_; lean_object* v_snd_2299_; lean_object* v_snd_2300_; uint8_t v___x_2301_; 
v_head_2292_ = lean_ctor_get(v_a_2289_, 0);
lean_inc(v_head_2292_);
v_tail_2293_ = lean_ctor_get(v_a_2289_, 1);
lean_inc(v_tail_2293_);
lean_dec_ref_known(v_a_2289_, 2);
v_snd_2298_ = lean_ctor_get(v_head_2292_, 1);
lean_inc(v_snd_2298_);
lean_dec(v_head_2292_);
v_snd_2299_ = lean_ctor_get(v_snd_2298_, 1);
lean_inc(v_snd_2299_);
lean_dec(v_snd_2298_);
v_snd_2300_ = lean_ctor_get(v_snd_2299_, 1);
lean_inc_n(v_snd_2300_, 2);
lean_dec(v_snd_2299_);
v___x_2301_ = lp_lean_x2dftml_LeanFtml_lookaheadCloser(v_snd_2300_);
if (v___x_2301_ == 0)
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; uint8_t v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2302_ = l_List_lengthTR___redArg(v_s_2287_);
v___x_2303_ = l_List_lengthTR___redArg(v_snd_2300_);
v___x_2304_ = lean_nat_sub(v___x_2302_, v___x_2303_);
lean_dec(v___x_2303_);
lean_dec(v___x_2302_);
v___x_2305_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc_n(v_s_2287_, 2);
v___x_2306_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2287_, v_s_2287_, v___x_2304_, v___x_2305_);
v___x_2307_ = l_List_getLast_x3f___redArg(v___x_2306_);
lean_dec(v___x_2306_);
v___x_2308_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0));
v___x_2309_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2307_, v___x_2308_);
lean_dec(v___x_2307_);
lean_inc(v_snd_2300_);
v___x_2310_ = lp_lean_x2dftml_LeanFtml_mathBody(v_snd_2300_, v___x_2309_, v_n_2288_);
v___x_2311_ = lean_box(0);
v___x_2312_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_s_2287_, v_snd_2300_, v___x_2310_, v___x_2311_);
lean_dec(v_snd_2300_);
v___y_2295_ = v___x_2312_;
goto v___jp_2294_;
}
else
{
lean_object* v___x_2313_; 
lean_dec(v_snd_2300_);
v___x_2313_ = lean_box(0);
v___y_2295_ = v___x_2313_;
goto v___jp_2294_;
}
v___jp_2294_:
{
lean_object* v___x_2296_; 
v___x_2296_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2290_, v___y_2295_);
v_a_2289_ = v_tail_2293_;
v_a_2290_ = v___x_2296_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBody(lean_object* v_s_2314_, uint8_t v_lineStart_2315_, lean_object* v_x_2316_){
_start:
{
lean_object* v___y_2318_; lean_object* v___y_2319_; lean_object* v___y_2320_; lean_object* v_zero_2323_; uint8_t v_isZero_2324_; 
v_zero_2323_ = lean_unsigned_to_nat(0u);
v_isZero_2324_ = lean_nat_dec_eq(v_x_2316_, v_zero_2323_);
if (v_isZero_2324_ == 1)
{
lean_object* v___x_2325_; 
lean_dec(v_s_2314_);
v___x_2325_ = lean_box(0);
return v___x_2325_;
}
else
{
lean_object* v_one_2326_; lean_object* v_n_2327_; lean_object* v___y_2329_; 
v_one_2326_ = lean_unsigned_to_nat(1u);
v_n_2327_ = lean_nat_sub(v_x_2316_, v_one_2326_);
if (lean_obj_tag(v_s_2314_) == 1)
{
lean_object* v_head_2343_; lean_object* v_tail_2344_; lean_object* v___x_2345_; uint8_t v___x_2346_; 
v_head_2343_ = lean_ctor_get(v_s_2314_, 0);
v_tail_2344_ = lean_ctor_get(v_s_2314_, 1);
v___x_2345_ = lean_unsigned_to_nat(10u);
v___x_2346_ = lean_nat_dec_eq(v_head_2343_, v___x_2345_);
if (v___x_2346_ == 0)
{
goto v___jp_2341_;
}
else
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1, &lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_lookaheadCloser___closed__1);
lean_inc(v_tail_2344_);
v___x_2348_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2347_, v_tail_2344_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v___x_2349_; 
v___x_2349_ = lean_box(0);
v___y_2329_ = v___x_2349_;
goto v___jp_2328_;
}
else
{
lean_object* v_val_2350_; lean_object* v___y_2352_; lean_object* v___y_2358_; 
v_val_2350_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_val_2350_);
lean_dec_ref_known(v___x_2348_, 1);
if (lean_obj_tag(v_val_2350_) == 0)
{
lean_object* v___x_2365_; 
v___x_2365_ = lean_box(0);
v___y_2358_ = v___x_2365_;
goto v___jp_2357_;
}
else
{
lean_object* v_head_2366_; lean_object* v_tail_2367_; uint8_t v___x_2368_; 
v_head_2366_ = lean_ctor_get(v_val_2350_, 0);
v_tail_2367_ = lean_ctor_get(v_val_2350_, 1);
v___x_2368_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_2366_);
if (v___x_2368_ == 0)
{
lean_object* v___x_2369_; 
v___x_2369_ = lean_box(0);
v___y_2358_ = v___x_2369_;
goto v___jp_2357_;
}
else
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2370_ = lean_box(0);
lean_inc(v_tail_2367_);
v___x_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
lean_ctor_set(v___x_2371_, 1, v_tail_2367_);
v___x_2372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2371_);
lean_ctor_set(v___x_2372_, 1, v___x_2370_);
v___y_2358_ = v___x_2372_;
goto v___jp_2357_;
}
}
v___jp_2351_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2353_ = lean_box(0);
v___x_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2353_);
lean_ctor_set(v___x_2354_, 1, v_val_2350_);
v___x_2355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2354_);
lean_ctor_set(v___x_2355_, 1, v___x_2353_);
v___x_2356_ = l_List_appendTR___redArg(v___y_2352_, v___x_2355_);
v___y_2329_ = v___x_2356_;
goto v___jp_2328_;
}
v___jp_2357_:
{
uint8_t v___x_2359_; 
v___x_2359_ = l_List_isEmpty___redArg(v_val_2350_);
if (v___x_2359_ == 0)
{
lean_object* v___x_2360_; lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2360_ = l_List_head_x3f___redArg(v_val_2350_);
v___x_2361_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0));
v___x_2362_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2360_, v___x_2361_);
lean_dec(v___x_2360_);
if (v___x_2362_ == 0)
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
lean_dec(v_val_2350_);
v___x_2363_ = lean_box(0);
v___x_2364_ = l_List_appendTR___redArg(v___y_2358_, v___x_2363_);
v___y_2329_ = v___x_2364_;
goto v___jp_2328_;
}
else
{
v___y_2352_ = v___y_2358_;
goto v___jp_2351_;
}
}
else
{
v___y_2352_ = v___y_2358_;
goto v___jp_2351_;
}
}
}
}
}
else
{
goto v___jp_2341_;
}
v___jp_2328_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v_recs_2332_; 
lean_inc_n(v_s_2314_, 2);
v___x_2330_ = lp_lean_x2dftml_LeanFtml_mathPattern(v_s_2314_, v_lineStart_2315_, v_n_2327_);
v___x_2331_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iftagsBody___closed__0));
v_recs_2332_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3(v_s_2314_, v_n_2327_, v___x_2330_, v___x_2331_);
if (lean_obj_tag(v_s_2314_) == 0)
{
lean_object* v___x_2333_; 
lean_dec(v_n_2327_);
v___x_2333_ = lean_box(0);
v___y_2318_ = v___y_2329_;
v___y_2319_ = v_recs_2332_;
v___y_2320_ = v___x_2333_;
goto v___jp_2317_;
}
else
{
lean_object* v_head_2334_; lean_object* v_tail_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v_head_2334_ = lean_ctor_get(v_s_2314_, 0);
lean_inc(v_head_2334_);
v_tail_2335_ = lean_ctor_get(v_s_2314_, 1);
lean_inc(v_tail_2335_);
lean_dec_ref_known(v_s_2314_, 2);
v___x_2336_ = lean_unsigned_to_nat(10u);
v___x_2337_ = lean_nat_dec_eq(v_head_2334_, v___x_2336_);
v___x_2338_ = lp_lean_x2dftml_LeanFtml_mathBody(v_tail_2335_, v___x_2337_, v_n_2327_);
lean_dec(v_n_2327_);
v___x_2339_ = lean_box(0);
v___x_2340_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(v_head_2334_, v___x_2338_, v___x_2339_);
v___y_2318_ = v___y_2329_;
v___y_2319_ = v_recs_2332_;
v___y_2320_ = v___x_2340_;
goto v___jp_2317_;
}
}
v___jp_2341_:
{
lean_object* v___x_2342_; 
v___x_2342_ = lean_box(0);
v___y_2329_ = v___x_2342_;
goto v___jp_2328_;
}
}
v___jp_2317_:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = l_List_appendTR___redArg(v___y_2318_, v___y_2319_);
v___x_2322_ = l_List_appendTR___redArg(v___x_2321_, v___y_2320_);
return v___x_2322_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1(lean_object* v_n_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_){
_start:
{
if (lean_obj_tag(v_a_2374_) == 0)
{
lean_object* v___x_2376_; 
v___x_2376_ = lean_array_to_list(v_a_2375_);
return v___x_2376_;
}
else
{
lean_object* v_head_2377_; lean_object* v_snd_2378_; lean_object* v_tail_2379_; lean_object* v_fst_2380_; lean_object* v_fst_2381_; lean_object* v_snd_2382_; uint8_t v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v_head_2377_ = lean_ctor_get(v_a_2374_, 0);
lean_inc(v_head_2377_);
v_snd_2378_ = lean_ctor_get(v_head_2377_, 1);
lean_inc(v_snd_2378_);
v_tail_2379_ = lean_ctor_get(v_a_2374_, 1);
lean_inc(v_tail_2379_);
lean_dec_ref_known(v_a_2374_, 2);
v_fst_2380_ = lean_ctor_get(v_head_2377_, 0);
lean_inc(v_fst_2380_);
lean_dec(v_head_2377_);
v_fst_2381_ = lean_ctor_get(v_snd_2378_, 0);
lean_inc(v_fst_2381_);
v_snd_2382_ = lean_ctor_get(v_snd_2378_, 1);
lean_inc(v_snd_2382_);
lean_dec(v_snd_2378_);
v___x_2383_ = 0;
v___x_2384_ = lp_lean_x2dftml_LeanFtml_mathBody(v_snd_2382_, v___x_2383_, v_n_2373_);
v___x_2385_ = lean_box(0);
v___x_2386_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_mathPattern_spec__0(v_fst_2381_, v_fst_2380_, v___x_2384_, v___x_2385_);
v___x_2387_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2375_, v___x_2386_);
v_a_2374_ = v_tail_2379_;
v_a_2375_ = v___x_2387_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1___boxed(lean_object* v_n_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathPattern_spec__1(v_n_2389_, v_a_2390_, v_a_2391_);
lean_dec(v_n_2389_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathPattern___boxed(lean_object* v_s_2393_, lean_object* v_atLineStart_2394_, lean_object* v_x_2395_){
_start:
{
uint8_t v_atLineStart_boxed_2396_; lean_object* v_res_2397_; 
v_atLineStart_boxed_2396_ = lean_unbox(v_atLineStart_2394_);
v_res_2397_ = lp_lean_x2dftml_LeanFtml_mathPattern(v_s_2393_, v_atLineStart_boxed_2396_, v_x_2395_);
lean_dec(v_x_2395_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___boxed(lean_object* v_s_2398_, lean_object* v_n_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3(v_s_2398_, v_n_2399_, v_a_2400_, v_a_2401_);
lean_dec(v_n_2399_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBody___boxed(lean_object* v_s_2403_, lean_object* v_lineStart_2404_, lean_object* v_x_2405_){
_start:
{
uint8_t v_lineStart_boxed_2406_; lean_object* v_res_2407_; 
v_lineStart_boxed_2406_ = lean_unbox(v_lineStart_2404_);
v_res_2407_ = lp_lean_x2dftml_LeanFtml_mathBody(v_s_2403_, v_lineStart_boxed_2406_, v_x_2405_);
lean_dec(v_x_2405_);
return v_res_2407_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(lean_object* v_r_2410_){
_start:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; uint8_t v___x_2417_; 
v___x_2411_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrsBytes_go___closed__0));
lean_inc(v_r_2410_);
v___x_2412_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r_2410_, v_r_2410_, v___x_2411_);
v___x_2413_ = l_List_lengthTR___redArg(v___x_2412_);
lean_dec(v___x_2412_);
v___x_2414_ = l_List_drop___redArg(v___x_2413_, v_r_2410_);
lean_dec(v_r_2410_);
v___x_2415_ = l_List_head_x3f___redArg(v___x_2414_);
lean_dec(v___x_2414_);
v___x_2416_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0___closed__0));
v___x_2417_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2415_, v___x_2416_);
lean_dec(v___x_2415_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0___boxed(lean_object* v_r_2418_){
_start:
{
uint8_t v_res_2419_; lean_object* v_r_2420_; 
v_res_2419_ = lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(v_r_2418_);
v_r_2420_ = lean_box(v_res_2419_);
return v_r_2420_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__0));
v___x_2423_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2422_);
return v___x_2423_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__2));
v___x_2426_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard_go(lean_object* v_a_2427_){
_start:
{
if (lean_obj_tag(v_a_2427_) == 0)
{
uint8_t v___x_2428_; 
v___x_2428_ = 0;
return v___x_2428_;
}
else
{
lean_object* v_tail_2429_; uint8_t v___y_2431_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_tail_2429_ = lean_ctor_get(v_a_2427_, 1);
lean_inc(v_tail_2429_);
v___x_2433_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1, &lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__1);
lean_inc_ref(v_a_2427_);
v___x_2434_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2433_, v_a_2427_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3, &lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_mathGuard_go___closed__3);
v___x_2436_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2435_, v_a_2427_);
if (lean_obj_tag(v___x_2436_) == 0)
{
v_a_2427_ = v_tail_2429_;
goto _start;
}
else
{
lean_object* v_val_2438_; uint8_t v___x_2439_; 
v_val_2438_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_val_2438_);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2439_ = lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(v_val_2438_);
v___y_2431_ = v___x_2439_;
goto v___jp_2430_;
}
}
else
{
lean_object* v_val_2440_; uint8_t v___x_2441_; 
lean_dec_ref_known(v_a_2427_, 2);
v_val_2440_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_val_2440_);
lean_dec_ref_known(v___x_2434_, 1);
v___x_2441_ = lp_lean_x2dftml_LeanFtml_mathGuard_go___lam__0(v_val_2440_);
v___y_2431_ = v___x_2441_;
goto v___jp_2430_;
}
v___jp_2430_:
{
if (v___y_2431_ == 0)
{
v_a_2427_ = v_tail_2429_;
goto _start;
}
else
{
lean_dec(v_tail_2429_);
return v___y_2431_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard_go___boxed(lean_object* v_a_2442_){
_start:
{
uint8_t v_res_2443_; lean_object* v_r_2444_; 
v_res_2443_ = lp_lean_x2dftml_LeanFtml_mathGuard_go(v_a_2442_);
v_r_2444_ = lean_box(v_res_2443_);
return v_r_2444_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathGuard(lean_object* v_content_2445_){
_start:
{
uint8_t v___x_2446_; 
v___x_2446_ = lp_lean_x2dftml_LeanFtml_mathGuard_go(v_content_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathGuard___boxed(lean_object* v_content_2447_){
_start:
{
uint8_t v_res_2448_; lean_object* v_r_2449_; 
v_res_2448_ = lp_lean_x2dftml_LeanFtml_mathGuard(v_content_2447_);
v_r_2449_ = lean_box(v_res_2448_);
return v_r_2449_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_eqSet(lean_object* v_m_2450_, lean_object* v_k_2451_, lean_object* v_v_2452_){
_start:
{
if (lean_obj_tag(v_m_2450_) == 0)
{
lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2453_, 0, v_k_2451_);
lean_ctor_set(v___x_2453_, 1, v_v_2452_);
v___x_2454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2453_);
lean_ctor_set(v___x_2454_, 1, v_m_2450_);
return v___x_2454_;
}
else
{
lean_object* v_head_2455_; lean_object* v_tail_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2478_; 
v_head_2455_ = lean_ctor_get(v_m_2450_, 0);
v_tail_2456_ = lean_ctor_get(v_m_2450_, 1);
v_isSharedCheck_2478_ = !lean_is_exclusive(v_m_2450_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2458_ = v_m_2450_;
v_isShared_2459_ = v_isSharedCheck_2478_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_tail_2456_);
lean_inc(v_head_2455_);
lean_dec(v_m_2450_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2478_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v_fst_2460_; uint8_t v___x_2461_; 
v_fst_2460_ = lean_ctor_get(v_head_2455_, 0);
v___x_2461_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_2460_, v_k_2451_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; lean_object* v___x_2464_; 
v___x_2462_ = lp_lean_x2dftml_LeanFtml_eqSet(v_tail_2456_, v_k_2451_, v_v_2452_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 1, v___x_2462_);
v___x_2464_ = v___x_2458_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_head_2455_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v___x_2462_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
else
{
lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2475_; 
v_isSharedCheck_2475_ = !lean_is_exclusive(v_head_2455_);
if (v_isSharedCheck_2475_ == 0)
{
lean_object* v_unused_2476_; lean_object* v_unused_2477_; 
v_unused_2476_ = lean_ctor_get(v_head_2455_, 1);
lean_dec(v_unused_2476_);
v_unused_2477_ = lean_ctor_get(v_head_2455_, 0);
lean_dec(v_unused_2477_);
v___x_2467_ = v_head_2455_;
v_isShared_2468_ = v_isSharedCheck_2475_;
goto v_resetjp_2466_;
}
else
{
lean_dec(v_head_2455_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2475_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
lean_ctor_set(v___x_2467_, 1, v_v_2452_);
lean_ctor_set(v___x_2467_, 0, v_k_2451_);
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_k_2451_);
lean_ctor_set(v_reuseFailAlloc_2474_, 1, v_v_2452_);
v___x_2470_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
lean_object* v___x_2472_; 
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2470_);
v___x_2472_ = v___x_2458_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v___x_2470_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_tail_2456_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__2(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__1));
v___x_2482_ = l_String_toListImpl(v___x_2481_);
return v___x_2482_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__4(void){
_start:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__3));
v___x_2485_ = l_String_toListImpl(v___x_2484_);
return v___x_2485_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__6(void){
_start:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__5));
v___x_2488_ = l_String_toListImpl(v___x_2487_);
return v___x_2488_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__8(void){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2490_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__7));
v___x_2491_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2490_);
return v___x_2491_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__10(void){
_start:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2493_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__9));
v___x_2494_ = l_String_toListImpl(v___x_2493_);
return v___x_2494_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__11(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__10, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__10);
v___x_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathProcess(lean_object* v_g1_2497_, lean_object* v_g2_2498_, lean_object* v_g3_2499_, lean_object* v_doc_2500_){
_start:
{
lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2515_; lean_object* v___y_2516_; lean_object* v___y_2517_; lean_object* v___y_2518_; lean_object* v___y_2519_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v_page_2573_; lean_object* v_site_2574_; lean_object* v_inclusions_2575_; lean_object* v_inclusionsNotExist_2576_; lean_object* v_footnotes_2577_; lean_object* v_bibitems_2578_; lean_object* v_bibitemIds_2579_; lean_object* v_headlineId_2580_; lean_object* v_mathId_2581_; lean_object* v_equations_2582_; lean_object* v_collapsibleCount_2583_; lean_object* v_tabviewCounter_2584_; lean_object* v_scoredAnchors_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2601_; 
v_page_2573_ = lean_ctor_get(v_doc_2500_, 0);
v_site_2574_ = lean_ctor_get(v_doc_2500_, 1);
v_inclusions_2575_ = lean_ctor_get(v_doc_2500_, 2);
v_inclusionsNotExist_2576_ = lean_ctor_get(v_doc_2500_, 3);
v_footnotes_2577_ = lean_ctor_get(v_doc_2500_, 4);
v_bibitems_2578_ = lean_ctor_get(v_doc_2500_, 5);
v_bibitemIds_2579_ = lean_ctor_get(v_doc_2500_, 6);
v_headlineId_2580_ = lean_ctor_get(v_doc_2500_, 7);
v_mathId_2581_ = lean_ctor_get(v_doc_2500_, 8);
v_equations_2582_ = lean_ctor_get(v_doc_2500_, 9);
v_collapsibleCount_2583_ = lean_ctor_get(v_doc_2500_, 10);
v_tabviewCounter_2584_ = lean_ctor_get(v_doc_2500_, 11);
v_scoredAnchors_2585_ = lean_ctor_get(v_doc_2500_, 12);
v_isSharedCheck_2601_ = !lean_is_exclusive(v_doc_2500_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2587_ = v_doc_2500_;
v_isShared_2588_ = v_isSharedCheck_2601_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_scoredAnchors_2585_);
lean_inc(v_tabviewCounter_2584_);
lean_inc(v_collapsibleCount_2583_);
lean_inc(v_equations_2582_);
lean_inc(v_mathId_2581_);
lean_inc(v_headlineId_2580_);
lean_inc(v_bibitemIds_2579_);
lean_inc(v_bibitems_2578_);
lean_inc(v_footnotes_2577_);
lean_inc(v_inclusionsNotExist_2576_);
lean_inc(v_inclusions_2575_);
lean_inc(v_site_2574_);
lean_inc(v_page_2573_);
lean_dec(v_doc_2500_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2601_;
goto v_resetjp_2586_;
}
v___jp_2501_:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v_entry_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2520_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__0));
v___x_2521_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__2, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__2);
lean_inc(v___y_2502_);
v___x_2522_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_2502_);
v___x_2523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2521_);
lean_ctor_set(v___x_2523_, 1, v___x_2522_);
v___x_2524_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__4, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__4);
v___x_2525_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_2503_);
v___x_2526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2524_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
v___x_2527_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__6, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__6);
lean_inc(v___y_2508_);
v___x_2528_ = lean_nat_to_int(v___y_2508_);
v___x_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2528_);
v___x_2530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2527_);
lean_ctor_set(v___x_2530_, 1, v___x_2529_);
lean_inc_ref(v___y_2510_);
v___x_2531_ = l_String_toListImpl(v___y_2510_);
v___x_2532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2531_);
lean_ctor_set(v___x_2532_, 1, v___y_2519_);
v___x_2533_ = lean_box(0);
v___x_2534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2532_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
v___x_2535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2530_);
lean_ctor_set(v___x_2535_, 1, v___x_2534_);
v___x_2536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2526_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
v___x_2537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2523_);
lean_ctor_set(v___x_2537_, 1, v___x_2536_);
v_entry_2538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_entry_2538_, 0, v___x_2520_);
lean_ctor_set(v_entry_2538_, 1, v___x_2537_);
v___x_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2539_, 0, v_entry_2538_);
v___x_2540_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___y_2502_);
v___x_2541_ = lp_lean_x2dftml_LeanFtml_eqSet(v___y_2509_, v___x_2540_, v___y_2508_);
v___x_2542_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2542_, 0, v___y_2511_);
lean_ctor_set(v___x_2542_, 1, v___y_2513_);
lean_ctor_set(v___x_2542_, 2, v___y_2514_);
lean_ctor_set(v___x_2542_, 3, v___y_2515_);
lean_ctor_set(v___x_2542_, 4, v___y_2505_);
lean_ctor_set(v___x_2542_, 5, v___y_2517_);
lean_ctor_set(v___x_2542_, 6, v___y_2507_);
lean_ctor_set(v___x_2542_, 7, v___y_2518_);
lean_ctor_set(v___x_2542_, 8, v___y_2512_);
lean_ctor_set(v___x_2542_, 9, v___x_2541_);
lean_ctor_set(v___x_2542_, 10, v___y_2516_);
lean_ctor_set(v___x_2542_, 11, v___y_2506_);
lean_ctor_set(v___x_2542_, 12, v___y_2504_);
v___x_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2539_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
return v___x_2543_;
}
v___jp_2544_:
{
lean_object* v_content_2561_; uint8_t v___x_2562_; 
v_content_2561_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_g3_2499_);
lean_inc(v_content_2561_);
v___x_2562_ = lp_lean_x2dftml_LeanFtml_mathGuard_go(v_content_2561_);
if (v___x_2562_ == 0)
{
lean_object* v_label_2563_; lean_object* v_attrs_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_dec_ref(v___y_2545_);
v_label_2563_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_2560_);
v_attrs_2564_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_g2_2498_);
v___x_2565_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathProcess___closed__7));
v___x_2566_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__8, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__8);
v___x_2567_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attrs_2564_, v___x_2566_);
lean_dec(v_attrs_2564_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v___x_2568_; 
v___x_2568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathProcess___closed__11, &lp_lean_x2dftml_LeanFtml_mathProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_mathProcess___closed__11);
v___y_2502_ = v_label_2563_;
v___y_2503_ = v_content_2561_;
v___y_2504_ = v___y_2546_;
v___y_2505_ = v___y_2547_;
v___y_2506_ = v___y_2548_;
v___y_2507_ = v___y_2549_;
v___y_2508_ = v___y_2550_;
v___y_2509_ = v___y_2551_;
v___y_2510_ = v___x_2565_;
v___y_2511_ = v___y_2552_;
v___y_2512_ = v___y_2553_;
v___y_2513_ = v___y_2554_;
v___y_2514_ = v___y_2555_;
v___y_2515_ = v___y_2556_;
v___y_2516_ = v___y_2557_;
v___y_2517_ = v___y_2558_;
v___y_2518_ = v___y_2559_;
v___y_2519_ = v___x_2568_;
goto v___jp_2501_;
}
else
{
lean_object* v_val_2569_; lean_object* v___x_2570_; 
v_val_2569_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_val_2569_);
lean_dec_ref_known(v___x_2567_, 1);
v___x_2570_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_2569_);
v___y_2502_ = v_label_2563_;
v___y_2503_ = v_content_2561_;
v___y_2504_ = v___y_2546_;
v___y_2505_ = v___y_2547_;
v___y_2506_ = v___y_2548_;
v___y_2507_ = v___y_2549_;
v___y_2508_ = v___y_2550_;
v___y_2509_ = v___y_2551_;
v___y_2510_ = v___x_2565_;
v___y_2511_ = v___y_2552_;
v___y_2512_ = v___y_2553_;
v___y_2513_ = v___y_2554_;
v___y_2514_ = v___y_2555_;
v___y_2515_ = v___y_2556_;
v___y_2516_ = v___y_2557_;
v___y_2517_ = v___y_2558_;
v___y_2518_ = v___y_2559_;
v___y_2519_ = v___x_2570_;
goto v___jp_2501_;
}
}
else
{
lean_object* v___x_2571_; lean_object* v___x_2572_; 
lean_dec(v_content_2561_);
lean_dec(v___y_2559_);
lean_dec(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec(v___y_2546_);
v___x_2571_ = lean_box(0);
v___x_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
lean_ctor_set(v___x_2572_, 1, v___y_2545_);
return v___x_2572_;
}
}
v_resetjp_2586_:
{
lean_object* v___y_2590_; 
if (lean_obj_tag(v_mathId_2581_) == 0)
{
lean_object* v___x_2599_; 
v___x_2599_ = lean_unsigned_to_nat(1u);
v___y_2590_ = v___x_2599_;
goto v___jp_2589_;
}
else
{
lean_object* v_val_2600_; 
v_val_2600_ = lean_ctor_get(v_mathId_2581_, 0);
lean_inc(v_val_2600_);
lean_dec_ref_known(v_mathId_2581_, 1);
v___y_2590_ = v_val_2600_;
goto v___jp_2589_;
}
v___jp_2589_:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v_doc1_2595_; 
v___x_2591_ = lean_unsigned_to_nat(1u);
v___x_2592_ = lean_nat_add(v___y_2590_, v___x_2591_);
v___x_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2592_);
lean_inc(v_scoredAnchors_2585_);
lean_inc(v_tabviewCounter_2584_);
lean_inc(v_collapsibleCount_2583_);
lean_inc(v_equations_2582_);
lean_inc_ref(v___x_2593_);
lean_inc(v_headlineId_2580_);
lean_inc(v_bibitemIds_2579_);
lean_inc(v_bibitems_2578_);
lean_inc(v_footnotes_2577_);
lean_inc(v_inclusionsNotExist_2576_);
lean_inc(v_inclusions_2575_);
lean_inc(v_site_2574_);
lean_inc_ref(v_page_2573_);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 8, v___x_2593_);
v_doc1_2595_ = v___x_2587_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_page_2573_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_site_2574_);
lean_ctor_set(v_reuseFailAlloc_2598_, 2, v_inclusions_2575_);
lean_ctor_set(v_reuseFailAlloc_2598_, 3, v_inclusionsNotExist_2576_);
lean_ctor_set(v_reuseFailAlloc_2598_, 4, v_footnotes_2577_);
lean_ctor_set(v_reuseFailAlloc_2598_, 5, v_bibitems_2578_);
lean_ctor_set(v_reuseFailAlloc_2598_, 6, v_bibitemIds_2579_);
lean_ctor_set(v_reuseFailAlloc_2598_, 7, v_headlineId_2580_);
lean_ctor_set(v_reuseFailAlloc_2598_, 8, v___x_2593_);
lean_ctor_set(v_reuseFailAlloc_2598_, 9, v_equations_2582_);
lean_ctor_set(v_reuseFailAlloc_2598_, 10, v_collapsibleCount_2583_);
lean_ctor_set(v_reuseFailAlloc_2598_, 11, v_tabviewCounter_2584_);
lean_ctor_set(v_reuseFailAlloc_2598_, 12, v_scoredAnchors_2585_);
v_doc1_2595_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
if (lean_obj_tag(v_g1_2497_) == 0)
{
lean_object* v___x_2596_; 
v___x_2596_ = lean_box(0);
v___y_2545_ = v_doc1_2595_;
v___y_2546_ = v_scoredAnchors_2585_;
v___y_2547_ = v_footnotes_2577_;
v___y_2548_ = v_tabviewCounter_2584_;
v___y_2549_ = v_bibitemIds_2579_;
v___y_2550_ = v___y_2590_;
v___y_2551_ = v_equations_2582_;
v___y_2552_ = v_page_2573_;
v___y_2553_ = v___x_2593_;
v___y_2554_ = v_site_2574_;
v___y_2555_ = v_inclusions_2575_;
v___y_2556_ = v_inclusionsNotExist_2576_;
v___y_2557_ = v_collapsibleCount_2583_;
v___y_2558_ = v_bibitems_2578_;
v___y_2559_ = v_headlineId_2580_;
v___y_2560_ = v___x_2596_;
goto v___jp_2544_;
}
else
{
lean_object* v_val_2597_; 
v_val_2597_ = lean_ctor_get(v_g1_2497_, 0);
v___y_2545_ = v_doc1_2595_;
v___y_2546_ = v_scoredAnchors_2585_;
v___y_2547_ = v_footnotes_2577_;
v___y_2548_ = v_tabviewCounter_2584_;
v___y_2549_ = v_bibitemIds_2579_;
v___y_2550_ = v___y_2590_;
v___y_2551_ = v_equations_2582_;
v___y_2552_ = v_page_2573_;
v___y_2553_ = v___x_2593_;
v___y_2554_ = v_site_2574_;
v___y_2555_ = v_inclusions_2575_;
v___y_2556_ = v_inclusionsNotExist_2576_;
v___y_2557_ = v_collapsibleCount_2583_;
v___y_2558_ = v_bibitems_2578_;
v___y_2559_ = v_headlineId_2580_;
v___y_2560_ = v_val_2597_;
goto v___jp_2544_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathProcess___boxed(lean_object* v_g1_2602_, lean_object* v_g2_2603_, lean_object* v_g3_2604_, lean_object* v_doc_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = lp_lean_x2dftml_LeanFtml_mathProcess(v_g1_2602_, v_g2_2603_, v_g3_2604_, v_doc_2605_);
lean_dec(v_g3_2604_);
lean_dec(v_g2_2603_);
lean_dec(v_g1_2602_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathScan(lean_object* v_input_2613_, lean_object* v_src_2614_, lean_object* v_prev_2615_, lean_object* v_toks_2616_, lean_object* v_doc_2617_, lean_object* v_x_2618_){
_start:
{
lean_object* v_zero_2626_; uint8_t v_isZero_2627_; 
v_zero_2626_ = lean_unsigned_to_nat(0u);
v_isZero_2627_ = lean_nat_dec_eq(v_x_2618_, v_zero_2626_);
if (v_isZero_2627_ == 1)
{
lean_dec(v_src_2614_);
lean_dec(v_input_2613_);
goto v___jp_2619_;
}
else
{
if (lean_obj_tag(v_src_2614_) == 0)
{
lean_dec(v_input_2613_);
goto v___jp_2619_;
}
else
{
lean_object* v_head_2628_; lean_object* v_tail_2629_; lean_object* v_one_2630_; lean_object* v_n_2631_; uint8_t v___y_2633_; 
v_head_2628_ = lean_ctor_get(v_src_2614_, 0);
v_tail_2629_ = lean_ctor_get(v_src_2614_, 1);
v_one_2630_ = lean_unsigned_to_nat(1u);
v_n_2631_ = lean_nat_sub(v_x_2618_, v_one_2630_);
if (lean_obj_tag(v_prev_2615_) == 0)
{
goto v___jp_2679_;
}
else
{
lean_object* v___x_2781_; uint8_t v___x_2782_; 
v___x_2781_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mathBody_spec__3___closed__0));
v___x_2782_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_2615_, v___x_2781_);
if (v___x_2782_ == 0)
{
uint8_t v___x_2783_; 
lean_inc(v_tail_2629_);
lean_inc(v_head_2628_);
lean_dec_ref_known(v_src_2614_, 2);
v___x_2783_ = 1;
v___y_2633_ = v___x_2783_;
goto v___jp_2632_;
}
else
{
goto v___jp_2679_;
}
}
v___jp_2632_:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v_snd_2636_; lean_object* v_snd_2637_; lean_object* v_snd_2638_; uint8_t v___x_2639_; 
lean_inc(v_head_2628_);
v___x_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2634_, 0, v_head_2628_);
lean_inc(v_input_2613_);
v___x_2635_ = lp_lean_x2dftml_LeanFtml_mathScan(v_input_2613_, v_tail_2629_, v___x_2634_, v_toks_2616_, v_doc_2617_, v_n_2631_);
lean_dec(v_n_2631_);
lean_dec_ref_known(v___x_2634_, 1);
v_snd_2636_ = lean_ctor_get(v___x_2635_, 1);
lean_inc(v_snd_2636_);
v_snd_2637_ = lean_ctor_get(v_snd_2636_, 1);
lean_inc(v_snd_2637_);
v_snd_2638_ = lean_ctor_get(v_snd_2637_, 1);
v___x_2639_ = lean_unbox(v_snd_2638_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2648_; 
lean_dec(v_input_2613_);
v_isSharedCheck_2648_ = !lean_is_exclusive(v_snd_2637_);
if (v_isSharedCheck_2648_ == 0)
{
lean_object* v_unused_2649_; lean_object* v_unused_2650_; 
v_unused_2649_ = lean_ctor_get(v_snd_2637_, 1);
lean_dec(v_unused_2649_);
v_unused_2650_ = lean_ctor_get(v_snd_2637_, 0);
lean_dec(v_unused_2650_);
v___x_2641_ = v_snd_2637_;
v_isShared_2642_ = v_isSharedCheck_2648_;
goto v_resetjp_2640_;
}
else
{
lean_dec(v_snd_2637_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2648_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v_fst_2643_; lean_object* v___x_2644_; lean_object* v___x_2646_; 
v_fst_2643_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_fst_2643_);
lean_dec_ref(v___x_2635_);
v___x_2644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2644_, 0, v_head_2628_);
lean_ctor_set(v___x_2644_, 1, v_fst_2643_);
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 1, v_snd_2636_);
lean_ctor_set(v___x_2641_, 0, v___x_2644_);
v___x_2646_ = v___x_2641_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v___x_2644_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v_snd_2636_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
else
{
lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2676_; 
lean_dec(v_head_2628_);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2676_ == 0)
{
lean_object* v_unused_2677_; lean_object* v_unused_2678_; 
v_unused_2677_ = lean_ctor_get(v___x_2635_, 1);
lean_dec(v_unused_2677_);
v_unused_2678_ = lean_ctor_get(v___x_2635_, 0);
lean_dec(v_unused_2678_);
v___x_2652_ = v___x_2635_;
v_isShared_2653_ = v_isSharedCheck_2676_;
goto v_resetjp_2651_;
}
else
{
lean_dec(v___x_2635_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2676_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v_fst_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2674_; 
v_fst_2654_ = lean_ctor_get(v_snd_2636_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v_snd_2636_);
if (v_isSharedCheck_2674_ == 0)
{
lean_object* v_unused_2675_; 
v_unused_2675_ = lean_ctor_get(v_snd_2636_, 1);
lean_dec(v_unused_2675_);
v___x_2656_ = v_snd_2636_;
v_isShared_2657_ = v_isSharedCheck_2674_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_fst_2654_);
lean_dec(v_snd_2636_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2674_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v_fst_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2672_; 
v_fst_2658_ = lean_ctor_get(v_snd_2637_, 0);
v_isSharedCheck_2672_ = !lean_is_exclusive(v_snd_2637_);
if (v_isSharedCheck_2672_ == 0)
{
lean_object* v_unused_2673_; 
v_unused_2673_ = lean_ctor_get(v_snd_2637_, 1);
lean_dec(v_unused_2673_);
v___x_2660_ = v_snd_2637_;
v_isShared_2661_ = v_isSharedCheck_2672_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_fst_2658_);
lean_dec(v_snd_2637_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2672_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2662_; lean_object* v___x_2664_; 
v___x_2662_ = lean_box(v___y_2633_);
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v___x_2662_);
v___x_2664_ = v___x_2660_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v_fst_2658_);
lean_ctor_set(v_reuseFailAlloc_2671_, 1, v___x_2662_);
v___x_2664_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
lean_object* v___x_2666_; 
if (v_isShared_2657_ == 0)
{
lean_ctor_set(v___x_2656_, 1, v___x_2664_);
v___x_2666_ = v___x_2656_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_fst_2654_);
lean_ctor_set(v_reuseFailAlloc_2670_, 1, v___x_2664_);
v___x_2666_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
lean_object* v___x_2668_; 
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 1, v___x_2666_);
lean_ctor_set(v___x_2652_, 0, v_input_2613_);
v___x_2668_ = v___x_2652_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_input_2613_);
lean_ctor_set(v_reuseFailAlloc_2669_, 1, v___x_2666_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
}
}
}
}
}
v___jp_2679_:
{
uint8_t v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v___x_2680_ = 1;
v___x_2681_ = l_List_lengthTR___redArg(v_src_2614_);
v___x_2682_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_2681_);
lean_dec(v___x_2681_);
lean_inc_ref(v_src_2614_);
v___x_2683_ = lp_lean_x2dftml_LeanFtml_mathPattern(v_src_2614_, v___x_2680_, v___x_2682_);
lean_dec(v___x_2682_);
v___x_2684_ = l_List_head_x3f___redArg(v___x_2683_);
lean_dec(v___x_2683_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_inc(v_tail_2629_);
lean_inc(v_head_2628_);
lean_dec_ref_known(v_src_2614_, 2);
v___y_2633_ = v___x_2680_;
goto v___jp_2632_;
}
else
{
lean_object* v_val_2685_; lean_object* v_snd_2686_; lean_object* v_snd_2687_; lean_object* v_fst_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2779_; 
v_val_2685_ = lean_ctor_get(v___x_2684_, 0);
lean_inc(v_val_2685_);
lean_dec_ref_known(v___x_2684_, 1);
v_snd_2686_ = lean_ctor_get(v_val_2685_, 1);
lean_inc(v_snd_2686_);
v_snd_2687_ = lean_ctor_get(v_snd_2686_, 1);
lean_inc(v_snd_2687_);
v_fst_2688_ = lean_ctor_get(v_val_2685_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v_val_2685_);
if (v_isSharedCheck_2779_ == 0)
{
lean_object* v_unused_2780_; 
v_unused_2780_ = lean_ctor_get(v_val_2685_, 1);
lean_dec(v_unused_2780_);
v___x_2690_ = v_val_2685_;
v_isShared_2691_ = v_isSharedCheck_2779_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_fst_2688_);
lean_dec(v_val_2685_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2779_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v_fst_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2777_; 
v_fst_2692_ = lean_ctor_get(v_snd_2686_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v_snd_2686_);
if (v_isSharedCheck_2777_ == 0)
{
lean_object* v_unused_2778_; 
v_unused_2778_ = lean_ctor_get(v_snd_2686_, 1);
lean_dec(v_unused_2778_);
v___x_2694_ = v_snd_2686_;
v_isShared_2695_ = v_isSharedCheck_2777_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_fst_2692_);
lean_dec(v_snd_2686_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2777_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v_fst_2696_; lean_object* v_snd_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2776_; 
v_fst_2696_ = lean_ctor_get(v_snd_2687_, 0);
v_snd_2697_ = lean_ctor_get(v_snd_2687_, 1);
v_isSharedCheck_2776_ = !lean_is_exclusive(v_snd_2687_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2699_ = v_snd_2687_;
v_isShared_2700_ = v_isSharedCheck_2776_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_snd_2697_);
lean_inc(v_fst_2696_);
lean_dec(v_snd_2687_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2776_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2701_; lean_object* v_fst_2702_; 
v___x_2701_ = lp_lean_x2dftml_LeanFtml_mathProcess(v_fst_2688_, v_fst_2692_, v_fst_2696_, v_doc_2617_);
lean_dec(v_fst_2696_);
lean_dec(v_fst_2692_);
lean_dec(v_fst_2688_);
v_fst_2702_ = lean_ctor_get(v___x_2701_, 0);
if (lean_obj_tag(v_fst_2702_) == 0)
{
lean_object* v_snd_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2717_; 
lean_dec(v_snd_2697_);
lean_del_object(v___x_2690_);
lean_dec(v_n_2631_);
lean_dec_ref_known(v_src_2614_, 2);
v_snd_2703_ = lean_ctor_get(v___x_2701_, 1);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2717_ == 0)
{
lean_object* v_unused_2718_; 
v_unused_2718_ = lean_ctor_get(v___x_2701_, 0);
lean_dec(v_unused_2718_);
v___x_2705_ = v___x_2701_;
v_isShared_2706_ = v_isSharedCheck_2717_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_snd_2703_);
lean_dec(v___x_2701_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2717_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2707_; lean_object* v___x_2709_; 
v___x_2707_ = lean_box(v___x_2680_);
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 1, v___x_2707_);
lean_ctor_set(v___x_2705_, 0, v_snd_2703_);
v___x_2709_ = v___x_2705_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_snd_2703_);
lean_ctor_set(v_reuseFailAlloc_2716_, 1, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
lean_object* v___x_2711_; 
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 1, v___x_2709_);
lean_ctor_set(v___x_2699_, 0, v_toks_2616_);
v___x_2711_ = v___x_2699_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_toks_2616_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v___x_2709_);
v___x_2711_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
lean_object* v___x_2713_; 
if (v_isShared_2695_ == 0)
{
lean_ctor_set(v___x_2694_, 1, v___x_2711_);
lean_ctor_set(v___x_2694_, 0, v_input_2613_);
v___x_2713_ = v___x_2694_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_input_2613_);
lean_ctor_set(v_reuseFailAlloc_2714_, 1, v___x_2711_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
else
{
lean_object* v_snd_2719_; lean_object* v_val_2720_; lean_object* v___x_2721_; lean_object* v___x_2723_; 
lean_inc_ref(v_fst_2702_);
lean_del_object(v___x_2699_);
lean_del_object(v___x_2694_);
v_snd_2719_ = lean_ctor_get(v___x_2701_, 1);
lean_inc(v_snd_2719_);
lean_dec_ref(v___x_2701_);
v_val_2720_ = lean_ctor_get(v_fst_2702_, 0);
lean_inc(v_val_2720_);
lean_dec_ref_known(v_fst_2702_, 1);
v___x_2721_ = lean_box(0);
if (v_isShared_2691_ == 0)
{
lean_ctor_set_tag(v___x_2690_, 1);
lean_ctor_set(v___x_2690_, 1, v___x_2721_);
lean_ctor_set(v___x_2690_, 0, v_val_2720_);
v___x_2723_ = v___x_2690_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_val_2720_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v___x_2721_);
v___x_2723_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
lean_object* v_t1_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v_snd_2727_; lean_object* v_snd_2728_; lean_object* v_snd_2729_; uint8_t v___x_2730_; 
lean_inc(v_toks_2616_);
v_t1_2724_ = l_List_appendTR___redArg(v_toks_2616_, v___x_2723_);
v___x_2725_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_2614_, v_snd_2697_);
lean_inc(v_input_2613_);
v___x_2726_ = lp_lean_x2dftml_LeanFtml_mathScan(v_input_2613_, v_snd_2697_, v___x_2725_, v_t1_2724_, v_snd_2719_, v_n_2631_);
lean_dec(v_n_2631_);
lean_dec(v___x_2725_);
v_snd_2727_ = lean_ctor_get(v___x_2726_, 1);
lean_inc(v_snd_2727_);
v_snd_2728_ = lean_ctor_get(v_snd_2727_, 1);
lean_inc(v_snd_2728_);
v_snd_2729_ = lean_ctor_get(v_snd_2728_, 1);
v___x_2730_ = lean_unbox(v_snd_2729_);
if (v___x_2730_ == 0)
{
lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2744_; 
lean_dec(v_input_2613_);
v_isSharedCheck_2744_ = !lean_is_exclusive(v_snd_2728_);
if (v_isSharedCheck_2744_ == 0)
{
lean_object* v_unused_2745_; lean_object* v_unused_2746_; 
v_unused_2745_ = lean_ctor_get(v_snd_2728_, 1);
lean_dec(v_unused_2745_);
v_unused_2746_ = lean_ctor_get(v_snd_2728_, 0);
lean_dec(v_unused_2746_);
v___x_2732_ = v_snd_2728_;
v_isShared_2733_ = v_isSharedCheck_2744_;
goto v_resetjp_2731_;
}
else
{
lean_dec(v_snd_2728_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2744_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v_fst_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v_repl_2739_; lean_object* v___x_2740_; lean_object* v___x_2742_; 
v_fst_2734_ = lean_ctor_get(v___x_2726_, 0);
lean_inc(v_fst_2734_);
lean_dec_ref(v___x_2726_);
v___x_2735_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathScan___closed__1));
v___x_2736_ = l_List_lengthTR___redArg(v_toks_2616_);
lean_dec(v_toks_2616_);
v___x_2737_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_2736_);
v___x_2738_ = l_List_appendTR___redArg(v___x_2735_, v___x_2737_);
v_repl_2739_ = l_List_appendTR___redArg(v___x_2738_, v___x_2735_);
v___x_2740_ = l_List_appendTR___redArg(v_repl_2739_, v_fst_2734_);
if (v_isShared_2733_ == 0)
{
lean_ctor_set(v___x_2732_, 1, v_snd_2727_);
lean_ctor_set(v___x_2732_, 0, v___x_2740_);
v___x_2742_ = v___x_2732_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v___x_2740_);
lean_ctor_set(v_reuseFailAlloc_2743_, 1, v_snd_2727_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
else
{
lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2772_; 
lean_dec(v_toks_2616_);
v_isSharedCheck_2772_ = !lean_is_exclusive(v___x_2726_);
if (v_isSharedCheck_2772_ == 0)
{
lean_object* v_unused_2773_; lean_object* v_unused_2774_; 
v_unused_2773_ = lean_ctor_get(v___x_2726_, 1);
lean_dec(v_unused_2773_);
v_unused_2774_ = lean_ctor_get(v___x_2726_, 0);
lean_dec(v_unused_2774_);
v___x_2748_ = v___x_2726_;
v_isShared_2749_ = v_isSharedCheck_2772_;
goto v_resetjp_2747_;
}
else
{
lean_dec(v___x_2726_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2772_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v_fst_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2770_; 
v_fst_2750_ = lean_ctor_get(v_snd_2727_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v_snd_2727_);
if (v_isSharedCheck_2770_ == 0)
{
lean_object* v_unused_2771_; 
v_unused_2771_ = lean_ctor_get(v_snd_2727_, 1);
lean_dec(v_unused_2771_);
v___x_2752_ = v_snd_2727_;
v_isShared_2753_ = v_isSharedCheck_2770_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_fst_2750_);
lean_dec(v_snd_2727_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2770_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v_fst_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2768_; 
v_fst_2754_ = lean_ctor_get(v_snd_2728_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v_snd_2728_);
if (v_isSharedCheck_2768_ == 0)
{
lean_object* v_unused_2769_; 
v_unused_2769_ = lean_ctor_get(v_snd_2728_, 1);
lean_dec(v_unused_2769_);
v___x_2756_ = v_snd_2728_;
v_isShared_2757_ = v_isSharedCheck_2768_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_fst_2754_);
lean_dec(v_snd_2728_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2768_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2760_; 
v___x_2758_ = lean_box(v___x_2680_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 1, v___x_2758_);
v___x_2760_ = v___x_2756_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_fst_2754_);
lean_ctor_set(v_reuseFailAlloc_2767_, 1, v___x_2758_);
v___x_2760_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
lean_object* v___x_2762_; 
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 1, v___x_2760_);
v___x_2762_ = v___x_2752_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_fst_2750_);
lean_ctor_set(v_reuseFailAlloc_2766_, 1, v___x_2760_);
v___x_2762_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
lean_object* v___x_2764_; 
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 1, v___x_2762_);
lean_ctor_set(v___x_2748_, 0, v_input_2613_);
v___x_2764_ = v___x_2748_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_input_2613_);
lean_ctor_set(v_reuseFailAlloc_2765_, 1, v___x_2762_);
v___x_2764_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
return v___x_2764_;
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
v___jp_2619_:
{
lean_object* v___x_2620_; uint8_t v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2620_ = lean_box(0);
v___x_2621_ = 0;
v___x_2622_ = lean_box(v___x_2621_);
v___x_2623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2623_, 0, v_doc_2617_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
v___x_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2624_, 0, v_toks_2616_);
lean_ctor_set(v___x_2624_, 1, v___x_2623_);
v___x_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2620_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
return v___x_2625_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathScan___boxed(lean_object* v_input_2784_, lean_object* v_src_2785_, lean_object* v_prev_2786_, lean_object* v_toks_2787_, lean_object* v_doc_2788_, lean_object* v_x_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = lp_lean_x2dftml_LeanFtml_mathScan(v_input_2784_, v_src_2785_, v_prev_2786_, v_toks_2787_, v_doc_2788_, v_x_2789_);
lean_dec(v_x_2789_);
lean_dec(v_prev_2786_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathRule(lean_object* v_st_2791_){
_start:
{
lean_object* v_work_2792_; lean_object* v_tokens_2793_; lean_object* v_doc_2794_; uint8_t v_fatal_2795_; lean_object* v_continuedDivLeads_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2820_; 
v_work_2792_ = lean_ctor_get(v_st_2791_, 0);
v_tokens_2793_ = lean_ctor_get(v_st_2791_, 1);
v_doc_2794_ = lean_ctor_get(v_st_2791_, 2);
v_fatal_2795_ = lean_ctor_get_uint8(v_st_2791_, sizeof(void*)*4);
v_continuedDivLeads_2796_ = lean_ctor_get(v_st_2791_, 3);
v_isSharedCheck_2820_ = !lean_is_exclusive(v_st_2791_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2798_ = v_st_2791_;
v_isShared_2799_ = v_isSharedCheck_2820_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_continuedDivLeads_2796_);
lean_inc(v_doc_2794_);
lean_inc(v_tokens_2793_);
lean_inc(v_work_2792_);
lean_dec(v_st_2791_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2820_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v_input_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v_snd_2806_; lean_object* v_snd_2807_; lean_object* v_fst_2808_; lean_object* v_fst_2809_; lean_object* v_fst_2810_; lean_object* v_snd_2811_; lean_object* v___x_2812_; 
v_input_2800_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_2792_);
v___x_2801_ = lean_box(0);
v___x_2802_ = l_List_lengthTR___redArg(v_input_2800_);
v___x_2803_ = lean_unsigned_to_nat(1u);
v___x_2804_ = lean_nat_add(v___x_2802_, v___x_2803_);
lean_dec(v___x_2802_);
lean_inc(v_input_2800_);
v___x_2805_ = lp_lean_x2dftml_LeanFtml_mathScan(v_input_2800_, v_input_2800_, v___x_2801_, v_tokens_2793_, v_doc_2794_, v___x_2804_);
lean_dec(v___x_2804_);
v_snd_2806_ = lean_ctor_get(v___x_2805_, 1);
lean_inc(v_snd_2806_);
v_snd_2807_ = lean_ctor_get(v_snd_2806_, 1);
lean_inc(v_snd_2807_);
v_fst_2808_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_fst_2808_);
lean_dec_ref(v___x_2805_);
v_fst_2809_ = lean_ctor_get(v_snd_2806_, 0);
lean_inc(v_fst_2809_);
lean_dec(v_snd_2806_);
v_fst_2810_ = lean_ctor_get(v_snd_2807_, 0);
lean_inc(v_fst_2810_);
v_snd_2811_ = lean_ctor_get(v_snd_2807_, 1);
lean_inc(v_snd_2811_);
lean_dec(v_snd_2807_);
v___x_2812_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_2808_);
if (v_fatal_2795_ == 0)
{
lean_object* v___x_2814_; 
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 2, v_fst_2810_);
lean_ctor_set(v___x_2798_, 1, v_fst_2809_);
lean_ctor_set(v___x_2798_, 0, v___x_2812_);
v___x_2814_ = v___x_2798_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v___x_2812_);
lean_ctor_set(v_reuseFailAlloc_2816_, 1, v_fst_2809_);
lean_ctor_set(v_reuseFailAlloc_2816_, 2, v_fst_2810_);
lean_ctor_set(v_reuseFailAlloc_2816_, 3, v_continuedDivLeads_2796_);
v___x_2814_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
uint8_t v___x_2815_; 
v___x_2815_ = lean_unbox(v_snd_2811_);
lean_dec(v_snd_2811_);
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*4, v___x_2815_);
return v___x_2814_;
}
}
else
{
lean_object* v___x_2818_; 
lean_dec(v_snd_2811_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 2, v_fst_2810_);
lean_ctor_set(v___x_2798_, 1, v_fst_2809_);
lean_ctor_set(v___x_2798_, 0, v___x_2812_);
v___x_2818_ = v___x_2798_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v___x_2812_);
lean_ctor_set(v_reuseFailAlloc_2819_, 1, v_fst_2809_);
lean_ctor_set(v_reuseFailAlloc_2819_, 2, v_fst_2810_);
lean_ctor_set(v_reuseFailAlloc_2819_, 3, v_continuedDivLeads_2796_);
lean_ctor_set_uint8(v_reuseFailAlloc_2819_, sizeof(void*)*4, v_fatal_2795_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
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
