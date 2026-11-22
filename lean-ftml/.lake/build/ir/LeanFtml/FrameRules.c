// Lean compiler output
// Module: LeanFtml.FrameRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState
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
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lp_lean_x2dftml_LeanFtml_isPcreWs(uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_allText(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_normSegs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convCRLF(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_convCR_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convCR(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNewlineIdx_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNewlineIdx_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNewlineIdx(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNewlineIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_emptyWsLines_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_emptyWsLines_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emptyWsLines_go(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emptyWsLines_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emptyWsLines(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_expandTabs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_expandTabs___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_expandTabs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_expandTabs___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_expandTabs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_expandTabs___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_expandTabs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_expandTabs___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_expandTabs(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_framePad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_framePad___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_framePad___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_framePad___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_framePad(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_skipSpaces(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanGroup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_compressNL_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_compressNL_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_compressNL(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_prefilterChars(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_prefilterRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_delimiterRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_delimiterRule___boxed(lean_object*);
static lean_object* _init_lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1(void){
_start:
{
uint32_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 10;
v___x_2_ = lean_box_uint32(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convCRLF(lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
return v_x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_36_; 
v_head_4_ = lean_ctor_get(v_x_3_, 0);
v_tail_5_ = lean_ctor_get(v_x_3_, 1);
v_isSharedCheck_36_ = !lean_is_exclusive(v_x_3_);
if (v_isSharedCheck_36_ == 0)
{
v___x_7_ = v_x_3_;
v_isShared_8_ = v_isSharedCheck_36_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_head_4_);
lean_dec(v_x_3_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_36_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
uint32_t v_c_10_; uint32_t v___x_16_; uint32_t v___x_17_; uint8_t v___x_18_; 
v___x_16_ = 13;
v___x_17_ = lean_unbox_uint32(v_head_4_);
v___x_18_ = lean_uint32_dec_eq(v___x_17_, v___x_16_);
if (v___x_18_ == 0)
{
uint32_t v___x_19_; 
v___x_19_ = lean_unbox_uint32(v_head_4_);
lean_dec(v_head_4_);
v_c_10_ = v___x_19_;
goto v___jp_9_;
}
else
{
lean_dec(v_head_4_);
if (lean_obj_tag(v_tail_5_) == 1)
{
lean_object* v_head_20_; lean_object* v_tail_21_; uint32_t v___x_22_; uint32_t v___x_23_; uint8_t v___x_24_; 
v_head_20_ = lean_ctor_get(v_tail_5_, 0);
v_tail_21_ = lean_ctor_get(v_tail_5_, 1);
v___x_22_ = 10;
v___x_23_ = lean_unbox_uint32(v_head_20_);
v___x_24_ = lean_uint32_dec_eq(v___x_23_, v___x_22_);
if (v___x_24_ == 0)
{
v_c_10_ = v___x_16_;
goto v___jp_9_;
}
else
{
lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_33_; 
lean_inc(v_tail_21_);
lean_del_object(v___x_7_);
v_isSharedCheck_33_ = !lean_is_exclusive(v_tail_5_);
if (v_isSharedCheck_33_ == 0)
{
lean_object* v_unused_34_; lean_object* v_unused_35_; 
v_unused_34_ = lean_ctor_get(v_tail_5_, 1);
lean_dec(v_unused_34_);
v_unused_35_ = lean_ctor_get(v_tail_5_, 0);
lean_dec(v_unused_35_);
v___x_26_ = v_tail_5_;
v_isShared_27_ = v_isSharedCheck_33_;
goto v_resetjp_25_;
}
else
{
lean_dec(v_tail_5_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_33_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_31_; 
v___x_28_ = lp_lean_x2dftml_LeanFtml_convCRLF(v_tail_21_);
v___x_29_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
if (v_isShared_27_ == 0)
{
lean_ctor_set(v___x_26_, 1, v___x_28_);
lean_ctor_set(v___x_26_, 0, v___x_29_);
v___x_31_ = v___x_26_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_32_, 1, v___x_28_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
}
else
{
v_c_10_ = v___x_16_;
goto v___jp_9_;
}
}
v___jp_9_:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_14_; 
v___x_11_ = lp_lean_x2dftml_LeanFtml_convCRLF(v_tail_5_);
v___x_12_ = lean_box_uint32(v_c_10_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___x_11_);
lean_ctor_set(v___x_7_, 0, v___x_12_);
v___x_14_ = v___x_7_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v___x_12_);
lean_ctor_set(v_reuseFailAlloc_15_, 1, v___x_11_);
v___x_14_ = v_reuseFailAlloc_15_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
return v___x_14_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_convCR_spec__0(lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
if (lean_obj_tag(v_a_37_) == 0)
{
lean_object* v___x_39_; 
v___x_39_ = l_List_reverse___redArg(v_a_38_);
return v___x_39_;
}
else
{
lean_object* v_head_40_; lean_object* v_tail_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_57_; 
v_head_40_ = lean_ctor_get(v_a_37_, 0);
v_tail_41_ = lean_ctor_get(v_a_37_, 1);
v_isSharedCheck_57_ = !lean_is_exclusive(v_a_37_);
if (v_isSharedCheck_57_ == 0)
{
v___x_43_ = v_a_37_;
v_isShared_44_ = v_isSharedCheck_57_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_tail_41_);
lean_inc(v_head_40_);
lean_dec(v_a_37_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_57_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
uint32_t v___y_46_; uint32_t v___x_52_; uint32_t v___x_53_; uint8_t v___x_54_; 
v___x_52_ = 13;
v___x_53_ = lean_unbox_uint32(v_head_40_);
v___x_54_ = lean_uint32_dec_eq(v___x_53_, v___x_52_);
if (v___x_54_ == 0)
{
uint32_t v___x_55_; 
v___x_55_ = lean_unbox_uint32(v_head_40_);
lean_dec(v_head_40_);
v___y_46_ = v___x_55_;
goto v___jp_45_;
}
else
{
uint32_t v___x_56_; 
lean_dec(v_head_40_);
v___x_56_ = 10;
v___y_46_ = v___x_56_;
goto v___jp_45_;
}
v___jp_45_:
{
lean_object* v___x_47_; lean_object* v___x_49_; 
v___x_47_ = lean_box_uint32(v___y_46_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 1, v_a_38_);
lean_ctor_set(v___x_43_, 0, v___x_47_);
v___x_49_ = v___x_43_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_47_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_a_38_);
v___x_49_ = v_reuseFailAlloc_51_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
v_a_37_ = v_tail_41_;
v_a_38_ = v___x_49_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_convCR(lean_object* v_s_58_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_box(0);
v___x_60_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_convCR_spec__0(v_s_58_, v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNewlineIdx_go(lean_object* v_i_61_, lean_object* v_acc_62_, lean_object* v_a_63_){
_start:
{
if (lean_obj_tag(v_a_63_) == 0)
{
lean_dec(v_i_61_);
return v_acc_62_;
}
else
{
lean_object* v_head_64_; lean_object* v_tail_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint32_t v___x_68_; uint32_t v___x_69_; uint8_t v___x_70_; 
v_head_64_ = lean_ctor_get(v_a_63_, 0);
v_tail_65_ = lean_ctor_get(v_a_63_, 1);
v___x_66_ = lean_unsigned_to_nat(1u);
v___x_67_ = lean_nat_add(v_i_61_, v___x_66_);
v___x_68_ = 10;
v___x_69_ = lean_unbox_uint32(v_head_64_);
v___x_70_ = lean_uint32_dec_eq(v___x_69_, v___x_68_);
if (v___x_70_ == 0)
{
lean_dec(v_i_61_);
v_i_61_ = v___x_67_;
v_a_63_ = v_tail_65_;
goto _start;
}
else
{
lean_object* v___x_72_; 
lean_dec(v_acc_62_);
v___x_72_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_72_, 0, v_i_61_);
v_i_61_ = v___x_67_;
v_acc_62_ = v___x_72_;
v_a_63_ = v_tail_65_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNewlineIdx_go___boxed(lean_object* v_i_74_, lean_object* v_acc_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = lp_lean_x2dftml_LeanFtml_lastNewlineIdx_go(v_i_74_, v_acc_75_, v_a_76_);
lean_dec(v_a_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNewlineIdx(lean_object* v_a_78_){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_box(0);
v___x_81_ = lp_lean_x2dftml_LeanFtml_lastNewlineIdx_go(v___x_79_, v___x_80_, v_a_78_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastNewlineIdx___boxed(lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = lp_lean_x2dftml_LeanFtml_lastNewlineIdx(v_a_82_);
lean_dec(v_a_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_emptyWsLines_go_spec__0(lean_object* v_l_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
if (lean_obj_tag(v_a_85_) == 0)
{
lean_dec_ref(v_a_86_);
lean_inc(v_l_84_);
return v_l_84_;
}
else
{
lean_object* v_head_87_; lean_object* v_tail_88_; uint32_t v___x_89_; uint8_t v___x_90_; 
v_head_87_ = lean_ctor_get(v_a_85_, 0);
lean_inc(v_head_87_);
v_tail_88_ = lean_ctor_get(v_a_85_, 1);
lean_inc(v_tail_88_);
lean_dec_ref_known(v_a_85_, 2);
v___x_89_ = lean_unbox_uint32(v_head_87_);
v___x_90_ = lp_lean_x2dftml_LeanFtml_isPcreWs(v___x_89_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; 
lean_dec(v_tail_88_);
lean_dec(v_head_87_);
v___x_91_ = lean_array_to_list(v_a_86_);
return v___x_91_;
}
else
{
lean_object* v___x_92_; 
v___x_92_ = lean_array_push(v_a_86_, v_head_87_);
v_a_85_ = v_tail_88_;
v_a_86_ = v___x_92_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_emptyWsLines_go_spec__0___boxed(lean_object* v_l_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_emptyWsLines_go_spec__0(v_l_94_, v_a_95_, v_a_96_);
lean_dec(v_l_94_);
return v_res_97_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__1(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emptyWsLines_go(lean_object* v_a_102_, uint8_t v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
if (lean_obj_tag(v_a_102_) == 0)
{
lean_object* v___x_106_; 
lean_dec(v_a_104_);
v___x_106_ = l_List_reverse___redArg(v_a_105_);
return v___x_106_;
}
else
{
lean_object* v_head_107_; lean_object* v_tail_108_; lean_object* v_zero_109_; uint8_t v_isZero_110_; 
v_head_107_ = lean_ctor_get(v_a_102_, 0);
lean_inc(v_head_107_);
v_tail_108_ = lean_ctor_get(v_a_102_, 1);
lean_inc(v_tail_108_);
v_zero_109_ = lean_unsigned_to_nat(0u);
v_isZero_110_ = lean_nat_dec_eq(v_a_104_, v_zero_109_);
if (v_isZero_110_ == 1)
{
lean_object* v___x_111_; 
lean_dec(v_tail_108_);
lean_dec(v_head_107_);
lean_dec_ref_known(v_a_102_, 2);
lean_dec(v_a_104_);
v___x_111_ = l_List_reverse___redArg(v_a_105_);
return v___x_111_;
}
else
{
lean_object* v_one_112_; lean_object* v_n_113_; 
v_one_112_ = lean_unsigned_to_nat(1u);
v_n_113_ = lean_nat_sub(v_a_104_, v_one_112_);
lean_dec(v_a_104_);
if (v_a_103_ == 0)
{
lean_dec_ref_known(v_a_102_, 2);
goto v___jp_114_;
}
else
{
uint32_t v___x_126_; uint8_t v___x_127_; 
v___x_126_ = lean_unbox_uint32(v_head_107_);
v___x_127_ = lp_lean_x2dftml_LeanFtml_isPcreWs(v___x_126_);
if (v___x_127_ == 0)
{
lean_dec_ref_known(v_a_102_, 2);
goto v___jp_114_;
}
else
{
lean_object* v___x_128_; lean_object* v_run_129_; lean_object* v___x_130_; lean_object* v_rest_x27_131_; lean_object* v_val_133_; uint8_t v___x_141_; 
v___x_128_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__0));
lean_inc_ref(v_a_102_);
v_run_129_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_emptyWsLines_go_spec__0(v_a_102_, v_a_102_, v___x_128_);
v___x_130_ = l_List_lengthTR___redArg(v_run_129_);
lean_inc(v___x_130_);
v_rest_x27_131_ = l_List_drop___redArg(v___x_130_, v_a_102_);
lean_dec_ref_known(v_a_102_, 2);
v___x_141_ = l_List_isEmpty___redArg(v_rest_x27_131_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
lean_dec(v___x_130_);
v___x_142_ = lp_lean_x2dftml_LeanFtml_lastNewlineIdx(v_run_129_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_dec(v_rest_x27_131_);
lean_dec(v_run_129_);
goto v___jp_120_;
}
else
{
lean_object* v_val_143_; uint8_t v___x_144_; 
v_val_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_val_143_);
lean_dec_ref_known(v___x_142_, 1);
v___x_144_ = lean_nat_dec_le(v_one_112_, v_val_143_);
if (v___x_144_ == 0)
{
lean_dec(v_val_143_);
lean_dec(v_rest_x27_131_);
lean_dec(v_run_129_);
goto v___jp_120_;
}
else
{
lean_dec(v_tail_108_);
lean_dec(v_head_107_);
v_val_133_ = v_val_143_;
goto v___jp_132_;
}
}
}
else
{
lean_dec(v_tail_108_);
lean_dec(v_head_107_);
v_val_133_ = v___x_130_;
goto v___jp_132_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v_prev_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
lean_inc(v_val_133_);
lean_inc(v_run_129_);
v___x_134_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_run_129_, v_run_129_, v_val_133_, v___x_128_);
v_prev_135_ = l_List_getLast_x3f___redArg(v___x_134_);
lean_dec(v___x_134_);
v___x_136_ = l_List_drop___redArg(v_val_133_, v_run_129_);
lean_dec(v_run_129_);
v___x_137_ = l_List_appendTR___redArg(v___x_136_, v_rest_x27_131_);
v___x_138_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__1, &lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_emptyWsLines_go___closed__1);
v___x_139_ = l_instBEqOption_beq___at___00System_FilePath_isAbsolute_spec__1(v_prev_135_, v___x_138_);
lean_dec(v_prev_135_);
v_a_102_ = v___x_137_;
v_a_103_ = v___x_139_;
v_a_104_ = v_n_113_;
goto _start;
}
}
}
v___jp_114_:
{
uint32_t v___x_115_; uint32_t v___x_116_; uint8_t v___x_117_; lean_object* v___x_118_; 
v___x_115_ = 10;
v___x_116_ = lean_unbox_uint32(v_head_107_);
v___x_117_ = lean_uint32_dec_eq(v___x_116_, v___x_115_);
v___x_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_118_, 0, v_head_107_);
lean_ctor_set(v___x_118_, 1, v_a_105_);
v_a_102_ = v_tail_108_;
v_a_103_ = v___x_117_;
v_a_104_ = v_n_113_;
v_a_105_ = v___x_118_;
goto _start;
}
v___jp_120_:
{
uint32_t v___x_121_; uint32_t v___x_122_; uint8_t v___x_123_; lean_object* v___x_124_; 
v___x_121_ = 10;
v___x_122_ = lean_unbox_uint32(v_head_107_);
v___x_123_ = lean_uint32_dec_eq(v___x_122_, v___x_121_);
v___x_124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_124_, 0, v_head_107_);
lean_ctor_set(v___x_124_, 1, v_a_105_);
v_a_102_ = v_tail_108_;
v_a_103_ = v___x_123_;
v_a_104_ = v_n_113_;
v_a_105_ = v___x_124_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emptyWsLines_go___boxed(lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
uint8_t v_a_431__boxed_149_; lean_object* v_res_150_; 
v_a_431__boxed_149_ = lean_unbox(v_a_146_);
v_res_150_ = lp_lean_x2dftml_LeanFtml_emptyWsLines_go(v_a_145_, v_a_431__boxed_149_, v_a_147_, v_a_148_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emptyWsLines(lean_object* v_s_151_){
_start:
{
uint8_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_152_ = 1;
v___x_153_ = l_List_lengthTR___redArg(v_s_151_);
v___x_154_ = lean_unsigned_to_nat(1u);
v___x_155_ = lean_nat_add(v___x_153_, v___x_154_);
lean_dec(v___x_153_);
v___x_156_ = lean_box(0);
v___x_157_ = lp_lean_x2dftml_LeanFtml_emptyWsLines_go(v_s_151_, v___x_152_, v___x_155_, v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_158_; lean_object* v___x_159_; 
v___x_158_ = 32;
v___x_159_ = lean_box_uint32(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__0(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_box(0);
v___x_161_ = lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1;
v___x_162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
return v___x_162_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__1(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_expandTabs___closed__0, &lp_lean_x2dftml_LeanFtml_expandTabs___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__0);
v___x_164_ = lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1;
v___x_165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
return v___x_165_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__2(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_expandTabs___closed__1, &lp_lean_x2dftml_LeanFtml_expandTabs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__1);
v___x_167_ = lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1;
v___x_168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v___x_166_);
return v___x_168_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__3(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_169_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_expandTabs___closed__2, &lp_lean_x2dftml_LeanFtml_expandTabs___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__2);
v___x_170_ = lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1;
v___x_171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_169_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_expandTabs(lean_object* v_x_172_){
_start:
{
if (lean_obj_tag(v_x_172_) == 0)
{
return v_x_172_;
}
else
{
lean_object* v_head_173_; lean_object* v_tail_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_190_; 
v_head_173_ = lean_ctor_get(v_x_172_, 0);
v_tail_174_ = lean_ctor_get(v_x_172_, 1);
v_isSharedCheck_190_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_190_ == 0)
{
v___x_176_ = v_x_172_;
v_isShared_177_ = v_isSharedCheck_190_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_tail_174_);
lean_inc(v_head_173_);
lean_dec(v_x_172_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_190_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___y_179_; uint32_t v___x_182_; uint32_t v___x_183_; uint8_t v___x_184_; 
v___x_182_ = 9;
v___x_183_ = lean_unbox_uint32(v_head_173_);
v___x_184_ = lean_uint32_dec_eq(v___x_183_, v___x_182_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_185_ = lean_box(0);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v___x_185_);
v___x_187_ = v___x_176_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_head_173_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
v___y_179_ = v___x_187_;
goto v___jp_178_;
}
}
else
{
lean_object* v___x_189_; 
lean_del_object(v___x_176_);
lean_dec(v_head_173_);
v___x_189_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_expandTabs___closed__3, &lp_lean_x2dftml_LeanFtml_expandTabs___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__3);
v___y_179_ = v___x_189_;
goto v___jp_178_;
}
v___jp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lp_lean_x2dftml_LeanFtml_expandTabs(v_tail_174_);
v___x_181_ = l_List_appendTR___redArg(v___y_179_, v___x_180_);
return v___x_181_;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_framePad___closed__0(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_191_ = lean_box(0);
v___x_192_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
v___x_193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___x_191_);
return v___x_193_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_framePad___closed__1(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_framePad___closed__0, &lp_lean_x2dftml_LeanFtml_framePad___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_framePad___closed__0);
v___x_195_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
v___x_196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v___x_194_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_framePad(lean_object* v_s_197_){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_198_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_framePad___closed__1, &lp_lean_x2dftml_LeanFtml_framePad___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_framePad___closed__1);
v___x_199_ = l_List_appendTR___redArg(v_s_197_, v___x_198_);
v___x_200_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
v___x_201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v___x_199_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_skipSpaces(lean_object* v_x_202_){
_start:
{
lean_object* v_s_204_; 
if (lean_obj_tag(v_x_202_) == 1)
{
lean_object* v_head_207_; lean_object* v_tail_208_; uint32_t v___x_209_; uint32_t v___x_210_; uint8_t v___x_211_; 
v_head_207_ = lean_ctor_get(v_x_202_, 0);
v_tail_208_ = lean_ctor_get(v_x_202_, 1);
v___x_209_ = 32;
v___x_210_ = lean_unbox_uint32(v_head_207_);
v___x_211_ = lean_uint32_dec_eq(v___x_210_, v___x_209_);
if (v___x_211_ == 0)
{
v_s_204_ = v_x_202_;
goto v___jp_203_;
}
else
{
lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_229_; 
lean_inc(v_tail_208_);
v_isSharedCheck_229_ = !lean_is_exclusive(v_x_202_);
if (v_isSharedCheck_229_ == 0)
{
lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_230_ = lean_ctor_get(v_x_202_, 1);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_x_202_, 0);
lean_dec(v_unused_231_);
v___x_213_ = v_x_202_;
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
else
{
lean_dec(v_x_202_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; lean_object* v_fst_216_; lean_object* v_snd_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_228_; 
v___x_215_ = lp_lean_x2dftml_LeanFtml_skipSpaces(v_tail_208_);
v_fst_216_ = lean_ctor_get(v___x_215_, 0);
v_snd_217_ = lean_ctor_get(v___x_215_, 1);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_228_ == 0)
{
v___x_219_ = v___x_215_;
v_isShared_220_ = v_isSharedCheck_228_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_snd_217_);
lean_inc(v_fst_216_);
lean_dec(v___x_215_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_228_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; lean_object* v___x_223_; 
v___x_221_ = lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1;
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v_fst_216_);
lean_ctor_set(v___x_213_, 0, v___x_221_);
v___x_223_ = v___x_213_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_221_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v_fst_216_);
v___x_223_ = v_reuseFailAlloc_227_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_225_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_223_);
v___x_225_ = v___x_219_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_snd_217_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
}
else
{
v_s_204_ = v_x_202_;
goto v___jp_203_;
}
v___jp_203_:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_box(0);
v___x_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v_s_204_);
return v___x_206_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanGroup(lean_object* v_s_232_, lean_object* v_fuel_233_){
_start:
{
lean_object* v_zero_239_; uint8_t v_isZero_240_; 
v_zero_239_ = lean_unsigned_to_nat(0u);
v_isZero_240_ = lean_nat_dec_eq(v_fuel_233_, v_zero_239_);
if (v_isZero_240_ == 1)
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = lean_box(0);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v_s_232_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v_zero_239_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
return v___x_243_;
}
else
{
if (lean_obj_tag(v_s_232_) == 1)
{
lean_object* v_head_244_; lean_object* v_tail_245_; uint32_t v___x_246_; uint32_t v___x_247_; uint8_t v___x_248_; 
v_head_244_ = lean_ctor_get(v_s_232_, 0);
v_tail_245_ = lean_ctor_get(v_s_232_, 1);
v___x_246_ = 10;
v___x_247_ = lean_unbox_uint32(v_head_244_);
v___x_248_ = lean_uint32_dec_eq(v___x_247_, v___x_246_);
if (v___x_248_ == 0)
{
goto v___jp_234_;
}
else
{
lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_282_; 
lean_inc(v_tail_245_);
v_isSharedCheck_282_ = !lean_is_exclusive(v_s_232_);
if (v_isSharedCheck_282_ == 0)
{
lean_object* v_unused_283_; lean_object* v_unused_284_; 
v_unused_283_ = lean_ctor_get(v_s_232_, 1);
lean_dec(v_unused_283_);
v_unused_284_ = lean_ctor_get(v_s_232_, 0);
lean_dec(v_unused_284_);
v___x_250_ = v_s_232_;
v_isShared_251_ = v_isSharedCheck_282_;
goto v_resetjp_249_;
}
else
{
lean_dec(v_s_232_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_282_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v_fst_253_; lean_object* v_snd_254_; lean_object* v_one_255_; lean_object* v_n_256_; lean_object* v___x_257_; lean_object* v_snd_258_; lean_object* v_fst_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_281_; 
v___x_252_ = lp_lean_x2dftml_LeanFtml_skipSpaces(v_tail_245_);
v_fst_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_fst_253_);
v_snd_254_ = lean_ctor_get(v___x_252_, 1);
lean_inc(v_snd_254_);
lean_dec_ref(v___x_252_);
v_one_255_ = lean_unsigned_to_nat(1u);
v_n_256_ = lean_nat_sub(v_fuel_233_, v_one_255_);
v___x_257_ = lp_lean_x2dftml_LeanFtml_scanGroup(v_snd_254_, v_n_256_);
lean_dec(v_n_256_);
v_snd_258_ = lean_ctor_get(v___x_257_, 1);
v_fst_259_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_281_ == 0)
{
v___x_261_ = v___x_257_;
v_isShared_262_ = v_isSharedCheck_281_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_snd_258_);
lean_inc(v_fst_259_);
lean_dec(v___x_257_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_281_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v_fst_263_; lean_object* v_snd_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_280_; 
v_fst_263_ = lean_ctor_get(v_snd_258_, 0);
v_snd_264_ = lean_ctor_get(v_snd_258_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v_snd_258_);
if (v_isSharedCheck_280_ == 0)
{
v___x_266_ = v_snd_258_;
v_isShared_267_ = v_isSharedCheck_280_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_snd_264_);
lean_inc(v_fst_263_);
lean_dec(v_snd_258_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_280_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_268_ = lean_nat_add(v_fst_259_, v_one_255_);
lean_dec(v_fst_259_);
v___x_269_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 1, v_fst_253_);
lean_ctor_set(v___x_250_, 0, v___x_269_);
v___x_271_ = v___x_250_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_fst_253_);
v___x_271_ = v_reuseFailAlloc_279_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_272_ = l_List_appendTR___redArg(v___x_271_, v_fst_263_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v___x_272_);
v___x_274_ = v___x_266_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_snd_264_);
v___x_274_ = v_reuseFailAlloc_278_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_276_; 
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 1, v___x_274_);
lean_ctor_set(v___x_261_, 0, v___x_268_);
v___x_276_ = v___x_261_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_268_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
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
goto v___jp_234_;
}
}
v___jp_234_:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_235_ = lean_unsigned_to_nat(0u);
v___x_236_ = lean_box(0);
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v_s_232_);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_235_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanGroup___boxed(lean_object* v_s_285_, lean_object* v_fuel_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = lp_lean_x2dftml_LeanFtml_scanGroup(v_s_285_, v_fuel_286_);
lean_dec(v_fuel_286_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_compressNL_go(lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
if (lean_obj_tag(v_a_288_) == 0)
{
return v_a_288_;
}
else
{
lean_object* v_head_290_; lean_object* v_tail_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_339_; 
v_head_290_ = lean_ctor_get(v_a_288_, 0);
v_tail_291_ = lean_ctor_get(v_a_288_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v_a_288_);
if (v_isSharedCheck_339_ == 0)
{
v___x_293_ = v_a_288_;
v_isShared_294_ = v_isSharedCheck_339_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_tail_291_);
lean_inc(v_head_290_);
lean_dec(v_a_288_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_339_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v_zero_295_; uint8_t v_isZero_296_; 
v_zero_295_ = lean_unsigned_to_nat(0u);
v_isZero_296_ = lean_nat_dec_eq(v_a_289_, v_zero_295_);
if (v_isZero_296_ == 1)
{
lean_object* v___x_297_; 
lean_del_object(v___x_293_);
lean_dec(v_tail_291_);
lean_dec(v_head_290_);
v___x_297_ = lean_box(0);
return v___x_297_;
}
else
{
lean_object* v_one_298_; lean_object* v_n_299_; uint32_t v___x_300_; uint32_t v___x_301_; uint8_t v___x_302_; 
v_one_298_ = lean_unsigned_to_nat(1u);
v_n_299_ = lean_nat_sub(v_a_289_, v_one_298_);
v___x_300_ = 10;
v___x_301_ = lean_unbox_uint32(v_head_290_);
v___x_302_ = lean_uint32_dec_eq(v___x_301_, v___x_300_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_303_ = lp_lean_x2dftml_LeanFtml_compressNL_go(v_tail_291_, v_n_299_);
lean_dec(v_n_299_);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 1, v___x_303_);
v___x_305_ = v___x_293_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_head_290_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
else
{
lean_object* v___x_307_; lean_object* v___x_309_; 
lean_dec(v_head_290_);
v___x_307_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 0, v___x_307_);
v___x_309_ = v___x_293_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_tail_291_);
v___x_309_ = v_reuseFailAlloc_338_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v_snd_313_; lean_object* v_fst_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_337_; 
v___x_310_ = l_List_lengthTR___redArg(v___x_309_);
v___x_311_ = lean_nat_add(v___x_310_, v_one_298_);
lean_dec(v___x_310_);
v___x_312_ = lp_lean_x2dftml_LeanFtml_scanGroup(v___x_309_, v___x_311_);
lean_dec(v___x_311_);
v_snd_313_ = lean_ctor_get(v___x_312_, 1);
v_fst_314_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_337_ == 0)
{
v___x_316_ = v___x_312_;
v_isShared_317_ = v_isSharedCheck_337_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_snd_313_);
lean_inc(v_fst_314_);
lean_dec(v___x_312_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_337_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v_fst_318_; lean_object* v_snd_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_336_; 
v_fst_318_ = lean_ctor_get(v_snd_313_, 0);
v_snd_319_ = lean_ctor_get(v_snd_313_, 1);
v_isSharedCheck_336_ = !lean_is_exclusive(v_snd_313_);
if (v_isSharedCheck_336_ == 0)
{
v___x_321_ = v_snd_313_;
v_isShared_322_ = v_isSharedCheck_336_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_snd_319_);
lean_inc(v_fst_318_);
lean_dec(v_snd_313_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_336_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = lean_unsigned_to_nat(3u);
v___x_324_ = lean_nat_dec_le(v___x_323_, v_fst_314_);
lean_dec(v_fst_314_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; lean_object* v___x_326_; 
lean_del_object(v___x_321_);
lean_del_object(v___x_316_);
v___x_325_ = lp_lean_x2dftml_LeanFtml_compressNL_go(v_snd_319_, v_n_299_);
lean_dec(v_n_299_);
v___x_326_ = l_List_appendTR___redArg(v_fst_318_, v___x_325_);
return v___x_326_;
}
else
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
lean_dec(v_fst_318_);
v___x_327_ = lp_lean_x2dftml_LeanFtml_compressNL_go(v_snd_319_, v_n_299_);
lean_dec(v_n_299_);
v___x_328_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
if (v_isShared_322_ == 0)
{
lean_ctor_set_tag(v___x_321_, 1);
lean_ctor_set(v___x_321_, 1, v___x_327_);
lean_ctor_set(v___x_321_, 0, v___x_328_);
v___x_330_ = v___x_321_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_328_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v___x_327_);
v___x_330_ = v_reuseFailAlloc_335_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
lean_object* v___x_331_; lean_object* v___x_333_; 
v___x_331_ = lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1;
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 1);
lean_ctor_set(v___x_316_, 1, v___x_330_);
lean_ctor_set(v___x_316_, 0, v___x_331_);
v___x_333_ = v___x_316_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_331_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v___x_330_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_compressNL_go___boxed(lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = lp_lean_x2dftml_LeanFtml_compressNL_go(v_a_340_, v_a_341_);
lean_dec(v_a_341_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_compressNL(lean_object* v_s_343_){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_344_ = l_List_lengthTR___redArg(v_s_343_);
v___x_345_ = lean_unsigned_to_nat(1u);
v___x_346_ = lean_nat_add(v___x_344_, v___x_345_);
lean_dec(v___x_344_);
v___x_347_ = lp_lean_x2dftml_LeanFtml_compressNL_go(v_s_343_, v___x_346_);
lean_dec(v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_prefilterChars(lean_object* v_s_348_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_349_ = lp_lean_x2dftml_LeanFtml_convCRLF(v_s_348_);
v___x_350_ = lp_lean_x2dftml_LeanFtml_convCR(v___x_349_);
v___x_351_ = lp_lean_x2dftml_LeanFtml_emptyWsLines(v___x_350_);
v___x_352_ = lp_lean_x2dftml_LeanFtml_expandTabs(v___x_351_);
v___x_353_ = lp_lean_x2dftml_LeanFtml_framePad(v___x_352_);
v___x_354_ = lp_lean_x2dftml_LeanFtml_compressNL(v___x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_prefilterRule(lean_object* v_st_355_){
_start:
{
lean_object* v_work_356_; lean_object* v_tokens_357_; lean_object* v_doc_358_; uint8_t v_fatal_359_; lean_object* v___x_360_; 
v_work_356_ = lean_ctor_get(v_st_355_, 0);
v_tokens_357_ = lean_ctor_get(v_st_355_, 1);
v_doc_358_ = lean_ctor_get(v_st_355_, 2);
v_fatal_359_ = lean_ctor_get_uint8(v_st_355_, sizeof(void*)*3);
lean_inc(v_work_356_);
v___x_360_ = lp_lean_x2dftml_LeanFtml_allText(v_work_356_);
if (lean_obj_tag(v___x_360_) == 0)
{
return v_st_355_;
}
else
{
lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_379_; 
lean_inc_ref(v_doc_358_);
lean_inc(v_tokens_357_);
v_isSharedCheck_379_ = !lean_is_exclusive(v_st_355_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; lean_object* v_unused_381_; lean_object* v_unused_382_; 
v_unused_380_ = lean_ctor_get(v_st_355_, 2);
lean_dec(v_unused_380_);
v_unused_381_ = lean_ctor_get(v_st_355_, 1);
lean_dec(v_unused_381_);
v_unused_382_ = lean_ctor_get(v_st_355_, 0);
lean_dec(v_unused_382_);
v___x_362_ = v_st_355_;
v_isShared_363_ = v_isSharedCheck_379_;
goto v_resetjp_361_;
}
else
{
lean_dec(v_st_355_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_379_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v_val_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_378_; 
v_val_364_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_378_ == 0)
{
v___x_366_ = v___x_360_;
v_isShared_367_ = v_isSharedCheck_378_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_val_364_);
lean_dec(v___x_360_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_378_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_368_ = lp_lean_x2dftml_LeanFtml_prefilterChars(v_val_364_);
if (v_isShared_367_ == 0)
{
lean_ctor_set_tag(v___x_366_, 0);
lean_ctor_set(v___x_366_, 0, v___x_368_);
v___x_370_ = v___x_366_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_368_);
v___x_370_ = v_reuseFailAlloc_377_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_371_ = lean_box(0);
v___x_372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = lp_lean_x2dftml_LeanFtml_normSegs(v___x_372_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_373_);
v___x_375_ = v___x_362_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v_tokens_357_);
lean_ctor_set(v_reuseFailAlloc_376_, 2, v_doc_358_);
lean_ctor_set_uint8(v_reuseFailAlloc_376_, sizeof(void*)*3, v_fatal_359_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_delimiterRule(lean_object* v_st_383_){
_start:
{
lean_inc_ref(v_st_383_);
return v_st_383_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_delimiterRule___boxed(lean_object* v_st_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = lp_lean_x2dftml_LeanFtml_delimiterRule(v_st_384_);
lean_dec_ref(v_st_384_);
return v_res_385_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_convCRLF___boxed__const__1);
lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_expandTabs___closed__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
