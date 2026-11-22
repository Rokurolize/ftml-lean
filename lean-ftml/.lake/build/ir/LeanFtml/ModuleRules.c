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
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
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
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__1_value;
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
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__2_value;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countModuleOpeners(lean_object* v_prev_376_, lean_object* v_src_377_, lean_object* v_x_378_){
_start:
{
lean_object* v_zero_379_; uint8_t v_isZero_380_; 
v_zero_379_ = lean_unsigned_to_nat(0u);
v_isZero_380_ = lean_nat_dec_eq(v_x_378_, v_zero_379_);
if (v_isZero_380_ == 1)
{
lean_dec(v_x_378_);
lean_dec(v_src_377_);
lean_dec(v_prev_376_);
return v_zero_379_;
}
else
{
if (lean_obj_tag(v_src_377_) == 0)
{
lean_dec(v_x_378_);
lean_dec(v_prev_376_);
return v_zero_379_;
}
else
{
lean_object* v_head_381_; lean_object* v_tail_382_; lean_object* v_one_383_; lean_object* v_n_384_; lean_object* v___x_398_; uint8_t v___x_399_; 
v_head_381_ = lean_ctor_get(v_src_377_, 0);
lean_inc(v_head_381_);
v_tail_382_ = lean_ctor_get(v_src_377_, 1);
lean_inc(v_tail_382_);
v_one_383_ = lean_unsigned_to_nat(1u);
v_n_384_ = lean_nat_sub(v_x_378_, v_one_383_);
lean_dec(v_x_378_);
v___x_398_ = lean_box(0);
v___x_399_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_376_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__1));
v___x_401_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_376_, v___x_400_);
lean_dec(v_prev_376_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
lean_dec_ref_known(v_src_377_, 2);
v___x_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_402_, 0, v_head_381_);
v_prev_376_ = v___x_402_;
v_src_377_ = v_tail_382_;
v_x_378_ = v_n_384_;
goto _start;
}
else
{
goto v___jp_388_;
}
}
else
{
lean_dec(v_prev_376_);
goto v___jp_388_;
}
v___jp_385_:
{
lean_object* v___x_386_; 
v___x_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_386_, 0, v_head_381_);
v_prev_376_ = v___x_386_;
v_src_377_ = v_tail_382_;
v_x_378_ = v_n_384_;
goto _start;
}
v___jp_388_:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3);
v___x_390_ = lp_lean_x2dftml_LeanFtml_moduleHead(v___x_389_, v_src_377_);
if (lean_obj_tag(v___x_390_) == 1)
{
lean_object* v_val_391_; lean_object* v_snd_392_; 
v_val_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_val_391_);
lean_dec_ref_known(v___x_390_, 1);
v_snd_392_ = lean_ctor_get(v_val_391_, 1);
lean_inc(v_snd_392_);
lean_dec(v_val_391_);
if (lean_obj_tag(v_snd_392_) == 1)
{
lean_object* v_head_393_; lean_object* v_snd_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
lean_dec(v_tail_382_);
lean_dec(v_head_381_);
v_head_393_ = lean_ctor_get(v_snd_392_, 0);
lean_inc(v_head_393_);
lean_dec_ref_known(v_snd_392_, 2);
v_snd_394_ = lean_ctor_get(v_head_393_, 1);
lean_inc(v_snd_394_);
lean_dec(v_head_393_);
v___x_395_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__0));
v___x_396_ = lp_lean_x2dftml_LeanFtml_countModuleOpeners(v___x_395_, v_snd_394_, v_n_384_);
v___x_397_ = lean_nat_add(v_one_383_, v___x_396_);
lean_dec(v___x_396_);
return v___x_397_;
}
else
{
lean_dec(v_snd_392_);
goto v___jp_385_;
}
}
else
{
lean_dec(v___x_390_);
goto v___jp_385_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreMatch(lean_object* v_src_404_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1);
lean_inc(v_src_404_);
v___x_406_ = lp_lean_x2dftml_LeanFtml_moduleHead(v___x_405_, v_src_404_);
if (lean_obj_tag(v___x_406_) == 1)
{
lean_object* v_val_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_453_; 
v_val_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_453_ == 0)
{
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_453_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_val_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_453_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_snd_411_; 
v_snd_411_ = lean_ctor_get(v_val_407_, 1);
lean_inc(v_snd_411_);
lean_dec(v_val_407_);
if (lean_obj_tag(v_snd_411_) == 1)
{
lean_object* v_head_412_; lean_object* v_snd_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_450_; 
v_head_412_ = lean_ctor_get(v_snd_411_, 0);
lean_inc(v_head_412_);
lean_dec_ref_known(v_snd_411_, 2);
v_snd_413_ = lean_ctor_get(v_head_412_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v_head_412_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v_head_412_, 0);
lean_dec(v_unused_451_);
v___x_415_ = v_head_412_;
v_isShared_416_ = v_isSharedCheck_450_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_snd_413_);
lean_dec(v_head_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_450_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v_headLen_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_417_ = l_List_lengthTR___redArg(v_src_404_);
v___x_418_ = l_List_lengthTR___redArg(v_snd_413_);
v_headLen_419_ = lean_nat_sub(v___x_417_, v___x_418_);
lean_dec(v___x_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleTail___closed__1, &lp_lean_x2dftml_LeanFtml_moduleTail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_moduleTail___closed__1);
lean_inc(v_snd_413_);
v___x_421_ = lp_lean_x2dftml_LeanFtml_findSubCI(v___x_420_, v_snd_413_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_422_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_src_404_);
v___x_423_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_404_, v_src_404_, v_headLen_419_, v___x_422_);
lean_dec(v_src_404_);
v___x_424_ = lp_lean_x2dftml_LeanFtml_rewrite654Prefix(v___x_423_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_424_);
v___x_426_ = v___x_415_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_snd_413_);
v___x_426_ = v_reuseFailAlloc_430_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_428_; 
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_426_);
v___x_428_ = v___x_409_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_426_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
else
{
lean_object* v_val_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_449_; 
lean_del_object(v___x_409_);
v_val_431_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_449_ == 0)
{
v___x_433_ = v___x_421_;
v_isShared_434_ = v_isSharedCheck_449_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_val_431_);
lean_dec(v___x_421_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_449_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_435_ = lean_nat_add(v_headLen_419_, v_val_431_);
lean_dec(v_headLen_419_);
v___x_436_ = lean_unsigned_to_nat(11u);
v___x_437_ = lean_nat_add(v___x_435_, v___x_436_);
lean_dec(v___x_435_);
v___x_438_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_src_404_);
v___x_439_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_404_, v_src_404_, v___x_437_, v___x_438_);
lean_dec(v_src_404_);
v___x_440_ = lp_lean_x2dftml_LeanFtml_rewrite654Prefix(v___x_439_);
v___x_441_ = lean_nat_add(v_val_431_, v___x_436_);
lean_dec(v_val_431_);
v___x_442_ = l_List_drop___redArg(v___x_441_, v_snd_413_);
lean_dec(v_snd_413_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 1, v___x_442_);
lean_ctor_set(v___x_415_, 0, v___x_440_);
v___x_444_ = v___x_415_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_440_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v___x_442_);
v___x_444_ = v_reuseFailAlloc_448_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
lean_object* v___x_446_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 0, v___x_444_);
v___x_446_ = v___x_433_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
}
else
{
lean_object* v___x_452_; 
lean_dec(v_snd_411_);
lean_del_object(v___x_409_);
lean_dec(v_src_404_);
v___x_452_ = lean_box(0);
return v___x_452_;
}
}
}
else
{
lean_object* v___x_454_; 
lean_dec(v___x_406_);
lean_dec(v_src_404_);
v___x_454_ = lean_box(0);
return v___x_454_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object* v_x_455_, lean_object* v_x_456_){
_start:
{
if (lean_obj_tag(v_x_455_) == 0)
{
uint8_t v___x_457_; 
v___x_457_ = 1;
return v___x_457_;
}
else
{
if (lean_obj_tag(v_x_456_) == 0)
{
uint8_t v___x_458_; 
v___x_458_ = 0;
return v___x_458_;
}
else
{
lean_object* v_head_459_; lean_object* v_tail_460_; lean_object* v_head_461_; lean_object* v_tail_462_; uint8_t v___x_463_; 
v_head_459_ = lean_ctor_get(v_x_455_, 0);
v_tail_460_ = lean_ctor_get(v_x_455_, 1);
v_head_461_ = lean_ctor_get(v_x_456_, 0);
v_tail_462_ = lean_ctor_get(v_x_456_, 1);
v___x_463_ = lean_nat_dec_eq(v_head_459_, v_head_461_);
if (v___x_463_ == 0)
{
return v___x_463_;
}
else
{
v_x_455_ = v_tail_460_;
v_x_456_ = v_tail_462_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0___boxed(lean_object* v_x_465_, lean_object* v_x_466_){
_start:
{
uint8_t v_res_467_; lean_object* v_r_468_; 
v_res_467_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_x_465_, v_x_466_);
lean_dec(v_x_466_);
lean_dec(v_x_465_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesContain(lean_object* v_pat_469_, lean_object* v_x_470_){
_start:
{
if (lean_obj_tag(v_x_470_) == 0)
{
uint8_t v___x_471_; 
v___x_471_ = 0;
return v___x_471_;
}
else
{
lean_object* v_tail_472_; uint8_t v___x_473_; 
v_tail_472_ = lean_ctor_get(v_x_470_, 1);
v___x_473_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_pat_469_, v_x_470_);
if (v___x_473_ == 0)
{
v_x_470_ = v_tail_472_;
goto _start;
}
else
{
return v___x_473_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesContain___boxed(lean_object* v_pat_475_, lean_object* v_x_476_){
_start:
{
uint8_t v_res_477_; lean_object* v_r_478_; 
v_res_477_ = lp_lean_x2dftml_LeanFtml_bytesContain(v_pat_475_, v_x_476_);
lean_dec(v_x_476_);
lean_dec(v_pat_475_);
v_r_478_ = lean_box(v_res_477_);
return v_r_478_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bodyHasCodeToken(lean_object* v_body_480_, lean_object* v_x_481_, lean_object* v_x_482_){
_start:
{
if (lean_obj_tag(v_x_481_) == 0)
{
uint8_t v___x_483_; 
lean_dec(v_x_482_);
v___x_483_ = 0;
return v___x_483_;
}
else
{
lean_object* v_head_484_; lean_object* v_tail_485_; lean_object* v_rule_490_; lean_object* v___x_491_; uint8_t v___x_492_; 
v_head_484_ = lean_ctor_get(v_x_481_, 0);
v_tail_485_ = lean_ctor_get(v_x_481_, 1);
v_rule_490_ = lean_ctor_get(v_head_484_, 0);
v___x_491_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bodyHasCodeToken___closed__0));
v___x_492_ = lean_string_dec_eq(v_rule_490_, v___x_491_);
if (v___x_492_ == 0)
{
goto v___jp_486_;
}
else
{
lean_object* v___x_493_; uint8_t v___x_494_; 
lean_inc(v_x_482_);
v___x_493_ = lp_lean_x2dftml_LeanFtml_phBytes(v_x_482_);
v___x_494_ = lp_lean_x2dftml_LeanFtml_bytesContain(v___x_493_, v_body_480_);
lean_dec(v___x_493_);
if (v___x_494_ == 0)
{
goto v___jp_486_;
}
else
{
lean_dec(v_x_482_);
return v___x_494_;
}
}
v___jp_486_:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_unsigned_to_nat(1u);
v___x_488_ = lean_nat_add(v_x_482_, v___x_487_);
lean_dec(v_x_482_);
v_x_481_ = v_tail_485_;
v_x_482_ = v___x_488_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bodyHasCodeToken___boxed(lean_object* v_body_495_, lean_object* v_x_496_, lean_object* v_x_497_){
_start:
{
uint8_t v_res_498_; lean_object* v_r_499_; 
v_res_498_ = lp_lean_x2dftml_LeanFtml_bodyHasCodeToken(v_body_495_, v_x_496_, v_x_497_);
lean_dec(v_x_496_);
lean_dec(v_body_495_);
v_r_499_ = lean_box(v_res_498_);
return v_r_499_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleTryCands(lean_object* v_src_507_, lean_object* v_name_508_, lean_object* v_toks_509_, lean_object* v_x_510_){
_start:
{
if (lean_obj_tag(v_x_510_) == 0)
{
lean_object* v___x_511_; 
lean_dec(v_toks_509_);
lean_dec(v_name_508_);
lean_dec(v_src_507_);
v___x_511_ = lean_box(0);
return v___x_511_;
}
else
{
lean_object* v_head_512_; lean_object* v_tail_513_; lean_object* v_fst_514_; lean_object* v_snd_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_585_; 
v_head_512_ = lean_ctor_get(v_x_510_, 0);
lean_inc(v_head_512_);
v_tail_513_ = lean_ctor_get(v_x_510_, 1);
lean_inc(v_tail_513_);
lean_dec_ref_known(v_x_510_, 2);
v_fst_514_ = lean_ctor_get(v_head_512_, 0);
v_snd_515_ = lean_ctor_get(v_head_512_, 1);
v_isSharedCheck_585_ = !lean_is_exclusive(v_head_512_);
if (v_isSharedCheck_585_ == 0)
{
v___x_517_ = v_head_512_;
v_isShared_518_ = v_isSharedCheck_585_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_snd_515_);
lean_inc(v_fst_514_);
lean_dec(v_head_512_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_585_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; 
v___x_519_ = lp_lean_x2dftml_LeanFtml_moduleTail(v_snd_515_);
lean_dec(v_snd_515_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_del_object(v___x_517_);
lean_dec(v_fst_514_);
v_x_510_ = v_tail_513_;
goto _start;
}
else
{
lean_object* v_val_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_584_; 
lean_dec(v_tail_513_);
v_val_521_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_584_ == 0)
{
v___x_523_ = v___x_519_;
v_isShared_524_ = v_isSharedCheck_584_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_val_521_);
lean_dec(v___x_519_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_584_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v_fst_525_; lean_object* v_snd_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_583_; 
v_fst_525_ = lean_ctor_get(v_val_521_, 0);
v_snd_526_ = lean_ctor_get(v_val_521_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_val_521_);
if (v_isSharedCheck_583_ == 0)
{
v___x_528_ = v_val_521_;
v_isShared_529_ = v_isSharedCheck_583_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_snd_526_);
lean_inc(v_fst_525_);
lean_dec(v_val_521_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_583_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v_matched_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_530_ = l_List_lengthTR___redArg(v_src_507_);
v___x_531_ = l_List_lengthTR___redArg(v_snd_526_);
v___x_532_ = lean_nat_sub(v___x_530_, v___x_531_);
lean_dec(v___x_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_close2Suffixes___closed__0));
lean_inc(v_src_507_);
v_matched_535_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_507_, v_src_507_, v___x_532_, v___x_534_);
lean_dec(v_src_507_);
v___x_536_ = lean_unsigned_to_nat(1u);
v___x_537_ = lean_box(0);
v___x_538_ = l_List_lengthTR___redArg(v_matched_535_);
v___x_539_ = lean_nat_add(v___x_538_, v___x_536_);
lean_inc(v_matched_535_);
v___x_540_ = lp_lean_x2dftml_LeanFtml_countModuleOpeners(v___x_537_, v_matched_535_, v___x_539_);
v___x_541_ = lean_nat_dec_lt(v___x_536_, v___x_540_);
lean_dec(v___x_540_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v_fst_546_; lean_object* v_snd_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_572_; 
lean_del_object(v___x_517_);
v___x_542_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__0));
v___x_543_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_514_);
lean_dec(v_fst_514_);
v___x_544_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_525_);
lean_inc(v_toks_509_);
v___x_545_ = lp_lean_x2dftml_LeanFtml_claimModule(v___x_542_, v_name_508_, v___x_543_, v___x_544_, v_toks_509_);
v_fst_546_ = lean_ctor_get(v___x_545_, 0);
v_snd_547_ = lean_ctor_get(v___x_545_, 1);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_572_ == 0)
{
v___x_549_ = v___x_545_;
v_isShared_550_ = v_isSharedCheck_572_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_snd_547_);
lean_inc(v_fst_546_);
lean_dec(v___x_545_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_572_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___y_556_; uint8_t v___x_567_; 
v___x_551_ = lean_box(0);
v___x_552_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__2));
v___x_553_ = l_List_appendTR___redArg(v___x_552_, v_fst_546_);
v___x_554_ = l_List_appendTR___redArg(v___x_553_, v___x_552_);
v___x_567_ = lp_lean_x2dftml_LeanFtml_bodyHasCodeToken(v_fst_525_, v_toks_509_, v___x_533_);
lean_dec(v_toks_509_);
if (v___x_567_ == 0)
{
lean_dec(v___x_538_);
lean_dec(v_matched_535_);
lean_dec(v_fst_525_);
v___y_556_ = v___x_551_;
goto v___jp_555_;
}
else
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v_authoredCloser_570_; lean_object* v___x_571_; 
v___x_568_ = lean_unsigned_to_nat(11u);
v___x_569_ = lean_nat_sub(v___x_538_, v___x_568_);
lean_dec(v___x_538_);
v_authoredCloser_570_ = l_List_drop___redArg(v___x_569_, v_matched_535_);
lean_dec(v_matched_535_);
v___x_571_ = l_List_appendTR___redArg(v_fst_525_, v_authoredCloser_570_);
v___y_556_ = v___x_571_;
goto v___jp_555_;
}
v___jp_555_:
{
lean_object* v_repl_557_; lean_object* v___x_559_; 
v_repl_557_ = l_List_appendTR___redArg(v___x_554_, v___y_556_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v_snd_526_);
v___x_559_ = v___x_549_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_snd_526_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v_snd_547_);
v___x_559_ = v_reuseFailAlloc_566_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 1, v___x_559_);
lean_ctor_set(v___x_528_, 0, v_repl_557_);
v___x_561_ = v___x_528_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_repl_557_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v___x_559_);
v___x_561_ = v_reuseFailAlloc_565_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
lean_object* v___x_563_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_561_);
v___x_563_ = v___x_523_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v___x_561_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
}
else
{
lean_object* v___x_573_; lean_object* v___x_575_; 
lean_dec(v___x_538_);
lean_dec(v_fst_525_);
lean_dec(v_fst_514_);
lean_dec(v_name_508_);
v___x_573_ = lp_lean_x2dftml_LeanFtml_rewriteModulePrefix(v_matched_535_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 1, v_toks_509_);
lean_ctor_set(v___x_528_, 0, v_snd_526_);
v___x_575_ = v___x_528_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_snd_526_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_toks_509_);
v___x_575_ = v_reuseFailAlloc_582_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_577_; 
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 1, v___x_575_);
lean_ctor_set(v___x_517_, 0, v___x_573_);
v___x_577_ = v___x_517_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_575_);
v___x_577_ = v_reuseFailAlloc_581_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_579_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_577_);
v___x_579_ = v___x_523_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_577_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleMatch(lean_object* v_src_586_, lean_object* v_toks_587_){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__3);
lean_inc(v_src_586_);
v___x_589_ = lp_lean_x2dftml_LeanFtml_moduleHead(v___x_588_, v_src_586_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v___x_590_; 
lean_dec(v_toks_587_);
lean_dec(v_src_586_);
v___x_590_ = lean_box(0);
return v___x_590_;
}
else
{
lean_object* v_val_591_; lean_object* v_fst_592_; lean_object* v_snd_593_; lean_object* v___x_594_; 
v_val_591_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_val_591_);
lean_dec_ref_known(v___x_589_, 1);
v_fst_592_ = lean_ctor_get(v_val_591_, 0);
lean_inc(v_fst_592_);
v_snd_593_ = lean_ctor_get(v_val_591_, 1);
lean_inc(v_snd_593_);
lean_dec(v_val_591_);
v___x_594_ = lp_lean_x2dftml_LeanFtml_moduleTryCands(v_src_586_, v_fst_592_, v_toks_587_, v_snd_593_);
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654TryCands(lean_object* v_name_596_, lean_object* v_toks_597_, lean_object* v_x_598_){
_start:
{
if (lean_obj_tag(v_x_598_) == 0)
{
lean_object* v___x_599_; 
lean_dec(v_toks_597_);
lean_dec(v_name_596_);
v___x_599_ = lean_box(0);
return v___x_599_;
}
else
{
lean_object* v_head_600_; lean_object* v_tail_601_; lean_object* v_fst_602_; lean_object* v_snd_603_; lean_object* v___x_604_; 
v_head_600_ = lean_ctor_get(v_x_598_, 0);
v_tail_601_ = lean_ctor_get(v_x_598_, 1);
v_fst_602_ = lean_ctor_get(v_head_600_, 0);
v_snd_603_ = lean_ctor_get(v_head_600_, 1);
v___x_604_ = lp_lean_x2dftml_LeanFtml_module654Tail(v_snd_603_);
if (lean_obj_tag(v___x_604_) == 0)
{
v_x_598_ = v_tail_601_;
goto _start;
}
else
{
lean_object* v_val_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_638_; 
v_val_606_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_638_ == 0)
{
v___x_608_ = v___x_604_;
v_isShared_609_ = v_isSharedCheck_638_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_val_606_);
lean_dec(v___x_604_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_638_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v_fst_610_; lean_object* v_snd_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_637_; 
v_fst_610_ = lean_ctor_get(v_val_606_, 0);
v_snd_611_ = lean_ctor_get(v_val_606_, 1);
v_isSharedCheck_637_ = !lean_is_exclusive(v_val_606_);
if (v_isSharedCheck_637_ == 0)
{
v___x_613_ = v_val_606_;
v_isShared_614_ = v_isSharedCheck_637_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_snd_611_);
lean_inc(v_fst_610_);
lean_dec(v_val_606_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_637_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v_fst_619_; lean_object* v_snd_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_636_; 
v___x_615_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_module654TryCands___closed__0));
v___x_616_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_602_);
v___x_617_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_610_);
lean_dec(v_fst_610_);
v___x_618_ = lp_lean_x2dftml_LeanFtml_claimModule(v___x_615_, v_name_596_, v___x_616_, v___x_617_, v_toks_597_);
v_fst_619_ = lean_ctor_get(v___x_618_, 0);
v_snd_620_ = lean_ctor_get(v___x_618_, 1);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_636_ == 0)
{
v___x_622_ = v___x_618_;
v_isShared_623_ = v_isSharedCheck_636_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_snd_620_);
lean_inc(v_fst_619_);
lean_dec(v___x_618_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_636_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_624_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleTryCands___closed__2));
v___x_625_ = l_List_appendTR___redArg(v___x_624_, v_fst_619_);
v___x_626_ = l_List_appendTR___redArg(v___x_625_, v___x_624_);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v_snd_611_);
v___x_628_ = v___x_622_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_snd_611_);
lean_ctor_set(v_reuseFailAlloc_635_, 1, v_snd_620_);
v___x_628_ = v_reuseFailAlloc_635_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_630_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 1, v___x_628_);
lean_ctor_set(v___x_613_, 0, v___x_626_);
v___x_630_ = v___x_613_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v___x_628_);
v___x_630_ = v_reuseFailAlloc_634_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_632_; 
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v___x_630_);
v___x_632_ = v___x_608_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_630_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654TryCands___boxed(lean_object* v_name_639_, lean_object* v_toks_640_, lean_object* v_x_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = lp_lean_x2dftml_LeanFtml_module654TryCands(v_name_639_, v_toks_640_, v_x_641_);
lean_dec(v_x_641_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Match(lean_object* v_src_643_, lean_object* v_toks_644_){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1, &lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rewrite654Prefix___closed__1);
v___x_646_ = lp_lean_x2dftml_LeanFtml_moduleHead(v___x_645_, v_src_643_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v___x_647_; 
lean_dec(v_toks_644_);
v___x_647_ = lean_box(0);
return v___x_647_;
}
else
{
lean_object* v_val_648_; lean_object* v_fst_649_; lean_object* v_snd_650_; lean_object* v___x_651_; 
v_val_648_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_val_648_);
lean_dec_ref_known(v___x_646_, 1);
v_fst_649_ = lean_ctor_get(v_val_648_, 0);
lean_inc(v_fst_649_);
v_snd_650_ = lean_ctor_get(v_val_648_, 1);
lean_inc(v_snd_650_);
lean_dec(v_val_648_);
v___x_651_ = lp_lean_x2dftml_LeanFtml_module654TryCands(v_fst_649_, v_toks_644_, v_snd_650_);
lean_dec(v_snd_650_);
return v___x_651_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreScan(lean_object* v_prev_652_, lean_object* v_src_653_, lean_object* v_x_654_){
_start:
{
lean_object* v_zero_655_; uint8_t v_isZero_656_; 
v_zero_655_ = lean_unsigned_to_nat(0u);
v_isZero_656_ = lean_nat_dec_eq(v_x_654_, v_zero_655_);
if (v_isZero_656_ == 1)
{
lean_object* v___x_657_; 
lean_dec(v_src_653_);
v___x_657_ = lean_box(0);
return v___x_657_;
}
else
{
if (lean_obj_tag(v_src_653_) == 0)
{
return v_src_653_;
}
else
{
lean_object* v_head_658_; lean_object* v_tail_659_; lean_object* v_one_660_; lean_object* v_n_661_; lean_object* v___x_681_; uint8_t v___x_682_; 
v_head_658_ = lean_ctor_get(v_src_653_, 0);
v_tail_659_ = lean_ctor_get(v_src_653_, 1);
v_one_660_ = lean_unsigned_to_nat(1u);
v_n_661_ = lean_nat_sub(v_x_654_, v_one_660_);
v___x_681_ = lean_box(0);
v___x_682_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_652_, v___x_681_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; uint8_t v___x_684_; 
v___x_683_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__1));
v___x_684_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_652_, v___x_683_);
if (v___x_684_ == 0)
{
lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_693_; 
lean_inc(v_tail_659_);
lean_inc(v_head_658_);
v_isSharedCheck_693_ = !lean_is_exclusive(v_src_653_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; lean_object* v_unused_695_; 
v_unused_694_ = lean_ctor_get(v_src_653_, 1);
lean_dec(v_unused_694_);
v_unused_695_ = lean_ctor_get(v_src_653_, 0);
lean_dec(v_unused_695_);
v___x_686_ = v_src_653_;
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
else
{
lean_dec(v_src_653_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
lean_inc(v_head_658_);
v___x_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_688_, 0, v_head_658_);
v___x_689_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v___x_688_, v_tail_659_, v_n_661_);
lean_dec(v_n_661_);
lean_dec_ref_known(v___x_688_, 1);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v___x_689_);
v___x_691_ = v___x_686_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_head_658_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
else
{
goto v___jp_662_;
}
}
else
{
goto v___jp_662_;
}
v___jp_662_:
{
lean_object* v___x_663_; 
lean_inc_ref(v_src_653_);
v___x_663_ = lp_lean_x2dftml_LeanFtml_modulepreMatch(v_src_653_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_672_; 
lean_inc(v_tail_659_);
lean_inc(v_head_658_);
v_isSharedCheck_672_ = !lean_is_exclusive(v_src_653_);
if (v_isSharedCheck_672_ == 0)
{
lean_object* v_unused_673_; lean_object* v_unused_674_; 
v_unused_673_ = lean_ctor_get(v_src_653_, 1);
lean_dec(v_unused_673_);
v_unused_674_ = lean_ctor_get(v_src_653_, 0);
lean_dec(v_unused_674_);
v___x_665_ = v_src_653_;
v_isShared_666_ = v_isSharedCheck_672_;
goto v_resetjp_664_;
}
else
{
lean_dec(v_src_653_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_672_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_670_; 
lean_inc(v_head_658_);
v___x_667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_667_, 0, v_head_658_);
v___x_668_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v___x_667_, v_tail_659_, v_n_661_);
lean_dec(v_n_661_);
lean_dec_ref_known(v___x_667_, 1);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 1, v___x_668_);
v___x_670_ = v___x_665_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_head_658_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v___x_668_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
else
{
lean_object* v_val_675_; lean_object* v_fst_676_; lean_object* v_snd_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v_val_675_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_val_675_);
lean_dec_ref_known(v___x_663_, 1);
v_fst_676_ = lean_ctor_get(v_val_675_, 0);
lean_inc(v_fst_676_);
v_snd_677_ = lean_ctor_get(v_val_675_, 1);
lean_inc(v_snd_677_);
lean_dec(v_val_675_);
v___x_678_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_653_, v_snd_677_);
v___x_679_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v___x_678_, v_snd_677_, v_n_661_);
lean_dec(v_n_661_);
lean_dec(v___x_678_);
v___x_680_ = l_List_appendTR___redArg(v_fst_676_, v___x_679_);
return v___x_680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreScan___boxed(lean_object* v_prev_696_, lean_object* v_src_697_, lean_object* v_x_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v_prev_696_, v_src_697_, v_x_698_);
lean_dec(v_x_698_);
lean_dec(v_prev_696_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreRule___lam__0(lean_object* v_src_700_, lean_object* v_toks_701_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_702_ = lean_box(0);
v___x_703_ = l_List_lengthTR___redArg(v_src_700_);
v___x_704_ = lean_unsigned_to_nat(1u);
v___x_705_ = lean_nat_add(v___x_703_, v___x_704_);
lean_dec(v___x_703_);
v___x_706_ = lp_lean_x2dftml_LeanFtml_modulepreScan(v___x_702_, v_src_700_, v___x_705_);
lean_dec(v___x_705_);
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
lean_ctor_set(v___x_707_, 1, v_toks_701_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulepreRule(lean_object* v_st_709_){
_start:
{
lean_object* v___f_710_; lean_object* v___x_711_; 
v___f_710_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_modulepreRule___closed__0));
v___x_711_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_709_, v___f_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleScanPass(lean_object* v_prev_712_, lean_object* v_src_713_, lean_object* v_toks_714_, lean_object* v_x_715_){
_start:
{
lean_object* v_zero_719_; uint8_t v_isZero_720_; 
v_zero_719_ = lean_unsigned_to_nat(0u);
v_isZero_720_ = lean_nat_dec_eq(v_x_715_, v_zero_719_);
if (v_isZero_720_ == 1)
{
lean_dec(v_src_713_);
goto v___jp_716_;
}
else
{
if (lean_obj_tag(v_src_713_) == 0)
{
goto v___jp_716_;
}
else
{
lean_object* v_head_721_; lean_object* v_tail_722_; lean_object* v_one_723_; lean_object* v_n_724_; lean_object* v___x_764_; uint8_t v___x_765_; 
v_head_721_ = lean_ctor_get(v_src_713_, 0);
v_tail_722_ = lean_ctor_get(v_src_713_, 1);
v_one_723_ = lean_unsigned_to_nat(1u);
v_n_724_ = lean_nat_sub(v_x_715_, v_one_723_);
v___x_764_ = lean_box(0);
v___x_765_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_712_, v___x_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__1));
v___x_767_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_712_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_785_; 
lean_inc(v_tail_722_);
lean_inc(v_head_721_);
v_isSharedCheck_785_ = !lean_is_exclusive(v_src_713_);
if (v_isSharedCheck_785_ == 0)
{
lean_object* v_unused_786_; lean_object* v_unused_787_; 
v_unused_786_ = lean_ctor_get(v_src_713_, 1);
lean_dec(v_unused_786_);
v_unused_787_ = lean_ctor_get(v_src_713_, 0);
lean_dec(v_unused_787_);
v___x_769_ = v_src_713_;
v_isShared_770_ = v_isSharedCheck_785_;
goto v_resetjp_768_;
}
else
{
lean_dec(v_src_713_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_785_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v_fst_773_; lean_object* v_snd_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_784_; 
lean_inc(v_head_721_);
v___x_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_771_, 0, v_head_721_);
v___x_772_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v___x_771_, v_tail_722_, v_toks_714_, v_n_724_);
lean_dec(v_n_724_);
lean_dec_ref_known(v___x_771_, 1);
v_fst_773_ = lean_ctor_get(v___x_772_, 0);
v_snd_774_ = lean_ctor_get(v___x_772_, 1);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_784_ == 0)
{
v___x_776_ = v___x_772_;
v_isShared_777_ = v_isSharedCheck_784_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_snd_774_);
lean_inc(v_fst_773_);
lean_dec(v___x_772_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_784_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v_fst_773_);
v___x_779_ = v___x_769_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_head_721_);
lean_ctor_set(v_reuseFailAlloc_783_, 1, v_fst_773_);
v___x_779_ = v_reuseFailAlloc_783_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_object* v___x_781_; 
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_779_);
v___x_781_ = v___x_776_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v_snd_774_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
}
else
{
goto v___jp_725_;
}
}
else
{
goto v___jp_725_;
}
v___jp_725_:
{
lean_object* v___x_726_; 
lean_inc(v_toks_714_);
lean_inc_ref(v_src_713_);
v___x_726_ = lp_lean_x2dftml_LeanFtml_moduleMatch(v_src_713_, v_toks_714_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_744_; 
lean_inc(v_tail_722_);
lean_inc(v_head_721_);
v_isSharedCheck_744_ = !lean_is_exclusive(v_src_713_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; lean_object* v_unused_746_; 
v_unused_745_ = lean_ctor_get(v_src_713_, 1);
lean_dec(v_unused_745_);
v_unused_746_ = lean_ctor_get(v_src_713_, 0);
lean_dec(v_unused_746_);
v___x_728_ = v_src_713_;
v_isShared_729_ = v_isSharedCheck_744_;
goto v_resetjp_727_;
}
else
{
lean_dec(v_src_713_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_744_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v_fst_732_; lean_object* v_snd_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_743_; 
lean_inc(v_head_721_);
v___x_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_730_, 0, v_head_721_);
v___x_731_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v___x_730_, v_tail_722_, v_toks_714_, v_n_724_);
lean_dec(v_n_724_);
lean_dec_ref_known(v___x_730_, 1);
v_fst_732_ = lean_ctor_get(v___x_731_, 0);
v_snd_733_ = lean_ctor_get(v___x_731_, 1);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_743_ == 0)
{
v___x_735_ = v___x_731_;
v_isShared_736_ = v_isSharedCheck_743_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_snd_733_);
lean_inc(v_fst_732_);
lean_dec(v___x_731_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_743_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 1, v_fst_732_);
v___x_738_ = v___x_728_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_head_721_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_fst_732_);
v___x_738_ = v_reuseFailAlloc_742_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_740_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 0, v___x_738_);
v___x_740_ = v___x_735_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_738_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_snd_733_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
else
{
lean_object* v_val_747_; lean_object* v_snd_748_; lean_object* v_fst_749_; lean_object* v_fst_750_; lean_object* v_snd_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v_fst_754_; lean_object* v_snd_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_763_; 
lean_dec(v_toks_714_);
v_val_747_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_val_747_);
lean_dec_ref_known(v___x_726_, 1);
v_snd_748_ = lean_ctor_get(v_val_747_, 1);
lean_inc(v_snd_748_);
v_fst_749_ = lean_ctor_get(v_val_747_, 0);
lean_inc(v_fst_749_);
lean_dec(v_val_747_);
v_fst_750_ = lean_ctor_get(v_snd_748_, 0);
lean_inc(v_fst_750_);
v_snd_751_ = lean_ctor_get(v_snd_748_, 1);
lean_inc(v_snd_751_);
lean_dec(v_snd_748_);
v___x_752_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_713_, v_fst_750_);
v___x_753_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v___x_752_, v_fst_750_, v_snd_751_, v_n_724_);
lean_dec(v_n_724_);
lean_dec(v___x_752_);
v_fst_754_ = lean_ctor_get(v___x_753_, 0);
v_snd_755_ = lean_ctor_get(v___x_753_, 1);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_763_ == 0)
{
v___x_757_ = v___x_753_;
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_snd_755_);
lean_inc(v_fst_754_);
lean_dec(v___x_753_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_759_ = l_List_appendTR___redArg(v_fst_749_, v_fst_754_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_759_);
v___x_761_ = v___x_757_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_759_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_snd_755_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
}
v___jp_716_:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = lean_box(0);
v___x_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_718_, 0, v___x_717_);
lean_ctor_set(v___x_718_, 1, v_toks_714_);
return v___x_718_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleScanPass___boxed(lean_object* v_prev_788_, lean_object* v_src_789_, lean_object* v_toks_790_, lean_object* v_x_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v_prev_788_, v_src_789_, v_toks_790_, v_x_791_);
lean_dec(v_x_791_);
lean_dec(v_prev_788_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modulePasses(lean_object* v_x_793_, lean_object* v_x_794_, lean_object* v_x_795_){
_start:
{
lean_object* v_zero_796_; uint8_t v_isZero_797_; 
v_zero_796_ = lean_unsigned_to_nat(0u);
v_isZero_797_ = lean_nat_dec_eq(v_x_793_, v_zero_796_);
if (v_isZero_797_ == 1)
{
lean_object* v___x_798_; 
lean_dec(v_x_793_);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v_x_794_);
lean_ctor_set(v___x_798_, 1, v_x_795_);
return v___x_798_;
}
else
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v_fst_804_; lean_object* v_snd_805_; uint8_t v___x_806_; 
v___x_799_ = lean_box(0);
v___x_800_ = l_List_lengthTR___redArg(v_x_794_);
v___x_801_ = lean_unsigned_to_nat(1u);
v___x_802_ = lean_nat_add(v___x_800_, v___x_801_);
lean_dec(v___x_800_);
lean_inc(v_x_794_);
v___x_803_ = lp_lean_x2dftml_LeanFtml_moduleScanPass(v___x_799_, v_x_794_, v_x_795_, v___x_802_);
lean_dec(v___x_802_);
v_fst_804_ = lean_ctor_get(v___x_803_, 0);
v_snd_805_ = lean_ctor_get(v___x_803_, 1);
v___x_806_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_804_, v_x_794_);
lean_dec(v_x_794_);
if (v___x_806_ == 0)
{
lean_object* v_n_807_; 
lean_inc(v_snd_805_);
lean_inc(v_fst_804_);
lean_dec_ref(v___x_803_);
v_n_807_ = lean_nat_sub(v_x_793_, v___x_801_);
lean_dec(v_x_793_);
v_x_793_ = v_n_807_;
v_x_794_ = v_fst_804_;
v_x_795_ = v_snd_805_;
goto _start;
}
else
{
lean_dec(v_x_793_);
return v___x_803_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleRule___lam__0(lean_object* v_src_809_, lean_object* v_toks_810_){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_811_ = l_List_lengthTR___redArg(v_src_809_);
v___x_812_ = lean_unsigned_to_nat(1u);
v___x_813_ = lean_nat_add(v___x_811_, v___x_812_);
lean_dec(v___x_811_);
v___x_814_ = lp_lean_x2dftml_LeanFtml_modulePasses(v___x_813_, v_src_809_, v_toks_810_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleRule(lean_object* v_st_816_){
_start:
{
lean_object* v___f_817_; lean_object* v___x_818_; 
v___f_817_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleRule___closed__0));
v___x_818_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_816_, v___f_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Scan(lean_object* v_prev_819_, lean_object* v_src_820_, lean_object* v_toks_821_, lean_object* v_x_822_){
_start:
{
lean_object* v_zero_826_; uint8_t v_isZero_827_; 
v_zero_826_ = lean_unsigned_to_nat(0u);
v_isZero_827_ = lean_nat_dec_eq(v_x_822_, v_zero_826_);
if (v_isZero_827_ == 1)
{
lean_dec(v_src_820_);
goto v___jp_823_;
}
else
{
if (lean_obj_tag(v_src_820_) == 0)
{
goto v___jp_823_;
}
else
{
lean_object* v_head_828_; lean_object* v_tail_829_; lean_object* v_one_830_; lean_object* v_n_831_; lean_object* v___x_871_; uint8_t v___x_872_; 
v_head_828_ = lean_ctor_get(v_src_820_, 0);
v_tail_829_ = lean_ctor_get(v_src_820_, 1);
v_one_830_ = lean_unsigned_to_nat(1u);
v_n_831_ = lean_nat_sub(v_x_822_, v_one_830_);
v___x_871_ = lean_box(0);
v___x_872_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_819_, v___x_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_873_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_countModuleOpeners___closed__1));
v___x_874_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_819_, v___x_873_);
if (v___x_874_ == 0)
{
lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_892_; 
lean_inc(v_tail_829_);
lean_inc(v_head_828_);
v_isSharedCheck_892_ = !lean_is_exclusive(v_src_820_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; lean_object* v_unused_894_; 
v_unused_893_ = lean_ctor_get(v_src_820_, 1);
lean_dec(v_unused_893_);
v_unused_894_ = lean_ctor_get(v_src_820_, 0);
lean_dec(v_unused_894_);
v___x_876_ = v_src_820_;
v_isShared_877_ = v_isSharedCheck_892_;
goto v_resetjp_875_;
}
else
{
lean_dec(v_src_820_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_892_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v_fst_880_; lean_object* v_snd_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_891_; 
lean_inc(v_head_828_);
v___x_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_878_, 0, v_head_828_);
v___x_879_ = lp_lean_x2dftml_LeanFtml_module654Scan(v___x_878_, v_tail_829_, v_toks_821_, v_n_831_);
lean_dec(v_n_831_);
lean_dec_ref_known(v___x_878_, 1);
v_fst_880_ = lean_ctor_get(v___x_879_, 0);
v_snd_881_ = lean_ctor_get(v___x_879_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_891_ == 0)
{
v___x_883_ = v___x_879_;
v_isShared_884_ = v_isSharedCheck_891_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_snd_881_);
lean_inc(v_fst_880_);
lean_dec(v___x_879_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_891_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 1, v_fst_880_);
v___x_886_ = v___x_876_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_head_828_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_fst_880_);
v___x_886_ = v_reuseFailAlloc_890_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_888_; 
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_886_);
v___x_888_ = v___x_883_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_snd_881_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
}
else
{
goto v___jp_832_;
}
}
else
{
goto v___jp_832_;
}
v___jp_832_:
{
lean_object* v___x_833_; 
lean_inc(v_toks_821_);
lean_inc_ref(v_src_820_);
v___x_833_ = lp_lean_x2dftml_LeanFtml_module654Match(v_src_820_, v_toks_821_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_851_; 
lean_inc(v_tail_829_);
lean_inc(v_head_828_);
v_isSharedCheck_851_ = !lean_is_exclusive(v_src_820_);
if (v_isSharedCheck_851_ == 0)
{
lean_object* v_unused_852_; lean_object* v_unused_853_; 
v_unused_852_ = lean_ctor_get(v_src_820_, 1);
lean_dec(v_unused_852_);
v_unused_853_ = lean_ctor_get(v_src_820_, 0);
lean_dec(v_unused_853_);
v___x_835_ = v_src_820_;
v_isShared_836_ = v_isSharedCheck_851_;
goto v_resetjp_834_;
}
else
{
lean_dec(v_src_820_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_851_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v_fst_839_; lean_object* v_snd_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_850_; 
lean_inc(v_head_828_);
v___x_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_837_, 0, v_head_828_);
v___x_838_ = lp_lean_x2dftml_LeanFtml_module654Scan(v___x_837_, v_tail_829_, v_toks_821_, v_n_831_);
lean_dec(v_n_831_);
lean_dec_ref_known(v___x_837_, 1);
v_fst_839_ = lean_ctor_get(v___x_838_, 0);
v_snd_840_ = lean_ctor_get(v___x_838_, 1);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_850_ == 0)
{
v___x_842_ = v___x_838_;
v_isShared_843_ = v_isSharedCheck_850_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_snd_840_);
lean_inc(v_fst_839_);
lean_dec(v___x_838_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_850_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v_fst_839_);
v___x_845_ = v___x_835_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_head_828_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_fst_839_);
v___x_845_ = v_reuseFailAlloc_849_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
lean_object* v___x_847_; 
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_845_);
v___x_847_ = v___x_842_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_845_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v_snd_840_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
else
{
lean_object* v_val_854_; lean_object* v_snd_855_; lean_object* v_fst_856_; lean_object* v_fst_857_; lean_object* v_snd_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v_fst_861_; lean_object* v_snd_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_870_; 
lean_dec(v_toks_821_);
v_val_854_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_val_854_);
lean_dec_ref_known(v___x_833_, 1);
v_snd_855_ = lean_ctor_get(v_val_854_, 1);
lean_inc(v_snd_855_);
v_fst_856_ = lean_ctor_get(v_val_854_, 0);
lean_inc(v_fst_856_);
lean_dec(v_val_854_);
v_fst_857_ = lean_ctor_get(v_snd_855_, 0);
lean_inc(v_fst_857_);
v_snd_858_ = lean_ctor_get(v_snd_855_, 1);
lean_inc(v_snd_858_);
lean_dec(v_snd_855_);
v___x_859_ = lp_lean_x2dftml_LeanFtml_lastConsumedByte(v_src_820_, v_fst_857_);
v___x_860_ = lp_lean_x2dftml_LeanFtml_module654Scan(v___x_859_, v_fst_857_, v_snd_858_, v_n_831_);
lean_dec(v_n_831_);
lean_dec(v___x_859_);
v_fst_861_ = lean_ctor_get(v___x_860_, 0);
v_snd_862_ = lean_ctor_get(v___x_860_, 1);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_870_ == 0)
{
v___x_864_ = v___x_860_;
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_snd_862_);
lean_inc(v_fst_861_);
lean_dec(v___x_860_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = l_List_appendTR___redArg(v_fst_856_, v_fst_861_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_866_);
v___x_868_ = v___x_864_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v_snd_862_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
}
}
v___jp_823_:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_box(0);
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
lean_ctor_set(v___x_825_, 1, v_toks_821_);
return v___x_825_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Scan___boxed(lean_object* v_prev_895_, lean_object* v_src_896_, lean_object* v_toks_897_, lean_object* v_x_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = lp_lean_x2dftml_LeanFtml_module654Scan(v_prev_895_, v_src_896_, v_toks_897_, v_x_898_);
lean_dec(v_x_898_);
lean_dec(v_prev_895_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Rule___lam__0(lean_object* v_src_900_, lean_object* v_toks_901_){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_902_ = lean_box(0);
v___x_903_ = l_List_lengthTR___redArg(v_src_900_);
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = lean_nat_add(v___x_903_, v___x_904_);
lean_dec(v___x_903_);
v___x_906_ = lp_lean_x2dftml_LeanFtml_module654Scan(v___x_902_, v_src_900_, v_toks_901_, v___x_905_);
lean_dec(v___x_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_module654Rule(lean_object* v_st_908_){
_start:
{
lean_object* v___f_909_; lean_object* v___x_910_; 
v___f_909_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_module654Rule___closed__0));
v___x_910_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_908_, v___f_909_);
return v___x_910_;
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
