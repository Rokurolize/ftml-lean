// Lean compiler output
// Module: LeanFtml.CodeRule
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t l_Char_ofNat(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isPcreWs(uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
uint8_t l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimChars(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omSet(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_pushText(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_pushTok(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_allText(lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dftml_LeanFtml_swapAsciiCase(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapAsciiCase___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ciChar(uint32_t, uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ciChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripslashes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeEq_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeEq(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOf_go(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOf_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOf(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOf___boxed(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrs_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrs___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeToken___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeToken___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeToken___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeToken___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeToken___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeToken___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeToken___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeToken___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeToken___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeToken___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__6;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_codeToken___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeToken___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeToken___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeToken___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeToken___closed__9;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeToken___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeFuel(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeFuel___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_openerArgs_spec__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_openerArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_openerArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_openerArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_openerArgs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__5(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[[code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeMatch___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeMatch___closed__1;
static const lean_array_object lp_lean_x2dftml_LeanFtml_codeMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeMatch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeMatch___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeMatch(lean_object*, uint8_t, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_codeBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBody___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBody___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/code]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBody___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBody___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeBody___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeBody___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBody(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeMatch___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBody___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_applyCode_scan(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_applyCode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeRule(lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dftml_LeanFtml_swapAsciiCase(uint32_t v_c_1_){
_start:
{
uint32_t v___x_11_; uint8_t v___x_12_; 
v___x_11_ = 97;
v___x_12_ = lean_uint32_dec_le(v___x_11_, v_c_1_);
if (v___x_12_ == 0)
{
goto v___jp_2_;
}
else
{
uint32_t v___x_13_; uint8_t v___x_14_; 
v___x_13_ = 122;
v___x_14_ = lean_uint32_dec_le(v_c_1_, v___x_13_);
if (v___x_14_ == 0)
{
goto v___jp_2_;
}
else
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; uint32_t v___x_18_; 
v___x_15_ = lean_uint32_to_nat(v_c_1_);
v___x_16_ = lean_unsigned_to_nat(32u);
v___x_17_ = lean_nat_sub(v___x_15_, v___x_16_);
lean_dec(v___x_15_);
v___x_18_ = l_Char_ofNat(v___x_17_);
lean_dec(v___x_17_);
return v___x_18_;
}
}
v___jp_2_:
{
uint32_t v___x_3_; uint8_t v___x_4_; 
v___x_3_ = 65;
v___x_4_ = lean_uint32_dec_le(v___x_3_, v_c_1_);
if (v___x_4_ == 0)
{
return v_c_1_;
}
else
{
uint32_t v___x_5_; uint8_t v___x_6_; 
v___x_5_ = 90;
v___x_6_ = lean_uint32_dec_le(v_c_1_, v___x_5_);
if (v___x_6_ == 0)
{
return v_c_1_;
}
else
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; uint32_t v___x_10_; 
v___x_7_ = lean_uint32_to_nat(v_c_1_);
v___x_8_ = lean_unsigned_to_nat(32u);
v___x_9_ = lean_nat_add(v___x_7_, v___x_8_);
lean_dec(v___x_7_);
v___x_10_ = l_Char_ofNat(v___x_9_);
lean_dec(v___x_9_);
return v___x_10_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapAsciiCase___boxed(lean_object* v_c_19_){
_start:
{
uint32_t v_c_boxed_20_; uint32_t v_res_21_; lean_object* v_r_22_; 
v_c_boxed_20_ = lean_unbox_uint32(v_c_19_);
lean_dec(v_c_19_);
v_res_21_ = lp_lean_x2dftml_LeanFtml_swapAsciiCase(v_c_boxed_20_);
v_r_22_ = lean_box_uint32(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ciChar(uint32_t v_c_23_, uint32_t v_lit_24_){
_start:
{
uint8_t v___x_25_; 
v___x_25_ = lean_uint32_dec_eq(v_c_23_, v_lit_24_);
if (v___x_25_ == 0)
{
uint32_t v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lp_lean_x2dftml_LeanFtml_swapAsciiCase(v_lit_24_);
v___x_27_ = lean_uint32_dec_eq(v_c_23_, v___x_26_);
return v___x_27_;
}
else
{
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ciChar___boxed(lean_object* v_c_28_, lean_object* v_lit_29_){
_start:
{
uint32_t v_c_boxed_30_; uint32_t v_lit_boxed_31_; uint8_t v_res_32_; lean_object* v_r_33_; 
v_c_boxed_30_ = lean_unbox_uint32(v_c_28_);
lean_dec(v_c_28_);
v_lit_boxed_31_ = lean_unbox_uint32(v_lit_29_);
lean_dec(v_lit_29_);
v_res_32_ = lp_lean_x2dftml_LeanFtml_ciChar(v_c_boxed_30_, v_lit_boxed_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLit(lean_object* v_x_34_, lean_object* v_x_35_){
_start:
{
if (lean_obj_tag(v_x_35_) == 0)
{
lean_object* v___x_36_; 
v___x_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_36_, 0, v_x_34_);
return v___x_36_;
}
else
{
if (lean_obj_tag(v_x_34_) == 0)
{
lean_object* v___x_37_; 
v___x_37_ = lean_box(0);
return v___x_37_;
}
else
{
lean_object* v_head_38_; lean_object* v_tail_39_; lean_object* v_head_40_; lean_object* v_tail_41_; uint32_t v___x_42_; uint32_t v___x_43_; uint8_t v___x_44_; 
v_head_38_ = lean_ctor_get(v_x_35_, 0);
v_tail_39_ = lean_ctor_get(v_x_35_, 1);
v_head_40_ = lean_ctor_get(v_x_34_, 0);
lean_inc(v_head_40_);
v_tail_41_ = lean_ctor_get(v_x_34_, 1);
lean_inc(v_tail_41_);
lean_dec_ref_known(v_x_34_, 2);
v___x_42_ = lean_unbox_uint32(v_head_40_);
lean_dec(v_head_40_);
v___x_43_ = lean_unbox_uint32(v_head_38_);
v___x_44_ = lp_lean_x2dftml_LeanFtml_ciChar(v___x_42_, v___x_43_);
if (v___x_44_ == 0)
{
lean_object* v___x_45_; 
lean_dec(v_tail_41_);
v___x_45_ = lean_box(0);
return v___x_45_;
}
else
{
v_x_34_ = v_tail_41_;
v_x_35_ = v_tail_39_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLit___boxed(lean_object* v_x_47_, lean_object* v_x_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = lp_lean_x2dftml_LeanFtml_matchLit(v_x_47_, v_x_48_);
lean_dec(v_x_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripslashes(lean_object* v_x_50_){
_start:
{
if (lean_obj_tag(v_x_50_) == 0)
{
return v_x_50_;
}
else
{
lean_object* v_head_51_; lean_object* v_tail_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_81_; 
v_head_51_ = lean_ctor_get(v_x_50_, 0);
v_tail_52_ = lean_ctor_get(v_x_50_, 1);
v_isSharedCheck_81_ = !lean_is_exclusive(v_x_50_);
if (v_isSharedCheck_81_ == 0)
{
v___x_54_ = v_x_50_;
v_isShared_55_ = v_isSharedCheck_81_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_tail_52_);
lean_inc(v_head_51_);
lean_dec(v_x_50_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_81_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
uint32_t v___x_56_; uint32_t v___x_57_; uint8_t v___x_58_; 
v___x_56_ = 92;
v___x_57_ = lean_unbox_uint32(v_head_51_);
v___x_58_ = lean_uint32_dec_eq(v___x_57_, v___x_56_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_61_; 
v___x_59_ = lp_lean_x2dftml_LeanFtml_stripslashes(v_tail_52_);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 1, v___x_59_);
v___x_61_ = v___x_54_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_head_51_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v___x_59_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
else
{
lean_del_object(v___x_54_);
lean_dec(v_head_51_);
if (lean_obj_tag(v_tail_52_) == 0)
{
return v_tail_52_;
}
else
{
lean_object* v_head_63_; lean_object* v_tail_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_80_; 
v_head_63_ = lean_ctor_get(v_tail_52_, 0);
v_tail_64_ = lean_ctor_get(v_tail_52_, 1);
v_isSharedCheck_80_ = !lean_is_exclusive(v_tail_52_);
if (v_isSharedCheck_80_ == 0)
{
v___x_66_ = v_tail_52_;
v_isShared_67_ = v_isSharedCheck_80_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_tail_64_);
lean_inc(v_head_63_);
lean_dec(v_tail_52_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_80_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
uint32_t v___y_69_; uint32_t v___x_75_; uint32_t v___x_76_; uint8_t v___x_77_; 
v___x_75_ = 48;
v___x_76_ = lean_unbox_uint32(v_head_63_);
v___x_77_ = lean_uint32_dec_eq(v___x_76_, v___x_75_);
if (v___x_77_ == 0)
{
uint32_t v___x_78_; 
v___x_78_ = lean_unbox_uint32(v_head_63_);
lean_dec(v_head_63_);
v___y_69_ = v___x_78_;
goto v___jp_68_;
}
else
{
uint32_t v___x_79_; 
lean_dec(v_head_63_);
v___x_79_ = 0;
v___y_69_ = v___x_79_;
goto v___jp_68_;
}
v___jp_68_:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_70_ = lp_lean_x2dftml_LeanFtml_stripslashes(v_tail_64_);
v___x_71_ = lean_box_uint32(v___y_69_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 1, v___x_70_);
lean_ctor_set(v___x_66_, 0, v___x_71_);
v___x_73_ = v___x_66_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v___x_70_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeEq_go(lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
if (lean_obj_tag(v_a_82_) == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = l_List_reverse___redArg(v_a_83_);
v___x_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v_a_84_);
v___x_87_ = l_List_reverse___redArg(v___x_86_);
return v___x_87_;
}
else
{
lean_object* v_head_88_; lean_object* v_tail_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_123_; 
v_head_88_ = lean_ctor_get(v_a_82_, 0);
v_tail_89_ = lean_ctor_get(v_a_82_, 1);
v_isSharedCheck_123_ = !lean_is_exclusive(v_a_82_);
if (v_isSharedCheck_123_ == 0)
{
v___x_91_ = v_a_82_;
v_isShared_92_ = v_isSharedCheck_123_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_tail_89_);
lean_inc(v_head_88_);
lean_dec(v_a_82_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_123_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
uint32_t v_c_94_; lean_object* v_cur_95_; lean_object* v_acc_96_; uint32_t v___x_102_; uint32_t v___x_103_; uint8_t v___x_104_; 
v___x_102_ = 61;
v___x_103_ = lean_unbox_uint32(v_head_88_);
v___x_104_ = lean_uint32_dec_eq(v___x_103_, v___x_102_);
if (v___x_104_ == 0)
{
uint32_t v___x_105_; 
v___x_105_ = lean_unbox_uint32(v_head_88_);
lean_dec(v_head_88_);
v_c_94_ = v___x_105_;
v_cur_95_ = v_a_83_;
v_acc_96_ = v_a_84_;
goto v___jp_93_;
}
else
{
lean_dec(v_head_88_);
if (lean_obj_tag(v_tail_89_) == 1)
{
lean_object* v_head_106_; lean_object* v_tail_107_; uint32_t v___x_108_; uint32_t v___x_109_; uint8_t v___x_110_; 
v_head_106_ = lean_ctor_get(v_tail_89_, 0);
v_tail_107_ = lean_ctor_get(v_tail_89_, 1);
v___x_108_ = 34;
v___x_109_ = lean_unbox_uint32(v_head_106_);
v___x_110_ = lean_uint32_dec_eq(v___x_109_, v___x_108_);
if (v___x_110_ == 0)
{
v_c_94_ = v___x_102_;
v_cur_95_ = v_a_83_;
v_acc_96_ = v_a_84_;
goto v___jp_93_;
}
else
{
lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_120_; 
lean_inc(v_tail_107_);
lean_del_object(v___x_91_);
v_isSharedCheck_120_ = !lean_is_exclusive(v_tail_89_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; lean_object* v_unused_122_; 
v_unused_121_ = lean_ctor_get(v_tail_89_, 1);
lean_dec(v_unused_121_);
v_unused_122_ = lean_ctor_get(v_tail_89_, 0);
lean_dec(v_unused_122_);
v___x_112_ = v_tail_89_;
v_isShared_113_ = v_isSharedCheck_120_;
goto v_resetjp_111_;
}
else
{
lean_dec(v_tail_89_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_120_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_114_ = lean_box(0);
v___x_115_ = l_List_reverse___redArg(v_a_83_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 1, v_a_84_);
lean_ctor_set(v___x_112_, 0, v___x_115_);
v___x_117_ = v___x_112_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_a_84_);
v___x_117_ = v_reuseFailAlloc_119_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
v_a_82_ = v_tail_107_;
v_a_83_ = v___x_114_;
v_a_84_ = v___x_117_;
goto _start;
}
}
}
}
else
{
v_c_94_ = v___x_102_;
v_cur_95_ = v_a_83_;
v_acc_96_ = v_a_84_;
goto v___jp_93_;
}
}
v___jp_93_:
{
lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_97_ = lean_box_uint32(v_c_94_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 1, v_cur_95_);
lean_ctor_set(v___x_91_, 0, v___x_97_);
v___x_99_ = v___x_91_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_cur_95_);
v___x_99_ = v_reuseFailAlloc_101_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
v_a_82_ = v_tail_89_;
v_a_83_ = v___x_99_;
v_a_84_ = v_acc_96_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeEq(lean_object* v_s_124_){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_box(0);
v___x_126_ = lp_lean_x2dftml_LeanFtml_explodeEq_go(v_s_124_, v___x_125_, v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOf_go(uint32_t v_x_127_, lean_object* v_i_128_, lean_object* v_acc_129_, lean_object* v_a_130_){
_start:
{
if (lean_obj_tag(v_a_130_) == 0)
{
lean_dec(v_i_128_);
return v_acc_129_;
}
else
{
lean_object* v_head_131_; lean_object* v_tail_132_; lean_object* v___x_133_; lean_object* v___x_134_; uint32_t v___x_135_; uint8_t v___x_136_; 
v_head_131_ = lean_ctor_get(v_a_130_, 0);
v_tail_132_ = lean_ctor_get(v_a_130_, 1);
v___x_133_ = lean_unsigned_to_nat(1u);
v___x_134_ = lean_nat_add(v_i_128_, v___x_133_);
v___x_135_ = lean_unbox_uint32(v_head_131_);
v___x_136_ = lean_uint32_dec_eq(v___x_135_, v_x_127_);
if (v___x_136_ == 0)
{
lean_dec(v_i_128_);
v_i_128_ = v___x_134_;
v_a_130_ = v_tail_132_;
goto _start;
}
else
{
lean_object* v___x_138_; 
lean_dec(v_acc_129_);
v___x_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_138_, 0, v_i_128_);
v_i_128_ = v___x_134_;
v_acc_129_ = v___x_138_;
v_a_130_ = v_tail_132_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOf_go___boxed(lean_object* v_x_140_, lean_object* v_i_141_, lean_object* v_acc_142_, lean_object* v_a_143_){
_start:
{
uint32_t v_x_boxed_144_; lean_object* v_res_145_; 
v_x_boxed_144_ = lean_unbox_uint32(v_x_140_);
lean_dec(v_x_140_);
v_res_145_ = lp_lean_x2dftml_LeanFtml_lastIdxOf_go(v_x_boxed_144_, v_i_141_, v_acc_142_, v_a_143_);
lean_dec(v_a_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOf(uint32_t v_x_146_, lean_object* v_l_147_){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_unsigned_to_nat(0u);
v___x_149_ = lean_box(0);
v___x_150_ = lp_lean_x2dftml_LeanFtml_lastIdxOf_go(v_x_146_, v___x_148_, v___x_149_, v_l_147_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOf___boxed(lean_object* v_x_151_, lean_object* v_l_152_){
_start:
{
uint32_t v_x_boxed_153_; lean_object* v_res_154_; 
v_x_boxed_153_ = lean_unbox_uint32(v_x_151_);
lean_dec(v_x_151_);
v_res_154_ = lp_lean_x2dftml_LeanFtml_lastIdxOf(v_x_boxed_153_, v_l_152_);
lean_dec(v_l_152_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrs_go(lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
if (lean_obj_tag(v_a_157_) == 0)
{
lean_dec(v_a_158_);
return v_a_159_;
}
else
{
lean_object* v_head_160_; lean_object* v_tail_161_; lean_object* v_fst_163_; lean_object* v_snd_164_; uint32_t v___x_168_; lean_object* v___x_169_; 
v_head_160_ = lean_ctor_get(v_a_157_, 0);
lean_inc(v_head_160_);
v_tail_161_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_tail_161_);
lean_dec_ref_known(v_a_157_, 2);
v___x_168_ = 34;
v___x_169_ = lp_lean_x2dftml_LeanFtml_lastIdxOf(v___x_168_, v_head_160_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_170_ = lean_box(0);
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = l_List_drop___redArg(v___x_171_, v_head_160_);
lean_dec(v_head_160_);
v___x_173_ = lp_lean_x2dftml_LeanFtml_trimChars(v___x_172_);
lean_dec(v___x_172_);
v_fst_163_ = v___x_170_;
v_snd_164_ = v___x_173_;
goto v___jp_162_;
}
else
{
lean_object* v_val_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_val_174_ = lean_ctor_get(v___x_169_, 0);
lean_inc_n(v_val_174_, 2);
lean_dec_ref_known(v___x_169_, 1);
v___x_175_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0));
lean_inc(v_head_160_);
v___x_176_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_head_160_, v_head_160_, v_val_174_, v___x_175_);
v___x_177_ = lp_lean_x2dftml_LeanFtml_stripslashes(v___x_176_);
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_add(v_val_174_, v___x_178_);
lean_dec(v_val_174_);
v___x_180_ = l_List_drop___redArg(v___x_179_, v_head_160_);
lean_dec(v_head_160_);
v___x_181_ = lp_lean_x2dftml_LeanFtml_trimChars(v___x_180_);
lean_dec(v___x_180_);
v_fst_163_ = v___x_177_;
v_snd_164_ = v___x_181_;
goto v___jp_162_;
}
v___jp_162_:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v_fst_163_);
v___x_166_ = lp_lean_x2dftml_LeanFtml_omSet(v_a_159_, v_a_158_, v___x_165_);
v_a_157_ = v_tail_161_;
v_a_158_ = v_snd_164_;
v_a_159_ = v___x_166_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrs(lean_object* v_text_182_){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lp_lean_x2dftml_LeanFtml_trimChars(v_text_182_);
v___x_184_ = lp_lean_x2dftml_LeanFtml_explodeEq(v___x_183_);
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v___x_185_; 
v___x_185_ = lean_box(0);
return v___x_185_;
}
else
{
lean_object* v_head_186_; lean_object* v_tail_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v_head_186_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_head_186_);
v_tail_187_ = lean_ctor_get(v___x_184_, 1);
lean_inc(v_tail_187_);
lean_dec_ref_known(v___x_184_, 2);
v___x_188_ = lp_lean_x2dftml_LeanFtml_trimChars(v_head_186_);
lean_dec(v_head_186_);
v___x_189_ = lean_box(0);
v___x_190_ = lp_lean_x2dftml_LeanFtml_getAttrs_go(v_tail_187_, v___x_188_, v___x_189_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_getAttrs___boxed(lean_object* v_text_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = lp_lean_x2dftml_LeanFtml_getAttrs(v_text_191_);
lean_dec(v_text_191_);
return v_res_192_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__2(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeToken___closed__1));
v___x_196_ = l_String_toListImpl(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__4(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeToken___closed__3));
v___x_199_ = l_String_toListImpl(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__6(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeToken___closed__5));
v___x_202_ = l_String_toListImpl(v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__8(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeToken___closed__7));
v___x_206_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeToken___closed__6, &lp_lean_x2dftml_LeanFtml_codeToken___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__6);
v___x_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_205_);
return v___x_207_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__9(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_box(0);
v___x_209_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeToken___closed__8, &lp_lean_x2dftml_LeanFtml_codeToken___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__8);
v___x_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set(v___x_210_, 1, v___x_208_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeToken(lean_object* v_g1_211_, lean_object* v_body_212_){
_start:
{
lean_object* v___y_214_; lean_object* v___y_227_; 
if (lean_obj_tag(v_g1_211_) == 0)
{
lean_object* v___x_236_; 
v___x_236_ = lean_box(0);
v___y_227_ = v___x_236_;
goto v___jp_226_;
}
else
{
lean_object* v_val_237_; 
v_val_237_ = lean_ctor_get(v_g1_211_, 0);
v___y_227_ = v_val_237_;
goto v___jp_226_;
}
v___jp_213_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_215_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeToken___closed__0));
v___x_216_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeToken___closed__2, &lp_lean_x2dftml_LeanFtml_codeToken___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__2);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v_body_212_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeToken___closed__4, &lp_lean_x2dftml_LeanFtml_codeToken___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__4);
v___x_220_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_220_, 0, v___y_214_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_box(0);
v___x_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_221_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_218_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_215_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
return v___x_225_;
}
v___jp_226_:
{
lean_object* v_args_228_; uint8_t v___x_229_; 
v_args_228_ = lp_lean_x2dftml_LeanFtml_trimChars(v___y_227_);
v___x_229_ = l_List_isEmpty___redArg(v_args_228_);
if (v___x_229_ == 0)
{
lean_object* v_a_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_a_230_ = lp_lean_x2dftml_LeanFtml_getAttrs(v_args_228_);
lean_dec(v_args_228_);
v___x_231_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeToken___closed__6, &lp_lean_x2dftml_LeanFtml_codeToken___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__6);
v___x_232_ = lp_lean_x2dftml_LeanFtml_omGet(v_a_230_, v___x_231_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeToken___closed__9, &lp_lean_x2dftml_LeanFtml_codeToken___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__9);
v___x_234_ = l_List_appendTR___redArg(v_a_230_, v___x_233_);
v___y_214_ = v___x_234_;
goto v___jp_213_;
}
else
{
lean_dec_ref_known(v___x_232_, 1);
v___y_214_ = v_a_230_;
goto v___jp_213_;
}
}
else
{
lean_object* v___x_235_; 
lean_dec(v_args_228_);
v___x_235_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeToken___closed__9, &lp_lean_x2dftml_LeanFtml_codeToken___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_codeToken___closed__9);
v___y_214_ = v___x_235_;
goto v___jp_213_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeToken___boxed(lean_object* v_g1_238_, lean_object* v_body_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = lp_lean_x2dftml_LeanFtml_codeToken(v_g1_238_, v_body_239_);
lean_dec(v_g1_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeFuel(lean_object* v_n_241_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_242_ = lean_unsigned_to_nat(4u);
v___x_243_ = lean_nat_mul(v___x_242_, v_n_241_);
v___x_244_ = lean_unsigned_to_nat(16u);
v___x_245_ = lean_nat_add(v___x_243_, v___x_244_);
lean_dec(v___x_243_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeFuel___boxed(lean_object* v_n_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = lp_lean_x2dftml_LeanFtml_codeFuel(v_n_246_);
lean_dec(v_n_246_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_openerArgs_spec__0(uint8_t v___x_248_, lean_object* v_l_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
if (lean_obj_tag(v_a_250_) == 0)
{
lean_dec_ref(v_a_251_);
lean_inc(v_l_249_);
return v_l_249_;
}
else
{
lean_object* v_head_252_; lean_object* v_tail_253_; uint32_t v___x_254_; uint32_t v___x_255_; uint8_t v___x_256_; 
v_head_252_ = lean_ctor_get(v_a_250_, 0);
lean_inc(v_head_252_);
v_tail_253_ = lean_ctor_get(v_a_250_, 1);
lean_inc(v_tail_253_);
lean_dec_ref_known(v_a_250_, 2);
v___x_254_ = 93;
v___x_255_ = lean_unbox_uint32(v_head_252_);
v___x_256_ = lean_uint32_dec_eq(v___x_255_, v___x_254_);
if (v___x_256_ == 0)
{
if (v___x_248_ == 0)
{
lean_object* v___x_257_; 
lean_dec(v_tail_253_);
lean_dec(v_head_252_);
v___x_257_ = lean_array_to_list(v_a_251_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; 
v___x_258_ = lean_array_push(v_a_251_, v_head_252_);
v_a_250_ = v_tail_253_;
v_a_251_ = v___x_258_;
goto _start;
}
}
else
{
lean_object* v___x_260_; 
lean_dec(v_tail_253_);
lean_dec(v_head_252_);
v___x_260_ = lean_array_to_list(v_a_251_);
return v___x_260_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_openerArgs_spec__0___boxed(lean_object* v___x_261_, lean_object* v_l_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
uint8_t v___x_490__boxed_265_; lean_object* v_res_266_; 
v___x_490__boxed_265_ = lean_unbox(v___x_261_);
v_res_266_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_openerArgs_spec__0(v___x_490__boxed_265_, v_l_262_, v_a_263_, v_a_264_);
lean_dec(v_l_262_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_openerArgs_spec__1(lean_object* v_tail_267_, lean_object* v_s_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
if (lean_obj_tag(v_a_269_) == 0)
{
lean_object* v___x_271_; 
lean_dec(v_s_268_);
v___x_271_ = lean_array_to_list(v_a_270_);
return v___x_271_;
}
else
{
lean_object* v_head_272_; lean_object* v_tail_273_; lean_object* v_after_274_; 
v_head_272_ = lean_ctor_get(v_a_269_, 0);
lean_inc_n(v_head_272_, 2);
v_tail_273_ = lean_ctor_get(v_a_269_, 1);
lean_inc(v_tail_273_);
lean_dec_ref_known(v_a_269_, 2);
v_after_274_ = l_List_drop___redArg(v_head_272_, v_tail_267_);
if (lean_obj_tag(v_after_274_) == 1)
{
lean_object* v_head_275_; lean_object* v_tail_276_; uint32_t v___x_277_; uint32_t v___x_278_; uint8_t v___x_279_; 
v_head_275_ = lean_ctor_get(v_after_274_, 0);
lean_inc(v_head_275_);
v_tail_276_ = lean_ctor_get(v_after_274_, 1);
lean_inc(v_tail_276_);
lean_dec_ref_known(v_after_274_, 2);
v___x_277_ = 93;
v___x_278_ = lean_unbox_uint32(v_head_275_);
lean_dec(v_head_275_);
v___x_279_ = lean_uint32_dec_eq(v___x_278_, v___x_277_);
if (v___x_279_ == 0)
{
lean_dec(v_tail_276_);
lean_dec(v_head_272_);
v_a_269_ = v_tail_273_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_276_) == 1)
{
lean_object* v_head_281_; lean_object* v_tail_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_299_; 
v_head_281_ = lean_ctor_get(v_tail_276_, 0);
v_tail_282_ = lean_ctor_get(v_tail_276_, 1);
v_isSharedCheck_299_ = !lean_is_exclusive(v_tail_276_);
if (v_isSharedCheck_299_ == 0)
{
v___x_284_ = v_tail_276_;
v_isShared_285_ = v_isSharedCheck_299_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_tail_282_);
lean_inc(v_head_281_);
lean_dec(v_tail_276_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_299_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
uint32_t v___x_286_; uint8_t v___x_287_; 
v___x_286_ = lean_unbox_uint32(v_head_281_);
lean_dec(v_head_281_);
v___x_287_ = lean_uint32_dec_eq(v___x_286_, v___x_277_);
if (v___x_287_ == 0)
{
lean_del_object(v___x_284_);
lean_dec(v_tail_282_);
lean_dec(v_head_272_);
v_a_269_ = v_tail_273_;
goto _start;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_289_ = lean_unsigned_to_nat(1u);
v___x_290_ = lean_nat_add(v___x_289_, v_head_272_);
lean_dec(v_head_272_);
v___x_291_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0));
lean_inc(v_s_268_);
v___x_292_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_268_, v_s_268_, v___x_290_, v___x_291_);
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
if (v_isShared_285_ == 0)
{
lean_ctor_set_tag(v___x_284_, 0);
lean_ctor_set(v___x_284_, 0, v___x_293_);
v___x_295_ = v___x_284_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v_tail_282_);
v___x_295_ = v_reuseFailAlloc_298_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_296_; 
v___x_296_ = lean_array_push(v_a_270_, v___x_295_);
v_a_269_ = v_tail_273_;
v_a_270_ = v___x_296_;
goto _start;
}
}
}
}
else
{
lean_dec(v_tail_276_);
lean_dec(v_head_272_);
v_a_269_ = v_tail_273_;
goto _start;
}
}
}
else
{
lean_dec(v_after_274_);
lean_dec(v_head_272_);
v_a_269_ = v_tail_273_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_openerArgs_spec__1___boxed(lean_object* v_tail_302_, lean_object* v_s_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_openerArgs_spec__1(v_tail_302_, v_s_303_, v_a_304_, v_a_305_);
lean_dec(v_tail_302_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_openerArgs(lean_object* v_s_307_){
_start:
{
lean_object* v___y_309_; lean_object* v___y_313_; lean_object* v___y_317_; 
if (lean_obj_tag(v_s_307_) == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_box(0);
v___y_317_ = v___x_344_;
goto v___jp_316_;
}
else
{
lean_object* v_head_345_; lean_object* v_tail_346_; uint32_t v___x_347_; uint8_t v___x_348_; 
v_head_345_ = lean_ctor_get(v_s_307_, 0);
v_tail_346_ = lean_ctor_get(v_s_307_, 1);
v___x_347_ = lean_unbox_uint32(v_head_345_);
v___x_348_ = lp_lean_x2dftml_LeanFtml_isPcreWs(v___x_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; 
v___x_349_ = lean_box(0);
v___y_317_ = v___x_349_;
goto v___jp_316_;
}
else
{
lean_object* v___x_350_; lean_object* v_run_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_350_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0));
lean_inc(v_tail_346_);
v_run_351_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_openerArgs_spec__0(v___x_348_, v_tail_346_, v_tail_346_, v___x_350_);
v___x_352_ = l_List_lengthTR___redArg(v_run_351_);
lean_dec(v_run_351_);
v___x_353_ = lean_unsigned_to_nat(1u);
v___x_354_ = lean_nat_add(v___x_352_, v___x_353_);
lean_dec(v___x_352_);
v___x_355_ = l_List_range(v___x_354_);
v___x_356_ = l_List_reverse___redArg(v___x_355_);
lean_inc_ref(v_s_307_);
v___x_357_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_openerArgs_spec__1(v_tail_346_, v_s_307_, v___x_356_, v___x_350_);
v___y_317_ = v___x_357_;
goto v___jp_316_;
}
}
v___jp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_box(0);
v___x_311_ = l_List_appendTR___redArg(v___y_309_, v___x_310_);
return v___x_311_;
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_box(0);
v___x_315_ = l_List_appendTR___redArg(v___y_313_, v___x_314_);
return v___x_315_;
}
v___jp_316_:
{
if (lean_obj_tag(v_s_307_) == 1)
{
lean_object* v_head_318_; lean_object* v_tail_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_343_; 
v_head_318_ = lean_ctor_get(v_s_307_, 0);
v_tail_319_ = lean_ctor_get(v_s_307_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v_s_307_);
if (v_isSharedCheck_343_ == 0)
{
v___x_321_ = v_s_307_;
v_isShared_322_ = v_isSharedCheck_343_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_tail_319_);
lean_inc(v_head_318_);
lean_dec(v_s_307_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_343_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
uint32_t v___x_323_; uint32_t v___x_324_; uint8_t v___x_325_; 
v___x_323_ = 93;
v___x_324_ = lean_unbox_uint32(v_head_318_);
lean_dec(v_head_318_);
v___x_325_ = lean_uint32_dec_eq(v___x_324_, v___x_323_);
if (v___x_325_ == 0)
{
lean_del_object(v___x_321_);
lean_dec(v_tail_319_);
v___y_313_ = v___y_317_;
goto v___jp_312_;
}
else
{
if (lean_obj_tag(v_tail_319_) == 1)
{
lean_object* v_head_326_; lean_object* v_tail_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_342_; 
v_head_326_ = lean_ctor_get(v_tail_319_, 0);
v_tail_327_ = lean_ctor_get(v_tail_319_, 1);
v_isSharedCheck_342_ = !lean_is_exclusive(v_tail_319_);
if (v_isSharedCheck_342_ == 0)
{
v___x_329_ = v_tail_319_;
v_isShared_330_ = v_isSharedCheck_342_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_tail_327_);
lean_inc(v_head_326_);
lean_dec(v_tail_319_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_342_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
uint32_t v___x_331_; uint8_t v___x_332_; 
v___x_331_ = lean_unbox_uint32(v_head_326_);
lean_dec(v_head_326_);
v___x_332_ = lean_uint32_dec_eq(v___x_331_, v___x_323_);
if (v___x_332_ == 0)
{
lean_del_object(v___x_329_);
lean_dec(v_tail_327_);
lean_del_object(v___x_321_);
v___y_309_ = v___y_317_;
goto v___jp_308_;
}
else
{
lean_object* v___x_333_; lean_object* v___x_335_; 
v___x_333_ = lean_box(0);
if (v_isShared_322_ == 0)
{
lean_ctor_set_tag(v___x_321_, 0);
lean_ctor_set(v___x_321_, 1, v_tail_327_);
lean_ctor_set(v___x_321_, 0, v___x_333_);
v___x_335_ = v___x_321_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_333_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_tail_327_);
v___x_335_ = v_reuseFailAlloc_341_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_336_ = lean_box(0);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v___x_336_);
lean_ctor_set(v___x_329_, 0, v___x_335_);
v___x_338_ = v___x_329_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_336_);
v___x_338_ = v_reuseFailAlloc_340_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_339_; 
v___x_339_ = l_List_appendTR___redArg(v___y_317_, v___x_338_);
return v___x_339_;
}
}
}
}
}
else
{
lean_del_object(v___x_321_);
lean_dec(v_tail_319_);
v___y_309_ = v___y_317_;
goto v___jp_308_;
}
}
}
}
else
{
lean_dec(v_s_307_);
v___y_313_ = v___y_317_;
goto v___jp_312_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeMatch_spec__0(lean_object* v_s_358_, lean_object* v_fst_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
if (lean_obj_tag(v_a_360_) == 0)
{
lean_object* v___x_362_; 
lean_dec(v_fst_359_);
v___x_362_ = l_List_reverse___redArg(v_a_361_);
return v___x_362_;
}
else
{
lean_object* v_head_363_; lean_object* v_snd_364_; lean_object* v_tail_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_395_; 
v_head_363_ = lean_ctor_get(v_a_360_, 0);
lean_inc(v_head_363_);
v_snd_364_ = lean_ctor_get(v_head_363_, 1);
lean_inc(v_snd_364_);
v_tail_365_ = lean_ctor_get(v_a_360_, 1);
v_isSharedCheck_395_ = !lean_is_exclusive(v_a_360_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; 
v_unused_396_ = lean_ctor_get(v_a_360_, 0);
lean_dec(v_unused_396_);
v___x_367_ = v_a_360_;
v_isShared_368_ = v_isSharedCheck_395_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_tail_365_);
lean_dec(v_a_360_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_395_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v_fst_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_393_; 
v_fst_369_ = lean_ctor_get(v_head_363_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v_head_363_);
if (v_isSharedCheck_393_ == 0)
{
lean_object* v_unused_394_; 
v_unused_394_ = lean_ctor_get(v_head_363_, 1);
lean_dec(v_unused_394_);
v___x_371_ = v_head_363_;
v_isShared_372_ = v_isSharedCheck_393_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_fst_369_);
lean_dec(v_head_363_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_393_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v_fst_373_; lean_object* v_snd_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_392_; 
v_fst_373_ = lean_ctor_get(v_snd_364_, 0);
v_snd_374_ = lean_ctor_get(v_snd_364_, 1);
v_isSharedCheck_392_ = !lean_is_exclusive(v_snd_364_);
if (v_isSharedCheck_392_ == 0)
{
v___x_376_ = v_snd_364_;
v_isShared_377_ = v_isSharedCheck_392_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_snd_374_);
lean_inc(v_fst_373_);
lean_dec(v_snd_364_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_392_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_378_ = l_List_lengthTR___redArg(v_s_358_);
v___x_379_ = l_List_lengthTR___redArg(v_snd_374_);
lean_dec(v_snd_374_);
v___x_380_ = lean_nat_sub(v___x_378_, v___x_379_);
lean_dec(v___x_379_);
lean_dec(v___x_378_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 1, v_fst_373_);
lean_ctor_set(v___x_376_, 0, v_fst_369_);
v___x_382_ = v___x_376_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_fst_369_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_fst_373_);
v___x_382_ = v_reuseFailAlloc_391_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_384_; 
lean_inc(v_fst_359_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v___x_382_);
lean_ctor_set(v___x_371_, 0, v_fst_359_);
v___x_384_ = v___x_371_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_fst_359_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v___x_382_);
v___x_384_ = v_reuseFailAlloc_390_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_380_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v_a_361_);
lean_ctor_set(v___x_367_, 0, v___x_385_);
v___x_387_ = v___x_367_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_a_361_);
v___x_387_ = v_reuseFailAlloc_389_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
v_a_360_ = v_tail_365_;
v_a_361_ = v___x_387_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeMatch_spec__0___boxed(lean_object* v_s_397_, lean_object* v_fst_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeMatch_spec__0(v_s_397_, v_fst_398_, v_a_399_, v_a_400_);
lean_dec(v_s_397_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__5(uint32_t v_head_402_, lean_object* v_a_403_, lean_object* v_a_404_){
_start:
{
if (lean_obj_tag(v_a_403_) == 0)
{
lean_object* v___x_405_; 
v___x_405_ = l_List_reverse___redArg(v_a_404_);
return v___x_405_;
}
else
{
lean_object* v_head_406_; lean_object* v_tail_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_426_; 
v_head_406_ = lean_ctor_get(v_a_403_, 0);
v_tail_407_ = lean_ctor_get(v_a_403_, 1);
v_isSharedCheck_426_ = !lean_is_exclusive(v_a_403_);
if (v_isSharedCheck_426_ == 0)
{
v___x_409_ = v_a_403_;
v_isShared_410_ = v_isSharedCheck_426_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_tail_407_);
lean_inc(v_head_406_);
lean_dec(v_a_403_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_426_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_fst_411_; lean_object* v_snd_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_425_; 
v_fst_411_ = lean_ctor_get(v_head_406_, 0);
v_snd_412_ = lean_ctor_get(v_head_406_, 1);
v_isSharedCheck_425_ = !lean_is_exclusive(v_head_406_);
if (v_isSharedCheck_425_ == 0)
{
v___x_414_ = v_head_406_;
v_isShared_415_ = v_isSharedCheck_425_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_snd_412_);
lean_inc(v_fst_411_);
lean_dec(v_head_406_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_425_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_416_; lean_object* v___x_418_; 
v___x_416_ = lean_box_uint32(v_head_402_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v_fst_411_);
lean_ctor_set(v___x_409_, 0, v___x_416_);
v___x_418_ = v___x_409_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_fst_411_);
v___x_418_ = v_reuseFailAlloc_424_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_420_; 
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_418_);
v___x_420_ = v___x_414_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_snd_412_);
v___x_420_ = v_reuseFailAlloc_423_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_421_; 
v___x_421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v_a_404_);
v_a_403_ = v_tail_407_;
v_a_404_ = v___x_421_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__5___boxed(lean_object* v_head_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
uint32_t v_head_1137__boxed_430_; lean_object* v_res_431_; 
v_head_1137__boxed_430_ = lean_unbox_uint32(v_head_427_);
lean_dec(v_head_427_);
v_res_431_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__5(v_head_1137__boxed_430_, v_a_428_, v_a_429_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__3(lean_object* v_s_432_, lean_object* v_fst_433_, lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
if (lean_obj_tag(v_a_434_) == 0)
{
lean_object* v___x_436_; 
lean_dec(v_fst_433_);
lean_dec(v_s_432_);
v___x_436_ = l_List_reverse___redArg(v_a_435_);
return v___x_436_;
}
else
{
lean_object* v_head_437_; lean_object* v_tail_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_458_; 
v_head_437_ = lean_ctor_get(v_a_434_, 0);
v_tail_438_ = lean_ctor_get(v_a_434_, 1);
v_isSharedCheck_458_ = !lean_is_exclusive(v_a_434_);
if (v_isSharedCheck_458_ == 0)
{
v___x_440_ = v_a_434_;
v_isShared_441_ = v_isSharedCheck_458_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_tail_438_);
lean_inc(v_head_437_);
lean_dec(v_a_434_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_458_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v_fst_442_; lean_object* v_snd_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_457_; 
v_fst_442_ = lean_ctor_get(v_head_437_, 0);
v_snd_443_ = lean_ctor_get(v_head_437_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v_head_437_);
if (v_isSharedCheck_457_ == 0)
{
v___x_445_ = v_head_437_;
v_isShared_446_ = v_isSharedCheck_457_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_snd_443_);
lean_inc(v_fst_442_);
lean_dec(v_head_437_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_457_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_451_; 
v___x_447_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0));
lean_inc(v_fst_433_);
lean_inc(v_s_432_);
v___x_448_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_432_, v_s_432_, v_fst_433_, v___x_447_);
v___x_449_ = l_List_appendTR___redArg(v___x_448_, v_fst_442_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_449_);
v___x_451_ = v___x_445_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_449_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_snd_443_);
v___x_451_ = v_reuseFailAlloc_456_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_453_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 1, v_a_435_);
lean_ctor_set(v___x_440_, 0, v___x_451_);
v___x_453_ = v___x_440_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_451_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_a_435_);
v___x_453_ = v_reuseFailAlloc_455_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
v_a_434_ = v_tail_438_;
v_a_435_ = v___x_453_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeMatch___closed__1(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeMatch___closed__0));
v___x_461_ = l_String_toListImpl(v___x_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeMatch(lean_object* v_s_464_, uint8_t v_atLineStart_465_, lean_object* v_x_466_){
_start:
{
lean_object* v_zero_467_; uint8_t v_isZero_468_; 
v_zero_467_ = lean_unsigned_to_nat(0u);
v_isZero_468_ = lean_nat_dec_eq(v_x_466_, v_zero_467_);
if (v_isZero_468_ == 1)
{
lean_object* v___x_469_; 
lean_dec(v_s_464_);
v___x_469_ = lean_box(0);
return v___x_469_;
}
else
{
if (v_atLineStart_465_ == 0)
{
lean_object* v___x_470_; 
lean_dec(v_s_464_);
v___x_470_ = lean_box(0);
return v___x_470_;
}
else
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeMatch___closed__1, &lp_lean_x2dftml_LeanFtml_codeMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_codeMatch___closed__1);
lean_inc(v_s_464_);
v___x_472_ = lp_lean_x2dftml_LeanFtml_matchLit(v_s_464_, v___x_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v___x_473_; 
lean_dec(v_s_464_);
v___x_473_ = lean_box(0);
return v___x_473_;
}
else
{
lean_object* v_val_474_; lean_object* v_one_475_; lean_object* v_n_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v_val_474_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_val_474_);
lean_dec_ref_known(v___x_472_, 1);
v_one_475_ = lean_unsigned_to_nat(1u);
v_n_476_ = lean_nat_sub(v_x_466_, v_one_475_);
v___x_477_ = lp_lean_x2dftml_LeanFtml_openerArgs(v_val_474_);
v___x_478_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeMatch___closed__2));
v___x_479_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1(v_s_464_, v_n_476_, v___x_477_, v___x_478_);
lean_dec(v_n_476_);
lean_dec(v_s_464_);
return v___x_479_;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_482_; lean_object* v___x_483_; 
v___x_482_ = 10;
v___x_483_ = lean_box_uint32(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0___boxed__const__1;
v___x_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4(lean_object* v_s_486_, lean_object* v_n_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
if (lean_obj_tag(v_a_488_) == 0)
{
lean_object* v___x_490_; 
lean_dec(v_s_486_);
v___x_490_ = lean_array_to_list(v_a_489_);
return v___x_490_;
}
else
{
lean_object* v_head_491_; lean_object* v_tail_492_; lean_object* v_fst_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v_head_491_ = lean_ctor_get(v_a_488_, 0);
lean_inc(v_head_491_);
v_tail_492_ = lean_ctor_get(v_a_488_, 1);
lean_inc(v_tail_492_);
lean_dec_ref_known(v_a_488_, 2);
v_fst_493_ = lean_ctor_get(v_head_491_, 0);
lean_inc_n(v_fst_493_, 3);
lean_dec(v_head_491_);
v___x_494_ = l_List_drop___redArg(v_fst_493_, v_s_486_);
v___x_495_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0));
lean_inc_n(v_s_486_, 2);
v___x_496_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_486_, v_s_486_, v_fst_493_, v___x_495_);
v___x_497_ = l_List_getLast_x3f___redArg(v___x_496_);
lean_dec(v___x_496_);
v___x_498_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0);
v___x_499_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_497_, v___x_498_);
lean_dec(v___x_497_);
v___x_500_ = lp_lean_x2dftml_LeanFtml_codeBody(v___x_494_, v___x_499_, v_n_487_);
v___x_501_ = lean_box(0);
v___x_502_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__3(v_s_486_, v_fst_493_, v___x_500_, v___x_501_);
v___x_503_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_489_, v___x_502_);
v_a_488_ = v_tail_492_;
v_a_489_ = v___x_503_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeBody___closed__2(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBody___closed__1));
v___x_507_ = l_String_toListImpl(v___x_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBody(lean_object* v_s_508_, uint8_t v_lineStart_509_, lean_object* v_x_510_){
_start:
{
lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_514_; lean_object* v_zero_517_; uint8_t v_isZero_518_; 
v_zero_517_ = lean_unsigned_to_nat(0u);
v_isZero_518_ = lean_nat_dec_eq(v_x_510_, v_zero_517_);
if (v_isZero_518_ == 1)
{
lean_object* v___x_519_; 
lean_dec(v_s_508_);
v___x_519_ = lean_box(0);
return v___x_519_;
}
else
{
lean_object* v_one_520_; lean_object* v_n_521_; lean_object* v___y_523_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_one_520_ = lean_unsigned_to_nat(1u);
v_n_521_ = lean_nat_sub(v_x_510_, v_one_520_);
v___x_537_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeBody___closed__2, &lp_lean_x2dftml_LeanFtml_codeBody___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_codeBody___closed__2);
lean_inc(v_s_508_);
v___x_538_ = lp_lean_x2dftml_LeanFtml_matchLit(v_s_508_, v___x_537_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v___x_539_; 
v___x_539_ = lean_box(0);
v___y_523_ = v___x_539_;
goto v___jp_522_;
}
else
{
lean_object* v_val_540_; lean_object* v___y_542_; lean_object* v___y_549_; 
v_val_540_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_val_540_);
lean_dec_ref_known(v___x_538_, 1);
if (lean_obj_tag(v_val_540_) == 0)
{
lean_object* v___x_556_; 
v___x_556_ = lean_box(0);
v___y_549_ = v___x_556_;
goto v___jp_548_;
}
else
{
lean_object* v_head_557_; lean_object* v_tail_558_; uint32_t v___x_559_; uint8_t v___x_560_; 
v_head_557_ = lean_ctor_get(v_val_540_, 0);
v_tail_558_ = lean_ctor_get(v_val_540_, 1);
v___x_559_ = lean_unbox_uint32(v_head_557_);
v___x_560_ = lp_lean_x2dftml_LeanFtml_isPcreWs(v___x_559_);
if (v___x_560_ == 0)
{
lean_object* v___x_561_; 
v___x_561_ = lean_box(0);
v___y_549_ = v___x_561_;
goto v___jp_548_;
}
else
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_562_ = lean_box(0);
lean_inc(v_head_557_);
v___x_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_563_, 0, v_head_557_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
lean_inc(v_tail_558_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
lean_ctor_set(v___x_564_, 1, v_tail_558_);
v___x_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_562_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
v___x_566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_562_);
v___y_549_ = v___x_566_;
goto v___jp_548_;
}
}
v___jp_541_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_543_ = lean_box(0);
v___x_544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
lean_ctor_set(v___x_544_, 1, v_val_540_);
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
lean_ctor_set(v___x_546_, 1, v___x_543_);
v___x_547_ = l_List_appendTR___redArg(v___y_542_, v___x_546_);
v___y_523_ = v___x_547_;
goto v___jp_522_;
}
v___jp_548_:
{
uint8_t v___x_550_; 
v___x_550_ = l_List_isEmpty___redArg(v_val_540_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_551_ = l_List_head_x3f___redArg(v_val_540_);
v___x_552_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0);
v___x_553_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v___x_551_, v___x_552_);
lean_dec(v___x_551_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; 
lean_dec(v_val_540_);
v___x_554_ = lean_box(0);
v___x_555_ = l_List_appendTR___redArg(v___y_549_, v___x_554_);
v___y_523_ = v___x_555_;
goto v___jp_522_;
}
else
{
v___y_542_ = v___y_549_;
goto v___jp_541_;
}
}
else
{
v___y_542_ = v___y_549_;
goto v___jp_541_;
}
}
}
v___jp_522_:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v_recs_526_; 
lean_inc_n(v_s_508_, 2);
v___x_524_ = lp_lean_x2dftml_LeanFtml_codeMatch(v_s_508_, v_lineStart_509_, v_n_521_);
v___x_525_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBody___closed__0));
v_recs_526_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4(v_s_508_, v_n_521_, v___x_524_, v___x_525_);
if (lean_obj_tag(v_s_508_) == 0)
{
lean_object* v___x_527_; 
lean_dec(v_n_521_);
v___x_527_ = lean_box(0);
v___y_512_ = v_recs_526_;
v___y_513_ = v___y_523_;
v___y_514_ = v___x_527_;
goto v___jp_511_;
}
else
{
lean_object* v_head_528_; lean_object* v_tail_529_; uint32_t v___x_530_; uint32_t v___x_531_; uint8_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; uint32_t v___x_535_; lean_object* v___x_536_; 
v_head_528_ = lean_ctor_get(v_s_508_, 0);
lean_inc(v_head_528_);
v_tail_529_ = lean_ctor_get(v_s_508_, 1);
lean_inc(v_tail_529_);
lean_dec_ref_known(v_s_508_, 2);
v___x_530_ = 10;
v___x_531_ = lean_unbox_uint32(v_head_528_);
v___x_532_ = lean_uint32_dec_eq(v___x_531_, v___x_530_);
v___x_533_ = lp_lean_x2dftml_LeanFtml_codeBody(v_tail_529_, v___x_532_, v_n_521_);
lean_dec(v_n_521_);
v___x_534_ = lean_box(0);
v___x_535_ = lean_unbox_uint32(v_head_528_);
lean_dec(v_head_528_);
v___x_536_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBody_spec__5(v___x_535_, v___x_533_, v___x_534_);
v___y_512_ = v_recs_526_;
v___y_513_ = v___y_523_;
v___y_514_ = v___x_536_;
goto v___jp_511_;
}
}
}
v___jp_511_:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = l_List_appendTR___redArg(v___y_513_, v___y_512_);
v___x_516_ = l_List_appendTR___redArg(v___x_515_, v___y_514_);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1_spec__1(lean_object* v_n_567_, lean_object* v_s_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
if (lean_obj_tag(v_a_569_) == 0)
{
lean_object* v___x_571_; 
v___x_571_ = lean_array_to_list(v_a_570_);
return v___x_571_;
}
else
{
lean_object* v_head_572_; lean_object* v_tail_573_; lean_object* v_fst_574_; lean_object* v_snd_575_; uint8_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v_head_572_ = lean_ctor_get(v_a_569_, 0);
lean_inc(v_head_572_);
v_tail_573_ = lean_ctor_get(v_a_569_, 1);
lean_inc(v_tail_573_);
lean_dec_ref_known(v_a_569_, 2);
v_fst_574_ = lean_ctor_get(v_head_572_, 0);
lean_inc(v_fst_574_);
v_snd_575_ = lean_ctor_get(v_head_572_, 1);
lean_inc(v_snd_575_);
lean_dec(v_head_572_);
v___x_576_ = 0;
v___x_577_ = lp_lean_x2dftml_LeanFtml_codeBody(v_snd_575_, v___x_576_, v_n_567_);
v___x_578_ = lean_box(0);
v___x_579_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeMatch_spec__0(v_s_568_, v_fst_574_, v___x_577_, v___x_578_);
v___x_580_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_570_, v___x_579_);
v_a_569_ = v_tail_573_;
v_a_570_ = v___x_580_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1(lean_object* v_s_582_, lean_object* v_n_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
if (lean_obj_tag(v_a_584_) == 0)
{
lean_object* v___x_586_; 
v___x_586_ = lean_array_to_list(v_a_585_);
return v___x_586_;
}
else
{
lean_object* v_head_587_; lean_object* v_tail_588_; lean_object* v_fst_589_; lean_object* v_snd_590_; uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_head_587_ = lean_ctor_get(v_a_584_, 0);
lean_inc(v_head_587_);
v_tail_588_ = lean_ctor_get(v_a_584_, 1);
lean_inc(v_tail_588_);
lean_dec_ref_known(v_a_584_, 2);
v_fst_589_ = lean_ctor_get(v_head_587_, 0);
lean_inc(v_fst_589_);
v_snd_590_ = lean_ctor_get(v_head_587_, 1);
lean_inc(v_snd_590_);
lean_dec(v_head_587_);
v___x_591_ = 0;
v___x_592_ = lp_lean_x2dftml_LeanFtml_codeBody(v_snd_590_, v___x_591_, v_n_583_);
v___x_593_ = lean_box(0);
v___x_594_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeMatch_spec__0(v_s_582_, v_fst_589_, v___x_592_, v___x_593_);
v___x_595_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_585_, v___x_594_);
v___x_596_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1_spec__1(v_n_583_, v_s_582_, v_tail_588_, v___x_595_);
return v___x_596_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1___boxed(lean_object* v_s_597_, lean_object* v_n_598_, lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1(v_s_597_, v_n_598_, v_a_599_, v_a_600_);
lean_dec(v_n_598_);
lean_dec(v_s_597_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1_spec__1___boxed(lean_object* v_n_602_, lean_object* v_s_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeMatch_spec__1_spec__1(v_n_602_, v_s_603_, v_a_604_, v_a_605_);
lean_dec(v_s_603_);
lean_dec(v_n_602_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___boxed(lean_object* v_s_607_, lean_object* v_n_608_, lean_object* v_a_609_, lean_object* v_a_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4(v_s_607_, v_n_608_, v_a_609_, v_a_610_);
lean_dec(v_n_608_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeMatch___boxed(lean_object* v_s_612_, lean_object* v_atLineStart_613_, lean_object* v_x_614_){
_start:
{
uint8_t v_atLineStart_boxed_615_; lean_object* v_res_616_; 
v_atLineStart_boxed_615_ = lean_unbox(v_atLineStart_613_);
v_res_616_ = lp_lean_x2dftml_LeanFtml_codeMatch(v_s_612_, v_atLineStart_boxed_615_, v_x_614_);
lean_dec(v_x_614_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBody___boxed(lean_object* v_s_617_, lean_object* v_lineStart_618_, lean_object* v_x_619_){
_start:
{
uint8_t v_lineStart_boxed_620_; lean_object* v_res_621_; 
v_lineStart_boxed_620_ = lean_unbox(v_lineStart_618_);
v_res_621_ = lp_lean_x2dftml_LeanFtml_codeBody(v_s_617_, v_lineStart_boxed_620_, v_x_619_);
lean_dec(v_x_619_);
return v_res_621_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__1(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__0));
v___x_624_ = l_String_toListImpl(v___x_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_applyCode_scan(lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
if (lean_obj_tag(v_a_625_) == 0)
{
lean_object* v___x_631_; lean_object* v___x_632_; 
lean_dec(v_a_630_);
lean_dec(v_a_626_);
v___x_631_ = lp_lean_x2dftml_LeanFtml_pushText(v_a_628_, v_a_629_);
v___x_632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v_a_627_);
return v___x_632_;
}
else
{
lean_object* v_head_633_; lean_object* v_tail_634_; lean_object* v_zero_635_; uint8_t v_isZero_636_; 
v_head_633_ = lean_ctor_get(v_a_625_, 0);
v_tail_634_ = lean_ctor_get(v_a_625_, 1);
v_zero_635_ = lean_unsigned_to_nat(0u);
v_isZero_636_ = lean_nat_dec_eq(v_a_630_, v_zero_635_);
if (v_isZero_636_ == 1)
{
lean_object* v___x_637_; lean_object* v___x_638_; 
lean_dec_ref_known(v_a_625_, 2);
lean_dec(v_a_630_);
lean_dec(v_a_626_);
v___x_637_ = lp_lean_x2dftml_LeanFtml_pushText(v_a_628_, v_a_629_);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
lean_ctor_set(v___x_638_, 1, v_a_627_);
return v___x_638_;
}
else
{
lean_object* v_one_639_; lean_object* v_n_640_; lean_object* v___x_687_; uint8_t v___x_688_; 
v_one_639_ = lean_unsigned_to_nat(1u);
v_n_640_ = lean_nat_sub(v_a_630_, v_one_639_);
lean_dec(v_a_630_);
v___x_687_ = lean_box(0);
v___x_688_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v_a_626_, v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_689_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0);
v___x_690_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v_a_626_, v___x_689_);
lean_dec(v_a_626_);
if (v___x_690_ == 0)
{
lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_701_; 
lean_inc(v_tail_634_);
lean_inc(v_head_633_);
v_isSharedCheck_701_ = !lean_is_exclusive(v_a_625_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; lean_object* v_unused_703_; 
v_unused_702_ = lean_ctor_get(v_a_625_, 1);
lean_dec(v_unused_702_);
v_unused_703_ = lean_ctor_get(v_a_625_, 0);
lean_dec(v_unused_703_);
v___x_692_ = v_a_625_;
v_isShared_693_ = v_isSharedCheck_701_;
goto v_resetjp_691_;
}
else
{
lean_dec(v_a_625_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_701_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_697_; 
lean_inc(v_head_633_);
v___x_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_694_, 0, v_head_633_);
v___x_695_ = lean_box(0);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 1, v___x_695_);
v___x_697_ = v___x_692_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_head_633_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_695_);
v___x_697_ = v_reuseFailAlloc_700_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_698_; 
v___x_698_ = l_List_appendTR___redArg(v_a_629_, v___x_697_);
v_a_625_ = v_tail_634_;
v_a_626_ = v___x_694_;
v_a_629_ = v___x_698_;
v_a_630_ = v_n_640_;
goto _start;
}
}
}
else
{
goto v___jp_641_;
}
}
else
{
lean_dec(v_a_626_);
goto v___jp_641_;
}
v___jp_641_:
{
uint8_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_642_ = 1;
v___x_643_ = l_List_lengthTR___redArg(v_a_625_);
v___x_644_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_643_);
lean_dec(v___x_643_);
lean_inc_ref(v_a_625_);
v___x_645_ = lp_lean_x2dftml_LeanFtml_codeMatch(v_a_625_, v___x_642_, v___x_644_);
lean_dec(v___x_644_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_656_; 
lean_inc(v_tail_634_);
lean_inc(v_head_633_);
v_isSharedCheck_656_ = !lean_is_exclusive(v_a_625_);
if (v_isSharedCheck_656_ == 0)
{
lean_object* v_unused_657_; lean_object* v_unused_658_; 
v_unused_657_ = lean_ctor_get(v_a_625_, 1);
lean_dec(v_unused_657_);
v_unused_658_ = lean_ctor_get(v_a_625_, 0);
lean_dec(v_unused_658_);
v___x_647_ = v_a_625_;
v_isShared_648_ = v_isSharedCheck_656_;
goto v_resetjp_646_;
}
else
{
lean_dec(v_a_625_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_656_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
lean_inc(v_head_633_);
v___x_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_649_, 0, v_head_633_);
v___x_650_ = lean_box(0);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v___x_650_);
v___x_652_ = v___x_647_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_head_633_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v___x_650_);
v___x_652_ = v_reuseFailAlloc_655_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_653_; 
v___x_653_ = l_List_appendTR___redArg(v_a_629_, v___x_652_);
v_a_625_ = v_tail_634_;
v_a_626_ = v___x_649_;
v_a_629_ = v___x_653_;
v_a_630_ = v_n_640_;
goto _start;
}
}
}
else
{
lean_object* v_head_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_685_; 
v_head_659_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; 
v_unused_686_ = lean_ctor_get(v___x_645_, 1);
lean_dec(v_unused_686_);
v___x_661_ = v___x_645_;
v_isShared_662_ = v_isSharedCheck_685_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_head_659_);
lean_dec(v___x_645_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_685_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_snd_663_; lean_object* v_snd_664_; lean_object* v_fst_665_; lean_object* v_fst_666_; lean_object* v_fst_667_; lean_object* v_snd_668_; lean_object* v_entry_669_; lean_object* v_idx_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v_out_x27_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
v_snd_663_ = lean_ctor_get(v_head_659_, 1);
lean_inc(v_snd_663_);
v_snd_664_ = lean_ctor_get(v_snd_663_, 1);
lean_inc(v_snd_664_);
v_fst_665_ = lean_ctor_get(v_head_659_, 0);
lean_inc_n(v_fst_665_, 2);
lean_dec(v_head_659_);
v_fst_666_ = lean_ctor_get(v_snd_663_, 0);
lean_inc(v_fst_666_);
lean_dec(v_snd_663_);
v_fst_667_ = lean_ctor_get(v_snd_664_, 0);
lean_inc(v_fst_667_);
v_snd_668_ = lean_ctor_get(v_snd_664_, 1);
lean_inc(v_snd_668_);
lean_dec(v_snd_664_);
v_entry_669_ = lp_lean_x2dftml_LeanFtml_codeToken(v_fst_666_, v_fst_667_);
lean_dec(v_fst_666_);
v_idx_670_ = l_List_lengthTR___redArg(v_a_627_);
v___x_671_ = lp_lean_x2dftml_LeanFtml_pushText(v_a_628_, v_a_629_);
v___x_672_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__1, &lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_applyCode_scan___closed__1);
v___x_673_ = lp_lean_x2dftml_LeanFtml_pushText(v___x_671_, v___x_672_);
v_out_x27_674_ = lp_lean_x2dftml_LeanFtml_pushTok(v___x_673_, v_idx_670_);
v___x_675_ = l_List_drop___redArg(v_fst_665_, v_a_625_);
v___x_676_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_getAttrs_go___closed__0));
lean_inc_ref(v_a_625_);
v___x_677_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_625_, v_a_625_, v_fst_665_, v___x_676_);
lean_dec_ref_known(v_a_625_, 2);
v___x_678_ = l_List_getLast_x3f___redArg(v___x_677_);
lean_dec(v___x_677_);
v___x_679_ = lean_box(0);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_679_);
lean_ctor_set(v___x_661_, 0, v_entry_669_);
v___x_681_ = v___x_661_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_entry_669_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v___x_679_);
v___x_681_ = v_reuseFailAlloc_684_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; 
v___x_682_ = l_List_appendTR___redArg(v_a_627_, v___x_681_);
v_a_625_ = v___x_675_;
v_a_626_ = v___x_678_;
v_a_627_ = v___x_682_;
v_a_628_ = v_out_x27_674_;
v_a_629_ = v_snd_668_;
v_a_630_ = v_n_640_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_applyCode(lean_object* v_cs_704_, lean_object* v_toks_705_){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_706_ = lean_box(0);
v___x_707_ = lean_box(0);
v___x_708_ = l_List_lengthTR___redArg(v_cs_704_);
v___x_709_ = lean_unsigned_to_nat(1u);
v___x_710_ = lean_nat_add(v___x_708_, v___x_709_);
lean_dec(v___x_708_);
v___x_711_ = lp_lean_x2dftml_LeanFtml_applyCode_scan(v_cs_704_, v___x_706_, v_toks_705_, v___x_707_, v___x_707_, v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeRule(lean_object* v_st_712_){
_start:
{
lean_object* v_work_713_; lean_object* v_tokens_714_; lean_object* v_doc_715_; uint8_t v_fatal_716_; lean_object* v___x_717_; 
v_work_713_ = lean_ctor_get(v_st_712_, 0);
v_tokens_714_ = lean_ctor_get(v_st_712_, 1);
v_doc_715_ = lean_ctor_get(v_st_712_, 2);
v_fatal_716_ = lean_ctor_get_uint8(v_st_712_, sizeof(void*)*3);
lean_inc(v_work_713_);
v___x_717_ = lp_lean_x2dftml_LeanFtml_allText(v_work_713_);
if (lean_obj_tag(v___x_717_) == 0)
{
return v_st_712_;
}
else
{
lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_728_; 
lean_inc_ref(v_doc_715_);
lean_inc(v_tokens_714_);
v_isSharedCheck_728_ = !lean_is_exclusive(v_st_712_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; lean_object* v_unused_730_; lean_object* v_unused_731_; 
v_unused_729_ = lean_ctor_get(v_st_712_, 2);
lean_dec(v_unused_729_);
v_unused_730_ = lean_ctor_get(v_st_712_, 1);
lean_dec(v_unused_730_);
v_unused_731_ = lean_ctor_get(v_st_712_, 0);
lean_dec(v_unused_731_);
v___x_719_ = v_st_712_;
v_isShared_720_ = v_isSharedCheck_728_;
goto v_resetjp_718_;
}
else
{
lean_dec(v_st_712_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_728_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_val_721_; lean_object* v___x_722_; lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___x_726_; 
v_val_721_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_val_721_);
lean_dec_ref_known(v___x_717_, 1);
v___x_722_ = lp_lean_x2dftml_LeanFtml_applyCode(v_val_721_, v_tokens_714_);
v_fst_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_fst_723_);
v_snd_724_ = lean_ctor_get(v___x_722_, 1);
lean_inc(v_snd_724_);
lean_dec_ref(v___x_722_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 1, v_snd_724_);
lean_ctor_set(v___x_719_, 0, v_fst_723_);
v___x_726_ = v___x_719_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_fst_723_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_snd_724_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_doc_715_);
lean_ctor_set_uint8(v_reuseFailAlloc_727_, sizeof(void*)*3, v_fatal_716_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_CodeRule(uint8_t builtin) {
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
lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0___boxed__const__1 = _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_codeBody_spec__4___closed__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
