// Lean compiler output
// Module: LeanFtml.ModuleRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isTrimByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isTrimByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimBytes_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimBytes_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimBytes___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isModuleNameByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isModuleNameByte___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_findSubCI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_findSubCI___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_findSubCI___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCI___boxed(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_close2Suffixes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_moduleHead_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_moduleHead_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_moduleHead_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleHead(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleHead___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastConsumedByte(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastConsumedByte___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_claimModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "moduleName"};
static const lean_object* lp_lean_x2dftml_LeanFtml_claimModule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_claimModule___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimModule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimModule___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_claimModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_claimModule___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_claimModule___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimModule___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimModule___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_claimModule___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "module_body"};
static const lean_object* lp_lean_x2dftml_LeanFtml_claimModule___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_claimModule___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimModule___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimModule___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleTail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[[/module]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleTail___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleTail___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleTail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleTail___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleTail(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleTail___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Tail(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Tail___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[[module654"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[module"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewrite654Prefix(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteModulePrefix(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_spacesThenNewline(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spacesThenNewline___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_moduleHeadEnd_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_moduleHeadEnd_spec__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleHeadEnd(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlines(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countModuleOpeners(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreMatch(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesContain(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesContain___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_bodyHasCodeToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bodyHasCodeToken___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bodyHasCodeToken___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bodyHasCodeToken(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bodyHasCodeToken___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleTryCands(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleMatch(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_module654TryCands___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Module654"};
static const lean_object* lp_lean_x2dftml_LeanFtml_module654TryCands___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_module654TryCands___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654TryCands(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654TryCands___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Match(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_modulepreRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_modulepreRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_modulepreRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_modulepreRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleScanPass(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleScanPass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulePasses(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_moduleRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_moduleRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Scan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Scan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Rule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_module654Rule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_module654Rule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_module654Rule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_module654Rule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Rule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object* v_s_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_2_ = l_String_toListImpl(v_s_1_);
v___x_3_ = lean_box(0);
v___x_4_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_2_, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isTrimByte(lean_object* v_b_5_){
_start:
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = lean_unsigned_to_nat(32u);
v___x_7_ = lean_nat_dec_eq(v_b_5_, v___x_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_8_ = lean_unsigned_to_nat(9u);
v___x_9_ = lean_nat_dec_eq(v_b_5_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(10u);
v___x_11_ = lean_nat_dec_eq(v_b_5_, v___x_10_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; uint8_t v___x_13_; 
v___x_12_ = lean_unsigned_to_nat(13u);
v___x_13_ = lean_nat_dec_eq(v_b_5_, v___x_12_);
if (v___x_13_ == 0)
{
lean_object* v___x_14_; uint8_t v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_nat_dec_eq(v_b_5_, v___x_14_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(11u);
v___x_17_ = lean_nat_dec_eq(v_b_5_, v___x_16_);
return v___x_17_;
}
else
{
return v___x_15_;
}
}
else
{
return v___x_13_;
}
}
else
{
return v___x_11_;
}
}
else
{
return v___x_9_;
}
}
else
{
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isTrimByte___boxed(lean_object* v_b_18_){
_start:
{
uint8_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = lp_lean_x2dftml_LeanFtml_isTrimByte(v_b_18_);
lean_dec(v_b_18_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimBytes_spec__0(lean_object* v_x_21_){
_start:
{
if (lean_obj_tag(v_x_21_) == 0)
{
return v_x_21_;
}
else
{
lean_object* v_head_22_; lean_object* v_tail_23_; uint8_t v___x_24_; 
v_head_22_ = lean_ctor_get(v_x_21_, 0);
v_tail_23_ = lean_ctor_get(v_x_21_, 1);
v___x_24_ = lp_lean_x2dftml_LeanFtml_isTrimByte(v_head_22_);
if (v___x_24_ == 0)
{
lean_inc_ref(v_x_21_);
return v_x_21_;
}
else
{
v_x_21_ = v_tail_23_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimBytes_spec__0___boxed(lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimBytes_spec__0(v_x_26_);
lean_dec(v_x_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object* v_bs_28_){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_29_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimBytes_spec__0(v_bs_28_);
v___x_30_ = l_List_reverse___redArg(v___x_29_);
v___x_31_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimBytes_spec__0(v___x_30_);
lean_dec(v___x_30_);
v___x_32_ = l_List_reverse___redArg(v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimBytes___boxed(lean_object* v_bs_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_bs_33_);
lean_dec(v_bs_33_);
return v_res_34_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isModuleNameByte(lean_object* v_b_35_){
_start:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = lean_unsigned_to_nat(97u);
v___x_54_ = lean_nat_dec_le(v___x_53_, v_b_35_);
if (v___x_54_ == 0)
{
goto v___jp_48_;
}
else
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = lean_unsigned_to_nat(122u);
v___x_56_ = lean_nat_dec_le(v_b_35_, v___x_55_);
if (v___x_56_ == 0)
{
goto v___jp_48_;
}
else
{
return v___x_56_;
}
}
v___jp_36_:
{
lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(95u);
v___x_38_ = lean_nat_dec_eq(v_b_35_, v___x_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(45u);
v___x_40_ = lean_nat_dec_eq(v_b_35_, v___x_39_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(47u);
v___x_42_ = lean_nat_dec_eq(v_b_35_, v___x_41_);
return v___x_42_;
}
else
{
return v___x_40_;
}
}
else
{
return v___x_38_;
}
}
v___jp_43_:
{
lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_44_ = lean_unsigned_to_nat(48u);
v___x_45_ = lean_nat_dec_le(v___x_44_, v_b_35_);
if (v___x_45_ == 0)
{
goto v___jp_36_;
}
else
{
lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_46_ = lean_unsigned_to_nat(57u);
v___x_47_ = lean_nat_dec_le(v_b_35_, v___x_46_);
if (v___x_47_ == 0)
{
goto v___jp_36_;
}
else
{
return v___x_47_;
}
}
}
v___jp_48_:
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(65u);
v___x_50_ = lean_nat_dec_le(v___x_49_, v_b_35_);
if (v___x_50_ == 0)
{
goto v___jp_43_;
}
else
{
lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(90u);
v___x_52_ = lean_nat_dec_le(v_b_35_, v___x_51_);
if (v___x_52_ == 0)
{
goto v___jp_43_;
}
else
{
return v___x_52_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isModuleNameByte___boxed(lean_object* v_b_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = lp_lean_x2dftml_LeanFtml_isModuleNameByte(v_b_57_);
lean_dec(v_b_57_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCI(lean_object* v_pat_62_, lean_object* v_x_63_){
_start:
{
if (lean_obj_tag(v_x_63_) == 0)
{
uint8_t v___x_64_; 
v___x_64_ = l_List_isEmpty___redArg(v_pat_62_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; 
v___x_65_ = lean_box(0);
return v___x_65_;
}
else
{
lean_object* v___x_66_; 
v___x_66_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubCI___closed__0));
return v___x_66_;
}
}
else
{
lean_object* v_tail_67_; lean_object* v___x_68_; 
v_tail_67_ = lean_ctor_get(v_x_63_, 1);
lean_inc(v_tail_67_);
v___x_68_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_pat_62_, v_x_63_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v___x_69_; 
v___x_69_ = lp_lean_x2dftml_LeanFtml_findSubCI(v_pat_62_, v_tail_67_);
if (lean_obj_tag(v___x_69_) == 0)
{
return v___x_69_;
}
else
{
lean_object* v_val_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_79_; 
v_val_70_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_79_ == 0)
{
v___x_72_ = v___x_69_;
v_isShared_73_ = v_isSharedCheck_79_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_val_70_);
lean_dec(v___x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_79_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_74_ = lean_unsigned_to_nat(1u);
v___x_75_ = lean_nat_add(v_val_70_, v___x_74_);
lean_dec(v_val_70_);
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 0, v___x_75_);
v___x_77_ = v___x_72_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
else
{
lean_object* v___x_80_; 
lean_dec_ref_known(v___x_68_, 1);
lean_dec(v_tail_67_);
v___x_80_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSubCI___closed__0));
return v___x_80_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCI___boxed(lean_object* v_pat_81_, lean_object* v_x_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = lp_lean_x2dftml_LeanFtml_findSubCI(v_pat_81_, v_x_82_);
lean_dec(v_pat_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_close2Suffixes(lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_92_) == 0)
{
lean_object* v___x_93_; 
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v_tail_94_; lean_object* v___y_96_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v_tail_94_ = lean_ctor_get(v_x_92_, 1);
lean_inc(v_tail_94_);
v___x_99_ = lean_unsigned_to_nat(2u);
v___x_100_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc_ref(v_x_92_);
v___x_101_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_x_92_, v_x_92_, v___x_99_, v___x_100_);
v___x_102_ = lean_box(0);
v___x_103_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__2));
v___x_104_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_101_, v___x_103_);
lean_dec(v___x_101_);
if (v___x_104_ == 0)
{
lean_dec_ref_known(v_x_92_, 2);
v___y_96_ = v___x_102_;
goto v___jp_95_;
}
else
{
lean_object* v___x_105_; 
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v_x_92_);
lean_ctor_set(v___x_105_, 1, v___x_102_);
v___y_96_ = v___x_105_;
goto v___jp_95_;
}
v___jp_95_:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lp_lean_x2dftml_LeanFtml_close2Suffixes(v_tail_94_);
v___x_98_ = l_List_appendTR___redArg(v___y_96_, v___x_97_);
return v___x_98_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_moduleHead_spec__1(lean_object* v_rest3_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
if (lean_obj_tag(v_a_107_) == 0)
{
lean_object* v___x_109_; 
lean_dec(v_rest3_106_);
v___x_109_ = l_List_reverse___redArg(v_a_108_);
return v___x_109_;
}
else
{
lean_object* v_head_110_; lean_object* v_tail_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_127_; 
v_head_110_ = lean_ctor_get(v_a_107_, 0);
v_tail_111_ = lean_ctor_get(v_a_107_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_a_107_);
if (v_isSharedCheck_127_ == 0)
{
v___x_113_ = v_a_107_;
v_isShared_114_ = v_isSharedCheck_127_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_tail_111_);
lean_inc(v_head_110_);
lean_dec(v_a_107_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_127_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_124_; 
v___x_115_ = l_List_lengthTR___redArg(v_rest3_106_);
v___x_116_ = l_List_lengthTR___redArg(v_head_110_);
v___x_117_ = lean_nat_sub(v___x_115_, v___x_116_);
lean_dec(v___x_116_);
lean_dec(v___x_115_);
v___x_118_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_rest3_106_);
v___x_119_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_rest3_106_, v_rest3_106_, v___x_117_, v___x_118_);
v___x_120_ = lean_unsigned_to_nat(2u);
v___x_121_ = l_List_drop___redArg(v___x_120_, v_head_110_);
lean_dec(v_head_110_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v_a_108_);
lean_ctor_set(v___x_113_, 0, v___x_122_);
v___x_124_ = v___x_113_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_122_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_a_108_);
v___x_124_ = v_reuseFailAlloc_126_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
v_a_107_ = v_tail_111_;
v_a_108_ = v___x_124_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_moduleHead_spec__0(lean_object* v_l_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
if (lean_obj_tag(v_a_129_) == 0)
{
lean_dec_ref(v_a_130_);
lean_inc(v_l_128_);
return v_l_128_;
}
else
{
lean_object* v_head_131_; lean_object* v_tail_132_; uint8_t v___x_133_; 
v_head_131_ = lean_ctor_get(v_a_129_, 0);
lean_inc(v_head_131_);
v_tail_132_ = lean_ctor_get(v_a_129_, 1);
lean_inc(v_tail_132_);
lean_dec_ref_known(v_a_129_, 2);
v___x_133_ = lp_lean_x2dftml_LeanFtml_isModuleNameByte(v_head_131_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
lean_dec(v_tail_132_);
lean_dec(v_head_131_);
v___x_134_ = lean_array_to_list(v_a_130_);
return v___x_134_;
}
else
{
lean_object* v___x_135_; 
v___x_135_ = lean_array_push(v_a_130_, v_head_131_);
v_a_129_ = v_tail_132_;
v_a_130_ = v___x_135_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_moduleHead_spec__0___boxed(lean_object* v_l_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_moduleHead_spec__0(v_l_137_, v_a_138_, v_a_139_);
lean_dec(v_l_137_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleHead(lean_object* v_lit_141_, lean_object* v_src_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_lit_141_, v_src_142_);
if (lean_obj_tag(v___x_143_) == 0)
{
lean_object* v___x_144_; 
v___x_144_ = lean_box(0);
return v___x_144_;
}
else
{
lean_object* v_val_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_201_; 
v_val_145_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_201_ == 0)
{
v___x_147_ = v___x_143_;
v_isShared_148_ = v_isSharedCheck_201_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_val_145_);
lean_dec(v___x_143_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_201_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
if (lean_obj_tag(v_val_145_) == 0)
{
lean_object* v___x_149_; 
lean_del_object(v___x_147_);
v___x_149_ = lean_box(0);
return v___x_149_;
}
else
{
lean_object* v_head_150_; lean_object* v_tail_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_200_; 
v_head_150_ = lean_ctor_get(v_val_145_, 0);
v_tail_151_ = lean_ctor_get(v_val_145_, 1);
v_isSharedCheck_200_ = !lean_is_exclusive(v_val_145_);
if (v_isSharedCheck_200_ == 0)
{
v___x_153_ = v_val_145_;
v_isShared_154_ = v_isSharedCheck_200_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_tail_151_);
lean_inc(v_head_150_);
lean_dec(v_val_145_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_200_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
uint8_t v___x_155_; 
v___x_155_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_150_);
lean_dec(v_head_150_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
lean_del_object(v___x_153_);
lean_dec(v_tail_151_);
lean_del_object(v___x_147_);
v___x_156_ = lean_box(0);
return v___x_156_;
}
else
{
lean_object* v___x_157_; lean_object* v_name_158_; uint8_t v___x_159_; 
v___x_157_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_tail_151_);
v_name_158_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_moduleHead_spec__0(v_tail_151_, v_tail_151_, v___x_157_);
v___x_159_ = l_List_isEmpty___redArg(v_name_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v_rest3_161_; 
v___x_160_ = l_List_lengthTR___redArg(v_name_158_);
v_rest3_161_ = l_List_drop___redArg(v___x_160_, v_tail_151_);
lean_dec(v_tail_151_);
if (lean_obj_tag(v_rest3_161_) == 0)
{
lean_object* v___x_162_; 
lean_dec(v_name_158_);
lean_del_object(v___x_153_);
lean_del_object(v___x_147_);
v___x_162_ = lean_box(0);
return v___x_162_;
}
else
{
lean_object* v_head_163_; uint8_t v___x_164_; 
v_head_163_ = lean_ctor_get(v_rest3_161_, 0);
v___x_164_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_165_ = lean_unsigned_to_nat(2u);
lean_inc_ref(v_rest3_161_);
v___x_166_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_rest3_161_, v_rest3_161_, v___x_165_, v___x_157_);
v___x_167_ = lean_box(0);
v___x_168_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__2));
v___x_169_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_166_, v___x_168_);
lean_dec(v___x_166_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; 
lean_dec_ref_known(v_rest3_161_, 2);
lean_dec(v_name_158_);
lean_del_object(v___x_153_);
lean_del_object(v___x_147_);
v___x_170_ = lean_box(0);
return v___x_170_;
}
else
{
lean_object* v___x_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_185_; 
v___x_171_ = l_List_drop___redArg(v___x_165_, v_rest3_161_);
v_isSharedCheck_185_ = !lean_is_exclusive(v_rest3_161_);
if (v_isSharedCheck_185_ == 0)
{
lean_object* v_unused_186_; lean_object* v_unused_187_; 
v_unused_186_ = lean_ctor_get(v_rest3_161_, 1);
lean_dec(v_unused_186_);
v_unused_187_ = lean_ctor_get(v_rest3_161_, 0);
lean_dec(v_unused_187_);
v___x_173_ = v_rest3_161_;
v_isShared_174_ = v_isSharedCheck_185_;
goto v_resetjp_172_;
}
else
{
lean_dec(v_rest3_161_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_185_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_154_ == 0)
{
lean_ctor_set_tag(v___x_153_, 0);
lean_ctor_set(v___x_153_, 1, v___x_171_);
lean_ctor_set(v___x_153_, 0, v___x_167_);
v___x_176_ = v___x_153_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v___x_171_);
v___x_176_ = v_reuseFailAlloc_184_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_178_; 
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 1, v___x_167_);
lean_ctor_set(v___x_173_, 0, v___x_176_);
v___x_178_ = v___x_173_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_167_);
v___x_178_ = v_reuseFailAlloc_183_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_name_158_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_179_);
v___x_181_ = v___x_147_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
}
}
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = l_List_drop___redArg(v___x_188_, v_rest3_161_);
v___x_190_ = lp_lean_x2dftml_LeanFtml_close2Suffixes(v___x_189_);
v___x_191_ = lean_box(0);
v___x_192_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_moduleHead_spec__1(v_rest3_161_, v___x_190_, v___x_191_);
if (v_isShared_154_ == 0)
{
lean_ctor_set_tag(v___x_153_, 0);
lean_ctor_set(v___x_153_, 1, v___x_192_);
lean_ctor_set(v___x_153_, 0, v_name_158_);
v___x_194_ = v___x_153_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_name_158_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_192_);
v___x_194_ = v_reuseFailAlloc_198_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_196_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_194_);
v___x_196_ = v___x_147_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
else
{
lean_object* v___x_199_; 
lean_dec(v_name_158_);
lean_del_object(v___x_153_);
lean_dec(v_tail_151_);
lean_del_object(v___x_147_);
v___x_199_ = lean_box(0);
return v___x_199_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleHead___boxed(lean_object* v_lit_202_, lean_object* v_src_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = lp_lean_x2dftml_LeanFtml_moduleHead(v_lit_202_, v_src_203_);
lean_dec(v_lit_202_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastConsumedByte(lean_object* v_src_205_, lean_object* v_rest_x27_206_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_207_ = l_List_lengthTR___redArg(v_src_205_);
v___x_208_ = l_List_lengthTR___redArg(v_rest_x27_206_);
v___x_209_ = lean_nat_sub(v___x_207_, v___x_208_);
lean_dec(v___x_208_);
lean_dec(v___x_207_);
v___x_210_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_src_205_);
v___x_211_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_205_, v_src_205_, v___x_209_, v___x_210_);
lean_dec(v_src_205_);
v___x_212_ = l_List_getLast_x3f___redArg(v___x_211_);
lean_dec(v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastConsumedByte___boxed(lean_object* v_src_213_, lean_object* v_rest_x27_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_213_, v_rest_x27_214_);
lean_dec(v_rest_x27_214_);
return v_res_215_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimModule___closed__1(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimModule___closed__0));
v___x_218_ = l_String_toListImpl(v___x_217_);
return v___x_218_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimModule___closed__3(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimModule___closed__2));
v___x_221_ = l_String_toListImpl(v___x_220_);
return v___x_221_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimModule___closed__5(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimModule___closed__4));
v___x_224_ = l_String_toListImpl(v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimModule(lean_object* v_rule_225_, lean_object* v_name_226_, lean_object* v_attr_227_, lean_object* v_body_228_, lean_object* v_toks_229_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_230_ = l_List_lengthTR___redArg(v_toks_229_);
v___x_231_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_230_);
v___x_232_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimModule___closed__1, &lp_lean_x2dftml_LeanFtml_claimModule___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_claimModule___closed__1);
v___x_233_ = lp_lean_x2dftml_LeanFtml_textVal(v_name_226_);
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimModule___closed__3, &lp_lean_x2dftml_LeanFtml_claimModule___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_claimModule___closed__3);
v___x_236_ = lp_lean_x2dftml_LeanFtml_textVal(v_attr_227_);
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimModule___closed__5, &lp_lean_x2dftml_LeanFtml_claimModule___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_claimModule___closed__5);
v___x_239_ = lp_lean_x2dftml_LeanFtml_textVal(v_body_228_);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_box(0);
v___x_242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_237_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_234_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v_rule_225_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v___x_241_);
v___x_247_ = l_List_appendTR___redArg(v_toks_229_, v___x_246_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_231_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_249_) == 0)
{
return v_x_249_;
}
else
{
lean_object* v_head_250_; lean_object* v_tail_251_; lean_object* v___x_252_; uint8_t v___x_253_; 
v_head_250_ = lean_ctor_get(v_x_249_, 0);
v_tail_251_ = lean_ctor_get(v_x_249_, 1);
v___x_252_ = lean_unsigned_to_nat(32u);
v___x_253_ = lean_nat_dec_eq(v_head_250_, v___x_252_);
if (v___x_253_ == 0)
{
lean_inc_ref(v_x_249_);
return v_x_249_;
}
else
{
v_x_249_ = v_tail_251_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0___boxed(lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(v_x_255_);
lean_dec(v_x_255_);
return v_res_256_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleTail___closed__1(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleTail___closed__0));
v___x_259_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleTail(lean_object* v_rest_260_){
_start:
{
lean_object* v_afterSpaces_261_; 
v_afterSpaces_261_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(v_rest_260_);
if (lean_obj_tag(v_afterSpaces_261_) == 1)
{
lean_object* v_head_262_; lean_object* v_tail_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_296_; 
v_head_262_ = lean_ctor_get(v_afterSpaces_261_, 0);
v_tail_263_ = lean_ctor_get(v_afterSpaces_261_, 1);
v_isSharedCheck_296_ = !lean_is_exclusive(v_afterSpaces_261_);
if (v_isSharedCheck_296_ == 0)
{
v___x_265_ = v_afterSpaces_261_;
v_isShared_266_ = v_isSharedCheck_296_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_tail_263_);
lean_inc(v_head_262_);
lean_dec(v_afterSpaces_261_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_296_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(10u);
v___x_268_ = lean_nat_dec_eq(v_head_262_, v___x_267_);
lean_dec(v_head_262_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
lean_del_object(v___x_265_);
lean_dec(v_tail_263_);
v___x_269_ = lean_box(0);
return v___x_269_;
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_270_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleTail___closed__1, &lp_lean_x2dftml_LeanFtml_moduleTail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_moduleTail___closed__1);
v___x_271_ = lean_unsigned_to_nat(1u);
v___x_272_ = l_List_drop___redArg(v___x_271_, v_tail_263_);
v___x_273_ = lp_lean_x2dftml_LeanFtml_findSubCI(v___x_270_, v___x_272_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_274_ = lean_box(0);
if (v_isShared_266_ == 0)
{
lean_ctor_set_tag(v___x_265_, 0);
lean_ctor_set(v___x_265_, 0, v___x_274_);
v___x_276_ = v___x_265_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_274_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_tail_263_);
v___x_276_ = v_reuseFailAlloc_278_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
lean_object* v___x_277_; 
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
else
{
lean_object* v_val_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_295_; 
v_val_279_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_295_ == 0)
{
v___x_281_ = v___x_273_;
v_isShared_282_ = v_isSharedCheck_295_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_val_279_);
lean_dec(v___x_273_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_295_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_290_; 
v___x_283_ = lean_nat_add(v_val_279_, v___x_271_);
lean_dec(v_val_279_);
v___x_284_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v___x_283_);
lean_inc(v_tail_263_);
v___x_285_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_263_, v_tail_263_, v___x_283_, v___x_284_);
v___x_286_ = lean_unsigned_to_nat(11u);
v___x_287_ = l_List_drop___redArg(v___x_283_, v_tail_263_);
lean_dec(v_tail_263_);
v___x_288_ = l_List_drop___redArg(v___x_286_, v___x_287_);
lean_dec(v___x_287_);
if (v_isShared_266_ == 0)
{
lean_ctor_set_tag(v___x_265_, 0);
lean_ctor_set(v___x_265_, 1, v___x_288_);
lean_ctor_set(v___x_265_, 0, v___x_285_);
v___x_290_ = v___x_265_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v___x_288_);
v___x_290_ = v_reuseFailAlloc_294_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_292_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v___x_290_);
v___x_292_ = v___x_281_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_297_; 
lean_dec(v_afterSpaces_261_);
v___x_297_ = lean_box(0);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleTail___boxed(lean_object* v_rest_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = lp_lean_x2dftml_LeanFtml_moduleTail(v_rest_298_);
lean_dec(v_rest_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(lean_object* v_x_300_){
_start:
{
if (lean_obj_tag(v_x_300_) == 0)
{
return v_x_300_;
}
else
{
lean_object* v_head_301_; lean_object* v_tail_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v_head_301_ = lean_ctor_get(v_x_300_, 0);
v_tail_302_ = lean_ctor_get(v_x_300_, 1);
v___x_303_ = lean_unsigned_to_nat(32u);
v___x_304_ = lean_nat_dec_eq(v_head_301_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = lean_unsigned_to_nat(9u);
v___x_306_ = lean_nat_dec_eq(v_head_301_, v___x_305_);
if (v___x_306_ == 0)
{
lean_inc_ref(v_x_300_);
return v_x_300_;
}
else
{
v_x_300_ = v_tail_302_;
goto _start;
}
}
else
{
v_x_300_ = v_tail_302_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0___boxed(lean_object* v_x_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_x_309_);
lean_dec(v_x_309_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Tail(lean_object* v_rest_311_){
_start:
{
lean_object* v_afterSpaces_312_; 
v_afterSpaces_312_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_rest_311_);
if (lean_obj_tag(v_afterSpaces_312_) == 1)
{
lean_object* v_head_313_; lean_object* v_tail_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_344_; 
v_head_313_ = lean_ctor_get(v_afterSpaces_312_, 0);
v_tail_314_ = lean_ctor_get(v_afterSpaces_312_, 1);
v_isSharedCheck_344_ = !lean_is_exclusive(v_afterSpaces_312_);
if (v_isSharedCheck_344_ == 0)
{
v___x_316_ = v_afterSpaces_312_;
v_isShared_317_ = v_isSharedCheck_344_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_tail_314_);
lean_inc(v_head_313_);
lean_dec(v_afterSpaces_312_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_344_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_318_ = lean_unsigned_to_nat(10u);
v___x_319_ = lean_nat_dec_eq(v_head_313_, v___x_318_);
lean_dec(v_head_313_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; 
lean_del_object(v___x_316_);
lean_dec(v_tail_314_);
v___x_320_ = lean_box(0);
return v___x_320_;
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleTail___closed__1, &lp_lean_x2dftml_LeanFtml_moduleTail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_moduleTail___closed__1);
lean_inc(v_tail_314_);
v___x_322_ = lp_lean_x2dftml_LeanFtml_findSubCI(v___x_321_, v_tail_314_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_323_ = lean_box(0);
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 0);
lean_ctor_set(v___x_316_, 0, v___x_323_);
v___x_325_ = v___x_316_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_323_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_tail_314_);
v___x_325_ = v_reuseFailAlloc_327_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_326_; 
v___x_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
return v___x_326_;
}
}
else
{
lean_object* v_val_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_343_; 
v_val_328_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_343_ == 0)
{
v___x_330_ = v___x_322_;
v_isShared_331_ = v_isSharedCheck_343_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_val_328_);
lean_dec(v___x_322_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_343_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_332_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_val_328_);
lean_inc(v_tail_314_);
v___x_333_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_314_, v_tail_314_, v_val_328_, v___x_332_);
v___x_334_ = lean_unsigned_to_nat(11u);
v___x_335_ = l_List_drop___redArg(v_val_328_, v_tail_314_);
lean_dec(v_tail_314_);
v___x_336_ = l_List_drop___redArg(v___x_334_, v___x_335_);
lean_dec(v___x_335_);
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 0);
lean_ctor_set(v___x_316_, 1, v___x_336_);
lean_ctor_set(v___x_316_, 0, v___x_333_);
v___x_338_ = v___x_316_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_333_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v___x_336_);
v___x_338_ = v_reuseFailAlloc_342_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_340_; 
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_338_);
v___x_340_ = v___x_330_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_338_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_345_; 
lean_dec(v_afterSpaces_312_);
v___x_345_ = lean_box(0);
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Tail___boxed(lean_object* v_rest_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = lp_lean_x2dftml_LeanFtml_module654Tail(v_rest_346_);
lean_dec(v_rest_346_);
return v_res_347_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__0));
v___x_350_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__2));
v___x_353_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewrite654Prefix(lean_object* v_m_354_){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_355_ = lean_unsigned_to_nat(11u);
v___x_356_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_m_354_);
v___x_357_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_m_354_, v_m_354_, v___x_355_, v___x_356_);
v___x_358_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1);
v___x_359_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_357_, v___x_358_);
lean_dec(v___x_357_);
if (v___x_359_ == 0)
{
return v_m_354_;
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_360_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3);
v___x_361_ = l_List_drop___redArg(v___x_355_, v_m_354_);
lean_dec(v_m_354_);
v___x_362_ = l_List_appendTR___redArg(v___x_360_, v___x_361_);
return v___x_362_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteModulePrefix(lean_object* v_m_363_){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_364_ = lean_unsigned_to_nat(8u);
v___x_365_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_m_363_);
v___x_366_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_m_363_, v_m_363_, v___x_364_, v___x_365_);
v___x_367_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3);
v___x_368_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_366_, v___x_367_);
lean_dec(v___x_366_);
if (v___x_368_ == 0)
{
return v_m_363_;
}
else
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1);
v___x_370_ = l_List_drop___redArg(v___x_364_, v_m_363_);
lean_dec(v_m_363_);
v___x_371_ = l_List_appendTR___redArg(v___x_369_, v___x_370_);
return v___x_371_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_spacesThenNewline(lean_object* v_x_372_){
_start:
{
if (lean_obj_tag(v_x_372_) == 1)
{
lean_object* v_head_373_; lean_object* v_tail_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v_head_373_ = lean_ctor_get(v_x_372_, 0);
v_tail_374_ = lean_ctor_get(v_x_372_, 1);
v___x_375_ = lean_unsigned_to_nat(10u);
v___x_376_ = lean_nat_dec_eq(v_head_373_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_377_ = lean_unsigned_to_nat(32u);
v___x_378_ = lean_nat_dec_eq(v_head_373_, v___x_377_);
if (v___x_378_ == 0)
{
return v___x_378_;
}
else
{
v_x_372_ = v_tail_374_;
goto _start;
}
}
else
{
return v___x_376_;
}
}
else
{
uint8_t v___x_380_; 
v___x_380_ = 0;
return v___x_380_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spacesThenNewline___boxed(lean_object* v_x_381_){
_start:
{
uint8_t v_res_382_; lean_object* v_r_383_; 
v_res_382_ = lp_lean_x2dftml_LeanFtml_spacesThenNewline(v_x_381_);
lean_dec(v_x_381_);
v_r_383_ = lean_box(v_res_382_);
return v_r_383_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_moduleHeadEnd_spec__0(lean_object* v_x_384_){
_start:
{
if (lean_obj_tag(v_x_384_) == 0)
{
uint8_t v___x_385_; 
v___x_385_ = 0;
return v___x_385_;
}
else
{
lean_object* v_head_386_; lean_object* v_tail_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v_head_386_ = lean_ctor_get(v_x_384_, 0);
v_tail_387_ = lean_ctor_get(v_x_384_, 1);
v___x_388_ = lean_unsigned_to_nat(93u);
v___x_389_ = lean_nat_dec_eq(v_head_386_, v___x_388_);
if (v___x_389_ == 0)
{
v_x_384_ = v_tail_387_;
goto _start;
}
else
{
return v___x_389_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_moduleHeadEnd_spec__0___boxed(lean_object* v_x_391_){
_start:
{
uint8_t v_res_392_; lean_object* v_r_393_; 
v_res_392_ = lp_lean_x2dftml_List_any___at___00LeanFtml_moduleHeadEnd_spec__0(v_x_391_);
lean_dec(v_x_391_);
v_r_393_ = lean_box(v_res_392_);
return v_r_393_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__1(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__0));
v___x_396_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleHeadEnd(lean_object* v_src_397_){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3);
lean_inc(v_src_397_);
v___x_399_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_398_, v_src_397_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v___x_400_; 
lean_dec(v_src_397_);
v___x_400_ = lean_box(0);
return v___x_400_;
}
else
{
lean_object* v___x_401_; lean_object* v_tail_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
lean_dec_ref_known(v___x_399_, 1);
v___x_401_ = lean_unsigned_to_nat(8u);
v_tail_402_ = l_List_drop___redArg(v___x_401_, v_src_397_);
lean_dec(v_src_397_);
v___x_403_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__1, &lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_moduleHeadEnd___closed__1);
lean_inc(v_tail_402_);
v___x_404_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_403_, v_tail_402_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_dec(v_tail_402_);
return v___x_404_;
}
else
{
lean_object* v_val_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_419_; 
v_val_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_419_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_419_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_val_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_419_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_409_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_val_405_);
lean_inc(v_tail_402_);
v___x_410_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_402_, v_tail_402_, v_val_405_, v___x_409_);
lean_dec(v_tail_402_);
v___x_411_ = lp_lean_x2dftml_List_any___at___00LeanFtml_moduleHeadEnd_spec__0(v___x_410_);
lean_dec(v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_412_ = lean_nat_add(v___x_401_, v_val_405_);
lean_dec(v_val_405_);
v___x_413_ = lean_unsigned_to_nat(2u);
v___x_414_ = lean_nat_add(v___x_412_, v___x_413_);
lean_dec(v___x_412_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_414_);
v___x_416_ = v___x_407_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v___x_414_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
else
{
lean_object* v___x_418_; 
lean_del_object(v___x_407_);
lean_dec(v_val_405_);
v___x_418_ = lean_box(0);
return v___x_418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo(lean_object* v_prev_427_, lean_object* v_src_428_, lean_object* v_x_429_){
_start:
{
lean_object* v_zero_430_; uint8_t v_isZero_431_; 
v_zero_430_ = lean_unsigned_to_nat(0u);
v_isZero_431_ = lean_nat_dec_eq(v_x_429_, v_zero_430_);
if (v_isZero_431_ == 1)
{
return v_src_428_;
}
else
{
if (lean_obj_tag(v_src_428_) == 0)
{
return v_src_428_;
}
else
{
lean_object* v_head_432_; lean_object* v_tail_433_; lean_object* v_one_434_; lean_object* v_n_435_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_head_432_ = lean_ctor_get(v_src_428_, 0);
v_tail_433_ = lean_ctor_get(v_src_428_, 1);
v_one_434_ = lean_unsigned_to_nat(1u);
v_n_435_ = lean_nat_sub(v_x_429_, v_one_434_);
v___x_464_ = lean_box(0);
v___x_465_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_427_, v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_466_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1));
v___x_467_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_427_, v___x_466_);
if (v___x_467_ == 0)
{
lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_476_; 
lean_inc(v_tail_433_);
lean_inc(v_head_432_);
v_isSharedCheck_476_ = !lean_is_exclusive(v_src_428_);
if (v_isSharedCheck_476_ == 0)
{
lean_object* v_unused_477_; lean_object* v_unused_478_; 
v_unused_477_ = lean_ctor_get(v_src_428_, 1);
lean_dec(v_unused_477_);
v_unused_478_ = lean_ctor_get(v_src_428_, 0);
lean_dec(v_unused_478_);
v___x_469_ = v_src_428_;
v_isShared_470_ = v_isSharedCheck_476_;
goto v_resetjp_468_;
}
else
{
lean_dec(v_src_428_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_476_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
lean_inc(v_head_432_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v_head_432_);
v___x_472_ = lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo(v___x_471_, v_tail_433_, v_n_435_);
lean_dec(v_n_435_);
lean_dec_ref_known(v___x_471_, 1);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 1, v___x_472_);
v___x_474_ = v___x_469_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_head_432_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v___x_472_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
else
{
goto v___jp_436_;
}
}
else
{
goto v___jp_436_;
}
v___jp_436_:
{
lean_object* v___x_437_; 
lean_inc_ref(v_src_428_);
v___x_437_ = lp_lean_x2dftml_LeanFtml_moduleHeadEnd(v_src_428_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_446_; 
lean_inc(v_tail_433_);
lean_inc(v_head_432_);
v_isSharedCheck_446_ = !lean_is_exclusive(v_src_428_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; lean_object* v_unused_448_; 
v_unused_447_ = lean_ctor_get(v_src_428_, 1);
lean_dec(v_unused_447_);
v_unused_448_ = lean_ctor_get(v_src_428_, 0);
lean_dec(v_unused_448_);
v___x_439_ = v_src_428_;
v_isShared_440_ = v_isSharedCheck_446_;
goto v_resetjp_438_;
}
else
{
lean_dec(v_src_428_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_446_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_444_; 
lean_inc(v_head_432_);
v___x_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_441_, 0, v_head_432_);
v___x_442_ = lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo(v___x_441_, v_tail_433_, v_n_435_);
lean_dec(v_n_435_);
lean_dec_ref_known(v___x_441_, 1);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 1, v___x_442_);
v___x_444_ = v___x_439_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_head_432_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v___x_442_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
else
{
lean_object* v_val_449_; lean_object* v_after_450_; uint8_t v___x_451_; 
v_val_449_ = lean_ctor_get(v___x_437_, 0);
lean_inc_n(v_val_449_, 2);
lean_dec_ref_known(v___x_437_, 1);
v_after_450_ = l_List_drop___redArg(v_val_449_, v_src_428_);
v___x_451_ = lp_lean_x2dftml_LeanFtml_spacesThenNewline(v_after_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_452_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc_ref(v_src_428_);
v___x_453_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_428_, v_src_428_, v_val_449_, v___x_452_);
lean_dec_ref_known(v_src_428_, 2);
v___x_454_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__0));
v___x_455_ = l_List_appendTR___redArg(v___x_453_, v___x_454_);
v___x_456_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1));
v___x_457_ = lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo(v___x_456_, v_after_450_, v_n_435_);
lean_dec(v_n_435_);
v___x_458_ = l_List_appendTR___redArg(v___x_455_, v___x_457_);
return v___x_458_;
}
else
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_459_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc_ref(v_src_428_);
v___x_460_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_428_, v_src_428_, v_val_449_, v___x_459_);
lean_dec_ref_known(v_src_428_, 2);
v___x_461_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__2));
v___x_462_ = lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo(v___x_461_, v_after_450_, v_n_435_);
lean_dec(v_n_435_);
v___x_463_ = l_List_appendTR___redArg(v___x_460_, v___x_462_);
return v___x_463_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___boxed(lean_object* v_prev_479_, lean_object* v_src_480_, lean_object* v_x_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo(v_prev_479_, v_src_480_, v_x_481_);
lean_dec(v_x_481_);
lean_dec(v_prev_479_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlines(lean_object* v_src_483_){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_484_ = lean_box(0);
v___x_485_ = l_List_lengthTR___redArg(v_src_483_);
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_add(v___x_485_, v___x_486_);
lean_dec(v___x_485_);
v___x_488_ = lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo(v___x_484_, v_src_483_, v___x_487_);
lean_dec(v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countModuleOpeners(lean_object* v_prev_489_, lean_object* v_src_490_, lean_object* v_x_491_){
_start:
{
lean_object* v_zero_492_; uint8_t v_isZero_493_; 
v_zero_492_ = lean_unsigned_to_nat(0u);
v_isZero_493_ = lean_nat_dec_eq(v_x_491_, v_zero_492_);
if (v_isZero_493_ == 1)
{
lean_dec(v_x_491_);
lean_dec(v_src_490_);
lean_dec(v_prev_489_);
return v_zero_492_;
}
else
{
if (lean_obj_tag(v_src_490_) == 0)
{
lean_dec(v_x_491_);
lean_dec(v_prev_489_);
return v_zero_492_;
}
else
{
lean_object* v_head_494_; lean_object* v_tail_495_; lean_object* v_one_496_; lean_object* v_n_497_; lean_object* v___x_511_; uint8_t v___x_512_; 
v_head_494_ = lean_ctor_get(v_src_490_, 0);
lean_inc(v_head_494_);
v_tail_495_ = lean_ctor_get(v_src_490_, 1);
lean_inc(v_tail_495_);
v_one_496_ = lean_unsigned_to_nat(1u);
v_n_497_ = lean_nat_sub(v_x_491_, v_one_496_);
lean_dec(v_x_491_);
v___x_511_ = lean_box(0);
v___x_512_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_489_, v___x_511_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_513_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1));
v___x_514_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_489_, v___x_513_);
lean_dec(v_prev_489_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; 
lean_dec_ref_known(v_src_490_, 2);
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v_head_494_);
v_prev_489_ = v___x_515_;
v_src_490_ = v_tail_495_;
v_x_491_ = v_n_497_;
goto _start;
}
else
{
goto v___jp_501_;
}
}
else
{
lean_dec(v_prev_489_);
goto v___jp_501_;
}
v___jp_498_:
{
lean_object* v___x_499_; 
v___x_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_499_, 0, v_head_494_);
v_prev_489_ = v___x_499_;
v_src_490_ = v_tail_495_;
v_x_491_ = v_n_497_;
goto _start;
}
v___jp_501_:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3);
v___x_503_ = lp_lean_x2dftml_LeanFtml_moduleHead(v___x_502_, v_src_490_);
if (lean_obj_tag(v___x_503_) == 1)
{
lean_object* v_val_504_; lean_object* v_snd_505_; 
v_val_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_val_504_);
lean_dec_ref_known(v___x_503_, 1);
v_snd_505_ = lean_ctor_get(v_val_504_, 1);
lean_inc(v_snd_505_);
lean_dec(v_val_504_);
if (lean_obj_tag(v_snd_505_) == 1)
{
lean_object* v_head_506_; lean_object* v_snd_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
lean_dec(v_tail_495_);
lean_dec(v_head_494_);
v_head_506_ = lean_ctor_get(v_snd_505_, 0);
lean_inc(v_head_506_);
lean_dec_ref_known(v_snd_505_, 2);
v_snd_507_ = lean_ctor_get(v_head_506_, 1);
lean_inc(v_snd_507_);
lean_dec(v_head_506_);
v___x_508_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__2));
v___x_509_ = lp_lean_x2dftml_LeanFtml_countModuleOpeners(v___x_508_, v_snd_507_, v_n_497_);
v___x_510_ = lean_nat_add(v_one_496_, v___x_509_);
lean_dec(v___x_509_);
return v___x_510_;
}
else
{
lean_dec(v_snd_505_);
goto v___jp_498_;
}
}
else
{
lean_dec(v___x_503_);
goto v___jp_498_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreMatch(lean_object* v_src_517_){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1);
lean_inc(v_src_517_);
v___x_519_ = lp_lean_x2dftml_LeanFtml_moduleHead(v___x_518_, v_src_517_);
if (lean_obj_tag(v___x_519_) == 1)
{
lean_object* v_val_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_566_; 
v_val_520_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_566_ == 0)
{
v___x_522_ = v___x_519_;
v_isShared_523_ = v_isSharedCheck_566_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_val_520_);
lean_dec(v___x_519_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_566_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v_snd_524_; 
v_snd_524_ = lean_ctor_get(v_val_520_, 1);
lean_inc(v_snd_524_);
lean_dec(v_val_520_);
if (lean_obj_tag(v_snd_524_) == 1)
{
lean_object* v_head_525_; lean_object* v_snd_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_563_; 
v_head_525_ = lean_ctor_get(v_snd_524_, 0);
lean_inc(v_head_525_);
lean_dec_ref_known(v_snd_524_, 2);
v_snd_526_ = lean_ctor_get(v_head_525_, 1);
v_isSharedCheck_563_ = !lean_is_exclusive(v_head_525_);
if (v_isSharedCheck_563_ == 0)
{
lean_object* v_unused_564_; 
v_unused_564_ = lean_ctor_get(v_head_525_, 0);
lean_dec(v_unused_564_);
v___x_528_ = v_head_525_;
v_isShared_529_ = v_isSharedCheck_563_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_snd_526_);
lean_dec(v_head_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_563_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v_headLen_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_530_ = l_List_lengthTR___redArg(v_src_517_);
v___x_531_ = l_List_lengthTR___redArg(v_snd_526_);
v_headLen_532_ = lean_nat_sub(v___x_530_, v___x_531_);
lean_dec(v___x_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleTail___closed__1, &lp_lean_x2dftml_LeanFtml_moduleTail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_moduleTail___closed__1);
lean_inc(v_snd_526_);
v___x_534_ = lp_lean_x2dftml_LeanFtml_findSubCI(v___x_533_, v_snd_526_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_535_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_src_517_);
v___x_536_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_517_, v_src_517_, v_headLen_532_, v___x_535_);
lean_dec(v_src_517_);
v___x_537_ = lp_lean_x2dftml_LeanFtml_rewrite654Prefix(v___x_536_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_537_);
v___x_539_ = v___x_528_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_snd_526_);
v___x_539_ = v_reuseFailAlloc_543_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_541_; 
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 0, v___x_539_);
v___x_541_ = v___x_522_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v___x_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
else
{
lean_object* v_val_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_562_; 
lean_del_object(v___x_522_);
v_val_544_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_562_ == 0)
{
v___x_546_ = v___x_534_;
v_isShared_547_ = v_isSharedCheck_562_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_val_544_);
lean_dec(v___x_534_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_562_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_548_ = lean_nat_add(v_headLen_532_, v_val_544_);
lean_dec(v_headLen_532_);
v___x_549_ = lean_unsigned_to_nat(11u);
v___x_550_ = lean_nat_add(v___x_548_, v___x_549_);
lean_dec(v___x_548_);
v___x_551_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_src_517_);
v___x_552_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_517_, v_src_517_, v___x_550_, v___x_551_);
lean_dec(v_src_517_);
v___x_553_ = lp_lean_x2dftml_LeanFtml_rewrite654Prefix(v___x_552_);
v___x_554_ = lean_nat_add(v_val_544_, v___x_549_);
lean_dec(v_val_544_);
v___x_555_ = l_List_drop___redArg(v___x_554_, v_snd_526_);
lean_dec(v_snd_526_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 1, v___x_555_);
lean_ctor_set(v___x_528_, 0, v___x_553_);
v___x_557_ = v___x_528_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_553_);
lean_ctor_set(v_reuseFailAlloc_561_, 1, v___x_555_);
v___x_557_ = v_reuseFailAlloc_561_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
lean_object* v___x_559_; 
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_557_);
v___x_559_ = v___x_546_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_557_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
}
}
else
{
lean_object* v___x_565_; 
lean_dec(v_snd_524_);
lean_del_object(v___x_522_);
lean_dec(v_src_517_);
v___x_565_ = lean_box(0);
return v___x_565_;
}
}
}
else
{
lean_object* v___x_567_; 
lean_dec(v___x_519_);
lean_dec(v_src_517_);
v___x_567_ = lean_box(0);
return v___x_567_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object* v_x_568_, lean_object* v_x_569_){
_start:
{
if (lean_obj_tag(v_x_568_) == 0)
{
uint8_t v___x_570_; 
v___x_570_ = 1;
return v___x_570_;
}
else
{
if (lean_obj_tag(v_x_569_) == 0)
{
uint8_t v___x_571_; 
v___x_571_ = 0;
return v___x_571_;
}
else
{
lean_object* v_head_572_; lean_object* v_tail_573_; lean_object* v_head_574_; lean_object* v_tail_575_; uint8_t v___x_576_; 
v_head_572_ = lean_ctor_get(v_x_568_, 0);
v_tail_573_ = lean_ctor_get(v_x_568_, 1);
v_head_574_ = lean_ctor_get(v_x_569_, 0);
v_tail_575_ = lean_ctor_get(v_x_569_, 1);
v___x_576_ = lean_nat_dec_eq(v_head_572_, v_head_574_);
if (v___x_576_ == 0)
{
return v___x_576_;
}
else
{
v_x_568_ = v_tail_573_;
v_x_569_ = v_tail_575_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0___boxed(lean_object* v_x_578_, lean_object* v_x_579_){
_start:
{
uint8_t v_res_580_; lean_object* v_r_581_; 
v_res_580_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_x_578_, v_x_579_);
lean_dec(v_x_579_);
lean_dec(v_x_578_);
v_r_581_ = lean_box(v_res_580_);
return v_r_581_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesContain(lean_object* v_pat_582_, lean_object* v_x_583_){
_start:
{
if (lean_obj_tag(v_x_583_) == 0)
{
uint8_t v___x_584_; 
v___x_584_ = 0;
return v___x_584_;
}
else
{
lean_object* v_tail_585_; uint8_t v___x_586_; 
v_tail_585_ = lean_ctor_get(v_x_583_, 1);
v___x_586_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_pat_582_, v_x_583_);
if (v___x_586_ == 0)
{
v_x_583_ = v_tail_585_;
goto _start;
}
else
{
return v___x_586_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesContain___boxed(lean_object* v_pat_588_, lean_object* v_x_589_){
_start:
{
uint8_t v_res_590_; lean_object* v_r_591_; 
v_res_590_ = lp_lean_x2dftml_LeanFtml_bytesContain(v_pat_588_, v_x_589_);
lean_dec(v_x_589_);
lean_dec(v_pat_588_);
v_r_591_ = lean_box(v_res_590_);
return v_r_591_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bodyHasCodeToken(lean_object* v_body_593_, lean_object* v_x_594_, lean_object* v_x_595_){
_start:
{
if (lean_obj_tag(v_x_594_) == 0)
{
uint8_t v___x_596_; 
lean_dec(v_x_595_);
v___x_596_ = 0;
return v___x_596_;
}
else
{
lean_object* v_head_597_; lean_object* v_tail_598_; lean_object* v_rule_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v_head_597_ = lean_ctor_get(v_x_594_, 0);
v_tail_598_ = lean_ctor_get(v_x_594_, 1);
v_rule_603_ = lean_ctor_get(v_head_597_, 0);
v___x_604_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bodyHasCodeToken___closed__0));
v___x_605_ = lean_string_dec_eq(v_rule_603_, v___x_604_);
if (v___x_605_ == 0)
{
goto v___jp_599_;
}
else
{
lean_object* v___x_606_; uint8_t v___x_607_; 
lean_inc(v_x_595_);
v___x_606_ = lp_lean_x2dftml_LeanFtml_phBytes(v_x_595_);
v___x_607_ = lp_lean_x2dftml_LeanFtml_bytesContain(v___x_606_, v_body_593_);
lean_dec(v___x_606_);
if (v___x_607_ == 0)
{
goto v___jp_599_;
}
else
{
lean_dec(v_x_595_);
return v___x_607_;
}
}
v___jp_599_:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lean_unsigned_to_nat(1u);
v___x_601_ = lean_nat_add(v_x_595_, v___x_600_);
lean_dec(v_x_595_);
v_x_594_ = v_tail_598_;
v_x_595_ = v___x_601_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bodyHasCodeToken___boxed(lean_object* v_body_608_, lean_object* v_x_609_, lean_object* v_x_610_){
_start:
{
uint8_t v_res_611_; lean_object* v_r_612_; 
v_res_611_ = lp_lean_x2dftml_LeanFtml_bodyHasCodeToken(v_body_608_, v_x_609_, v_x_610_);
lean_dec(v_x_609_);
lean_dec(v_body_608_);
v_r_612_ = lean_box(v_res_611_);
return v_r_612_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleTryCands(lean_object* v_src_617_, lean_object* v_name_618_, lean_object* v_toks_619_, lean_object* v_x_620_){
_start:
{
if (lean_obj_tag(v_x_620_) == 0)
{
lean_object* v___x_621_; 
lean_dec(v_toks_619_);
lean_dec(v_name_618_);
lean_dec(v_src_617_);
v___x_621_ = lean_box(0);
return v___x_621_;
}
else
{
lean_object* v_head_622_; lean_object* v_tail_623_; lean_object* v_fst_624_; lean_object* v_snd_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_696_; 
v_head_622_ = lean_ctor_get(v_x_620_, 0);
lean_inc(v_head_622_);
v_tail_623_ = lean_ctor_get(v_x_620_, 1);
lean_inc(v_tail_623_);
lean_dec_ref_known(v_x_620_, 2);
v_fst_624_ = lean_ctor_get(v_head_622_, 0);
v_snd_625_ = lean_ctor_get(v_head_622_, 1);
v_isSharedCheck_696_ = !lean_is_exclusive(v_head_622_);
if (v_isSharedCheck_696_ == 0)
{
v___x_627_ = v_head_622_;
v_isShared_628_ = v_isSharedCheck_696_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_snd_625_);
lean_inc(v_fst_624_);
lean_dec(v_head_622_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_696_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_629_; 
v___x_629_ = lp_lean_x2dftml_LeanFtml_moduleTail(v_snd_625_);
lean_dec(v_snd_625_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_del_object(v___x_627_);
lean_dec(v_fst_624_);
v_x_620_ = v_tail_623_;
goto _start;
}
else
{
lean_object* v_val_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_695_; 
lean_dec(v_tail_623_);
v_val_631_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_695_ == 0)
{
v___x_633_ = v___x_629_;
v_isShared_634_ = v_isSharedCheck_695_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_val_631_);
lean_dec(v___x_629_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_695_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v_fst_635_; lean_object* v_snd_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_694_; 
v_fst_635_ = lean_ctor_get(v_val_631_, 0);
v_snd_636_ = lean_ctor_get(v_val_631_, 1);
v_isSharedCheck_694_ = !lean_is_exclusive(v_val_631_);
if (v_isSharedCheck_694_ == 0)
{
v___x_638_ = v_val_631_;
v_isShared_639_ = v_isSharedCheck_694_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_snd_636_);
lean_inc(v_fst_635_);
lean_dec(v_val_631_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_694_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v_matched_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_640_ = l_List_lengthTR___redArg(v_src_617_);
v___x_641_ = l_List_lengthTR___redArg(v_snd_636_);
v___x_642_ = lean_nat_sub(v___x_640_, v___x_641_);
lean_dec(v___x_641_);
lean_dec(v___x_640_);
v___x_643_ = lean_unsigned_to_nat(0u);
v___x_644_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_src_617_);
v_matched_645_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_617_, v_src_617_, v___x_642_, v___x_644_);
lean_dec(v_src_617_);
v___x_646_ = lean_unsigned_to_nat(1u);
v___x_647_ = lean_box(0);
v___x_648_ = l_List_lengthTR___redArg(v_matched_645_);
v___x_649_ = lean_nat_add(v___x_648_, v___x_646_);
lean_inc(v_matched_645_);
v___x_650_ = lp_lean_x2dftml_LeanFtml_countModuleOpeners(v___x_647_, v_matched_645_, v___x_649_);
v___x_651_ = lean_nat_dec_lt(v___x_646_, v___x_650_);
lean_dec(v___x_650_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v_fst_656_; lean_object* v_snd_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_682_; 
lean_del_object(v___x_627_);
v___x_652_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__0));
v___x_653_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_624_);
lean_dec(v_fst_624_);
v___x_654_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_635_);
lean_inc(v_toks_619_);
v___x_655_ = lp_lean_x2dftml_LeanFtml_claimModule(v___x_652_, v_name_618_, v___x_653_, v___x_654_, v_toks_619_);
v_fst_656_ = lean_ctor_get(v___x_655_, 0);
v_snd_657_ = lean_ctor_get(v___x_655_, 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_682_ == 0)
{
v___x_659_ = v___x_655_;
v_isShared_660_ = v_isSharedCheck_682_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_snd_657_);
lean_inc(v_fst_656_);
lean_dec(v___x_655_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_682_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___y_666_; uint8_t v___x_677_; 
v___x_661_ = lean_box(0);
v___x_662_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1));
v___x_663_ = l_List_appendTR___redArg(v___x_662_, v_fst_656_);
v___x_664_ = l_List_appendTR___redArg(v___x_663_, v___x_662_);
v___x_677_ = lp_lean_x2dftml_LeanFtml_bodyHasCodeToken(v_fst_635_, v_toks_619_, v___x_643_);
lean_dec(v_toks_619_);
if (v___x_677_ == 0)
{
lean_dec(v___x_648_);
lean_dec(v_matched_645_);
lean_dec(v_fst_635_);
v___y_666_ = v___x_661_;
goto v___jp_665_;
}
else
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v_authoredCloser_680_; lean_object* v___x_681_; 
v___x_678_ = lean_unsigned_to_nat(11u);
v___x_679_ = lean_nat_sub(v___x_648_, v___x_678_);
lean_dec(v___x_648_);
v_authoredCloser_680_ = l_List_drop___redArg(v___x_679_, v_matched_645_);
lean_dec(v_matched_645_);
v___x_681_ = l_List_appendTR___redArg(v_fst_635_, v_authoredCloser_680_);
v___y_666_ = v___x_681_;
goto v___jp_665_;
}
v___jp_665_:
{
lean_object* v_repl_667_; lean_object* v___x_669_; 
v_repl_667_ = l_List_appendTR___redArg(v___x_664_, v___y_666_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 0, v_snd_636_);
v___x_669_ = v___x_659_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_snd_636_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_snd_657_);
v___x_669_ = v_reuseFailAlloc_676_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
lean_object* v___x_671_; 
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 1, v___x_669_);
lean_ctor_set(v___x_638_, 0, v_repl_667_);
v___x_671_ = v___x_638_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_repl_667_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_675_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_673_; 
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v___x_671_);
v___x_673_ = v___x_633_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_671_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
}
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_686_; 
lean_dec(v___x_648_);
lean_dec(v_fst_635_);
lean_dec(v_fst_624_);
lean_dec(v_name_618_);
v___x_683_ = lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlines(v_matched_645_);
v___x_684_ = lp_lean_x2dftml_LeanFtml_rewriteModulePrefix(v___x_683_);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 1, v_toks_619_);
lean_ctor_set(v___x_638_, 0, v_snd_636_);
v___x_686_ = v___x_638_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_snd_636_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_toks_619_);
v___x_686_ = v_reuseFailAlloc_693_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_688_; 
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 1, v___x_686_);
lean_ctor_set(v___x_627_, 0, v___x_684_);
v___x_688_ = v___x_627_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_684_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v___x_686_);
v___x_688_ = v_reuseFailAlloc_692_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_690_; 
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v___x_688_);
v___x_690_ = v___x_633_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleMatch(lean_object* v_src_697_, lean_object* v_toks_698_){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3);
lean_inc(v_src_697_);
v___x_700_ = lp_lean_x2dftml_LeanFtml_moduleHead(v___x_699_, v_src_697_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v___x_701_; 
lean_dec(v_toks_698_);
lean_dec(v_src_697_);
v___x_701_ = lean_box(0);
return v___x_701_;
}
else
{
lean_object* v_val_702_; lean_object* v_fst_703_; lean_object* v_snd_704_; lean_object* v___x_705_; 
v_val_702_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_val_702_);
lean_dec_ref_known(v___x_700_, 1);
v_fst_703_ = lean_ctor_get(v_val_702_, 0);
lean_inc(v_fst_703_);
v_snd_704_ = lean_ctor_get(v_val_702_, 1);
lean_inc(v_snd_704_);
lean_dec(v_val_702_);
v___x_705_ = lp_lean_x2dftml_LeanFtml_moduleTryCands(v_src_697_, v_fst_703_, v_toks_698_, v_snd_704_);
return v___x_705_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654TryCands(lean_object* v_name_707_, lean_object* v_toks_708_, lean_object* v_x_709_){
_start:
{
if (lean_obj_tag(v_x_709_) == 0)
{
lean_object* v___x_710_; 
lean_dec(v_toks_708_);
lean_dec(v_name_707_);
v___x_710_ = lean_box(0);
return v___x_710_;
}
else
{
lean_object* v_head_711_; lean_object* v_tail_712_; lean_object* v_fst_713_; lean_object* v_snd_714_; lean_object* v___x_715_; 
v_head_711_ = lean_ctor_get(v_x_709_, 0);
v_tail_712_ = lean_ctor_get(v_x_709_, 1);
v_fst_713_ = lean_ctor_get(v_head_711_, 0);
v_snd_714_ = lean_ctor_get(v_head_711_, 1);
v___x_715_ = lp_lean_x2dftml_LeanFtml_module654Tail(v_snd_714_);
if (lean_obj_tag(v___x_715_) == 0)
{
v_x_709_ = v_tail_712_;
goto _start;
}
else
{
lean_object* v_val_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_749_; 
v_val_717_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_749_ == 0)
{
v___x_719_ = v___x_715_;
v_isShared_720_ = v_isSharedCheck_749_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_val_717_);
lean_dec(v___x_715_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_749_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_fst_721_; lean_object* v_snd_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_748_; 
v_fst_721_ = lean_ctor_get(v_val_717_, 0);
v_snd_722_ = lean_ctor_get(v_val_717_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v_val_717_);
if (v_isSharedCheck_748_ == 0)
{
v___x_724_ = v_val_717_;
v_isShared_725_ = v_isSharedCheck_748_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_snd_722_);
lean_inc(v_fst_721_);
lean_dec(v_val_717_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_748_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v_fst_730_; lean_object* v_snd_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_747_; 
v___x_726_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_module654TryCands___closed__0));
v___x_727_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_713_);
v___x_728_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_721_);
lean_dec(v_fst_721_);
v___x_729_ = lp_lean_x2dftml_LeanFtml_claimModule(v___x_726_, v_name_707_, v___x_727_, v___x_728_, v_toks_708_);
v_fst_730_ = lean_ctor_get(v___x_729_, 0);
v_snd_731_ = lean_ctor_get(v___x_729_, 1);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_747_ == 0)
{
v___x_733_ = v___x_729_;
v_isShared_734_ = v_isSharedCheck_747_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_snd_731_);
lean_inc(v_fst_730_);
lean_dec(v___x_729_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_747_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_739_; 
v___x_735_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1));
v___x_736_ = l_List_appendTR___redArg(v___x_735_, v_fst_730_);
v___x_737_ = l_List_appendTR___redArg(v___x_736_, v___x_735_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v_snd_722_);
v___x_739_ = v___x_733_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_snd_722_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_snd_731_);
v___x_739_ = v_reuseFailAlloc_746_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
lean_object* v___x_741_; 
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 1, v___x_739_);
lean_ctor_set(v___x_724_, 0, v___x_737_);
v___x_741_ = v___x_724_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_737_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v___x_739_);
v___x_741_ = v_reuseFailAlloc_745_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 0, v___x_741_);
v___x_743_ = v___x_719_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654TryCands___boxed(lean_object* v_name_750_, lean_object* v_toks_751_, lean_object* v_x_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = lp_lean_x2dftml_LeanFtml_module654TryCands(v_name_750_, v_toks_751_, v_x_752_);
lean_dec(v_x_752_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Match(lean_object* v_src_754_, lean_object* v_toks_755_){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1);
v___x_757_ = lp_lean_x2dftml_LeanFtml_moduleHead(v___x_756_, v_src_754_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v___x_758_; 
lean_dec(v_toks_755_);
v___x_758_ = lean_box(0);
return v___x_758_;
}
else
{
lean_object* v_val_759_; lean_object* v_fst_760_; lean_object* v_snd_761_; lean_object* v___x_762_; 
v_val_759_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_val_759_);
lean_dec_ref_known(v___x_757_, 1);
v_fst_760_ = lean_ctor_get(v_val_759_, 0);
lean_inc(v_fst_760_);
v_snd_761_ = lean_ctor_get(v_val_759_, 1);
lean_inc(v_snd_761_);
lean_dec(v_val_759_);
v___x_762_ = lp_lean_x2dftml_LeanFtml_module654TryCands(v_fst_760_, v_toks_755_, v_snd_761_);
lean_dec(v_snd_761_);
return v___x_762_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreScan(lean_object* v_prev_763_, lean_object* v_src_764_, lean_object* v_x_765_){
_start:
{
lean_object* v_zero_766_; uint8_t v_isZero_767_; 
v_zero_766_ = lean_unsigned_to_nat(0u);
v_isZero_767_ = lean_nat_dec_eq(v_x_765_, v_zero_766_);
if (v_isZero_767_ == 1)
{
lean_object* v___x_768_; 
lean_dec(v_src_764_);
v___x_768_ = lean_box(0);
return v___x_768_;
}
else
{
if (lean_obj_tag(v_src_764_) == 0)
{
return v_src_764_;
}
else
{
lean_object* v_head_769_; lean_object* v_tail_770_; lean_object* v_one_771_; lean_object* v_n_772_; lean_object* v___x_792_; uint8_t v___x_793_; 
v_head_769_ = lean_ctor_get(v_src_764_, 0);
v_tail_770_ = lean_ctor_get(v_src_764_, 1);
v_one_771_ = lean_unsigned_to_nat(1u);
v_n_772_ = lean_nat_sub(v_x_765_, v_one_771_);
v___x_792_ = lean_box(0);
v___x_793_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_763_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_794_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1));
v___x_795_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_763_, v___x_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_804_; 
lean_inc(v_tail_770_);
lean_inc(v_head_769_);
v_isSharedCheck_804_ = !lean_is_exclusive(v_src_764_);
if (v_isSharedCheck_804_ == 0)
{
lean_object* v_unused_805_; lean_object* v_unused_806_; 
v_unused_805_ = lean_ctor_get(v_src_764_, 1);
lean_dec(v_unused_805_);
v_unused_806_ = lean_ctor_get(v_src_764_, 0);
lean_dec(v_unused_806_);
v___x_797_ = v_src_764_;
v_isShared_798_ = v_isSharedCheck_804_;
goto v_resetjp_796_;
}
else
{
lean_dec(v_src_764_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_804_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_802_; 
lean_inc(v_head_769_);
v___x_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_799_, 0, v_head_769_);
v___x_800_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v___x_799_, v_tail_770_, v_n_772_);
lean_dec(v_n_772_);
lean_dec_ref_known(v___x_799_, 1);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 1, v___x_800_);
v___x_802_ = v___x_797_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_head_769_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v___x_800_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
else
{
goto v___jp_773_;
}
}
else
{
goto v___jp_773_;
}
v___jp_773_:
{
lean_object* v___x_774_; 
lean_inc_ref(v_src_764_);
v___x_774_ = lp_lean_x2dftml_LeanFtml_modulepreMatch(v_src_764_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_783_; 
lean_inc(v_tail_770_);
lean_inc(v_head_769_);
v_isSharedCheck_783_ = !lean_is_exclusive(v_src_764_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; lean_object* v_unused_785_; 
v_unused_784_ = lean_ctor_get(v_src_764_, 1);
lean_dec(v_unused_784_);
v_unused_785_ = lean_ctor_get(v_src_764_, 0);
lean_dec(v_unused_785_);
v___x_776_ = v_src_764_;
v_isShared_777_ = v_isSharedCheck_783_;
goto v_resetjp_775_;
}
else
{
lean_dec(v_src_764_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_783_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_781_; 
lean_inc(v_head_769_);
v___x_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_778_, 0, v_head_769_);
v___x_779_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v___x_778_, v_tail_770_, v_n_772_);
lean_dec(v_n_772_);
lean_dec_ref_known(v___x_778_, 1);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_779_);
v___x_781_ = v___x_776_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_head_769_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
else
{
lean_object* v_val_786_; lean_object* v_fst_787_; lean_object* v_snd_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_val_786_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_val_786_);
lean_dec_ref_known(v___x_774_, 1);
v_fst_787_ = lean_ctor_get(v_val_786_, 0);
lean_inc(v_fst_787_);
v_snd_788_ = lean_ctor_get(v_val_786_, 1);
lean_inc(v_snd_788_);
lean_dec(v_val_786_);
v___x_789_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_764_, v_snd_788_);
v___x_790_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v___x_789_, v_snd_788_, v_n_772_);
lean_dec(v_n_772_);
lean_dec(v___x_789_);
v___x_791_ = l_List_appendTR___redArg(v_fst_787_, v___x_790_);
return v___x_791_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreScan___boxed(lean_object* v_prev_807_, lean_object* v_src_808_, lean_object* v_x_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v_prev_807_, v_src_808_, v_x_809_);
lean_dec(v_x_809_);
lean_dec(v_prev_807_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreRule___lam__0(lean_object* v_src_811_, lean_object* v_toks_812_){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_813_ = lean_box(0);
v___x_814_ = l_List_lengthTR___redArg(v_src_811_);
v___x_815_ = lean_unsigned_to_nat(1u);
v___x_816_ = lean_nat_add(v___x_814_, v___x_815_);
lean_dec(v___x_814_);
v___x_817_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v___x_813_, v_src_811_, v___x_816_);
lean_dec(v___x_816_);
v___x_818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
lean_ctor_set(v___x_818_, 1, v_toks_812_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreRule(lean_object* v_st_820_){
_start:
{
lean_object* v___f_821_; lean_object* v___x_822_; 
v___f_821_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_modulepreRule___closed__0));
v___x_822_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_820_, v___f_821_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleScanPass(lean_object* v_prev_823_, lean_object* v_src_824_, lean_object* v_toks_825_, lean_object* v_x_826_){
_start:
{
lean_object* v_zero_830_; uint8_t v_isZero_831_; 
v_zero_830_ = lean_unsigned_to_nat(0u);
v_isZero_831_ = lean_nat_dec_eq(v_x_826_, v_zero_830_);
if (v_isZero_831_ == 1)
{
lean_dec(v_src_824_);
goto v___jp_827_;
}
else
{
if (lean_obj_tag(v_src_824_) == 0)
{
goto v___jp_827_;
}
else
{
lean_object* v_head_832_; lean_object* v_tail_833_; lean_object* v_one_834_; lean_object* v_n_835_; lean_object* v___x_875_; uint8_t v___x_876_; 
v_head_832_ = lean_ctor_get(v_src_824_, 0);
v_tail_833_ = lean_ctor_get(v_src_824_, 1);
v_one_834_ = lean_unsigned_to_nat(1u);
v_n_835_ = lean_nat_sub(v_x_826_, v_one_834_);
v___x_875_ = lean_box(0);
v___x_876_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_823_, v___x_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_877_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1));
v___x_878_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_823_, v___x_877_);
if (v___x_878_ == 0)
{
lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_896_; 
lean_inc(v_tail_833_);
lean_inc(v_head_832_);
v_isSharedCheck_896_ = !lean_is_exclusive(v_src_824_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; lean_object* v_unused_898_; 
v_unused_897_ = lean_ctor_get(v_src_824_, 1);
lean_dec(v_unused_897_);
v_unused_898_ = lean_ctor_get(v_src_824_, 0);
lean_dec(v_unused_898_);
v___x_880_ = v_src_824_;
v_isShared_881_ = v_isSharedCheck_896_;
goto v_resetjp_879_;
}
else
{
lean_dec(v_src_824_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_896_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v_fst_884_; lean_object* v_snd_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_895_; 
lean_inc(v_head_832_);
v___x_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_882_, 0, v_head_832_);
v___x_883_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v___x_882_, v_tail_833_, v_toks_825_, v_n_835_);
lean_dec(v_n_835_);
lean_dec_ref_known(v___x_882_, 1);
v_fst_884_ = lean_ctor_get(v___x_883_, 0);
v_snd_885_ = lean_ctor_get(v___x_883_, 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_895_ == 0)
{
v___x_887_ = v___x_883_;
v_isShared_888_ = v_isSharedCheck_895_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_snd_885_);
lean_inc(v_fst_884_);
lean_dec(v___x_883_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_895_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 1, v_fst_884_);
v___x_890_ = v___x_880_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_head_832_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_fst_884_);
v___x_890_ = v_reuseFailAlloc_894_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
lean_object* v___x_892_; 
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_890_);
v___x_892_ = v___x_887_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_snd_885_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
else
{
goto v___jp_836_;
}
}
else
{
goto v___jp_836_;
}
v___jp_836_:
{
lean_object* v___x_837_; 
lean_inc(v_toks_825_);
lean_inc_ref(v_src_824_);
v___x_837_ = lp_lean_x2dftml_LeanFtml_moduleMatch(v_src_824_, v_toks_825_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_855_; 
lean_inc(v_tail_833_);
lean_inc(v_head_832_);
v_isSharedCheck_855_ = !lean_is_exclusive(v_src_824_);
if (v_isSharedCheck_855_ == 0)
{
lean_object* v_unused_856_; lean_object* v_unused_857_; 
v_unused_856_ = lean_ctor_get(v_src_824_, 1);
lean_dec(v_unused_856_);
v_unused_857_ = lean_ctor_get(v_src_824_, 0);
lean_dec(v_unused_857_);
v___x_839_ = v_src_824_;
v_isShared_840_ = v_isSharedCheck_855_;
goto v_resetjp_838_;
}
else
{
lean_dec(v_src_824_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_855_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v_fst_843_; lean_object* v_snd_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_854_; 
lean_inc(v_head_832_);
v___x_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_841_, 0, v_head_832_);
v___x_842_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v___x_841_, v_tail_833_, v_toks_825_, v_n_835_);
lean_dec(v_n_835_);
lean_dec_ref_known(v___x_841_, 1);
v_fst_843_ = lean_ctor_get(v___x_842_, 0);
v_snd_844_ = lean_ctor_get(v___x_842_, 1);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_854_ == 0)
{
v___x_846_ = v___x_842_;
v_isShared_847_ = v_isSharedCheck_854_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_snd_844_);
lean_inc(v_fst_843_);
lean_dec(v___x_842_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_854_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v_fst_843_);
v___x_849_ = v___x_839_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_head_832_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v_fst_843_);
v___x_849_ = v_reuseFailAlloc_853_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
lean_object* v___x_851_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 0, v___x_849_);
v___x_851_ = v___x_846_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v___x_849_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v_snd_844_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
}
else
{
lean_object* v_val_858_; lean_object* v_snd_859_; lean_object* v_fst_860_; lean_object* v_fst_861_; lean_object* v_snd_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v_fst_865_; lean_object* v_snd_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_toks_825_);
v_val_858_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_val_858_);
lean_dec_ref_known(v___x_837_, 1);
v_snd_859_ = lean_ctor_get(v_val_858_, 1);
lean_inc(v_snd_859_);
v_fst_860_ = lean_ctor_get(v_val_858_, 0);
lean_inc(v_fst_860_);
lean_dec(v_val_858_);
v_fst_861_ = lean_ctor_get(v_snd_859_, 0);
lean_inc(v_fst_861_);
v_snd_862_ = lean_ctor_get(v_snd_859_, 1);
lean_inc(v_snd_862_);
lean_dec(v_snd_859_);
v___x_863_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_824_, v_fst_861_);
v___x_864_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v___x_863_, v_fst_861_, v_snd_862_, v_n_835_);
lean_dec(v_n_835_);
lean_dec(v___x_863_);
v_fst_865_ = lean_ctor_get(v___x_864_, 0);
v_snd_866_ = lean_ctor_get(v___x_864_, 1);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_874_ == 0)
{
v___x_868_ = v___x_864_;
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_snd_866_);
lean_inc(v_fst_865_);
lean_dec(v___x_864_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_870_ = l_List_appendTR___redArg(v_fst_860_, v_fst_865_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_870_);
v___x_872_ = v___x_868_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v_snd_866_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
}
}
v___jp_827_:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_box(0);
v___x_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
lean_ctor_set(v___x_829_, 1, v_toks_825_);
return v___x_829_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleScanPass___boxed(lean_object* v_prev_899_, lean_object* v_src_900_, lean_object* v_toks_901_, lean_object* v_x_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v_prev_899_, v_src_900_, v_toks_901_, v_x_902_);
lean_dec(v_x_902_);
lean_dec(v_prev_899_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulePasses(lean_object* v_x_904_, lean_object* v_x_905_, lean_object* v_x_906_){
_start:
{
lean_object* v_zero_907_; uint8_t v_isZero_908_; 
v_zero_907_ = lean_unsigned_to_nat(0u);
v_isZero_908_ = lean_nat_dec_eq(v_x_904_, v_zero_907_);
if (v_isZero_908_ == 1)
{
lean_object* v___x_909_; 
lean_dec(v_x_904_);
v___x_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_909_, 0, v_x_905_);
lean_ctor_set(v___x_909_, 1, v_x_906_);
return v___x_909_;
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v_fst_915_; lean_object* v_snd_916_; uint8_t v___x_917_; 
v___x_910_ = lean_box(0);
v___x_911_ = l_List_lengthTR___redArg(v_x_905_);
v___x_912_ = lean_unsigned_to_nat(1u);
v___x_913_ = lean_nat_add(v___x_911_, v___x_912_);
lean_dec(v___x_911_);
lean_inc(v_x_905_);
v___x_914_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v___x_910_, v_x_905_, v_x_906_, v___x_913_);
lean_dec(v___x_913_);
v_fst_915_ = lean_ctor_get(v___x_914_, 0);
v_snd_916_ = lean_ctor_get(v___x_914_, 1);
v___x_917_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_915_, v_x_905_);
lean_dec(v_x_905_);
if (v___x_917_ == 0)
{
lean_object* v_n_918_; 
lean_inc(v_snd_916_);
lean_inc(v_fst_915_);
lean_dec_ref(v___x_914_);
v_n_918_ = lean_nat_sub(v_x_904_, v___x_912_);
lean_dec(v_x_904_);
v_x_904_ = v_n_918_;
v_x_905_ = v_fst_915_;
v_x_906_ = v_snd_916_;
goto _start;
}
else
{
lean_dec(v_x_904_);
return v___x_914_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleRule___lam__0(lean_object* v_src_920_, lean_object* v_toks_921_){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_922_ = l_List_lengthTR___redArg(v_src_920_);
v___x_923_ = lean_unsigned_to_nat(1u);
v___x_924_ = lean_nat_add(v___x_922_, v___x_923_);
lean_dec(v___x_922_);
v___x_925_ = lp_lean_x2dftml_LeanFtml_modulePasses(v___x_924_, v_src_920_, v_toks_921_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleRule(lean_object* v_st_927_){
_start:
{
lean_object* v___f_928_; lean_object* v___x_929_; 
v___f_928_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleRule___closed__0));
v___x_929_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_927_, v___f_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Scan(lean_object* v_prev_930_, lean_object* v_src_931_, lean_object* v_toks_932_, lean_object* v_x_933_){
_start:
{
lean_object* v_zero_937_; uint8_t v_isZero_938_; 
v_zero_937_ = lean_unsigned_to_nat(0u);
v_isZero_938_ = lean_nat_dec_eq(v_x_933_, v_zero_937_);
if (v_isZero_938_ == 1)
{
lean_dec(v_src_931_);
goto v___jp_934_;
}
else
{
if (lean_obj_tag(v_src_931_) == 0)
{
goto v___jp_934_;
}
else
{
lean_object* v_head_939_; lean_object* v_tail_940_; lean_object* v_one_941_; lean_object* v_n_942_; lean_object* v___x_982_; uint8_t v___x_983_; 
v_head_939_ = lean_ctor_get(v_src_931_, 0);
v_tail_940_ = lean_ctor_get(v_src_931_, 1);
v_one_941_ = lean_unsigned_to_nat(1u);
v_n_942_ = lean_nat_sub(v_x_933_, v_one_941_);
v___x_982_ = lean_box(0);
v___x_983_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_930_, v___x_982_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; uint8_t v___x_985_; 
v___x_984_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_insertInlineOpenerNewlinesGo___closed__1));
v___x_985_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_930_, v___x_984_);
if (v___x_985_ == 0)
{
lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_1003_; 
lean_inc(v_tail_940_);
lean_inc(v_head_939_);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_src_931_);
if (v_isSharedCheck_1003_ == 0)
{
lean_object* v_unused_1004_; lean_object* v_unused_1005_; 
v_unused_1004_ = lean_ctor_get(v_src_931_, 1);
lean_dec(v_unused_1004_);
v_unused_1005_ = lean_ctor_get(v_src_931_, 0);
lean_dec(v_unused_1005_);
v___x_987_ = v_src_931_;
v_isShared_988_ = v_isSharedCheck_1003_;
goto v_resetjp_986_;
}
else
{
lean_dec(v_src_931_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_1003_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v_fst_991_; lean_object* v_snd_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1002_; 
lean_inc(v_head_939_);
v___x_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_989_, 0, v_head_939_);
v___x_990_ = lp_lean_x2dftml_LeanFtml_module654Scan(v___x_989_, v_tail_940_, v_toks_932_, v_n_942_);
lean_dec(v_n_942_);
lean_dec_ref_known(v___x_989_, 1);
v_fst_991_ = lean_ctor_get(v___x_990_, 0);
v_snd_992_ = lean_ctor_get(v___x_990_, 1);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_994_ = v___x_990_;
v_isShared_995_ = v_isSharedCheck_1002_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_snd_992_);
lean_inc(v_fst_991_);
lean_dec(v___x_990_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1002_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 1, v_fst_991_);
v___x_997_ = v___x_987_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_head_939_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_fst_991_);
v___x_997_ = v_reuseFailAlloc_1001_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_999_; 
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_997_);
v___x_999_ = v___x_994_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1000_, 1, v_snd_992_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
}
else
{
goto v___jp_943_;
}
}
else
{
goto v___jp_943_;
}
v___jp_943_:
{
lean_object* v___x_944_; 
lean_inc(v_toks_932_);
lean_inc_ref(v_src_931_);
v___x_944_ = lp_lean_x2dftml_LeanFtml_module654Match(v_src_931_, v_toks_932_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_962_; 
lean_inc(v_tail_940_);
lean_inc(v_head_939_);
v_isSharedCheck_962_ = !lean_is_exclusive(v_src_931_);
if (v_isSharedCheck_962_ == 0)
{
lean_object* v_unused_963_; lean_object* v_unused_964_; 
v_unused_963_ = lean_ctor_get(v_src_931_, 1);
lean_dec(v_unused_963_);
v_unused_964_ = lean_ctor_get(v_src_931_, 0);
lean_dec(v_unused_964_);
v___x_946_ = v_src_931_;
v_isShared_947_ = v_isSharedCheck_962_;
goto v_resetjp_945_;
}
else
{
lean_dec(v_src_931_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_962_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v_fst_950_; lean_object* v_snd_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_961_; 
lean_inc(v_head_939_);
v___x_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_948_, 0, v_head_939_);
v___x_949_ = lp_lean_x2dftml_LeanFtml_module654Scan(v___x_948_, v_tail_940_, v_toks_932_, v_n_942_);
lean_dec(v_n_942_);
lean_dec_ref_known(v___x_948_, 1);
v_fst_950_ = lean_ctor_get(v___x_949_, 0);
v_snd_951_ = lean_ctor_get(v___x_949_, 1);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_961_ == 0)
{
v___x_953_ = v___x_949_;
v_isShared_954_ = v_isSharedCheck_961_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_snd_951_);
lean_inc(v_fst_950_);
lean_dec(v___x_949_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_961_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 1, v_fst_950_);
v___x_956_ = v___x_946_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_head_939_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v_fst_950_);
v___x_956_ = v_reuseFailAlloc_960_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_958_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_956_);
v___x_958_ = v___x_953_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_956_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_snd_951_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
}
else
{
lean_object* v_val_965_; lean_object* v_snd_966_; lean_object* v_fst_967_; lean_object* v_fst_968_; lean_object* v_snd_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v_fst_972_; lean_object* v_snd_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_981_; 
lean_dec(v_toks_932_);
v_val_965_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_val_965_);
lean_dec_ref_known(v___x_944_, 1);
v_snd_966_ = lean_ctor_get(v_val_965_, 1);
lean_inc(v_snd_966_);
v_fst_967_ = lean_ctor_get(v_val_965_, 0);
lean_inc(v_fst_967_);
lean_dec(v_val_965_);
v_fst_968_ = lean_ctor_get(v_snd_966_, 0);
lean_inc(v_fst_968_);
v_snd_969_ = lean_ctor_get(v_snd_966_, 1);
lean_inc(v_snd_969_);
lean_dec(v_snd_966_);
v___x_970_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_931_, v_fst_968_);
v___x_971_ = lp_lean_x2dftml_LeanFtml_module654Scan(v___x_970_, v_fst_968_, v_snd_969_, v_n_942_);
lean_dec(v_n_942_);
lean_dec(v___x_970_);
v_fst_972_ = lean_ctor_get(v___x_971_, 0);
v_snd_973_ = lean_ctor_get(v___x_971_, 1);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_981_ == 0)
{
v___x_975_ = v___x_971_;
v_isShared_976_ = v_isSharedCheck_981_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_snd_973_);
lean_inc(v_fst_972_);
lean_dec(v___x_971_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_981_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_979_; 
v___x_977_ = l_List_appendTR___redArg(v_fst_967_, v_fst_972_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v___x_977_);
v___x_979_ = v___x_975_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_snd_973_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
}
v___jp_934_:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = lean_box(0);
v___x_936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_936_, 0, v___x_935_);
lean_ctor_set(v___x_936_, 1, v_toks_932_);
return v___x_936_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Scan___boxed(lean_object* v_prev_1006_, lean_object* v_src_1007_, lean_object* v_toks_1008_, lean_object* v_x_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = lp_lean_x2dftml_LeanFtml_module654Scan(v_prev_1006_, v_src_1007_, v_toks_1008_, v_x_1009_);
lean_dec(v_x_1009_);
lean_dec(v_prev_1006_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Rule___lam__0(lean_object* v_src_1011_, lean_object* v_toks_1012_){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1013_ = lean_box(0);
v___x_1014_ = l_List_lengthTR___redArg(v_src_1011_);
v___x_1015_ = lean_unsigned_to_nat(1u);
v___x_1016_ = lean_nat_add(v___x_1014_, v___x_1015_);
lean_dec(v___x_1014_);
v___x_1017_ = lp_lean_x2dftml_LeanFtml_module654Scan(v___x_1013_, v_src_1011_, v_toks_1012_, v___x_1016_);
lean_dec(v___x_1016_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Rule(lean_object* v_st_1019_){
_start:
{
lean_object* v___f_1020_; lean_object* v___x_1021_; 
v___f_1020_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_module654Rule___closed__0));
v___x_1021_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1019_, v___f_1020_);
return v___x_1021_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeRule(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
