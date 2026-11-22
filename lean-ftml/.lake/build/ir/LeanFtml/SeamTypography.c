// Lean compiler output
// Module: LeanFtml.SeamTypography
// Imports: public import Init public meta import Init
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isLt(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isLt___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isGt(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isGt___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDot(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDot___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isSpace(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isSpace___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDotOrSp(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDotOrSp___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_takeRunAcc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_startsSeam(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_startsSeam___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_charsOf(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasSeam(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasSeam___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_takeRun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rewriteRunsFuel_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteRunsFuel(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteRunsFuel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteRuns(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteRuns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convertPairs(uint32_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convertPairs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_peekChars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_leftAngleM___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_leftAngleM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_leftAngleM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_leftAngleM___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_leftAngleM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_leftAngleM___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_leftAngleM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_isLt___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_leftAngleM___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_leftAngleM___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_leftAngleM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleZM___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleZM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_rightAngleZM___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_isGt___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleZM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleNaiveM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_spaceCollapseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spaceCollapseM___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_spaceCollapseM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_isSpace___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spaceCollapseM___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ellipsisMFuel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ellipsisMFuel___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ellipsisM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_naiveTypoM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_correctedM(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_markPieces___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_markPieces___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_markPieces___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_markPieces(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_deferPrefix_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_deferPrefix_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deferPrefix(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segmentTypoM___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segmentTypoM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_segmentTypoM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_segmentTypoM___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_segmentTypoM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_segmentTypoM___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segmentTypoM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_preprocessPiece(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_preprocessPiece___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_preprocessPieces_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_preprocessPieces(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ftmlSeamResolveM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_seamResolveM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_SeamTypography_0__LeanFtml_markPieces_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_SeamTypography_0__LeanFtml_markPieces_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isLt(uint32_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 60;
v___x_3_ = lean_uint32_dec_eq(v_c_1_, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isLt___boxed(lean_object* v_c_4_){
_start:
{
uint32_t v_c_boxed_5_; uint8_t v_res_6_; lean_object* v_r_7_; 
v_c_boxed_5_ = lean_unbox_uint32(v_c_4_);
lean_dec(v_c_4_);
v_res_6_ = lp_lean_x2dftml_LeanFtml_isLt(v_c_boxed_5_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isGt(uint32_t v_c_8_){
_start:
{
uint32_t v___x_9_; uint8_t v___x_10_; 
v___x_9_ = 62;
v___x_10_ = lean_uint32_dec_eq(v_c_8_, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isGt___boxed(lean_object* v_c_11_){
_start:
{
uint32_t v_c_boxed_12_; uint8_t v_res_13_; lean_object* v_r_14_; 
v_c_boxed_12_ = lean_unbox_uint32(v_c_11_);
lean_dec(v_c_11_);
v_res_13_ = lp_lean_x2dftml_LeanFtml_isGt(v_c_boxed_12_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDot(uint32_t v_c_15_){
_start:
{
uint32_t v___x_16_; uint8_t v___x_17_; 
v___x_16_ = 46;
v___x_17_ = lean_uint32_dec_eq(v_c_15_, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDot___boxed(lean_object* v_c_18_){
_start:
{
uint32_t v_c_boxed_19_; uint8_t v_res_20_; lean_object* v_r_21_; 
v_c_boxed_19_ = lean_unbox_uint32(v_c_18_);
lean_dec(v_c_18_);
v_res_20_ = lp_lean_x2dftml_LeanFtml_isDot(v_c_boxed_19_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isSpace(uint32_t v_c_22_){
_start:
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 32;
v___x_24_ = lean_uint32_dec_eq(v_c_22_, v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isSpace___boxed(lean_object* v_c_25_){
_start:
{
uint32_t v_c_boxed_26_; uint8_t v_res_27_; lean_object* v_r_28_; 
v_c_boxed_26_ = lean_unbox_uint32(v_c_25_);
lean_dec(v_c_25_);
v_res_27_ = lp_lean_x2dftml_LeanFtml_isSpace(v_c_boxed_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDotOrSp(uint32_t v_c_29_){
_start:
{
uint8_t v___x_30_; 
v___x_30_ = lp_lean_x2dftml_LeanFtml_isDot(v_c_29_);
if (v___x_30_ == 0)
{
uint8_t v___x_31_; 
v___x_31_ = lp_lean_x2dftml_LeanFtml_isSpace(v_c_29_);
return v___x_31_;
}
else
{
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDotOrSp___boxed(lean_object* v_c_32_){
_start:
{
uint32_t v_c_boxed_33_; uint8_t v_res_34_; lean_object* v_r_35_; 
v_c_boxed_33_ = lean_unbox_uint32(v_c_32_);
lean_dec(v_c_32_);
v_res_34_ = lp_lean_x2dftml_LeanFtml_isDotOrSp(v_c_boxed_33_);
v_r_35_ = lean_box(v_res_34_);
return v_r_35_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_takeRunAcc(lean_object* v_p_36_, lean_object* v_seams_37_, lean_object* v_x_38_){
_start:
{
if (lean_obj_tag(v_x_38_) == 0)
{
lean_object* v___x_39_; 
lean_dec_ref(v_p_36_);
v___x_39_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_39_, 0, v_x_38_);
lean_ctor_set(v___x_39_, 1, v_seams_37_);
return v___x_39_;
}
else
{
lean_object* v_head_40_; 
v_head_40_ = lean_ctor_get(v_x_38_, 0);
if (lean_obj_tag(v_head_40_) == 0)
{
lean_object* v_tail_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_51_; 
lean_inc(v_head_40_);
v_tail_41_ = lean_ctor_get(v_x_38_, 1);
v_isSharedCheck_51_ = !lean_is_exclusive(v_x_38_);
if (v_isSharedCheck_51_ == 0)
{
lean_object* v_unused_52_; 
v_unused_52_ = lean_ctor_get(v_x_38_, 0);
lean_dec(v_unused_52_);
v___x_43_ = v_x_38_;
v_isShared_44_ = v_isSharedCheck_51_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_tail_41_);
lean_dec(v_x_38_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_51_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_45_; lean_object* v___x_47_; 
v___x_45_ = lean_box(0);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 1, v___x_45_);
v___x_47_ = v___x_43_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_head_40_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v___x_45_);
v___x_47_ = v_reuseFailAlloc_50_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
lean_object* v___x_48_; 
v___x_48_ = l_List_appendTR___redArg(v_seams_37_, v___x_47_);
v_seams_37_ = v___x_48_;
v_x_38_ = v_tail_41_;
goto _start;
}
}
}
else
{
lean_object* v_tail_53_; lean_object* v_val_54_; lean_object* v___x_55_; uint8_t v___x_56_; 
v_tail_53_ = lean_ctor_get(v_x_38_, 1);
v_val_54_ = lean_ctor_get(v_head_40_, 0);
lean_inc_ref(v_p_36_);
lean_inc(v_val_54_);
v___x_55_ = lean_apply_1(v_p_36_, v_val_54_);
v___x_56_ = lean_unbox(v___x_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
lean_dec_ref(v_p_36_);
v___x_57_ = lean_box(0);
v___x_58_ = l_List_appendTR___redArg(v_seams_37_, v_x_38_);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
return v___x_59_;
}
else
{
lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_78_; 
lean_inc_ref(v_head_40_);
lean_inc(v_tail_53_);
v_isSharedCheck_78_ = !lean_is_exclusive(v_x_38_);
if (v_isSharedCheck_78_ == 0)
{
lean_object* v_unused_79_; lean_object* v_unused_80_; 
v_unused_79_ = lean_ctor_get(v_x_38_, 1);
lean_dec(v_unused_79_);
v_unused_80_ = lean_ctor_get(v_x_38_, 0);
lean_dec(v_unused_80_);
v___x_61_ = v_x_38_;
v_isShared_62_ = v_isSharedCheck_78_;
goto v_resetjp_60_;
}
else
{
lean_dec(v_x_38_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_78_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v___x_63_; lean_object* v_r_64_; lean_object* v_fst_65_; lean_object* v_snd_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_77_; 
v___x_63_ = lean_box(0);
v_r_64_ = lp_lean_x2dftml_LeanFtml_takeRunAcc(v_p_36_, v___x_63_, v_tail_53_);
v_fst_65_ = lean_ctor_get(v_r_64_, 0);
v_snd_66_ = lean_ctor_get(v_r_64_, 1);
v_isSharedCheck_77_ = !lean_is_exclusive(v_r_64_);
if (v_isSharedCheck_77_ == 0)
{
v___x_68_ = v_r_64_;
v_isShared_69_ = v_isSharedCheck_77_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_snd_66_);
lean_inc(v_fst_65_);
lean_dec(v_r_64_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_77_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_71_; 
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 1, v_fst_65_);
v___x_71_ = v___x_61_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_head_40_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_fst_65_);
v___x_71_ = v_reuseFailAlloc_76_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
lean_object* v___x_72_; lean_object* v___x_74_; 
v___x_72_ = l_List_appendTR___redArg(v_seams_37_, v___x_71_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v___x_72_);
v___x_74_ = v___x_68_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_72_);
lean_ctor_set(v_reuseFailAlloc_75_, 1, v_snd_66_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_startsSeam(lean_object* v_x_81_){
_start:
{
if (lean_obj_tag(v_x_81_) == 1)
{
lean_object* v_head_82_; 
v_head_82_ = lean_ctor_get(v_x_81_, 0);
if (lean_obj_tag(v_head_82_) == 0)
{
uint8_t v___x_83_; 
v___x_83_ = 1;
return v___x_83_;
}
else
{
uint8_t v___x_84_; 
v___x_84_ = 0;
return v___x_84_;
}
}
else
{
uint8_t v___x_85_; 
v___x_85_ = 0;
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_startsSeam___boxed(lean_object* v_x_86_){
_start:
{
uint8_t v_res_87_; lean_object* v_r_88_; 
v_res_87_ = lp_lean_x2dftml_LeanFtml_startsSeam(v_x_86_);
lean_dec(v_x_86_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_charsOf(lean_object* v_x_89_){
_start:
{
if (lean_obj_tag(v_x_89_) == 0)
{
lean_object* v___x_90_; 
v___x_90_ = lean_box(0);
return v___x_90_;
}
else
{
lean_object* v_head_91_; 
v_head_91_ = lean_ctor_get(v_x_89_, 0);
if (lean_obj_tag(v_head_91_) == 0)
{
lean_object* v_tail_92_; 
v_tail_92_ = lean_ctor_get(v_x_89_, 1);
lean_inc(v_tail_92_);
lean_dec_ref_known(v_x_89_, 2);
v_x_89_ = v_tail_92_;
goto _start;
}
else
{
lean_object* v_tail_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_103_; 
lean_inc_ref(v_head_91_);
v_tail_94_ = lean_ctor_get(v_x_89_, 1);
v_isSharedCheck_103_ = !lean_is_exclusive(v_x_89_);
if (v_isSharedCheck_103_ == 0)
{
lean_object* v_unused_104_; 
v_unused_104_ = lean_ctor_get(v_x_89_, 0);
lean_dec(v_unused_104_);
v___x_96_ = v_x_89_;
v_isShared_97_ = v_isSharedCheck_103_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_tail_94_);
lean_dec(v_x_89_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_103_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v_val_98_; lean_object* v___x_99_; lean_object* v___x_101_; 
v_val_98_ = lean_ctor_get(v_head_91_, 0);
lean_inc(v_val_98_);
lean_dec_ref_known(v_head_91_, 1);
v___x_99_ = lp_lean_x2dftml_LeanFtml_charsOf(v_tail_94_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 1, v___x_99_);
lean_ctor_set(v___x_96_, 0, v_val_98_);
v___x_101_ = v___x_96_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_val_98_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___x_99_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasSeam(lean_object* v_x_105_){
_start:
{
if (lean_obj_tag(v_x_105_) == 0)
{
uint8_t v___x_106_; 
v___x_106_ = 0;
return v___x_106_;
}
else
{
lean_object* v_head_107_; 
v_head_107_ = lean_ctor_get(v_x_105_, 0);
if (lean_obj_tag(v_head_107_) == 0)
{
uint8_t v___x_108_; 
v___x_108_ = 1;
return v___x_108_;
}
else
{
lean_object* v_tail_109_; 
v_tail_109_ = lean_ctor_get(v_x_105_, 1);
v_x_105_ = v_tail_109_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasSeam___boxed(lean_object* v_x_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = lp_lean_x2dftml_LeanFtml_hasSeam(v_x_111_);
lean_dec(v_x_111_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_takeRun(lean_object* v_p_114_, lean_object* v_m_115_){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_box(0);
v___x_117_ = lp_lean_x2dftml_LeanFtml_takeRunAcc(v_p_114_, v___x_116_, v_m_115_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rewriteRunsFuel_spec__0(lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
if (lean_obj_tag(v_a_118_) == 0)
{
lean_object* v___x_120_; 
v___x_120_ = l_List_reverse___redArg(v_a_119_);
return v___x_120_;
}
else
{
lean_object* v_head_121_; lean_object* v_tail_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_131_; 
v_head_121_ = lean_ctor_get(v_a_118_, 0);
v_tail_122_ = lean_ctor_get(v_a_118_, 1);
v_isSharedCheck_131_ = !lean_is_exclusive(v_a_118_);
if (v_isSharedCheck_131_ == 0)
{
v___x_124_ = v_a_118_;
v_isShared_125_ = v_isSharedCheck_131_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_tail_122_);
lean_inc(v_head_121_);
lean_dec(v_a_118_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_131_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_126_, 0, v_head_121_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v_a_119_);
lean_ctor_set(v___x_124_, 0, v___x_126_);
v___x_128_ = v___x_124_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_126_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v_a_119_);
v___x_128_ = v_reuseFailAlloc_130_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
v_a_118_ = v_tail_122_;
v_a_119_ = v___x_128_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteRunsFuel(lean_object* v_p_132_, lean_object* v_f_133_, lean_object* v_x_134_, lean_object* v_x_135_, uint8_t v_x_136_, lean_object* v_x_137_){
_start:
{
lean_object* v_zero_138_; uint8_t v_isZero_139_; 
v_zero_138_ = lean_unsigned_to_nat(0u);
v_isZero_139_ = lean_nat_dec_eq(v_x_134_, v_zero_138_);
if (v_isZero_139_ == 1)
{
lean_dec(v_x_135_);
lean_dec_ref(v_f_133_);
lean_dec_ref(v_p_132_);
return v_x_137_;
}
else
{
if (lean_obj_tag(v_x_137_) == 0)
{
lean_dec(v_x_135_);
lean_dec_ref(v_f_133_);
lean_dec_ref(v_p_132_);
return v_x_137_;
}
else
{
lean_object* v_head_140_; lean_object* v_tail_141_; lean_object* v_one_142_; lean_object* v_n_143_; 
v_head_140_ = lean_ctor_get(v_x_137_, 0);
v_tail_141_ = lean_ctor_get(v_x_137_, 1);
v_one_142_ = lean_unsigned_to_nat(1u);
v_n_143_ = lean_nat_sub(v_x_134_, v_one_142_);
if (lean_obj_tag(v_head_140_) == 0)
{
lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_152_; 
lean_inc(v_head_140_);
lean_inc(v_tail_141_);
v_isSharedCheck_152_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_152_ == 0)
{
lean_object* v_unused_153_; lean_object* v_unused_154_; 
v_unused_153_ = lean_ctor_get(v_x_137_, 1);
lean_dec(v_unused_153_);
v_unused_154_ = lean_ctor_get(v_x_137_, 0);
lean_dec(v_unused_154_);
v___x_145_ = v_x_137_;
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
else
{
lean_dec(v_x_137_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
uint8_t v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_147_ = 1;
v___x_148_ = lp_lean_x2dftml_LeanFtml_rewriteRunsFuel(v_p_132_, v_f_133_, v_n_143_, v_x_135_, v___x_147_, v_tail_141_);
lean_dec(v_n_143_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 1, v___x_148_);
v___x_150_ = v___x_145_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_head_140_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
else
{
lean_object* v_val_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v_val_155_ = lean_ctor_get(v_head_140_, 0);
lean_inc_ref(v_p_132_);
lean_inc(v_val_155_);
v___x_156_ = lean_apply_1(v_p_132_, v_val_155_);
v___x_157_ = lean_unbox(v___x_156_);
if (v___x_157_ == 0)
{
lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_167_; 
lean_inc_ref(v_head_140_);
lean_inc(v_tail_141_);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_167_ == 0)
{
lean_object* v_unused_168_; lean_object* v_unused_169_; 
v_unused_168_ = lean_ctor_get(v_x_137_, 1);
lean_dec(v_unused_168_);
v_unused_169_ = lean_ctor_get(v_x_137_, 0);
lean_dec(v_unused_169_);
v___x_159_ = v_x_137_;
v_isShared_160_ = v_isSharedCheck_167_;
goto v_resetjp_158_;
}
else
{
lean_dec(v_x_137_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_167_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; uint8_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_165_; 
v___x_161_ = lean_nat_add(v_x_135_, v_one_142_);
lean_dec(v_x_135_);
v___x_162_ = lean_unbox(v___x_156_);
v___x_163_ = lp_lean_x2dftml_LeanFtml_rewriteRunsFuel(v_p_132_, v_f_133_, v_n_143_, v___x_161_, v___x_162_, v_tail_141_);
lean_dec(v_n_143_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v___x_163_);
v___x_165_ = v___x_159_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_head_140_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___x_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
else
{
lean_object* v_r_170_; lean_object* v_fst_171_; lean_object* v_snd_172_; lean_object* v_cs_173_; uint8_t v_inside_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
lean_inc_ref(v_p_132_);
v_r_170_ = lp_lean_x2dftml_LeanFtml_takeRun(v_p_132_, v_x_137_);
v_fst_171_ = lean_ctor_get(v_r_170_, 0);
lean_inc_n(v_fst_171_, 2);
v_snd_172_ = lean_ctor_get(v_r_170_, 1);
lean_inc(v_snd_172_);
lean_dec_ref(v_r_170_);
v_cs_173_ = lp_lean_x2dftml_LeanFtml_charsOf(v_fst_171_);
v_inside_174_ = lp_lean_x2dftml_LeanFtml_hasSeam(v_fst_171_);
lean_dec(v_fst_171_);
v___x_175_ = lean_box(v_x_136_);
v___x_176_ = lean_box(v_inside_174_);
lean_inc_ref(v_f_133_);
lean_inc(v_cs_173_);
lean_inc(v_x_135_);
v___x_177_ = lean_apply_4(v_f_133_, v_x_135_, v___x_175_, v___x_176_, v_cs_173_);
v___x_178_ = lean_box(0);
v___x_179_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rewriteRunsFuel_spec__0(v___x_177_, v___x_178_);
v___x_180_ = l_List_lengthTR___redArg(v_cs_173_);
lean_dec(v_cs_173_);
v___x_181_ = lean_nat_add(v_x_135_, v___x_180_);
lean_dec(v___x_180_);
lean_dec(v_x_135_);
v___x_182_ = lp_lean_x2dftml_LeanFtml_startsSeam(v_snd_172_);
v___x_183_ = lp_lean_x2dftml_LeanFtml_rewriteRunsFuel(v_p_132_, v_f_133_, v_n_143_, v___x_181_, v___x_182_, v_snd_172_);
lean_dec(v_n_143_);
v___x_184_ = l_List_appendTR___redArg(v___x_179_, v___x_183_);
return v___x_184_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteRunsFuel___boxed(lean_object* v_p_185_, lean_object* v_f_186_, lean_object* v_x_187_, lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
uint8_t v_x_183__boxed_191_; lean_object* v_res_192_; 
v_x_183__boxed_191_ = lean_unbox(v_x_189_);
v_res_192_ = lp_lean_x2dftml_LeanFtml_rewriteRunsFuel(v_p_185_, v_f_186_, v_x_187_, v_x_188_, v_x_183__boxed_191_, v_x_190_);
lean_dec(v_x_187_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteRuns(lean_object* v_p_193_, lean_object* v_f_194_, lean_object* v_pos_195_, uint8_t v_after_196_, lean_object* v_m_197_){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_198_ = l_List_lengthTR___redArg(v_m_197_);
v___x_199_ = lean_unsigned_to_nat(1u);
v___x_200_ = lean_nat_add(v___x_198_, v___x_199_);
lean_dec(v___x_198_);
v___x_201_ = lp_lean_x2dftml_LeanFtml_rewriteRunsFuel(v_p_193_, v_f_194_, v___x_200_, v_pos_195_, v_after_196_, v_m_197_);
lean_dec(v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rewriteRuns___boxed(lean_object* v_p_202_, lean_object* v_f_203_, lean_object* v_pos_204_, lean_object* v_after_205_, lean_object* v_m_206_){
_start:
{
uint8_t v_after_boxed_207_; lean_object* v_res_208_; 
v_after_boxed_207_ = lean_unbox(v_after_205_);
v_res_208_ = lp_lean_x2dftml_LeanFtml_rewriteRuns(v_p_202_, v_f_203_, v_pos_204_, v_after_boxed_207_, v_m_206_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convertPairs(uint32_t v_ch_209_, uint32_t v_rep_210_, lean_object* v_run_211_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_212_ = l_List_lengthTR___redArg(v_run_211_);
v___x_213_ = lean_unsigned_to_nat(2u);
v___x_214_ = lean_unsigned_to_nat(1u);
v___x_215_ = lean_nat_shiftr(v___x_212_, v___x_214_);
v___x_216_ = lean_box_uint32(v_rep_210_);
v___x_217_ = l_List_replicateTR___redArg(v___x_215_, v___x_216_);
v___x_218_ = lean_nat_mod(v___x_212_, v___x_213_);
lean_dec(v___x_212_);
v___x_219_ = lean_nat_dec_eq(v___x_218_, v___x_214_);
lean_dec(v___x_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_box(0);
v___x_221_ = l_List_appendTR___redArg(v___x_217_, v___x_220_);
return v___x_221_;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_222_ = lean_box(0);
v___x_223_ = lean_box_uint32(v_ch_209_);
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v___x_222_);
v___x_225_ = l_List_appendTR___redArg(v___x_217_, v___x_224_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convertPairs___boxed(lean_object* v_ch_226_, lean_object* v_rep_227_, lean_object* v_run_228_){
_start:
{
uint32_t v_ch_boxed_229_; uint32_t v_rep_boxed_230_; lean_object* v_res_231_; 
v_ch_boxed_229_ = lean_unbox_uint32(v_ch_226_);
lean_dec(v_ch_226_);
v_rep_boxed_230_ = lean_unbox_uint32(v_rep_227_);
lean_dec(v_rep_227_);
v_res_231_ = lp_lean_x2dftml_LeanFtml_convertPairs(v_ch_boxed_229_, v_rep_boxed_230_, v_run_228_);
lean_dec(v_run_228_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_peekChars(lean_object* v_x_232_, lean_object* v_x_233_){
_start:
{
lean_object* v_zero_234_; uint8_t v_isZero_235_; 
v_zero_234_ = lean_unsigned_to_nat(0u);
v_isZero_235_ = lean_nat_dec_eq(v_x_232_, v_zero_234_);
if (v_isZero_235_ == 1)
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec(v_x_232_);
v___x_236_ = lean_box(0);
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v_x_233_);
v___x_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
return v___x_238_;
}
else
{
if (lean_obj_tag(v_x_233_) == 0)
{
lean_object* v___x_239_; 
lean_dec(v_x_232_);
v___x_239_ = lean_box(0);
return v___x_239_;
}
else
{
lean_object* v_head_240_; lean_object* v_tail_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_271_; 
v_head_240_ = lean_ctor_get(v_x_233_, 0);
v_tail_241_ = lean_ctor_get(v_x_233_, 1);
v_isSharedCheck_271_ = !lean_is_exclusive(v_x_233_);
if (v_isSharedCheck_271_ == 0)
{
v___x_243_ = v_x_233_;
v_isShared_244_ = v_isSharedCheck_271_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_tail_241_);
lean_inc(v_head_240_);
lean_dec(v_x_233_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_271_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v_one_245_; lean_object* v_n_246_; 
v_one_245_ = lean_unsigned_to_nat(1u);
v_n_246_ = lean_nat_sub(v_x_232_, v_one_245_);
lean_dec(v_x_232_);
if (lean_obj_tag(v_head_240_) == 0)
{
lean_object* v___x_247_; 
lean_del_object(v___x_243_);
v___x_247_ = lean_nat_add(v_n_246_, v_one_245_);
lean_dec(v_n_246_);
v_x_232_ = v___x_247_;
v_x_233_ = v_tail_241_;
goto _start;
}
else
{
lean_object* v_val_249_; lean_object* v___x_250_; 
v_val_249_ = lean_ctor_get(v_head_240_, 0);
lean_inc(v_val_249_);
lean_dec_ref_known(v_head_240_, 1);
v___x_250_ = lp_lean_x2dftml_LeanFtml_peekChars(v_n_246_, v_tail_241_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_dec(v_val_249_);
lean_del_object(v___x_243_);
return v___x_250_;
}
else
{
lean_object* v_val_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_270_; 
v_val_251_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_270_ == 0)
{
v___x_253_ = v___x_250_;
v_isShared_254_ = v_isSharedCheck_270_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_val_251_);
lean_dec(v___x_250_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_270_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v_fst_255_; lean_object* v_snd_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_269_; 
v_fst_255_ = lean_ctor_get(v_val_251_, 0);
v_snd_256_ = lean_ctor_get(v_val_251_, 1);
v_isSharedCheck_269_ = !lean_is_exclusive(v_val_251_);
if (v_isSharedCheck_269_ == 0)
{
v___x_258_ = v_val_251_;
v_isShared_259_ = v_isSharedCheck_269_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_snd_256_);
lean_inc(v_fst_255_);
lean_dec(v_val_251_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_269_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 1, v_fst_255_);
lean_ctor_set(v___x_243_, 0, v_val_249_);
v___x_261_ = v___x_243_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_val_249_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_fst_255_);
v___x_261_ = v_reuseFailAlloc_268_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_object* v___x_263_; 
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 0, v___x_261_);
v___x_263_ = v___x_258_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_261_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v_snd_256_);
v___x_263_ = v_reuseFailAlloc_267_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
lean_object* v___x_265_; 
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_263_);
v___x_265_ = v___x_253_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_leftAngleM___lam__0(lean_object* v_x_272_, uint8_t v_x_273_, uint8_t v_x_274_, lean_object* v_run_275_){
_start:
{
uint32_t v___x_276_; uint32_t v___x_277_; lean_object* v___x_278_; 
v___x_276_ = 60;
v___x_277_ = 171;
v___x_278_ = lp_lean_x2dftml_LeanFtml_convertPairs(v___x_276_, v___x_277_, v_run_275_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_leftAngleM___lam__0___boxed(lean_object* v_x_279_, lean_object* v_x_280_, lean_object* v_x_281_, lean_object* v_run_282_){
_start:
{
uint8_t v_x_25__boxed_283_; uint8_t v_x_26__boxed_284_; lean_object* v_res_285_; 
v_x_25__boxed_283_ = lean_unbox(v_x_280_);
v_x_26__boxed_284_ = lean_unbox(v_x_281_);
v_res_285_ = lp_lean_x2dftml_LeanFtml_leftAngleM___lam__0(v_x_279_, v_x_25__boxed_283_, v_x_26__boxed_284_, v_run_282_);
lean_dec(v_run_282_);
lean_dec(v_x_279_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_leftAngleM(lean_object* v_m_288_){
_start:
{
lean_object* v___f_289_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; lean_object* v___x_293_; 
v___f_289_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_leftAngleM___closed__0));
v___x_290_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_leftAngleM___closed__1));
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = 0;
v___x_293_ = lp_lean_x2dftml_LeanFtml_rewriteRuns(v___x_290_, v___f_289_, v___x_291_, v___x_292_, v_m_288_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleZM___lam__0(lean_object* v_pos_294_, uint8_t v_after_295_, uint8_t v_inside_296_, lean_object* v_run_297_){
_start:
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_unsigned_to_nat(0u);
v___x_303_ = lean_nat_dec_lt(v___x_302_, v_pos_294_);
if (v___x_303_ == 0)
{
if (v_after_295_ == 0)
{
if (v_inside_296_ == 0)
{
lean_inc(v_run_297_);
return v_run_297_;
}
else
{
goto v___jp_298_;
}
}
else
{
goto v___jp_298_;
}
}
else
{
goto v___jp_298_;
}
v___jp_298_:
{
uint32_t v___x_299_; uint32_t v___x_300_; lean_object* v___x_301_; 
v___x_299_ = 62;
v___x_300_ = 187;
v___x_301_ = lp_lean_x2dftml_LeanFtml_convertPairs(v___x_299_, v___x_300_, v_run_297_);
return v___x_301_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleZM___lam__0___boxed(lean_object* v_pos_304_, lean_object* v_after_305_, lean_object* v_inside_306_, lean_object* v_run_307_){
_start:
{
uint8_t v_after_boxed_308_; uint8_t v_inside_boxed_309_; lean_object* v_res_310_; 
v_after_boxed_308_ = lean_unbox(v_after_305_);
v_inside_boxed_309_ = lean_unbox(v_inside_306_);
v_res_310_ = lp_lean_x2dftml_LeanFtml_rightAngleZM___lam__0(v_pos_304_, v_after_boxed_308_, v_inside_boxed_309_, v_run_307_);
lean_dec(v_run_307_);
lean_dec(v_pos_304_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleZM(lean_object* v_m_313_){
_start:
{
lean_object* v___f_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; 
v___f_314_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__0));
v___x_315_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__1));
v___x_316_ = lean_unsigned_to_nat(0u);
v___x_317_ = 0;
v___x_318_ = lp_lean_x2dftml_LeanFtml_rewriteRuns(v___x_315_, v___f_314_, v___x_316_, v___x_317_, v_m_313_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___lam__0(lean_object* v_pos_319_, uint8_t v_x_320_, uint8_t v_x_321_, lean_object* v_run_322_){
_start:
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = lean_unsigned_to_nat(0u);
v___x_324_ = lean_nat_dec_lt(v___x_323_, v_pos_319_);
if (v___x_324_ == 0)
{
lean_inc(v_run_322_);
return v_run_322_;
}
else
{
uint32_t v___x_325_; uint32_t v___x_326_; lean_object* v___x_327_; 
v___x_325_ = 62;
v___x_326_ = 187;
v___x_327_ = lp_lean_x2dftml_LeanFtml_convertPairs(v___x_325_, v___x_326_, v_run_322_);
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___lam__0___boxed(lean_object* v_pos_328_, lean_object* v_x_329_, lean_object* v_x_330_, lean_object* v_run_331_){
_start:
{
uint8_t v_x_31__boxed_332_; uint8_t v_x_32__boxed_333_; lean_object* v_res_334_; 
v_x_31__boxed_332_ = lean_unbox(v_x_329_);
v_x_32__boxed_333_ = lean_unbox(v_x_330_);
v_res_334_ = lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___lam__0(v_pos_328_, v_x_31__boxed_332_, v_x_32__boxed_333_, v_run_331_);
lean_dec(v_run_331_);
lean_dec(v_pos_328_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rightAngleNaiveM(lean_object* v_m_336_){
_start:
{
lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; lean_object* v___x_341_; 
v___f_337_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rightAngleNaiveM___closed__0));
v___x_338_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__1));
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = 0;
v___x_341_ = lp_lean_x2dftml_LeanFtml_rewriteRuns(v___x_338_, v___f_337_, v___x_339_, v___x_340_, v_m_336_);
return v___x_341_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_342_; lean_object* v___x_343_; 
v___x_342_ = 32;
v___x_343_ = lean_box_uint32(v___x_342_);
return v___x_343_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = lean_box(0);
v___x_345_ = lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0___boxed__const__1;
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0(lean_object* v_x_347_, uint8_t v_x_348_, uint8_t v_inside_349_, lean_object* v_run_350_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_351_ = lean_unsigned_to_nat(2u);
v___x_352_ = l_List_lengthTR___redArg(v_run_350_);
v___x_353_ = lean_nat_dec_le(v___x_351_, v___x_352_);
lean_dec(v___x_352_);
if (v___x_353_ == 0)
{
lean_inc(v_run_350_);
return v_run_350_;
}
else
{
if (v_inside_349_ == 0)
{
lean_inc(v_run_350_);
return v_run_350_;
}
else
{
lean_object* v___x_354_; 
v___x_354_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0, &lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0);
return v___x_354_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___boxed(lean_object* v_x_355_, lean_object* v_x_356_, lean_object* v_inside_357_, lean_object* v_run_358_){
_start:
{
uint8_t v_x_77__boxed_359_; uint8_t v_inside_boxed_360_; lean_object* v_res_361_; 
v_x_77__boxed_359_ = lean_unbox(v_x_356_);
v_inside_boxed_360_ = lean_unbox(v_inside_357_);
v_res_361_ = lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0(v_x_355_, v_x_77__boxed_359_, v_inside_boxed_360_, v_run_358_);
lean_dec(v_run_358_);
lean_dec(v_x_355_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spaceCollapseM(lean_object* v_m_364_){
_start:
{
lean_object* v___f_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; lean_object* v___x_369_; 
v___f_365_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spaceCollapseM___closed__0));
v___x_366_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spaceCollapseM___closed__1));
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = 0;
v___x_369_ = lp_lean_x2dftml_LeanFtml_rewriteRuns(v___x_366_, v___f_365_, v___x_367_, v___x_368_, v_m_364_);
return v___x_369_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_370_; lean_object* v___x_371_; 
v___x_370_ = 46;
v___x_371_ = lean_box_uint32(v___x_370_);
return v___x_371_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0___boxed__const__1;
v___x_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_374_; lean_object* v___x_375_; 
v___x_374_ = 8230;
v___x_375_ = lean_box_uint32(v___x_374_);
return v___x_375_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1___boxed__const__1;
v___x_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ellipsisMFuel(lean_object* v_x_378_, lean_object* v_x_379_){
_start:
{
lean_object* v_zero_380_; uint8_t v_isZero_381_; 
v_zero_380_ = lean_unsigned_to_nat(0u);
v_isZero_381_ = lean_nat_dec_eq(v_x_378_, v_zero_380_);
if (v_isZero_381_ == 1)
{
return v_x_379_;
}
else
{
if (lean_obj_tag(v_x_379_) == 0)
{
return v_x_379_;
}
else
{
lean_object* v_head_382_; lean_object* v_tail_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_445_; 
v_head_382_ = lean_ctor_get(v_x_379_, 0);
v_tail_383_ = lean_ctor_get(v_x_379_, 1);
v_isSharedCheck_445_ = !lean_is_exclusive(v_x_379_);
if (v_isSharedCheck_445_ == 0)
{
v___x_385_ = v_x_379_;
v_isShared_386_ = v_isSharedCheck_445_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_tail_383_);
lean_inc(v_head_382_);
lean_dec(v_x_379_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_445_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v_fuel_388_; lean_object* v_one_393_; lean_object* v_n_394_; lean_object* v_rest_400_; 
v_one_393_ = lean_unsigned_to_nat(1u);
v_n_394_ = lean_nat_sub(v_x_378_, v_one_393_);
if (lean_obj_tag(v_head_382_) == 1)
{
lean_object* v_val_428_; uint32_t v___x_429_; uint32_t v___x_430_; uint8_t v___x_431_; 
v_val_428_ = lean_ctor_get(v_head_382_, 0);
v___x_429_ = 46;
v___x_430_ = lean_unbox_uint32(v_val_428_);
v___x_431_ = lean_uint32_dec_eq(v___x_430_, v___x_429_);
if (v___x_431_ == 0)
{
v_fuel_388_ = v_n_394_;
goto v___jp_387_;
}
else
{
lean_object* v___x_432_; lean_object* v___x_433_; 
lean_dec_ref_known(v_head_382_, 1);
lean_del_object(v___x_385_);
v___x_432_ = lean_unsigned_to_nat(2u);
lean_inc(v_tail_383_);
v___x_433_ = lp_lean_x2dftml_LeanFtml_peekChars(v___x_432_, v_tail_383_);
if (lean_obj_tag(v___x_433_) == 1)
{
lean_object* v_val_434_; lean_object* v_fst_435_; 
v_val_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_val_434_);
lean_dec_ref_known(v___x_433_, 1);
v_fst_435_ = lean_ctor_get(v_val_434_, 0);
lean_inc(v_fst_435_);
if (lean_obj_tag(v_fst_435_) == 1)
{
lean_object* v_snd_436_; lean_object* v_head_437_; lean_object* v_tail_438_; uint32_t v___x_439_; uint8_t v___x_440_; 
v_snd_436_ = lean_ctor_get(v_val_434_, 1);
lean_inc(v_snd_436_);
lean_dec(v_val_434_);
v_head_437_ = lean_ctor_get(v_fst_435_, 0);
lean_inc(v_head_437_);
v_tail_438_ = lean_ctor_get(v_fst_435_, 1);
lean_inc(v_tail_438_);
lean_dec_ref_known(v_fst_435_, 2);
v___x_439_ = lean_unbox_uint32(v_head_437_);
lean_dec(v_head_437_);
v___x_440_ = lean_uint32_dec_eq(v___x_439_, v___x_429_);
if (v___x_440_ == 0)
{
lean_dec(v_tail_438_);
lean_dec(v_snd_436_);
goto v___jp_404_;
}
else
{
if (lean_obj_tag(v_tail_438_) == 1)
{
lean_object* v_head_441_; lean_object* v_tail_442_; uint32_t v___x_443_; uint8_t v___x_444_; 
v_head_441_ = lean_ctor_get(v_tail_438_, 0);
lean_inc(v_head_441_);
v_tail_442_ = lean_ctor_get(v_tail_438_, 1);
lean_inc(v_tail_442_);
lean_dec_ref_known(v_tail_438_, 2);
v___x_443_ = lean_unbox_uint32(v_head_441_);
lean_dec(v_head_441_);
v___x_444_ = lean_uint32_dec_eq(v___x_443_, v___x_429_);
if (v___x_444_ == 0)
{
lean_dec(v_tail_442_);
lean_dec(v_snd_436_);
goto v___jp_404_;
}
else
{
if (lean_obj_tag(v_tail_442_) == 0)
{
lean_dec(v_tail_383_);
v_rest_400_ = v_snd_436_;
goto v___jp_399_;
}
else
{
lean_dec(v_tail_442_);
lean_dec(v_snd_436_);
goto v___jp_404_;
}
}
}
else
{
lean_dec(v_tail_438_);
lean_dec(v_snd_436_);
goto v___jp_404_;
}
}
}
else
{
lean_dec(v_fst_435_);
lean_dec(v_val_434_);
goto v___jp_404_;
}
}
else
{
lean_dec(v___x_433_);
goto v___jp_404_;
}
}
}
else
{
v_fuel_388_ = v_n_394_;
goto v___jp_387_;
}
v___jp_387_:
{
lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_389_ = lp_lean_x2dftml_LeanFtml_ellipsisMFuel(v_fuel_388_, v_tail_383_);
lean_dec(v_fuel_388_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v___x_389_);
v___x_391_ = v___x_385_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_head_382_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
v___jp_395_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0, &lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0);
v___x_397_ = lp_lean_x2dftml_LeanFtml_ellipsisMFuel(v_n_394_, v_tail_383_);
lean_dec(v_n_394_);
v___x_398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
return v___x_398_;
}
v___jp_399_:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1, &lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1);
v___x_402_ = lp_lean_x2dftml_LeanFtml_ellipsisMFuel(v_n_394_, v_rest_400_);
lean_dec(v_n_394_);
v___x_403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
return v___x_403_;
}
v___jp_404_:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_unsigned_to_nat(4u);
lean_inc(v_tail_383_);
v___x_406_ = lp_lean_x2dftml_LeanFtml_peekChars(v___x_405_, v_tail_383_);
if (lean_obj_tag(v___x_406_) == 1)
{
lean_object* v_val_407_; lean_object* v_fst_408_; 
v_val_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_val_407_);
lean_dec_ref_known(v___x_406_, 1);
v_fst_408_ = lean_ctor_get(v_val_407_, 0);
lean_inc(v_fst_408_);
if (lean_obj_tag(v_fst_408_) == 1)
{
lean_object* v_snd_409_; lean_object* v_head_410_; lean_object* v_tail_411_; uint32_t v___x_412_; uint32_t v___x_413_; uint8_t v___x_414_; 
v_snd_409_ = lean_ctor_get(v_val_407_, 1);
lean_inc(v_snd_409_);
lean_dec(v_val_407_);
v_head_410_ = lean_ctor_get(v_fst_408_, 0);
lean_inc(v_head_410_);
v_tail_411_ = lean_ctor_get(v_fst_408_, 1);
lean_inc(v_tail_411_);
lean_dec_ref_known(v_fst_408_, 2);
v___x_412_ = 32;
v___x_413_ = lean_unbox_uint32(v_head_410_);
lean_dec(v_head_410_);
v___x_414_ = lean_uint32_dec_eq(v___x_413_, v___x_412_);
if (v___x_414_ == 0)
{
lean_dec(v_tail_411_);
lean_dec(v_snd_409_);
goto v___jp_395_;
}
else
{
if (lean_obj_tag(v_tail_411_) == 1)
{
lean_object* v_head_415_; lean_object* v_tail_416_; uint32_t v___x_417_; uint32_t v___x_418_; uint8_t v___x_419_; 
v_head_415_ = lean_ctor_get(v_tail_411_, 0);
lean_inc(v_head_415_);
v_tail_416_ = lean_ctor_get(v_tail_411_, 1);
lean_inc(v_tail_416_);
lean_dec_ref_known(v_tail_411_, 2);
v___x_417_ = 46;
v___x_418_ = lean_unbox_uint32(v_head_415_);
lean_dec(v_head_415_);
v___x_419_ = lean_uint32_dec_eq(v___x_418_, v___x_417_);
if (v___x_419_ == 0)
{
lean_dec(v_tail_416_);
lean_dec(v_snd_409_);
goto v___jp_395_;
}
else
{
if (lean_obj_tag(v_tail_416_) == 1)
{
lean_object* v_head_420_; lean_object* v_tail_421_; uint32_t v___x_422_; uint8_t v___x_423_; 
v_head_420_ = lean_ctor_get(v_tail_416_, 0);
lean_inc(v_head_420_);
v_tail_421_ = lean_ctor_get(v_tail_416_, 1);
lean_inc(v_tail_421_);
lean_dec_ref_known(v_tail_416_, 2);
v___x_422_ = lean_unbox_uint32(v_head_420_);
lean_dec(v_head_420_);
v___x_423_ = lean_uint32_dec_eq(v___x_422_, v___x_412_);
if (v___x_423_ == 0)
{
lean_dec(v_tail_421_);
lean_dec(v_snd_409_);
goto v___jp_395_;
}
else
{
if (lean_obj_tag(v_tail_421_) == 1)
{
lean_object* v_head_424_; lean_object* v_tail_425_; uint32_t v___x_426_; uint8_t v___x_427_; 
v_head_424_ = lean_ctor_get(v_tail_421_, 0);
lean_inc(v_head_424_);
v_tail_425_ = lean_ctor_get(v_tail_421_, 1);
lean_inc(v_tail_425_);
lean_dec_ref_known(v_tail_421_, 2);
v___x_426_ = lean_unbox_uint32(v_head_424_);
lean_dec(v_head_424_);
v___x_427_ = lean_uint32_dec_eq(v___x_426_, v___x_417_);
if (v___x_427_ == 0)
{
lean_dec(v_tail_425_);
lean_dec(v_snd_409_);
goto v___jp_395_;
}
else
{
if (lean_obj_tag(v_tail_425_) == 0)
{
lean_dec(v_tail_383_);
v_rest_400_ = v_snd_409_;
goto v___jp_399_;
}
else
{
lean_dec(v_tail_425_);
lean_dec(v_snd_409_);
goto v___jp_395_;
}
}
}
else
{
lean_dec(v_tail_421_);
lean_dec(v_snd_409_);
goto v___jp_395_;
}
}
}
else
{
lean_dec(v_tail_416_);
lean_dec(v_snd_409_);
goto v___jp_395_;
}
}
}
else
{
lean_dec(v_tail_411_);
lean_dec(v_snd_409_);
goto v___jp_395_;
}
}
}
else
{
lean_dec(v_fst_408_);
lean_dec(v_val_407_);
goto v___jp_395_;
}
}
else
{
lean_dec(v___x_406_);
goto v___jp_395_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ellipsisMFuel___boxed(lean_object* v_x_446_, lean_object* v_x_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = lp_lean_x2dftml_LeanFtml_ellipsisMFuel(v_x_446_, v_x_447_);
lean_dec(v_x_446_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ellipsisM(lean_object* v_m_449_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_450_ = l_List_lengthTR___redArg(v_m_449_);
v___x_451_ = lean_unsigned_to_nat(1u);
v___x_452_ = lean_nat_add(v___x_450_, v___x_451_);
lean_dec(v___x_450_);
v___x_453_ = lp_lean_x2dftml_LeanFtml_ellipsisMFuel(v___x_452_, v_m_449_);
lean_dec(v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_naiveTypoM(lean_object* v_m_454_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_455_ = lp_lean_x2dftml_LeanFtml_leftAngleM(v_m_454_);
v___x_456_ = lp_lean_x2dftml_LeanFtml_rightAngleNaiveM(v___x_455_);
v___x_457_ = lp_lean_x2dftml_LeanFtml_ellipsisM(v___x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_correctedM(lean_object* v_m_458_){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_459_ = lp_lean_x2dftml_LeanFtml_leftAngleM(v_m_458_);
v___x_460_ = lp_lean_x2dftml_LeanFtml_rightAngleZM(v___x_459_);
v___x_461_ = lp_lean_x2dftml_LeanFtml_ellipsisM(v___x_460_);
v___x_462_ = lp_lean_x2dftml_LeanFtml_spaceCollapseM(v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_markPieces(lean_object* v_x_466_){
_start:
{
if (lean_obj_tag(v_x_466_) == 0)
{
lean_object* v___x_467_; 
v___x_467_ = lean_box(0);
return v___x_467_;
}
else
{
lean_object* v_tail_468_; 
v_tail_468_ = lean_ctor_get(v_x_466_, 1);
if (lean_obj_tag(v_tail_468_) == 0)
{
lean_object* v_head_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_head_469_ = lean_ctor_get(v_x_466_, 0);
lean_inc(v_head_469_);
lean_dec_ref_known(v_x_466_, 2);
v___x_470_ = lean_box(0);
v___x_471_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rewriteRunsFuel_spec__0(v_head_469_, v___x_470_);
return v___x_471_;
}
else
{
lean_object* v_head_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
lean_inc(v_tail_468_);
v_head_472_ = lean_ctor_get(v_x_466_, 0);
lean_inc(v_head_472_);
lean_dec_ref_known(v_x_466_, 2);
v___x_473_ = lean_box(0);
v___x_474_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rewriteRunsFuel_spec__0(v_head_472_, v___x_473_);
v___x_475_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_markPieces___closed__0));
v___x_476_ = l_List_appendTR___redArg(v___x_474_, v___x_475_);
v___x_477_ = lp_lean_x2dftml_LeanFtml_markPieces(v_tail_468_);
v___x_478_ = l_List_appendTR___redArg(v___x_476_, v___x_477_);
return v___x_478_;
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_deferPrefix_spec__1(lean_object* v_x_479_){
_start:
{
if (lean_obj_tag(v_x_479_) == 0)
{
uint8_t v___x_480_; 
v___x_480_ = 0;
return v___x_480_;
}
else
{
lean_object* v_head_481_; lean_object* v_tail_482_; uint32_t v___x_483_; uint8_t v___x_484_; 
v_head_481_ = lean_ctor_get(v_x_479_, 0);
v_tail_482_ = lean_ctor_get(v_x_479_, 1);
v___x_483_ = lean_unbox_uint32(v_head_481_);
v___x_484_ = lp_lean_x2dftml_LeanFtml_isDot(v___x_483_);
if (v___x_484_ == 0)
{
v_x_479_ = v_tail_482_;
goto _start;
}
else
{
return v___x_484_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_deferPrefix_spec__1___boxed(lean_object* v_x_486_){
_start:
{
uint8_t v_res_487_; lean_object* v_r_488_; 
v_res_487_ = lp_lean_x2dftml_List_any___at___00LeanFtml_deferPrefix_spec__1(v_x_486_);
lean_dec(v_x_486_);
v_r_488_ = lean_box(v_res_487_);
return v_r_488_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__3(lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
if (lean_obj_tag(v_a_489_) == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = l_List_reverse___redArg(v_a_490_);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v_a_489_);
return v___x_492_;
}
else
{
lean_object* v_head_493_; lean_object* v_tail_494_; uint32_t v___x_495_; uint8_t v___x_496_; 
v_head_493_ = lean_ctor_get(v_a_489_, 0);
v_tail_494_ = lean_ctor_get(v_a_489_, 1);
v___x_495_ = lean_unbox_uint32(v_head_493_);
v___x_496_ = lp_lean_x2dftml_LeanFtml_isLt(v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = l_List_reverse___redArg(v_a_490_);
v___x_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
lean_ctor_set(v___x_498_, 1, v_a_489_);
return v___x_498_;
}
else
{
lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
lean_inc(v_tail_494_);
lean_inc(v_head_493_);
v_isSharedCheck_506_ = !lean_is_exclusive(v_a_489_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; lean_object* v_unused_508_; 
v_unused_507_ = lean_ctor_get(v_a_489_, 1);
lean_dec(v_unused_507_);
v_unused_508_ = lean_ctor_get(v_a_489_, 0);
lean_dec(v_unused_508_);
v___x_500_ = v_a_489_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_dec(v_a_489_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 1, v_a_490_);
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_head_493_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_a_490_);
v___x_503_ = v_reuseFailAlloc_505_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
v_a_489_ = v_tail_494_;
v_a_490_ = v___x_503_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__2(lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
if (lean_obj_tag(v_a_509_) == 0)
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = l_List_reverse___redArg(v_a_510_);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set(v___x_512_, 1, v_a_509_);
return v___x_512_;
}
else
{
lean_object* v_head_513_; lean_object* v_tail_514_; uint32_t v___x_515_; uint8_t v___x_516_; 
v_head_513_ = lean_ctor_get(v_a_509_, 0);
v_tail_514_ = lean_ctor_get(v_a_509_, 1);
v___x_515_ = lean_unbox_uint32(v_head_513_);
v___x_516_ = lp_lean_x2dftml_LeanFtml_isGt(v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = l_List_reverse___redArg(v_a_510_);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
lean_ctor_set(v___x_518_, 1, v_a_509_);
return v___x_518_;
}
else
{
lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_526_; 
lean_inc(v_tail_514_);
lean_inc(v_head_513_);
v_isSharedCheck_526_ = !lean_is_exclusive(v_a_509_);
if (v_isSharedCheck_526_ == 0)
{
lean_object* v_unused_527_; lean_object* v_unused_528_; 
v_unused_527_ = lean_ctor_get(v_a_509_, 1);
lean_dec(v_unused_527_);
v_unused_528_ = lean_ctor_get(v_a_509_, 0);
lean_dec(v_unused_528_);
v___x_520_ = v_a_509_;
v_isShared_521_ = v_isSharedCheck_526_;
goto v_resetjp_519_;
}
else
{
lean_dec(v_a_509_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_526_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v_a_510_);
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_head_513_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_a_510_);
v___x_523_ = v_reuseFailAlloc_525_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
v_a_509_ = v_tail_514_;
v_a_510_ = v___x_523_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__0(lean_object* v_a_529_, lean_object* v_a_530_){
_start:
{
if (lean_obj_tag(v_a_529_) == 0)
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = l_List_reverse___redArg(v_a_530_);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
lean_ctor_set(v___x_532_, 1, v_a_529_);
return v___x_532_;
}
else
{
lean_object* v_head_533_; lean_object* v_tail_534_; uint32_t v___x_535_; uint8_t v___x_536_; 
v_head_533_ = lean_ctor_get(v_a_529_, 0);
v_tail_534_ = lean_ctor_get(v_a_529_, 1);
v___x_535_ = lean_unbox_uint32(v_head_533_);
v___x_536_ = lp_lean_x2dftml_LeanFtml_isDotOrSp(v___x_535_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = l_List_reverse___redArg(v_a_530_);
v___x_538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
lean_ctor_set(v___x_538_, 1, v_a_529_);
return v___x_538_;
}
else
{
lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_546_; 
lean_inc(v_tail_534_);
lean_inc(v_head_533_);
v_isSharedCheck_546_ = !lean_is_exclusive(v_a_529_);
if (v_isSharedCheck_546_ == 0)
{
lean_object* v_unused_547_; lean_object* v_unused_548_; 
v_unused_547_ = lean_ctor_get(v_a_529_, 1);
lean_dec(v_unused_547_);
v_unused_548_ = lean_ctor_get(v_a_529_, 0);
lean_dec(v_unused_548_);
v___x_540_ = v_a_529_;
v_isShared_541_ = v_isSharedCheck_546_;
goto v_resetjp_539_;
}
else
{
lean_dec(v_a_529_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_546_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v_a_530_);
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_head_533_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_a_530_);
v___x_543_ = v_reuseFailAlloc_545_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
v_a_529_ = v_tail_534_;
v_a_530_ = v___x_543_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__1(void){
_start:
{
uint32_t v___x_549_; lean_object* v___x_550_; 
v___x_549_ = 62;
v___x_550_ = lean_box_uint32(v___x_549_);
return v___x_550_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__2(void){
_start:
{
uint32_t v___x_551_; lean_object* v___x_552_; 
v___x_551_ = 60;
v___x_552_ = lean_box_uint32(v___x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deferPrefix(lean_object* v_x_553_){
_start:
{
if (lean_obj_tag(v_x_553_) == 0)
{
lean_object* v___x_570_; 
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v_x_553_);
lean_ctor_set(v___x_570_, 1, v_x_553_);
return v___x_570_;
}
else
{
lean_object* v_head_571_; lean_object* v_tail_572_; uint32_t v___x_573_; uint32_t v___x_574_; uint8_t v___x_575_; 
v_head_571_ = lean_ctor_get(v_x_553_, 0);
v_tail_572_ = lean_ctor_get(v_x_553_, 1);
v___x_573_ = 60;
v___x_574_ = lean_unbox_uint32(v_head_571_);
v___x_575_ = lean_uint32_dec_eq(v___x_574_, v___x_573_);
if (v___x_575_ == 0)
{
uint32_t v___x_576_; uint32_t v___x_577_; uint8_t v___x_578_; 
v___x_576_ = 62;
v___x_577_ = lean_unbox_uint32(v_head_571_);
v___x_578_ = lean_uint32_dec_eq(v___x_577_, v___x_576_);
if (v___x_578_ == 0)
{
uint32_t v___x_579_; uint8_t v___x_580_; 
v___x_579_ = lean_unbox_uint32(v_head_571_);
v___x_580_ = lp_lean_x2dftml_LeanFtml_isDot(v___x_579_);
if (v___x_580_ == 0)
{
uint32_t v___x_581_; uint8_t v___x_582_; 
v___x_581_ = lean_unbox_uint32(v_head_571_);
v___x_582_ = lp_lean_x2dftml_LeanFtml_isSpace(v___x_581_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_box(0);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set(v___x_584_, 1, v_x_553_);
return v___x_584_;
}
else
{
goto v___jp_554_;
}
}
else
{
goto v___jp_554_;
}
}
else
{
lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_603_; 
lean_inc(v_tail_572_);
v_isSharedCheck_603_ = !lean_is_exclusive(v_x_553_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; lean_object* v_unused_605_; 
v_unused_604_ = lean_ctor_get(v_x_553_, 1);
lean_dec(v_unused_604_);
v_unused_605_ = lean_ctor_get(v_x_553_, 0);
lean_dec(v_unused_605_);
v___x_586_ = v_x_553_;
v_isShared_587_ = v_isSharedCheck_603_;
goto v_resetjp_585_;
}
else
{
lean_dec(v_x_553_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_603_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; lean_object* v_r_589_; lean_object* v_fst_590_; lean_object* v_snd_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_602_; 
v___x_588_ = lean_box(0);
v_r_589_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__2(v_tail_572_, v___x_588_);
v_fst_590_ = lean_ctor_get(v_r_589_, 0);
v_snd_591_ = lean_ctor_get(v_r_589_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_r_589_);
if (v_isSharedCheck_602_ == 0)
{
v___x_593_ = v_r_589_;
v_isShared_594_ = v_isSharedCheck_602_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_snd_591_);
lean_inc(v_fst_590_);
lean_dec(v_r_589_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_602_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_595_ = lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__1;
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 1, v_fst_590_);
lean_ctor_set(v___x_586_, 0, v___x_595_);
v___x_597_ = v___x_586_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_fst_590_);
v___x_597_ = v_reuseFailAlloc_601_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_599_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_597_);
v___x_599_ = v___x_593_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
lean_ctor_set(v_reuseFailAlloc_600_, 1, v_snd_591_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
}
else
{
lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_624_; 
lean_inc(v_tail_572_);
v_isSharedCheck_624_ = !lean_is_exclusive(v_x_553_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; lean_object* v_unused_626_; 
v_unused_625_ = lean_ctor_get(v_x_553_, 1);
lean_dec(v_unused_625_);
v_unused_626_ = lean_ctor_get(v_x_553_, 0);
lean_dec(v_unused_626_);
v___x_607_ = v_x_553_;
v_isShared_608_ = v_isSharedCheck_624_;
goto v_resetjp_606_;
}
else
{
lean_dec(v_x_553_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_624_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v_r_610_; lean_object* v_fst_611_; lean_object* v_snd_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_623_; 
v___x_609_ = lean_box(0);
v_r_610_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__3(v_tail_572_, v___x_609_);
v_fst_611_ = lean_ctor_get(v_r_610_, 0);
v_snd_612_ = lean_ctor_get(v_r_610_, 1);
v_isSharedCheck_623_ = !lean_is_exclusive(v_r_610_);
if (v_isSharedCheck_623_ == 0)
{
v___x_614_ = v_r_610_;
v_isShared_615_ = v_isSharedCheck_623_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_snd_612_);
lean_inc(v_fst_611_);
lean_dec(v_r_610_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_623_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_616_; lean_object* v___x_618_; 
v___x_616_ = lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__2;
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 1, v_fst_611_);
lean_ctor_set(v___x_607_, 0, v___x_616_);
v___x_618_ = v___x_607_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_616_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_fst_611_);
v___x_618_ = v_reuseFailAlloc_622_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_620_; 
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v___x_618_);
v___x_620_ = v___x_614_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_618_);
lean_ctor_set(v_reuseFailAlloc_621_, 1, v_snd_612_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
}
}
v___jp_554_:
{
lean_object* v___x_555_; lean_object* v_r_556_; lean_object* v_fst_557_; lean_object* v_snd_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_569_; 
v___x_555_ = lean_box(0);
lean_inc(v_x_553_);
v_r_556_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_deferPrefix_spec__0(v_x_553_, v___x_555_);
v_fst_557_ = lean_ctor_get(v_r_556_, 0);
v_snd_558_ = lean_ctor_get(v_r_556_, 1);
v_isSharedCheck_569_ = !lean_is_exclusive(v_r_556_);
if (v_isSharedCheck_569_ == 0)
{
v___x_560_ = v_r_556_;
v_isShared_561_ = v_isSharedCheck_569_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_snd_558_);
lean_inc(v_fst_557_);
lean_dec(v_r_556_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_569_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
uint8_t v___x_562_; 
v___x_562_ = lp_lean_x2dftml_List_any___at___00LeanFtml_deferPrefix_spec__1(v_fst_557_);
if (v___x_562_ == 0)
{
lean_object* v___x_564_; 
lean_dec(v_snd_558_);
lean_dec(v_fst_557_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 1, v_x_553_);
lean_ctor_set(v___x_560_, 0, v___x_555_);
v___x_564_ = v___x_560_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_555_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_x_553_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
else
{
lean_object* v___x_567_; 
lean_dec(v_x_553_);
if (v_isShared_561_ == 0)
{
v___x_567_ = v___x_560_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_fst_557_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v_snd_558_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segmentTypoM___lam__0(lean_object* v_x_627_, uint8_t v_x_628_, uint8_t v_x_629_, lean_object* v_run_630_){
_start:
{
uint32_t v___x_631_; uint32_t v___x_632_; lean_object* v___x_633_; 
v___x_631_ = 62;
v___x_632_ = 187;
v___x_633_ = lp_lean_x2dftml_LeanFtml_convertPairs(v___x_631_, v___x_632_, v_run_630_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segmentTypoM___lam__0___boxed(lean_object* v_x_634_, lean_object* v_x_635_, lean_object* v_x_636_, lean_object* v_run_637_){
_start:
{
uint8_t v_x_33__boxed_638_; uint8_t v_x_34__boxed_639_; lean_object* v_res_640_; 
v_x_33__boxed_638_ = lean_unbox(v_x_635_);
v_x_34__boxed_639_ = lean_unbox(v_x_636_);
v_res_640_ = lp_lean_x2dftml_LeanFtml_segmentTypoM___lam__0(v_x_634_, v_x_33__boxed_638_, v_x_34__boxed_639_, v_run_637_);
lean_dec(v_run_637_);
lean_dec(v_x_634_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segmentTypoM(lean_object* v_s_642_){
_start:
{
lean_object* v___f_643_; lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___f_643_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segmentTypoM___closed__0));
v___x_644_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rightAngleZM___closed__1));
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_646_ = 0;
v___x_647_ = lean_box(0);
v___x_648_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rewriteRunsFuel_spec__0(v_s_642_, v___x_647_);
v___x_649_ = lp_lean_x2dftml_LeanFtml_leftAngleM(v___x_648_);
v___x_650_ = lp_lean_x2dftml_LeanFtml_rewriteRuns(v___x_644_, v___f_643_, v___x_645_, v___x_646_, v___x_649_);
v___x_651_ = lp_lean_x2dftml_LeanFtml_ellipsisM(v___x_650_);
v___x_652_ = lp_lean_x2dftml_LeanFtml_charsOf(v___x_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_preprocessPiece(uint8_t v_first_653_, lean_object* v_s_654_){
_start:
{
if (v_first_653_ == 0)
{
lean_object* v_r_655_; lean_object* v_fst_656_; lean_object* v_snd_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v_r_655_ = lp_lean_x2dftml_LeanFtml_deferPrefix(v_s_654_);
v_fst_656_ = lean_ctor_get(v_r_655_, 0);
lean_inc(v_fst_656_);
v_snd_657_ = lean_ctor_get(v_r_655_, 1);
lean_inc(v_snd_657_);
lean_dec_ref(v_r_655_);
v___x_658_ = lp_lean_x2dftml_LeanFtml_segmentTypoM(v_snd_657_);
v___x_659_ = l_List_appendTR___redArg(v_fst_656_, v___x_658_);
return v___x_659_;
}
else
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_660_ = lean_box(0);
v___x_661_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rewriteRunsFuel_spec__0(v_s_654_, v___x_660_);
v___x_662_ = lp_lean_x2dftml_LeanFtml_naiveTypoM(v___x_661_);
v___x_663_ = lp_lean_x2dftml_LeanFtml_charsOf(v___x_662_);
return v___x_663_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_preprocessPiece___boxed(lean_object* v_first_664_, lean_object* v_s_665_){
_start:
{
uint8_t v_first_boxed_666_; lean_object* v_res_667_; 
v_first_boxed_666_ = lean_unbox(v_first_664_);
v_res_667_ = lp_lean_x2dftml_LeanFtml_preprocessPiece(v_first_boxed_666_, v_s_665_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_preprocessPieces_spec__0(lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
if (lean_obj_tag(v_a_668_) == 0)
{
lean_object* v___x_670_; 
v___x_670_ = l_List_reverse___redArg(v_a_669_);
return v___x_670_;
}
else
{
lean_object* v_head_671_; lean_object* v_tail_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_682_; 
v_head_671_ = lean_ctor_get(v_a_668_, 0);
v_tail_672_ = lean_ctor_get(v_a_668_, 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v_a_668_);
if (v_isSharedCheck_682_ == 0)
{
v___x_674_ = v_a_668_;
v_isShared_675_ = v_isSharedCheck_682_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_tail_672_);
lean_inc(v_head_671_);
lean_dec(v_a_668_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_682_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
uint8_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_676_ = 0;
v___x_677_ = lp_lean_x2dftml_LeanFtml_preprocessPiece(v___x_676_, v_head_671_);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 1, v_a_669_);
lean_ctor_set(v___x_674_, 0, v___x_677_);
v___x_679_ = v___x_674_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_a_669_);
v___x_679_ = v_reuseFailAlloc_681_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
v_a_668_ = v_tail_672_;
v_a_669_ = v___x_679_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_preprocessPieces(lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
return v_x_683_;
}
else
{
lean_object* v_tail_684_; 
v_tail_684_ = lean_ctor_get(v_x_683_, 1);
lean_inc(v_tail_684_);
if (lean_obj_tag(v_tail_684_) == 0)
{
lean_object* v_head_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_694_; 
v_head_685_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_694_ == 0)
{
lean_object* v_unused_695_; 
v_unused_695_ = lean_ctor_get(v_x_683_, 1);
lean_dec(v_unused_695_);
v___x_687_ = v_x_683_;
v_isShared_688_ = v_isSharedCheck_694_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_head_685_);
lean_dec(v_x_683_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_694_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
uint8_t v___x_689_; lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_689_ = 1;
v___x_690_ = lp_lean_x2dftml_LeanFtml_preprocessPiece(v___x_689_, v_head_685_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v___x_690_);
v___x_692_ = v___x_687_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_690_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_tail_684_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
else
{
lean_object* v_head_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_707_; 
v_head_696_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_707_ == 0)
{
lean_object* v_unused_708_; 
v_unused_708_ = lean_ctor_get(v_x_683_, 1);
lean_dec(v_unused_708_);
v___x_698_ = v_x_683_;
v_isShared_699_ = v_isSharedCheck_707_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_head_696_);
lean_dec(v_x_683_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_707_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
uint8_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_705_; 
v___x_700_ = 1;
v___x_701_ = lp_lean_x2dftml_LeanFtml_preprocessPiece(v___x_700_, v_head_696_);
v___x_702_ = lean_box(0);
v___x_703_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_preprocessPieces_spec__0(v_tail_684_, v___x_702_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 1, v___x_703_);
lean_ctor_set(v___x_698_, 0, v___x_701_);
v___x_705_ = v___x_698_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ftmlSeamResolveM(lean_object* v_ps_709_){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = lp_lean_x2dftml_LeanFtml_preprocessPieces(v_ps_709_);
v___x_711_ = lp_lean_x2dftml_LeanFtml_markPieces(v___x_710_);
v___x_712_ = lp_lean_x2dftml_LeanFtml_correctedM(v___x_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_seamResolveM(lean_object* v_ps_713_){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = lp_lean_x2dftml_LeanFtml_markPieces(v_ps_713_);
v___x_715_ = lp_lean_x2dftml_LeanFtml_correctedM(v___x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_SeamTypography_0__LeanFtml_markPieces_match__1_splitter___redArg(lean_object* v_x_716_, lean_object* v_h__1_717_, lean_object* v_h__2_718_, lean_object* v_h__3_719_){
_start:
{
if (lean_obj_tag(v_x_716_) == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec(v_h__3_719_);
lean_dec(v_h__2_718_);
v___x_720_ = lean_box(0);
v___x_721_ = lean_apply_1(v_h__1_717_, v___x_720_);
return v___x_721_;
}
else
{
lean_object* v_tail_722_; 
lean_dec(v_h__1_717_);
v_tail_722_ = lean_ctor_get(v_x_716_, 1);
if (lean_obj_tag(v_tail_722_) == 0)
{
lean_object* v_head_723_; lean_object* v___x_724_; 
lean_dec(v_h__3_719_);
v_head_723_ = lean_ctor_get(v_x_716_, 0);
lean_inc(v_head_723_);
lean_dec_ref_known(v_x_716_, 2);
v___x_724_ = lean_apply_1(v_h__2_718_, v_head_723_);
return v___x_724_;
}
else
{
lean_object* v_head_725_; lean_object* v___x_726_; 
lean_inc(v_tail_722_);
lean_dec(v_h__2_718_);
v_head_725_ = lean_ctor_get(v_x_716_, 0);
lean_inc(v_head_725_);
lean_dec_ref_known(v_x_716_, 2);
v___x_726_ = lean_apply_3(v_h__3_719_, v_head_725_, v_tail_722_, lean_box(0));
return v___x_726_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_SeamTypography_0__LeanFtml_markPieces_match__1_splitter(lean_object* v_motive_727_, lean_object* v_x_728_, lean_object* v_h__1_729_, lean_object* v_h__2_730_, lean_object* v_h__3_731_){
_start:
{
if (lean_obj_tag(v_x_728_) == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec(v_h__3_731_);
lean_dec(v_h__2_730_);
v___x_732_ = lean_box(0);
v___x_733_ = lean_apply_1(v_h__1_729_, v___x_732_);
return v___x_733_;
}
else
{
lean_object* v_tail_734_; 
lean_dec(v_h__1_729_);
v_tail_734_ = lean_ctor_get(v_x_728_, 1);
if (lean_obj_tag(v_tail_734_) == 0)
{
lean_object* v_head_735_; lean_object* v___x_736_; 
lean_dec(v_h__3_731_);
v_head_735_ = lean_ctor_get(v_x_728_, 0);
lean_inc(v_head_735_);
lean_dec_ref_known(v_x_728_, 2);
v___x_736_ = lean_apply_1(v_h__2_730_, v_head_735_);
return v___x_736_;
}
else
{
lean_object* v_head_737_; lean_object* v___x_738_; 
lean_inc(v_tail_734_);
lean_dec(v_h__2_730_);
v_head_737_ = lean_ctor_get(v_x_728_, 0);
lean_inc(v_head_737_);
lean_dec_ref_known(v_x_728_, 2);
v___x_738_ = lean_apply_3(v_h__3_731_, v_head_737_, v_tail_734_, lean_box(0));
return v___x_738_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_SeamTypography(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_spaceCollapseM___lam__0___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_ellipsisMFuel___closed__1___boxed__const__1);
lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__1);
lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__2 = _init_lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__2();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_deferPrefix___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
