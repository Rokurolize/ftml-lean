// Lean compiler output
// Module: LeanFtml.Inline2Rules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules public import LeanFtml.LinkRules public import LeanFtml.NotesRules public import LeanFtml.BlockRules public import LeanFtml.ContainRules public import LeanFtml.ListRules public import LeanFtml.TableRules public import LeanFtml.ParaRules public import LeanFtml.Inline1Rules
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
lean_object* l_String_toListImpl(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_claimTok(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_pregScan(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_pairBodyLen_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_pairBodyLen_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_pairBodyLen_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairBodyLen_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairBodyLen(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_pairClaim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_pairClaim___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_pairClaim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_pairClaim___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_pairClaim___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_pairClaim___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_pairClaim___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_pairClaim___closed__11;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairClaim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colorBodyScan_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colorBodyScan(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_colorParseCharB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colorParseCharB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_colortextMatch_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_colortextMatch_go_spec__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Colortext"};
static const lean_object* lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "color"};
static const lean_object* lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colortextMatch_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colortextMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_colortextRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_colortextMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_colortextRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_colortextRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_colortextRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_colortextRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_colortextRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_colortextRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colortextRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_strongMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Strong"};
static const lean_object* lp_lean_x2dftml_LeanFtml_strongMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_strongMatch___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_strongMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_strongRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_strongMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_strongRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_strongRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_strongRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_strongRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_strongRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_strongRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_strongRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emphCloseScan_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emphCloseScan(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Emphasis"};
static const lean_object* lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emphasisMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_emphasisRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_emphasisMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_emphasisRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emphasisRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_emphasisRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_emphasisRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_emphasisRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emphasisRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emphasisRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_underlineMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Underline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_underlineMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_underlineMatch___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_underlineMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_underlineRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_underlineMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_underlineRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_underlineRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_underlineRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_underlineRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_underlineRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_underlineRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_underlineRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Strikethrough"};
static const lean_object* lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pairClaim, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__0_value),((lean_object*)(((size_t)(45) << 1) | 1))} };
static const lean_object* lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__1_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__1_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_strikethroughRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairBodyLen_go(lean_object* v_marker_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v_zero_7_; uint8_t v_isZero_8_; 
v_zero_7_ = lean_unsigned_to_nat(0u);
v_isZero_8_ = lean_nat_dec_eq(v_a_6_, v_zero_7_);
if (v_isZero_8_ == 1)
{
lean_object* v___x_9_; 
lean_dec(v_a_6_);
lean_dec(v_a_5_);
lean_dec(v_a_4_);
lean_dec(v_marker_3_);
v___x_9_ = lean_box(0);
return v___x_9_;
}
else
{
if (lean_obj_tag(v_a_4_) == 0)
{
lean_object* v___x_10_; 
lean_dec(v_a_6_);
lean_dec(v_a_5_);
lean_dec(v_marker_3_);
v___x_10_ = lean_box(0);
return v___x_10_;
}
else
{
lean_object* v_head_11_; lean_object* v_tail_12_; lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_42_; 
v_head_11_ = lean_ctor_get(v_a_4_, 0);
v_tail_12_ = lean_ctor_get(v_a_4_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_a_4_);
if (v_isSharedCheck_42_ == 0)
{
v___x_14_ = v_a_4_;
v_isShared_15_ = v_isSharedCheck_42_;
goto v_resetjp_13_;
}
else
{
lean_inc(v_tail_12_);
lean_inc(v_head_11_);
lean_dec(v_a_4_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_42_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(10u);
v___x_17_ = lean_nat_dec_eq(v_head_11_, v___x_16_);
if (v___x_17_ == 0)
{
lean_object* v_one_18_; lean_object* v_n_19_; uint8_t v___y_36_; uint8_t v___x_38_; 
v_one_18_ = lean_unsigned_to_nat(1u);
v_n_19_ = lean_nat_sub(v_a_6_, v_one_18_);
lean_dec(v_a_6_);
v___x_38_ = lean_nat_dec_eq(v_a_5_, v_zero_7_);
if (v___x_38_ == 0)
{
v___y_36_ = v___x_17_;
goto v___jp_35_;
}
else
{
uint8_t v___x_39_; 
v___x_39_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_11_);
if (v___x_39_ == 0)
{
v___y_36_ = v___x_39_;
goto v___jp_35_;
}
else
{
lean_object* v___x_40_; 
lean_dec(v_n_19_);
lean_del_object(v___x_14_);
lean_dec(v_tail_12_);
lean_dec(v_head_11_);
lean_dec(v_a_5_);
lean_dec(v_marker_3_);
v___x_40_ = lean_box(0);
return v___x_40_;
}
}
v___jp_20_:
{
lean_object* v___x_21_; 
v___x_21_ = lean_nat_add(v_a_5_, v_one_18_);
lean_dec(v_a_5_);
v_a_4_ = v_tail_12_;
v_a_5_ = v___x_21_;
v_a_6_ = v_n_19_;
goto _start;
}
v___jp_23_:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_29_; 
v___x_24_ = lean_unsigned_to_nat(2u);
v___x_25_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_pairBodyLen_go___closed__0));
lean_inc(v_tail_12_);
v___x_26_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_12_, v_tail_12_, v___x_24_, v___x_25_);
v___x_27_ = lean_box(0);
lean_inc(v_marker_3_);
if (v_isShared_15_ == 0)
{
lean_ctor_set(v___x_14_, 1, v___x_27_);
lean_ctor_set(v___x_14_, 0, v_marker_3_);
v___x_29_ = v___x_14_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v_marker_3_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v___x_27_);
v___x_29_ = v_reuseFailAlloc_34_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
lean_inc(v_marker_3_);
v___x_30_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_30_, 0, v_marker_3_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
v___x_31_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_26_, v___x_30_);
lean_dec_ref_known(v___x_30_, 2);
lean_dec(v___x_26_);
if (v___x_31_ == 0)
{
goto v___jp_20_;
}
else
{
lean_object* v___x_32_; lean_object* v___x_33_; 
lean_dec(v_n_19_);
lean_dec(v_tail_12_);
lean_dec(v_marker_3_);
v___x_32_ = lean_nat_add(v_a_5_, v_one_18_);
lean_dec(v_a_5_);
v___x_33_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
}
v___jp_35_:
{
uint8_t v___x_37_; 
v___x_37_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_11_);
lean_dec(v_head_11_);
if (v___x_37_ == 0)
{
goto v___jp_23_;
}
else
{
if (v___y_36_ == 0)
{
lean_del_object(v___x_14_);
goto v___jp_20_;
}
else
{
goto v___jp_23_;
}
}
}
}
else
{
lean_object* v___x_41_; 
lean_del_object(v___x_14_);
lean_dec(v_tail_12_);
lean_dec(v_head_11_);
lean_dec(v_a_6_);
lean_dec(v_a_5_);
lean_dec(v_marker_3_);
v___x_41_ = lean_box(0);
return v___x_41_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairBodyLen(lean_object* v_marker_43_, lean_object* v_bs_44_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = l_List_lengthTR___redArg(v_bs_44_);
v___x_47_ = lean_unsigned_to_nat(1u);
v___x_48_ = lean_nat_add(v___x_46_, v___x_47_);
lean_dec(v___x_46_);
v___x_49_ = lp_lean_x2dftml_LeanFtml_pairBodyLen_go(v_marker_43_, v_bs_44_, v___x_45_, v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__1(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_pairClaim___closed__0));
v___x_52_ = l_String_toListImpl(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__3(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_pairClaim___closed__2));
v___x_55_ = l_String_toListImpl(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__4(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__3, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__3);
v___x_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
return v___x_57_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__5(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__4, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__4);
v___x_59_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__1, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__1);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_58_);
return v___x_60_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__6(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_box(0);
v___x_62_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__5, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__5);
v___x_63_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__8(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_pairClaim___closed__7));
v___x_66_ = l_String_toListImpl(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__9(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__8, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__8);
v___x_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
return v___x_68_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__10(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__9, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__9);
v___x_70_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__1, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__1);
v___x_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___x_69_);
return v___x_71_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__11(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = lean_box(0);
v___x_73_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__10, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__10);
v___x_74_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairClaim(lean_object* v_rule_75_, lean_object* v_marker_76_, lean_object* v_bs_77_, lean_object* v_toks_78_){
_start:
{
if (lean_obj_tag(v_bs_77_) == 1)
{
lean_object* v_tail_79_; 
v_tail_79_ = lean_ctor_get(v_bs_77_, 1);
lean_inc(v_tail_79_);
if (lean_obj_tag(v_tail_79_) == 1)
{
lean_object* v_head_80_; lean_object* v_head_81_; lean_object* v_tail_82_; uint8_t v___x_83_; 
v_head_80_ = lean_ctor_get(v_bs_77_, 0);
lean_inc(v_head_80_);
lean_dec_ref_known(v_bs_77_, 2);
v_head_81_ = lean_ctor_get(v_tail_79_, 0);
lean_inc(v_head_81_);
v_tail_82_ = lean_ctor_get(v_tail_79_, 1);
lean_inc(v_tail_82_);
lean_dec_ref_known(v_tail_79_, 2);
v___x_83_ = lean_nat_dec_eq(v_head_80_, v_marker_76_);
lean_dec(v_head_80_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
lean_dec(v_tail_82_);
lean_dec(v_head_81_);
lean_dec(v_toks_78_);
lean_dec(v_marker_76_);
lean_dec_ref(v_rule_75_);
v___x_84_ = lean_box(0);
return v___x_84_;
}
else
{
uint8_t v___x_85_; 
v___x_85_ = lean_nat_dec_eq(v_head_81_, v_marker_76_);
lean_dec(v_head_81_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
lean_dec(v_tail_82_);
lean_dec(v_toks_78_);
lean_dec(v_marker_76_);
lean_dec_ref(v_rule_75_);
v___x_86_ = lean_box(0);
return v___x_86_;
}
else
{
lean_object* v___x_87_; 
lean_inc(v_tail_82_);
v___x_87_ = lp_lean_x2dftml_LeanFtml_pairBodyLen(v_marker_76_, v_tail_82_);
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v___x_88_; 
lean_dec(v_tail_82_);
lean_dec(v_toks_78_);
lean_dec_ref(v_rule_75_);
v___x_88_ = lean_box(0);
return v___x_88_;
}
else
{
lean_object* v_val_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_125_; 
v_val_89_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_125_ == 0)
{
v___x_91_ = v___x_87_;
v_isShared_92_ = v_isSharedCheck_125_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_val_89_);
lean_dec(v___x_87_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_125_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v_fst_95_; lean_object* v_snd_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_124_; 
v___x_93_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__6, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__6);
lean_inc_ref(v_rule_75_);
v___x_94_ = lp_lean_x2dftml_LeanFtml_claimTok(v_rule_75_, v___x_93_, v_toks_78_);
v_fst_95_ = lean_ctor_get(v___x_94_, 0);
v_snd_96_ = lean_ctor_get(v___x_94_, 1);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_124_ == 0)
{
v___x_98_ = v___x_94_;
v_isShared_99_ = v_isSharedCheck_124_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_snd_96_);
lean_inc(v_fst_95_);
lean_dec(v___x_94_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_124_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v_fst_102_; lean_object* v_snd_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_123_; 
v___x_100_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__11, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__11);
v___x_101_ = lp_lean_x2dftml_LeanFtml_claimTok(v_rule_75_, v___x_100_, v_snd_96_);
v_fst_102_ = lean_ctor_get(v___x_101_, 0);
v_snd_103_ = lean_ctor_get(v___x_101_, 1);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_123_ == 0)
{
v___x_105_ = v___x_101_;
v_isShared_106_ = v_isSharedCheck_123_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_snd_103_);
lean_inc(v_fst_102_);
lean_dec(v___x_101_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_123_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v_body_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
v___x_107_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_pairBodyLen_go___closed__0));
lean_inc(v_val_89_);
lean_inc(v_tail_82_);
v_body_108_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_82_, v_tail_82_, v_val_89_, v___x_107_);
v___x_109_ = lean_unsigned_to_nat(2u);
v___x_110_ = lean_nat_add(v_val_89_, v___x_109_);
lean_dec(v_val_89_);
v___x_111_ = l_List_drop___redArg(v___x_110_, v_tail_82_);
lean_dec(v_tail_82_);
v___x_112_ = l_List_appendTR___redArg(v_fst_95_, v_body_108_);
v___x_113_ = l_List_appendTR___redArg(v___x_112_, v_fst_102_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 0, v___x_113_);
v___x_115_ = v___x_105_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v_snd_103_);
v___x_115_ = v_reuseFailAlloc_122_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v___x_117_; 
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v___x_115_);
lean_ctor_set(v___x_98_, 0, v___x_111_);
v___x_117_ = v___x_98_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_111_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v___x_115_);
v___x_117_ = v_reuseFailAlloc_121_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_119_; 
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_117_);
v___x_119_ = v___x_91_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v___x_117_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
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
lean_object* v___x_126_; 
lean_dec_ref_known(v_bs_77_, 2);
lean_dec(v_tail_79_);
lean_dec(v_toks_78_);
lean_dec(v_marker_76_);
lean_dec_ref(v_rule_75_);
v___x_126_ = lean_box(0);
return v___x_126_;
}
}
else
{
lean_object* v___x_127_; 
lean_dec(v_toks_78_);
lean_dec(v_bs_77_);
lean_dec(v_marker_76_);
lean_dec_ref(v_rule_75_);
v___x_127_ = lean_box(0);
return v___x_127_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colorBodyScan_go(lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v_zero_131_; uint8_t v_isZero_132_; 
v_zero_131_ = lean_unsigned_to_nat(0u);
v_isZero_132_ = lean_nat_dec_eq(v_a_130_, v_zero_131_);
if (v_isZero_132_ == 1)
{
lean_object* v___x_133_; 
lean_dec(v_a_130_);
lean_dec(v_a_129_);
lean_dec(v_a_128_);
v___x_133_ = lean_box(0);
return v___x_133_;
}
else
{
if (lean_obj_tag(v_a_128_) == 0)
{
lean_object* v___x_134_; 
lean_dec(v_a_130_);
lean_dec(v_a_129_);
v___x_134_ = lean_box(0);
return v___x_134_;
}
else
{
lean_object* v_head_135_; lean_object* v_tail_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_172_; 
v_head_135_ = lean_ctor_get(v_a_128_, 0);
v_tail_136_ = lean_ctor_get(v_a_128_, 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_a_128_);
if (v_isSharedCheck_172_ == 0)
{
v___x_138_ = v_a_128_;
v_isShared_139_ = v_isSharedCheck_172_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_tail_136_);
lean_inc(v_head_135_);
lean_dec(v_a_128_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_172_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = lean_unsigned_to_nat(10u);
v___x_141_ = lean_nat_dec_eq(v_head_135_, v___x_140_);
if (v___x_141_ == 0)
{
lean_object* v_one_142_; lean_object* v_n_143_; lean_object* v_b_145_; lean_object* v_rest_146_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_one_142_ = lean_unsigned_to_nat(1u);
v_n_143_ = lean_nat_sub(v_a_130_, v_one_142_);
lean_dec(v_a_130_);
v___x_151_ = lean_unsigned_to_nat(35u);
v___x_152_ = lean_nat_dec_eq(v_head_135_, v___x_151_);
if (v___x_152_ == 0)
{
v_b_145_ = v_head_135_;
v_rest_146_ = v_tail_136_;
goto v___jp_144_;
}
else
{
lean_dec(v_head_135_);
if (lean_obj_tag(v_tail_136_) == 1)
{
lean_object* v_head_153_; lean_object* v_tail_154_; uint8_t v___x_155_; 
v_head_153_ = lean_ctor_get(v_tail_136_, 0);
v_tail_154_ = lean_ctor_get(v_tail_136_, 1);
v___x_155_ = lean_nat_dec_eq(v_head_153_, v___x_151_);
if (v___x_155_ == 0)
{
v_b_145_ = v___x_151_;
v_rest_146_ = v_tail_136_;
goto v___jp_144_;
}
else
{
lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_168_; 
lean_inc(v_tail_154_);
lean_del_object(v___x_138_);
v_isSharedCheck_168_ = !lean_is_exclusive(v_tail_136_);
if (v_isSharedCheck_168_ == 0)
{
lean_object* v_unused_169_; lean_object* v_unused_170_; 
v_unused_169_ = lean_ctor_get(v_tail_136_, 1);
lean_dec(v_unused_169_);
v_unused_170_ = lean_ctor_get(v_tail_136_, 0);
lean_dec(v_unused_170_);
v___x_157_ = v_tail_136_;
v_isShared_158_ = v_isSharedCheck_168_;
goto v_resetjp_156_;
}
else
{
lean_dec(v_tail_136_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_168_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
uint8_t v___x_159_; 
v___x_159_ = l_List_isEmpty___redArg(v_a_129_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
lean_del_object(v___x_157_);
lean_dec(v_n_143_);
v___x_160_ = l_List_reverse___redArg(v_a_129_);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v_tail_154_);
v___x_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
else
{
lean_object* v___x_164_; 
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_151_);
v___x_164_ = v___x_157_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v_tail_154_);
v___x_164_ = v_reuseFailAlloc_167_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_165_; 
v___x_165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_151_);
lean_ctor_set(v___x_165_, 1, v_a_129_);
v_a_128_ = v___x_164_;
v_a_129_ = v___x_165_;
v_a_130_ = v_n_143_;
goto _start;
}
}
}
}
}
else
{
v_b_145_ = v___x_151_;
v_rest_146_ = v_tail_136_;
goto v___jp_144_;
}
}
v___jp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 1, v_a_129_);
lean_ctor_set(v___x_138_, 0, v_b_145_);
v___x_148_ = v___x_138_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_b_145_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v_a_129_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
v_a_128_ = v_rest_146_;
v_a_129_ = v___x_148_;
v_a_130_ = v_n_143_;
goto _start;
}
}
}
else
{
lean_object* v___x_171_; 
lean_del_object(v___x_138_);
lean_dec(v_tail_136_);
lean_dec(v_head_135_);
lean_dec(v_a_130_);
lean_dec(v_a_129_);
v___x_171_ = lean_box(0);
return v___x_171_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colorBodyScan(lean_object* v_bs_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_174_ = lean_box(0);
v___x_175_ = l_List_lengthTR___redArg(v_bs_173_);
v___x_176_ = lean_unsigned_to_nat(1u);
v___x_177_ = lean_nat_add(v___x_175_, v___x_176_);
lean_dec(v___x_175_);
v___x_178_ = lp_lean_x2dftml_LeanFtml_colorBodyScan_go(v_bs_173_, v___x_174_, v___x_177_);
return v___x_178_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_colorParseCharB(lean_object* v_b_179_){
_start:
{
lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_205_ = lean_unsigned_to_nat(65u);
v___x_206_ = lean_nat_dec_le(v___x_205_, v_b_179_);
if (v___x_206_ == 0)
{
goto v___jp_200_;
}
else
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(90u);
v___x_208_ = lean_nat_dec_le(v_b_179_, v___x_207_);
if (v___x_208_ == 0)
{
goto v___jp_200_;
}
else
{
return v___x_208_;
}
}
v___jp_180_:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_unsigned_to_nat(35u);
v___x_182_ = lean_nat_dec_eq(v_b_179_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = lean_unsigned_to_nat(40u);
v___x_184_ = lean_nat_dec_eq(v_b_179_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = lean_unsigned_to_nat(41u);
v___x_186_ = lean_nat_dec_eq(v_b_179_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(44u);
v___x_188_ = lean_nat_dec_eq(v_b_179_, v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = lean_unsigned_to_nat(45u);
v___x_190_ = lean_nat_dec_eq(v_b_179_, v___x_189_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_unsigned_to_nat(32u);
v___x_192_ = lean_nat_dec_eq(v_b_179_, v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(9u);
v___x_194_ = lean_nat_dec_eq(v_b_179_, v___x_193_);
return v___x_194_;
}
else
{
return v___x_192_;
}
}
else
{
return v___x_190_;
}
}
else
{
return v___x_188_;
}
}
else
{
return v___x_186_;
}
}
else
{
return v___x_184_;
}
}
else
{
return v___x_182_;
}
}
v___jp_195_:
{
lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(48u);
v___x_197_ = lean_nat_dec_le(v___x_196_, v_b_179_);
if (v___x_197_ == 0)
{
goto v___jp_180_;
}
else
{
lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_198_ = lean_unsigned_to_nat(57u);
v___x_199_ = lean_nat_dec_le(v_b_179_, v___x_198_);
if (v___x_199_ == 0)
{
goto v___jp_180_;
}
else
{
return v___x_199_;
}
}
}
v___jp_200_:
{
lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = lean_unsigned_to_nat(97u);
v___x_202_ = lean_nat_dec_le(v___x_201_, v_b_179_);
if (v___x_202_ == 0)
{
goto v___jp_195_;
}
else
{
lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(122u);
v___x_204_ = lean_nat_dec_le(v_b_179_, v___x_203_);
if (v___x_204_ == 0)
{
goto v___jp_195_;
}
else
{
return v___x_204_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colorParseCharB___boxed(lean_object* v_b_209_){
_start:
{
uint8_t v_res_210_; lean_object* v_r_211_; 
v_res_210_ = lp_lean_x2dftml_LeanFtml_colorParseCharB(v_b_209_);
lean_dec(v_b_209_);
v_r_211_ = lean_box(v_res_210_);
return v_r_211_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_colortextMatch_go_spec__0(lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
uint8_t v___x_213_; 
v___x_213_ = 1;
return v___x_213_;
}
else
{
lean_object* v_head_214_; lean_object* v_tail_215_; uint8_t v___x_216_; 
v_head_214_ = lean_ctor_get(v_x_212_, 0);
v_tail_215_ = lean_ctor_get(v_x_212_, 1);
v___x_216_ = lp_lean_x2dftml_LeanFtml_colorParseCharB(v_head_214_);
if (v___x_216_ == 0)
{
return v___x_216_;
}
else
{
v_x_212_ = v_tail_215_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_colortextMatch_go_spec__0___boxed(lean_object* v_x_218_){
_start:
{
uint8_t v_res_219_; lean_object* v_r_220_; 
v_res_219_ = lp_lean_x2dftml_List_all___at___00LeanFtml_colortextMatch_go_spec__0(v_x_218_);
lean_dec(v_x_218_);
v_r_220_ = lean_box(v_res_219_);
return v_r_220_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__2(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__1));
v___x_224_ = l_String_toListImpl(v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colortextMatch_go(lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_zero_229_; uint8_t v_isZero_230_; 
v_zero_229_ = lean_unsigned_to_nat(0u);
v_isZero_230_ = lean_nat_dec_eq(v_a_228_, v_zero_229_);
if (v_isZero_230_ == 1)
{
lean_object* v___x_231_; 
lean_dec(v_a_228_);
lean_dec(v_a_227_);
lean_dec(v_a_226_);
lean_dec(v_a_225_);
v___x_231_ = lean_box(0);
return v___x_231_;
}
else
{
if (lean_obj_tag(v_a_225_) == 0)
{
lean_object* v___x_232_; 
lean_dec(v_a_228_);
lean_dec(v_a_227_);
lean_dec(v_a_226_);
v___x_232_ = lean_box(0);
return v___x_232_;
}
else
{
lean_object* v_head_233_; lean_object* v_tail_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_312_; 
v_head_233_ = lean_ctor_get(v_a_225_, 0);
v_tail_234_ = lean_ctor_get(v_a_225_, 1);
v_isSharedCheck_312_ = !lean_is_exclusive(v_a_225_);
if (v_isSharedCheck_312_ == 0)
{
v___x_236_ = v_a_225_;
v_isShared_237_ = v_isSharedCheck_312_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_tail_234_);
lean_inc(v_head_233_);
lean_dec(v_a_225_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_312_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_238_ = lean_unsigned_to_nat(10u);
v___x_239_ = lean_nat_dec_eq(v_head_233_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v_one_240_; lean_object* v_n_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v_one_240_ = lean_unsigned_to_nat(1u);
v_n_241_ = lean_nat_sub(v_a_228_, v_one_240_);
lean_dec(v_a_228_);
v___x_242_ = lean_unsigned_to_nat(124u);
v___x_243_ = lean_nat_dec_eq(v_head_233_, v___x_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_245_; 
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 1, v_a_226_);
v___x_245_ = v___x_236_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_head_233_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v_a_226_);
v___x_245_ = v_reuseFailAlloc_247_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
v_a_225_ = v_tail_234_;
v_a_226_ = v___x_245_;
v_a_228_ = v_n_241_;
goto _start;
}
}
else
{
uint8_t v___x_248_; 
lean_dec(v_head_233_);
v___x_248_ = l_List_isEmpty___redArg(v_a_226_);
if (v___x_248_ == 0)
{
lean_object* v_color_249_; uint8_t v___x_250_; 
lean_inc(v_a_226_);
v_color_249_ = l_List_reverse___redArg(v_a_226_);
v___x_250_ = lp_lean_x2dftml_List_all___at___00LeanFtml_colortextMatch_go_spec__0(v_color_249_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
lean_dec(v_color_249_);
lean_dec(v_n_241_);
lean_del_object(v___x_236_);
lean_dec(v_tail_234_);
lean_dec(v_a_227_);
lean_dec(v_a_226_);
v___x_251_ = lean_box(0);
return v___x_251_;
}
else
{
lean_object* v___x_252_; 
lean_inc(v_tail_234_);
v___x_252_ = lp_lean_x2dftml_LeanFtml_colorBodyScan(v_tail_234_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v___x_254_; 
lean_dec(v_color_249_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 1, v_a_226_);
lean_ctor_set(v___x_236_, 0, v___x_242_);
v___x_254_ = v___x_236_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v_a_226_);
v___x_254_ = v_reuseFailAlloc_256_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
v_a_225_ = v_tail_234_;
v_a_226_ = v___x_254_;
v_a_228_ = v_n_241_;
goto _start;
}
}
else
{
lean_object* v_val_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_306_; 
lean_dec(v_n_241_);
lean_dec(v_tail_234_);
lean_dec(v_a_226_);
v_val_257_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_306_ == 0)
{
v___x_259_ = v___x_252_;
v_isShared_260_ = v_isSharedCheck_306_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_val_257_);
lean_dec(v___x_252_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_306_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v_fst_261_; lean_object* v_snd_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_305_; 
v_fst_261_ = lean_ctor_get(v_val_257_, 0);
v_snd_262_ = lean_ctor_get(v_val_257_, 1);
v_isSharedCheck_305_ = !lean_is_exclusive(v_val_257_);
if (v_isSharedCheck_305_ == 0)
{
v___x_264_ = v_val_257_;
v_isShared_265_ = v_isSharedCheck_305_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_snd_262_);
lean_inc(v_fst_261_);
lean_dec(v_val_257_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_305_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_266_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__0));
v___x_267_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__5, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__5);
v___x_268_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__2, &lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_colortextMatch_go___closed__2);
v___x_269_ = lp_lean_x2dftml_LeanFtml_textVal(v_color_249_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 1, v___x_269_);
lean_ctor_set(v___x_264_, 0, v___x_268_);
v___x_271_ = v___x_264_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_268_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_269_);
v___x_271_ = v_reuseFailAlloc_304_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_272_ = lean_box(0);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 1, v___x_272_);
lean_ctor_set(v___x_236_, 0, v___x_271_);
v___x_274_ = v___x_236_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v___x_272_);
v___x_274_ = v_reuseFailAlloc_303_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_fst_277_; lean_object* v_snd_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_302_; 
lean_inc_ref(v___x_274_);
v___x_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_267_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_266_, v___x_275_, v_a_227_);
v_fst_277_ = lean_ctor_get(v___x_276_, 0);
v_snd_278_ = lean_ctor_get(v___x_276_, 1);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_302_ == 0)
{
v___x_280_ = v___x_276_;
v_isShared_281_ = v_isSharedCheck_302_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_snd_278_);
lean_inc(v_fst_277_);
lean_dec(v___x_276_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_302_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v_fst_285_; lean_object* v_snd_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_301_; 
v___x_282_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__10, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__10);
v___x_283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___x_274_);
v___x_284_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_266_, v___x_283_, v_snd_278_);
v_fst_285_ = lean_ctor_get(v___x_284_, 0);
v_snd_286_ = lean_ctor_get(v___x_284_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_301_ == 0)
{
v___x_288_ = v___x_284_;
v_isShared_289_ = v_isSharedCheck_301_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_snd_286_);
lean_inc(v_fst_285_);
lean_dec(v___x_284_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_301_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_290_ = l_List_appendTR___redArg(v_fst_277_, v_fst_261_);
v___x_291_ = l_List_appendTR___redArg(v___x_290_, v_fst_285_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v___x_291_);
v___x_293_ = v___x_288_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_291_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v_snd_286_);
v___x_293_ = v_reuseFailAlloc_300_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_295_; 
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 1, v___x_293_);
lean_ctor_set(v___x_280_, 0, v_snd_262_);
v___x_295_ = v___x_280_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_snd_262_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_293_);
v___x_295_ = v_reuseFailAlloc_299_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_297_; 
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_295_);
v___x_297_ = v___x_259_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
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
lean_object* v___x_308_; 
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 1, v_a_226_);
lean_ctor_set(v___x_236_, 0, v___x_242_);
v___x_308_ = v___x_236_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_310_, 1, v_a_226_);
v___x_308_ = v_reuseFailAlloc_310_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
v_a_225_ = v_tail_234_;
v_a_226_ = v___x_308_;
v_a_228_ = v_n_241_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_311_; 
lean_del_object(v___x_236_);
lean_dec(v_tail_234_);
lean_dec(v_head_233_);
lean_dec(v_a_228_);
lean_dec(v_a_227_);
lean_dec(v_a_226_);
v___x_311_ = lean_box(0);
return v___x_311_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colortextMatch(lean_object* v_bs_313_, lean_object* v_toks_314_){
_start:
{
if (lean_obj_tag(v_bs_313_) == 1)
{
lean_object* v_head_315_; lean_object* v_tail_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v_head_315_ = lean_ctor_get(v_bs_313_, 0);
lean_inc(v_head_315_);
v_tail_316_ = lean_ctor_get(v_bs_313_, 1);
lean_inc(v_tail_316_);
lean_dec_ref_known(v_bs_313_, 2);
v___x_317_ = lean_unsigned_to_nat(35u);
v___x_318_ = lean_nat_dec_eq(v_head_315_, v___x_317_);
lean_dec(v_head_315_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; 
lean_dec(v_tail_316_);
lean_dec(v_toks_314_);
v___x_319_ = lean_box(0);
return v___x_319_;
}
else
{
if (lean_obj_tag(v_tail_316_) == 1)
{
lean_object* v_head_320_; lean_object* v_tail_321_; uint8_t v___x_322_; 
v_head_320_ = lean_ctor_get(v_tail_316_, 0);
lean_inc(v_head_320_);
v_tail_321_ = lean_ctor_get(v_tail_316_, 1);
lean_inc(v_tail_321_);
lean_dec_ref_known(v_tail_316_, 2);
v___x_322_ = lean_nat_dec_eq(v_head_320_, v___x_317_);
lean_dec(v_head_320_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; 
lean_dec(v_tail_321_);
lean_dec(v_toks_314_);
v___x_323_ = lean_box(0);
return v___x_323_;
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_324_ = lean_box(0);
v___x_325_ = l_List_lengthTR___redArg(v_tail_321_);
v___x_326_ = lean_unsigned_to_nat(1u);
v___x_327_ = lean_nat_add(v___x_325_, v___x_326_);
lean_dec(v___x_325_);
v___x_328_ = lp_lean_x2dftml_LeanFtml_colortextMatch_go(v_tail_321_, v___x_324_, v_toks_314_, v___x_327_);
return v___x_328_;
}
}
else
{
lean_object* v___x_329_; 
lean_dec(v_tail_316_);
lean_dec(v_toks_314_);
v___x_329_ = lean_box(0);
return v___x_329_;
}
}
}
else
{
lean_object* v___x_330_; 
lean_dec(v_toks_314_);
lean_dec(v_bs_313_);
v___x_330_ = lean_box(0);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colortextRule(lean_object* v_st_334_){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_colortextRule___closed__1));
v___x_336_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_334_, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_strongMatch(lean_object* v_bs_338_, lean_object* v_toks_339_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_strongMatch___closed__0));
v___x_341_ = lean_unsigned_to_nat(42u);
lean_inc(v_toks_339_);
lean_inc(v_bs_338_);
v___x_342_ = lp_lean_x2dftml_LeanFtml_pairClaim(v___x_340_, v___x_341_, v_bs_338_, v_toks_339_);
if (lean_obj_tag(v___x_342_) == 0)
{
if (lean_obj_tag(v_bs_338_) == 1)
{
lean_object* v_head_343_; lean_object* v_tail_344_; uint8_t v___x_345_; 
v_head_343_ = lean_ctor_get(v_bs_338_, 0);
lean_inc(v_head_343_);
v_tail_344_ = lean_ctor_get(v_bs_338_, 1);
lean_inc(v_tail_344_);
lean_dec_ref_known(v_bs_338_, 2);
v___x_345_ = lean_nat_dec_eq(v_head_343_, v___x_341_);
lean_dec(v_head_343_);
if (v___x_345_ == 0)
{
lean_dec(v_tail_344_);
lean_dec(v_toks_339_);
return v___x_342_;
}
else
{
if (lean_obj_tag(v_tail_344_) == 1)
{
lean_object* v_head_346_; lean_object* v_tail_347_; uint8_t v___x_348_; 
v_head_346_ = lean_ctor_get(v_tail_344_, 0);
lean_inc(v_head_346_);
v_tail_347_ = lean_ctor_get(v_tail_344_, 1);
lean_inc(v_tail_347_);
lean_dec_ref_known(v_tail_344_, 2);
v___x_348_ = lean_nat_dec_eq(v_head_346_, v___x_341_);
lean_dec(v_head_346_);
if (v___x_348_ == 0)
{
lean_dec(v_tail_347_);
lean_dec(v_toks_339_);
return v___x_342_;
}
else
{
if (lean_obj_tag(v_tail_347_) == 1)
{
lean_object* v_head_349_; lean_object* v_tail_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_370_; 
v_head_349_ = lean_ctor_get(v_tail_347_, 0);
v_tail_350_ = lean_ctor_get(v_tail_347_, 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v_tail_347_);
if (v_isSharedCheck_370_ == 0)
{
v___x_352_ = v_tail_347_;
v_isShared_353_ = v_isSharedCheck_370_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_tail_350_);
lean_inc(v_head_349_);
lean_dec(v_tail_347_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_370_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
uint8_t v___x_354_; 
v___x_354_ = lean_nat_dec_eq(v_head_349_, v___x_341_);
lean_dec(v_head_349_);
if (v___x_354_ == 0)
{
lean_del_object(v___x_352_);
lean_dec(v_tail_350_);
lean_dec(v_toks_339_);
return v___x_342_;
}
else
{
if (lean_obj_tag(v_tail_350_) == 1)
{
lean_object* v_head_355_; lean_object* v_tail_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_369_; 
v_head_355_ = lean_ctor_get(v_tail_350_, 0);
v_tail_356_ = lean_ctor_get(v_tail_350_, 1);
v_isSharedCheck_369_ = !lean_is_exclusive(v_tail_350_);
if (v_isSharedCheck_369_ == 0)
{
v___x_358_ = v_tail_350_;
v_isShared_359_ = v_isSharedCheck_369_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_tail_356_);
lean_inc(v_head_355_);
lean_dec(v_tail_350_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_369_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
uint8_t v___x_360_; 
v___x_360_ = lean_nat_dec_eq(v_head_355_, v___x_341_);
lean_dec(v_head_355_);
if (v___x_360_ == 0)
{
lean_del_object(v___x_358_);
lean_dec(v_tail_356_);
lean_del_object(v___x_352_);
lean_dec(v_toks_339_);
return v___x_342_;
}
else
{
lean_object* v___x_361_; lean_object* v___x_363_; 
v___x_361_ = lean_box(0);
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 0);
lean_ctor_set(v___x_358_, 1, v_toks_339_);
lean_ctor_set(v___x_358_, 0, v___x_361_);
v___x_363_ = v___x_358_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_361_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_toks_339_);
v___x_363_ = v_reuseFailAlloc_368_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_365_; 
if (v_isShared_353_ == 0)
{
lean_ctor_set_tag(v___x_352_, 0);
lean_ctor_set(v___x_352_, 1, v___x_363_);
lean_ctor_set(v___x_352_, 0, v_tail_356_);
v___x_365_ = v___x_352_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_tail_356_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_363_);
v___x_365_ = v_reuseFailAlloc_367_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
lean_object* v___x_366_; 
v___x_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
}
}
}
else
{
lean_del_object(v___x_352_);
lean_dec(v_tail_350_);
lean_dec(v_toks_339_);
return v___x_342_;
}
}
}
}
else
{
lean_dec(v_tail_347_);
lean_dec(v_toks_339_);
return v___x_342_;
}
}
}
else
{
lean_dec(v_tail_344_);
lean_dec(v_toks_339_);
return v___x_342_;
}
}
}
else
{
lean_dec(v_toks_339_);
lean_dec(v_bs_338_);
return v___x_342_;
}
}
else
{
lean_dec(v_toks_339_);
lean_dec(v_bs_338_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_strongRule(lean_object* v_st_374_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_strongRule___closed__1));
v___x_376_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_374_, v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emphCloseScan_go(lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_){
_start:
{
lean_object* v_zero_380_; uint8_t v_isZero_381_; 
v_zero_380_ = lean_unsigned_to_nat(0u);
v_isZero_381_ = lean_nat_dec_eq(v_a_379_, v_zero_380_);
if (v_isZero_381_ == 1)
{
lean_object* v___x_382_; 
lean_dec(v_a_379_);
lean_dec(v_a_378_);
lean_dec(v_a_377_);
v___x_382_ = lean_box(0);
return v___x_382_;
}
else
{
if (lean_obj_tag(v_a_377_) == 0)
{
lean_object* v___x_383_; 
lean_dec(v_a_379_);
lean_dec(v_a_378_);
v___x_383_ = lean_box(0);
return v___x_383_;
}
else
{
lean_object* v_head_384_; lean_object* v_tail_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_417_; 
v_head_384_ = lean_ctor_get(v_a_377_, 0);
v_tail_385_ = lean_ctor_get(v_a_377_, 1);
v_isSharedCheck_417_ = !lean_is_exclusive(v_a_377_);
if (v_isSharedCheck_417_ == 0)
{
v___x_387_ = v_a_377_;
v_isShared_388_ = v_isSharedCheck_417_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_tail_385_);
lean_inc(v_head_384_);
lean_dec(v_a_377_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_417_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = lean_unsigned_to_nat(10u);
v___x_390_ = lean_nat_dec_eq(v_head_384_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v_one_391_; lean_object* v_n_392_; lean_object* v_b_394_; lean_object* v_rest_395_; lean_object* v___x_400_; uint8_t v___x_401_; 
v_one_391_ = lean_unsigned_to_nat(1u);
v_n_392_ = lean_nat_sub(v_a_379_, v_one_391_);
lean_dec(v_a_379_);
v___x_400_ = lean_unsigned_to_nat(47u);
v___x_401_ = lean_nat_dec_eq(v_head_384_, v___x_400_);
if (v___x_401_ == 0)
{
v_b_394_ = v_head_384_;
v_rest_395_ = v_tail_385_;
goto v___jp_393_;
}
else
{
lean_dec(v_head_384_);
if (lean_obj_tag(v_tail_385_) == 1)
{
lean_object* v_head_402_; lean_object* v_tail_403_; uint8_t v___x_404_; 
v_head_402_ = lean_ctor_get(v_tail_385_, 0);
v_tail_403_ = lean_ctor_get(v_tail_385_, 1);
v___x_404_ = lean_nat_dec_eq(v_head_402_, v___x_400_);
if (v___x_404_ == 0)
{
v_b_394_ = v___x_400_;
v_rest_395_ = v_tail_385_;
goto v___jp_393_;
}
else
{
lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_413_; 
lean_inc(v_tail_403_);
lean_dec(v_n_392_);
lean_del_object(v___x_387_);
v_isSharedCheck_413_ = !lean_is_exclusive(v_tail_385_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; lean_object* v_unused_415_; 
v_unused_414_ = lean_ctor_get(v_tail_385_, 1);
lean_dec(v_unused_414_);
v_unused_415_ = lean_ctor_get(v_tail_385_, 0);
lean_dec(v_unused_415_);
v___x_406_ = v_tail_385_;
v_isShared_407_ = v_isSharedCheck_413_;
goto v_resetjp_405_;
}
else
{
lean_dec(v_tail_385_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_413_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_408_ = l_List_reverse___redArg(v_a_378_);
if (v_isShared_407_ == 0)
{
lean_ctor_set_tag(v___x_406_, 0);
lean_ctor_set(v___x_406_, 0, v___x_408_);
v___x_410_ = v___x_406_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_408_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_tail_403_);
v___x_410_ = v_reuseFailAlloc_412_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_411_; 
v___x_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
}
}
}
else
{
v_b_394_ = v___x_400_;
v_rest_395_ = v_tail_385_;
goto v___jp_393_;
}
}
v___jp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v_a_378_);
lean_ctor_set(v___x_387_, 0, v_b_394_);
v___x_397_ = v___x_387_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_b_394_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v_a_378_);
v___x_397_ = v_reuseFailAlloc_399_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
v_a_377_ = v_rest_395_;
v_a_378_ = v___x_397_;
v_a_379_ = v_n_392_;
goto _start;
}
}
}
else
{
lean_object* v___x_416_; 
lean_del_object(v___x_387_);
lean_dec(v_tail_385_);
lean_dec(v_head_384_);
lean_dec(v_a_379_);
lean_dec(v_a_378_);
v___x_416_ = lean_box(0);
return v___x_416_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emphCloseScan(lean_object* v_bs_418_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_419_ = lean_box(0);
v___x_420_ = l_List_lengthTR___redArg(v_bs_418_);
v___x_421_ = lean_unsigned_to_nat(1u);
v___x_422_ = lean_nat_add(v___x_420_, v___x_421_);
lean_dec(v___x_420_);
v___x_423_ = lp_lean_x2dftml_LeanFtml_emphCloseScan_go(v_bs_418_, v___x_419_, v___x_422_);
return v___x_423_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__1(void){
_start:
{
lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = lp_lean_x2dftml_LeanFtml_isWsByte(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emphasisMatch(lean_object* v_bs_427_, lean_object* v_toks_428_){
_start:
{
if (lean_obj_tag(v_bs_427_) == 1)
{
lean_object* v_head_429_; lean_object* v_tail_430_; lean_object* v___x_431_; uint8_t v___x_432_; 
v_head_429_ = lean_ctor_get(v_bs_427_, 0);
v_tail_430_ = lean_ctor_get(v_bs_427_, 1);
lean_inc(v_tail_430_);
v___x_431_ = lean_unsigned_to_nat(47u);
v___x_432_ = lean_nat_dec_eq(v_head_429_, v___x_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; 
lean_dec(v_tail_430_);
lean_dec_ref_known(v_bs_427_, 2);
lean_dec(v_toks_428_);
v___x_433_ = lean_box(0);
return v___x_433_;
}
else
{
if (lean_obj_tag(v_tail_430_) == 1)
{
lean_object* v_head_434_; lean_object* v_tail_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_517_; 
v_head_434_ = lean_ctor_get(v_tail_430_, 0);
v_tail_435_ = lean_ctor_get(v_tail_430_, 1);
v_isSharedCheck_517_ = !lean_is_exclusive(v_tail_430_);
if (v_isSharedCheck_517_ == 0)
{
v___x_437_ = v_tail_430_;
v_isShared_438_ = v_isSharedCheck_517_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_tail_435_);
lean_inc(v_head_434_);
lean_dec(v_tail_430_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_517_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
uint8_t v___x_439_; 
v___x_439_ = lean_nat_dec_eq(v_head_434_, v___x_431_);
lean_dec(v_head_434_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; 
lean_del_object(v___x_437_);
lean_dec(v_tail_435_);
lean_dec_ref_known(v_bs_427_, 2);
lean_dec(v_toks_428_);
v___x_440_ = lean_box(0);
return v___x_440_;
}
else
{
lean_object* v___x_441_; 
v___x_441_ = lp_lean_x2dftml_LeanFtml_emphCloseScan(v_tail_435_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v___x_442_; 
lean_del_object(v___x_437_);
lean_dec_ref_known(v_bs_427_, 2);
lean_dec(v_toks_428_);
v___x_442_ = lean_box(0);
return v___x_442_;
}
else
{
lean_object* v_val_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_516_; 
v_val_443_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_516_ == 0)
{
v___x_445_ = v___x_441_;
v_isShared_446_ = v_isSharedCheck_516_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_val_443_);
lean_dec(v___x_441_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_516_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v_fst_447_; lean_object* v_snd_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_515_; 
v_fst_447_ = lean_ctor_get(v_val_443_, 0);
v_snd_448_ = lean_ctor_get(v_val_443_, 1);
v_isSharedCheck_515_ = !lean_is_exclusive(v_val_443_);
if (v_isSharedCheck_515_ == 0)
{
v___x_450_ = v_val_443_;
v_isShared_451_ = v_isSharedCheck_515_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_snd_448_);
lean_inc(v_fst_447_);
lean_dec(v_val_443_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_515_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
uint8_t v___y_468_; uint8_t v___x_495_; 
v___x_495_ = l_List_isEmpty___redArg(v_fst_447_);
if (v___x_495_ == 0)
{
if (lean_obj_tag(v_fst_447_) == 0)
{
lean_object* v___x_496_; 
lean_del_object(v___x_450_);
lean_dec(v_snd_448_);
lean_del_object(v___x_445_);
lean_del_object(v___x_437_);
lean_dec_ref_known(v_bs_427_, 2);
lean_dec(v_toks_428_);
v___x_496_ = lean_box(0);
return v___x_496_;
}
else
{
lean_object* v_head_497_; uint8_t v___x_498_; 
v_head_497_ = lean_ctor_get(v_fst_447_, 0);
v___x_498_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_inc_ref(v_fst_447_);
v___x_499_ = l_List_reverse___redArg(v_fst_447_);
if (lean_obj_tag(v___x_499_) == 0)
{
uint8_t v___x_500_; 
v___x_500_ = lean_uint8_once(&lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__1, &lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__1);
v___y_468_ = v___x_500_;
goto v___jp_467_;
}
else
{
lean_object* v_head_501_; uint8_t v___x_502_; 
v_head_501_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_head_501_);
lean_dec_ref_known(v___x_499_, 2);
v___x_502_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_501_);
lean_dec(v_head_501_);
v___y_468_ = v___x_502_;
goto v___jp_467_;
}
}
else
{
lean_dec_ref_known(v_fst_447_, 2);
goto v___jp_452_;
}
}
}
else
{
lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_512_; 
lean_del_object(v___x_450_);
lean_dec(v_fst_447_);
lean_del_object(v___x_445_);
lean_del_object(v___x_437_);
v_isSharedCheck_512_ = !lean_is_exclusive(v_bs_427_);
if (v_isSharedCheck_512_ == 0)
{
lean_object* v_unused_513_; lean_object* v_unused_514_; 
v_unused_513_ = lean_ctor_get(v_bs_427_, 1);
lean_dec(v_unused_513_);
v_unused_514_ = lean_ctor_get(v_bs_427_, 0);
lean_dec(v_unused_514_);
v___x_504_ = v_bs_427_;
v_isShared_505_ = v_isSharedCheck_512_;
goto v_resetjp_503_;
}
else
{
lean_dec(v_bs_427_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_512_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_506_ = lean_box(0);
if (v_isShared_505_ == 0)
{
lean_ctor_set_tag(v___x_504_, 0);
lean_ctor_set(v___x_504_, 1, v_toks_428_);
lean_ctor_set(v___x_504_, 0, v___x_506_);
v___x_508_ = v___x_504_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_toks_428_);
v___x_508_ = v_reuseFailAlloc_511_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v_snd_448_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
v___x_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
return v___x_510_;
}
}
}
v___jp_452_:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_453_ = l_List_lengthTR___redArg(v_bs_427_);
v___x_454_ = l_List_lengthTR___redArg(v_snd_448_);
v___x_455_ = lean_nat_sub(v___x_453_, v___x_454_);
lean_dec(v___x_454_);
lean_dec(v___x_453_);
v___x_456_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_pairBodyLen_go___closed__0));
lean_inc_ref(v_bs_427_);
v___x_457_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_427_, v_bs_427_, v___x_455_, v___x_456_);
lean_dec_ref_known(v_bs_427_, 2);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 1, v_toks_428_);
lean_ctor_set(v___x_450_, 0, v___x_457_);
v___x_459_ = v___x_450_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_457_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_toks_428_);
v___x_459_ = v_reuseFailAlloc_466_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
lean_object* v___x_461_; 
if (v_isShared_438_ == 0)
{
lean_ctor_set_tag(v___x_437_, 0);
lean_ctor_set(v___x_437_, 1, v___x_459_);
lean_ctor_set(v___x_437_, 0, v_snd_448_);
v___x_461_ = v___x_437_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_snd_448_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v___x_459_);
v___x_461_ = v_reuseFailAlloc_465_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v___x_463_; 
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_461_);
v___x_463_ = v___x_445_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
v___jp_467_:
{
if (v___y_468_ == 0)
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v_fst_472_; lean_object* v_snd_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_494_; 
lean_del_object(v___x_450_);
lean_del_object(v___x_445_);
lean_del_object(v___x_437_);
lean_dec_ref_known(v_bs_427_, 2);
v___x_469_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emphasisMatch___closed__0));
v___x_470_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__6, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__6);
v___x_471_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_469_, v___x_470_, v_toks_428_);
v_fst_472_ = lean_ctor_get(v___x_471_, 0);
v_snd_473_ = lean_ctor_get(v___x_471_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_494_ == 0)
{
v___x_475_ = v___x_471_;
v_isShared_476_ = v_isSharedCheck_494_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_snd_473_);
lean_inc(v_fst_472_);
lean_dec(v___x_471_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_494_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v_fst_479_; lean_object* v_snd_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_493_; 
v___x_477_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_pairClaim___closed__11, &lp_lean_x2dftml_LeanFtml_pairClaim___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_pairClaim___closed__11);
v___x_478_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_469_, v___x_477_, v_snd_473_);
v_fst_479_ = lean_ctor_get(v___x_478_, 0);
v_snd_480_ = lean_ctor_get(v___x_478_, 1);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_493_ == 0)
{
v___x_482_ = v___x_478_;
v_isShared_483_ = v_isSharedCheck_493_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_snd_480_);
lean_inc(v_fst_479_);
lean_dec(v___x_478_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_493_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_484_ = l_List_appendTR___redArg(v_fst_472_, v_fst_447_);
v___x_485_ = l_List_appendTR___redArg(v___x_484_, v_fst_479_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_485_);
v___x_487_ = v___x_482_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_snd_480_);
v___x_487_ = v_reuseFailAlloc_492_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_489_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v___x_487_);
lean_ctor_set(v___x_475_, 0, v_snd_448_);
v___x_489_ = v___x_475_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_snd_448_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v___x_487_);
v___x_489_ = v_reuseFailAlloc_491_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_490_; 
v___x_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
}
}
}
else
{
lean_dec(v_fst_447_);
goto v___jp_452_;
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
lean_object* v___x_518_; 
lean_dec(v_tail_430_);
lean_dec_ref_known(v_bs_427_, 2);
lean_dec(v_toks_428_);
v___x_518_ = lean_box(0);
return v___x_518_;
}
}
}
else
{
lean_object* v___x_519_; 
lean_dec(v_toks_428_);
lean_dec(v_bs_427_);
v___x_519_ = lean_box(0);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emphasisRule(lean_object* v_st_523_){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emphasisRule___closed__1));
v___x_525_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_523_, v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_underlineMatch(lean_object* v_bs_527_, lean_object* v_toks_528_){
_start:
{
if (lean_obj_tag(v_bs_527_) == 1)
{
lean_object* v_head_533_; lean_object* v_tail_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v_head_533_ = lean_ctor_get(v_bs_527_, 0);
v_tail_534_ = lean_ctor_get(v_bs_527_, 1);
v___x_535_ = lean_unsigned_to_nat(95u);
v___x_536_ = lean_nat_dec_eq(v_head_533_, v___x_535_);
if (v___x_536_ == 0)
{
goto v___jp_529_;
}
else
{
if (lean_obj_tag(v_tail_534_) == 1)
{
lean_object* v_head_537_; lean_object* v_tail_538_; uint8_t v___x_539_; 
v_head_537_ = lean_ctor_get(v_tail_534_, 0);
v_tail_538_ = lean_ctor_get(v_tail_534_, 1);
lean_inc(v_tail_538_);
v___x_539_ = lean_nat_dec_eq(v_head_537_, v___x_535_);
if (v___x_539_ == 0)
{
lean_dec(v_tail_538_);
goto v___jp_529_;
}
else
{
if (lean_obj_tag(v_tail_538_) == 1)
{
lean_object* v_head_540_; lean_object* v_tail_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_561_; 
v_head_540_ = lean_ctor_get(v_tail_538_, 0);
v_tail_541_ = lean_ctor_get(v_tail_538_, 1);
v_isSharedCheck_561_ = !lean_is_exclusive(v_tail_538_);
if (v_isSharedCheck_561_ == 0)
{
v___x_543_ = v_tail_538_;
v_isShared_544_ = v_isSharedCheck_561_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_tail_541_);
lean_inc(v_head_540_);
lean_dec(v_tail_538_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_561_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
uint8_t v___x_545_; 
v___x_545_ = lean_nat_dec_eq(v_head_540_, v___x_535_);
lean_dec(v_head_540_);
if (v___x_545_ == 0)
{
lean_del_object(v___x_543_);
lean_dec(v_tail_541_);
goto v___jp_529_;
}
else
{
if (lean_obj_tag(v_tail_541_) == 1)
{
lean_object* v_head_546_; lean_object* v_tail_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_560_; 
v_head_546_ = lean_ctor_get(v_tail_541_, 0);
v_tail_547_ = lean_ctor_get(v_tail_541_, 1);
v_isSharedCheck_560_ = !lean_is_exclusive(v_tail_541_);
if (v_isSharedCheck_560_ == 0)
{
v___x_549_ = v_tail_541_;
v_isShared_550_ = v_isSharedCheck_560_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_tail_547_);
lean_inc(v_head_546_);
lean_dec(v_tail_541_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_560_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
uint8_t v___x_551_; 
v___x_551_ = lean_nat_dec_eq(v_head_546_, v___x_535_);
lean_dec(v_head_546_);
if (v___x_551_ == 0)
{
lean_del_object(v___x_549_);
lean_dec(v_tail_547_);
lean_del_object(v___x_543_);
goto v___jp_529_;
}
else
{
lean_object* v___x_552_; lean_object* v___x_554_; 
lean_dec_ref_known(v_bs_527_, 2);
v___x_552_ = lean_box(0);
if (v_isShared_550_ == 0)
{
lean_ctor_set_tag(v___x_549_, 0);
lean_ctor_set(v___x_549_, 1, v_toks_528_);
lean_ctor_set(v___x_549_, 0, v___x_552_);
v___x_554_ = v___x_549_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_toks_528_);
v___x_554_ = v_reuseFailAlloc_559_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_556_; 
if (v_isShared_544_ == 0)
{
lean_ctor_set_tag(v___x_543_, 0);
lean_ctor_set(v___x_543_, 1, v___x_554_);
lean_ctor_set(v___x_543_, 0, v_tail_547_);
v___x_556_ = v___x_543_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_tail_547_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v___x_554_);
v___x_556_ = v_reuseFailAlloc_558_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_557_; 
v___x_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
return v___x_557_;
}
}
}
}
}
else
{
lean_del_object(v___x_543_);
lean_dec(v_tail_541_);
goto v___jp_529_;
}
}
}
}
else
{
lean_dec(v_tail_538_);
goto v___jp_529_;
}
}
}
else
{
goto v___jp_529_;
}
}
}
else
{
goto v___jp_529_;
}
v___jp_529_:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_530_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_underlineMatch___closed__0));
v___x_531_ = lean_unsigned_to_nat(95u);
v___x_532_ = lp_lean_x2dftml_LeanFtml_pairClaim(v___x_530_, v___x_531_, v_bs_527_, v_toks_528_);
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_underlineRule(lean_object* v_st_565_){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_underlineRule___closed__1));
v___x_567_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_565_, v___x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_strikethroughRule(lean_object* v_st_574_){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_strikethroughRule___closed__2));
v___x_576_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_574_, v___x_575_);
return v___x_576_;
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
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_Inline2Rules(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
