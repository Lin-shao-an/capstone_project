// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_PipelineCPU.h"
#include "VComputer__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h7bf8ed02_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h5a1116b7_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h7a9d4c30_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h4e5b96a3_0;

VL_INLINE_OPT void VComputer_PipelineCPU___ico_sequent__TOP__Computer__m_core0__0(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___ico_sequent__TOP__Computer__m_core0__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*33:0*/ m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0;
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0 = 0;
    QData/*33:0*/ m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0;
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0 = 0;
    CData/*0:0*/ m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgRegularize_h2acdb393_0_0;
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgRegularize_h2acdb393_0_0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdfgRegularize_ha8957302_0_27;
    __VdfgRegularize_ha8957302_0_27 = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<3>/*95:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_96;
    // Body
    vlSelfRef.WB_pc_valid_out = vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_valid_out;
    vlSelfRef.WB_pc_out = vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_out;
    vlSelfRef.__PVT__WB_freg_wr_en_out = ((IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_freg_wr_en_out) 
                                          & ((IData)(vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_valid_out) 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__VdfgRegularize_hb63f781a_0_0)));
    vlSelfRef.__PVT__WB_reg_wr_en_out = ((IData)(vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_valid_out) 
                                         & ((IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_wr_en_out) 
                                            & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__VdfgRegularize_hb63f781a_0_0)));
    vlSelfRef.__PVT__EX_freg_fwd_data2 = (((IData)(vlSelfRef.__PVT__WB_freg_wr_en_out) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_80))
                                           ? vlSelfRef.__PVT__wb_data_in
                                           : vlSelfRef.__PVT__m_EX__DOT__freg_rd_data2_o);
    vlSelfRef.__PVT__EX_freg_fwd_data1 = (((IData)(vlSelfRef.__PVT__WB_freg_wr_en_out) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_81))
                                           ? vlSelfRef.__PVT__wb_data_in
                                           : vlSelfRef.__PVT__m_EX__DOT__freg_rd_data1_o);
    vlSelfRef.__VdfgRegularize_ha8957302_0_15 = ((IData)(vlSelfRef.__PVT__WB_reg_wr_en_out) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec 
        = ((IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__EX_freg_fwd_data2)) 
                    & (0U != (0x7fffffU & vlSelfRef.__PVT__EX_freg_fwd_data2))))
            ? (0x7fffffU & vlSelfRef.__PVT__EX_freg_fwd_data2)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__EX_freg_fwd_data2)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__EX_freg_fwd_data2)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__EX_freg_fwd_data2))));
    vlSelfRef.__PVT__EX_fwd_data2 = (((IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_15) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_80))
                                      ? vlSelfRef.__PVT__wb_data_in
                                      : vlSelfRef.__PVT__m_EX__DOT__reg_rd_data2_o);
    vlSelfRef.__PVT__EX_fwd_data1 = (((IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_15) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_81))
                                      ? vlSelfRef.__PVT__wb_data_in
                                      : vlSelfRef.__PVT__m_EX__DOT__reg_rd_data1_o);
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_snan 
        = ((~ (vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec 
               >> 0x16U)) & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan));
    vlSelfRef.__PVT__u_lsu__DOT__rb_data = ((((IData)(vlSelfRef.__PVT__EX_mem_ctrl_out) 
                                              >> 3U) 
                                             & (IData)(vlSelfRef.__PVT__EX_mem_wr_en_out))
                                             ? vlSelfRef.__PVT__EX_freg_fwd_data2
                                             : vlSelfRef.__PVT__EX_fwd_data2);
    vlSelfRef.__PVT__m_EX__DOT__ALU_src2 = ((IData)(vlSelfRef.__PVT__m_EX__DOT__ALU_sel2_o)
                                             ? vlSelfRef.__PVT__EX_imm_out
                                             : vlSelfRef.__PVT__EX_fwd_data2);
    vlSelfRef.__VdfgRegularize_ha8957302_0_25 = (IData)(
                                                        ((~ 
                                                          ((IData)(vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out) 
                                                           >> 1U)) 
                                                         & (vlSelfRef.__PVT__EX_fwd_data2 
                                                            >> 0x1fU)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
        = (((~ (IData)(vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out)) 
            & (vlSelfRef.__PVT__EX_fwd_data1 >> 0x1fU))
            ? (- vlSelfRef.__PVT__EX_fwd_data1) : vlSelfRef.__PVT__EX_fwd_data1);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] = 0U;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] = 0U;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
        = (QData)((IData)((((~ (IData)(vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out)) 
                            & (vlSelfRef.__PVT__EX_fwd_data2 
                               >> 0x1fU)) ? (- vlSelfRef.__PVT__EX_fwd_data2)
                            : vlSelfRef.__PVT__EX_fwd_data2)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o = 0U;
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_3, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_3[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_3[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_3[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_6, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_6[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_6[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_6[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_9, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_9[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_12, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_12[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_12[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_12[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_15, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_15[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_15[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_15[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_18, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_18[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_18[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_18[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_21, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_21[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_21[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_21[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_24, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_24[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_27, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_27[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_27[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_27[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_30, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_30[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_30[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_30[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_33, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_33[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_33[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_33[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_36, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_36[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_36[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_36[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_39, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_39[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_39[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_39[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_42, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_42[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_42[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_42[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_45, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_45[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_45[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_45[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_48, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_48[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_48[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_48[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_51, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_51[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_51[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_51[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_54, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_54[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_54[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_54[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_57, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_57[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_57[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_57[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_60, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_60[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_60[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_60[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_63, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_63[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_63[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_63[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_66, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_66[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_66[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_66[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_69, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_69[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_69[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_69[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_72, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_72[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_72[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_72[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_75, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_75[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_75[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_75[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_78, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_78[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_78[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_78[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_81, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_81[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_81[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_81[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_84, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_84[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_84[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_84[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_87, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_87[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_87[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_87[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_90, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_90[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_90[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_90[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_93, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_93[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_93[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_93[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    if ((1U & (~ (0U != (0x80000000ULL & vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))))) {
        VL_SHIFTL_WWI(66,66,32, __Vtemp_96, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o, 1U);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U] 
            = __Vtemp_96[0U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U] 
            = __Vtemp_96[1U];
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U] 
            = (3U & __Vtemp_96[2U]);
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o 
            = (0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o, 1U));
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o)));
    }
    vlSelfRef.__PVT__br_taken = ((4U & (IData)(vlSelfRef.__PVT__m_EX__DOT__cmp_op_o))
                                  ? ((~ ((IData)(vlSelfRef.__PVT__m_EX__DOT__cmp_op_o) 
                                         >> 1U)) & 
                                     ((1U & (IData)(vlSelfRef.__PVT__m_EX__DOT__cmp_op_o))
                                       ? (((IData)(vlSelfRef.__PVT__EX_is_br_out) 
                                           & (vlSelfRef.__PVT__EX_fwd_data1 
                                              >= vlSelfRef.__PVT__EX_fwd_data2)) 
                                          | (IData)(vlSelfRef.__PVT__EX_is_j_out))
                                       : (((IData)(vlSelfRef.__PVT__EX_is_br_out) 
                                           & (vlSelfRef.__PVT__EX_fwd_data1 
                                              < vlSelfRef.__PVT__EX_fwd_data2)) 
                                          | (IData)(vlSelfRef.__PVT__EX_is_j_out))))
                                  : ((2U & (IData)(vlSelfRef.__PVT__m_EX__DOT__cmp_op_o))
                                      ? ((1U & (IData)(vlSelfRef.__PVT__m_EX__DOT__cmp_op_o))
                                          ? (((IData)(vlSelfRef.__PVT__EX_is_br_out) 
                                              & VL_GTES_III(32, vlSelfRef.__PVT__EX_fwd_data1, vlSelfRef.__PVT__EX_fwd_data2)) 
                                             | (IData)(vlSelfRef.__PVT__EX_is_j_out))
                                          : (((IData)(vlSelfRef.__PVT__EX_is_br_out) 
                                              & VL_LTS_III(32, vlSelfRef.__PVT__EX_fwd_data1, vlSelfRef.__PVT__EX_fwd_data2)) 
                                             | (IData)(vlSelfRef.__PVT__EX_is_j_out)))
                                      : ((1U & (IData)(vlSelfRef.__PVT__m_EX__DOT__cmp_op_o))
                                          ? (((IData)(vlSelfRef.__PVT__EX_is_br_out) 
                                              & (vlSelfRef.__PVT__EX_fwd_data1 
                                                 != vlSelfRef.__PVT__EX_fwd_data2)) 
                                             | (IData)(vlSelfRef.__PVT__EX_is_j_out))
                                          : (((IData)(vlSelfRef.__PVT__EX_is_br_out) 
                                              & (vlSelfRef.__PVT__EX_fwd_data1 
                                                 == vlSelfRef.__PVT__EX_fwd_data2)) 
                                             | (IData)(vlSelfRef.__PVT__EX_is_j_out)))));
    vlSelfRef.__VdfgRegularize_ha8957302_0_34 = ((IData)(vlSelfRef.__PVT__EX_is_csr_imm_out)
                                                  ? vlSelfRef.__PVT__EX_imm_out
                                                  : vlSelfRef.__PVT__EX_fwd_data1);
    vlSelfRef.__PVT__m_EX__DOT__ALU_src1 = ((IData)(vlSelfRef.__PVT__m_EX__DOT__ALU_sel1_o)
                                             ? vlSelfRef.__PVT__EX_fwd_data1
                                             : vlSelfRef.__PVT__EX_pc_out);
    vlSelfRef.__PVT__FPU_in1 = ((IData)(vlSelfRef.__PVT__EX_FPU_sel1_out)
                                 ? vlSelfRef.__PVT__EX_fwd_data1
                                 : vlSelfRef.__PVT__EX_freg_fwd_data1);
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgRegularize_h2acdb393_0_0 
        = ((vlSelfRef.__PVT__EX_fwd_data1 >> 0x1fU) 
           & (~ (3U == (3U & (IData)(vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out)))));
    vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = (vlSelfRef.__PVT__EX_fwd_data1 
                                               + vlSelfRef.__PVT__EX_imm_out);
    if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__sw_inst) 
         | (IData)(vlSelfRef.__PVT__u_lsu__DOT__lw_inst))) {
        if ((2U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                    = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__u_lsu__DOT__rb_data, 0x18U);
                vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 8U;
            } else {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                    = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__u_lsu__DOT__rb_data, 0x10U);
                vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 0xcU;
            }
        } else if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__u_lsu__DOT__rb_data, 8U);
            vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 0xeU;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                = vlSelfRef.__PVT__u_lsu__DOT__rb_data;
            vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 0xfU;
        }
    } else if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__sh_inst) 
                | (IData)(vlSelfRef.__PVT__u_lsu__DOT__lh_inst))) {
        if ((2U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                    = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__u_lsu__DOT__rb_data, 0x18U);
                vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 8U;
            } else {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                    = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__u_lsu__DOT__rb_data, 0x10U);
                vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 0xcU;
            }
        } else if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                = (0xffff00U & (vlSelfRef.__PVT__u_lsu__DOT__rb_data 
                                << 8U));
            vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 6U;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                = (0xffffU & vlSelfRef.__PVT__u_lsu__DOT__rb_data);
            vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 3U;
        }
    } else if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__sb_inst) 
                | (IData)(vlSelfRef.__PVT__u_lsu__DOT__lb_inst))) {
        if ((2U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                    = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__u_lsu__DOT__rb_data, 0x18U);
                vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 8U;
            } else {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                    = (0xff0000U & (vlSelfRef.__PVT__u_lsu__DOT__rb_data 
                                    << 0x10U));
                vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 4U;
            }
        } else if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                = (0xff00U & (vlSelfRef.__PVT__u_lsu__DOT__rb_data 
                              << 8U));
            vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 2U;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
                = (0xffU & vlSelfRef.__PVT__u_lsu__DOT__rb_data);
            vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 1U;
        }
    }
    if ((1U == (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_type))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 1U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
            = (0xffU & (vlSelfRef.__PVT__u_lsu__DOT__u_data 
                        >> 8U));
        vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = vlSelfRef.__PVT__u_lsu__DOT__u_addr;
    } else if ((2U == (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_type))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 1U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
            = (vlSelfRef.__PVT__u_lsu__DOT__u_data 
               >> 0x18U);
        vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = vlSelfRef.__PVT__u_lsu__DOT__u_addr;
    } else if ((3U == (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_type))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 3U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
            = (vlSelfRef.__PVT__u_lsu__DOT__u_data 
               >> 0x10U);
        vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = vlSelfRef.__PVT__u_lsu__DOT__u_addr;
    } else if ((4U == (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_type))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r = 7U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r 
            = (vlSelfRef.__PVT__u_lsu__DOT__u_data 
               >> 8U);
        vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = vlSelfRef.__PVT__u_lsu__DOT__u_addr;
    }
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B 
        = ((IData)(vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__invB)
            ? ((IData)(1U) + (~ vlSelfRef.__PVT__m_EX__DOT__ALU_src2))
            : vlSelfRef.__PVT__m_EX__DOT__ALU_src2);
    __VdfgRegularize_ha8957302_0_27 = ((0x80000000U 
                                        & vlSelfRef.__PVT__EX_freg_fwd_data2) 
                                       | (0x7fffffffU 
                                          & vlSelfRef.__PVT__FPU_in1));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__FPU_in1)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__FPU_in1)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__FPU_in1)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__FPU_in1))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__FPU_in1)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__FPU_in1))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
        = (((QData)((IData)(m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgRegularize_h2acdb393_0_0)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__EX_fwd_data1)));
    vlSelfRef.u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_5 
        = (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_mask_r) 
            << 3U) | (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_type));
    vlSelfRef.__PVT__u_lsu__DOT__unaligned_2_r = ((IData)(vlSelfRef.u_lsu__DOT____VdfgExtracted_h107e6a66__0) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)));
    vlSelfRef.__PVT__u_lsu__DOT__unaligned_1_r = 0U;
    if ((1U & (~ (IData)(vlSelfRef.u_lsu__DOT____VdfgExtracted_h107e6a66__0)))) {
        if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__lh_inst) 
             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__sh_inst))) {
            vlSelfRef.__PVT__u_lsu__DOT__unaligned_1_r 
                = (3U == (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r));
        }
    }
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_1 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_2 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_4 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_8 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_16 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_1 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_2 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_4 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_8 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_16 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_1 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_2 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_4 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_8 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_16 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_1 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_2 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_4 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_8 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_16 = 0U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__result = 0U;
    if ((2U & (IData)(vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper))) {
        if ((1U & (IData)(vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper))) {
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_1 
                = ((1U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                       >> 1U) : vlSelfRef.__PVT__m_EX__DOT__ALU_src1);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_2 
                = ((2U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_1 
                       >> 2U) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_1);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_4 
                = ((4U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_2 
                       >> 4U) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_2);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_8 
                = ((8U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_4 
                       >> 8U) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_4);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_16 
                = ((0x10U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_8 
                       >> 0x10U) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_8);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__result 
                = vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_16;
        } else {
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_1 
                = ((1U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? ((0x80000000U & vlSelfRef.__PVT__m_EX__DOT__ALU_src1) 
                       | (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                          >> 1U)) : vlSelfRef.__PVT__m_EX__DOT__ALU_src1);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_2 
                = ((2U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (((- (IData)((vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_1 
                                    >> 0x1fU))) << 0x1eU) 
                       | (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_1 
                          >> 2U)) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_1);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_4 
                = ((4U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (((- (IData)((vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_2 
                                    >> 0x1fU))) << 0x1cU) 
                       | (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_2 
                          >> 4U)) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_2);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_8 
                = ((8U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (((- (IData)((vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_4 
                                    >> 0x1fU))) << 0x18U) 
                       | (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_4 
                          >> 8U)) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_4);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_16 
                = ((0x10U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    ? (((- (IData)((vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_8 
                                    >> 0x1fU))) << 0x10U) 
                       | (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_8 
                          >> 0x10U)) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_8);
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__result 
                = vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_16;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper))) {
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_1 
            = ((1U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                   << 1U) : vlSelfRef.__PVT__m_EX__DOT__ALU_src1);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_2 
            = ((2U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_1 
                   << 2U) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_1);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_4 
            = ((4U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_2 
                   << 4U) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_2);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_8 
            = ((8U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_4 
                   << 8U) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_4);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_16 
            = ((0x10U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_8 
                   << 0x10U) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_8);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__result 
            = vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_16;
    } else {
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_1 
            = ((1U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? ((vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                    << 1U) | (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                              >> 0x1fU)) : vlSelfRef.__PVT__m_EX__DOT__ALU_src1);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_2 
            = ((2U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? ((vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_1 
                    << 2U) | (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_1 
                              >> 0x1eU)) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_1);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_4 
            = ((4U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? ((vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_2 
                    << 4U) | (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_2 
                              >> 0x1cU)) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_2);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_8 
            = ((8U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? ((vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_4 
                    << 8U) | (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_4 
                              >> 0x18U)) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_4);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_16 
            = ((0x10U & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                ? ((vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_8 
                    << 0x10U) | (vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_8 
                                 >> 0x10U)) : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_8);
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__result 
            = vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_16;
    }
    vlSelfRef.__PVT__m_FPU__DOT__sp_fsgnj_result = 
        ((0U == (7U & (vlSelfRef.__PVT__EX_inst_out 
                       >> 0xcU))) ? __VdfgRegularize_ha8957302_0_27
          : ((1U == (7U & (vlSelfRef.__PVT__EX_inst_out 
                           >> 0xcU))) ? (((~ (vlSelfRef.__PVT__EX_freg_fwd_data2 
                                              >> 0x1fU)) 
                                          << 0x1fU) 
                                         | (0x7fffffffU 
                                            & vlSelfRef.__PVT__FPU_in1))
              : ((2U == (7U & (vlSelfRef.__PVT__EX_inst_out 
                               >> 0xcU))) ? ((0x80000000U 
                                              & (vlSelfRef.__PVT__FPU_in1 
                                                 ^ vlSelfRef.__PVT__EX_freg_fwd_data2)) 
                                             | (0x7fffffffU 
                                                & vlSelfRef.__PVT__FPU_in1))
                  : __VdfgRegularize_ha8957302_0_27)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__FPU_in1)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__FPU_in1)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_class_inst__DOT__is_normal 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_zero) 
                    | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_infinity) 
                       | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan) 
                          | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_denormal))))));
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0 
        = (((QData)((IData)((1U & (IData)((1ULL & (
                                                   (- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                                   >> 0x20U)))))) 
            << 0x21U) | (0x1ffffffffULL & (- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand)));
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0 
        = (((QData)((IData)(m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgRegularize_h2acdb393_0_0)) 
            << 0x21U) | vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand);
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out 
        = ((4U & (IData)(vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper))
            ? ((2U & (IData)(vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper))
                ? ((1U & (IData)(vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper))
                    ? (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                       ^ vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    : (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                       | vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B))
                : ((1U & (IData)(vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper))
                    ? (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                       & vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)
                    : ((((0x100U == vlSelfRef.__PVT__m_EX__DOT__ALU_src1) 
                         & (0x500U == vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)) 
                        | ((0x500U == vlSelfRef.__PVT__m_EX__DOT__ALU_src1) 
                           & (0x100U == vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)))
                        ? 0x1337U : (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                                     + vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B))))
            : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__result);
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_result = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_eq = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_gt = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_lt = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_eq = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_gt = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_lt = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__normal_path_enable = 1U;
    if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan) 
         | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan))) {
        vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__normal_path_enable = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_result 
            = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan) 
                & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan))
                ? 0x7fc00000U : ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan)
                                  ? vlSelfRef.__PVT__EX_freg_fwd_data2
                                  : vlSelfRef.__PVT__FPU_in1));
    } else if (((vlSelfRef.__PVT__FPU_in1 >> 0x1fU) 
                != (vlSelfRef.__PVT__EX_freg_fwd_data2 
                    >> 0x1fU))) {
        if ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_lt = 1U;
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_gt = 1U;
        }
    } else {
        vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_gt 
            = (((0xff000000U & (vlSelfRef.__PVT__FPU_in1 
                                << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec) 
               > ((0xff000000U & (vlSelfRef.__PVT__EX_freg_fwd_data2 
                                  << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec));
        vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_lt 
            = (((0xff000000U & (vlSelfRef.__PVT__FPU_in1 
                                << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec) 
               < ((0xff000000U & (vlSelfRef.__PVT__EX_freg_fwd_data2 
                                  << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec));
        vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_eq 
            = (((0xff000000U & (vlSelfRef.__PVT__FPU_in1 
                                << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec) 
               == ((0xff000000U & (vlSelfRef.__PVT__EX_freg_fwd_data2 
                                   << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec));
        if ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_lt 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_gt;
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_gt 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_lt;
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_eq 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_eq;
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_lt 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_lt;
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_gt 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_gt;
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_eq 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_eq;
        }
    }
    if (vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__normal_path_enable) {
        vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_result 
            = ((1U == (7U & (vlSelfRef.__PVT__EX_inst_out 
                             >> 0xcU))) ? (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_eq) 
                                            | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_gt))
                                            ? vlSelfRef.__PVT__FPU_in1
                                            : vlSelfRef.__PVT__EX_freg_fwd_data2)
                : ((0U == (7U & (vlSelfRef.__PVT__EX_inst_out 
                                 >> 0xcU))) ? (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_eq) 
                                                | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_lt))
                                                ? vlSelfRef.__PVT__FPU_in1
                                                : vlSelfRef.__PVT__EX_freg_fwd_data2)
                    : 0U));
    }
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_eq = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_gt = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_lt = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_eq = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_gt = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_lt = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_unordered = 0U;
    if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan) 
         | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan))) {
        vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_unordered = 1U;
    } else if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_zero) 
                & (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__EX_freg_fwd_data2))))) {
        vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_eq = 1U;
    } else if (((vlSelfRef.__PVT__FPU_in1 >> 0x1fU) 
                != (vlSelfRef.__PVT__EX_freg_fwd_data2 
                    >> 0x1fU))) {
        if ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_lt = 1U;
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_gt = 1U;
        }
    } else {
        vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_gt 
            = (((0xff000000U & (vlSelfRef.__PVT__FPU_in1 
                                << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec) 
               > ((0xff000000U & (vlSelfRef.__PVT__EX_freg_fwd_data2 
                                  << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec));
        vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_lt 
            = (((0xff000000U & (vlSelfRef.__PVT__FPU_in1 
                                << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec) 
               < ((0xff000000U & (vlSelfRef.__PVT__EX_freg_fwd_data2 
                                  << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec));
        vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_eq 
            = (((0xff000000U & (vlSelfRef.__PVT__FPU_in1 
                                << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec) 
               == ((0xff000000U & (vlSelfRef.__PVT__EX_freg_fwd_data2 
                                   << 1U)) | vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec));
        if ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_lt 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_gt;
            vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_gt 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_lt;
            vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_eq 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_eq;
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_lt 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_lt;
            vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_gt 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_gt;
            vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_eq 
                = vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_eq;
        }
    }
    vlSelfRef.__PVT__m_FPU__DOT__sp_cmp = (1U & ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__EX_inst_out 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_unordered)
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_eq))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__EX_inst_out 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_unordered)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_lt))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.__PVT__EX_inst_out 
                                                        >> 0xcU))) 
                                                   && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_unordered)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_eq) 
                                                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_lt)))))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_snan 
        = ((~ (vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec 
               >> 0x16U)) & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan));
    vlSelfRef.__PVT__m_FPU__DOT__sp_class_result = 
        ((((0x7fe00U & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan) 
                         << 9U) & (vlSelfRef.__PVT__FPU_in1 
                                   >> 0xdU))) | (((
                                                   (~ 
                                                    (vlSelfRef.__PVT__FPU_in1 
                                                     >> 0x16U)) 
                                                   & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan)) 
                                                  << 8U) 
                                                 | (((~ 
                                                      (vlSelfRef.__PVT__FPU_in1 
                                                       >> 0x1fU)) 
                                                     & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_infinity)) 
                                                    << 7U))) 
          | ((((~ (vlSelfRef.__PVT__FPU_in1 >> 0x1fU)) 
               & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_class_inst__DOT__is_normal)) 
              << 6U) | (((~ (vlSelfRef.__PVT__FPU_in1 
                             >> 0x1fU)) & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_denormal)) 
                        << 5U))) | (((((~ (vlSelfRef.__PVT__FPU_in1 
                                           >> 0x1fU)) 
                                       & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_zero)) 
                                      << 4U) | ((8U 
                                                 & ((vlSelfRef.__PVT__FPU_in1 
                                                     >> 0x1cU) 
                                                    & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_zero) 
                                                       << 3U))) 
                                                | (4U 
                                                   & ((vlSelfRef.__PVT__FPU_in1 
                                                       >> 0x1dU) 
                                                      & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_denormal) 
                                                         << 2U))))) 
                                    | ((2U & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_class_inst__DOT__is_normal) 
                                               << 1U) 
                                              & (vlSelfRef.__PVT__FPU_in1 
                                                 >> 0x1eU))) 
                                       | ((vlSelfRef.__PVT__FPU_in1 
                                           >> 0x1fU) 
                                          & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_infinity)))));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_0__booth_out 
        = ((2U & vlSelfRef.__PVT__EX_fwd_data2) ? (
                                                   (1U 
                                                    & vlSelfRef.__PVT__EX_fwd_data2)
                                                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                                                    : 
                                                   (0x3fffffffeULL 
                                                    & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                                       << 1U)))
            : ((1U & vlSelfRef.__PVT__EX_fwd_data2)
                ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                : 0ULL));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__1__KET____DOT__m_booth_decoder__booth_out 
        = ((8U & vlSelfRef.__PVT__EX_fwd_data2) ? (
                                                   (4U 
                                                    & vlSelfRef.__PVT__EX_fwd_data2)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__EX_fwd_data2)
                                                     ? 0ULL
                                                     : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__EX_fwd_data2)
                                                     ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                                                     : 
                                                    (0x3fffffffeULL 
                                                     & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                                        << 1U))))
            : ((4U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((2U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                       << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
                : ((2U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                    : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__2__KET____DOT__m_booth_decoder__booth_out 
        = ((0x20U & vlSelfRef.__PVT__EX_fwd_data2) ? 
           ((0x10U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((8U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
             : ((8U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                 : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                      << 1U)))) : (
                                                   (0x10U 
                                                    & vlSelfRef.__PVT__EX_fwd_data2)
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.__PVT__EX_fwd_data2)
                                                     ? 
                                                    (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                                                     << 1U)
                                                     : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.__PVT__EX_fwd_data2)
                                                     ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                                                     : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__3__KET____DOT__m_booth_decoder__booth_out 
        = ((0x80U & vlSelfRef.__PVT__EX_fwd_data2) ? 
           ((0x40U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x20U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
             : ((0x20U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                 : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                      << 1U)))) : (
                                                   (0x40U 
                                                    & vlSelfRef.__PVT__EX_fwd_data2)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelfRef.__PVT__EX_fwd_data2)
                                                     ? 
                                                    (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                                                     << 1U)
                                                     : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
                                                    : 
                                                   ((0x20U 
                                                     & vlSelfRef.__PVT__EX_fwd_data2)
                                                     ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                                                     : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__4__KET____DOT__m_booth_decoder__booth_out 
        = ((0x200U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x100U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x80U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x80U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x100U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x80U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x80U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__5__KET____DOT__m_booth_decoder__booth_out 
        = ((0x800U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x400U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x200U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x200U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x400U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x200U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x200U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__6__KET____DOT__m_booth_decoder__booth_out 
        = ((0x2000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x1000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x800U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x800U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x1000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x800U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x800U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__7__KET____DOT__m_booth_decoder__booth_out 
        = ((0x8000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x4000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x2000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x2000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x4000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x2000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x2000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__8__KET____DOT__m_booth_decoder__booth_out 
        = ((0x20000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x10000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x8000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x8000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x10000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x8000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x8000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__9__KET____DOT__m_booth_decoder__booth_out 
        = ((0x80000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x40000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x20000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x20000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x40000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x20000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x20000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__10__KET____DOT__m_booth_decoder__booth_out 
        = ((0x200000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x100000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x80000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x80000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x100000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x80000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x80000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__11__KET____DOT__m_booth_decoder__booth_out 
        = ((0x800000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x400000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x200000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x200000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x400000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x200000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x200000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__12__KET____DOT__m_booth_decoder__booth_out 
        = ((0x2000000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x1000000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x800000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x800000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x1000000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x800000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x800000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__13__KET____DOT__m_booth_decoder__booth_out 
        = ((0x8000000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x4000000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x2000000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x2000000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x4000000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x2000000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x2000000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__15__KET____DOT__m_booth_decoder__booth_out 
        = ((vlSelfRef.__PVT__EX_fwd_data2 >> 0x1fU)
            ? ((0x40000000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x20000000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x20000000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x40000000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x20000000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x20000000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_16__booth_out 
        = ((IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_25)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_25)
                ? ((vlSelfRef.__PVT__EX_fwd_data2 >> 0x1fU)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((vlSelfRef.__PVT__EX_fwd_data2 >> 0x1fU)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_25)
             ? ((vlSelfRef.__PVT__EX_fwd_data2 >> 0x1fU)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((vlSelfRef.__PVT__EX_fwd_data2 >> 0x1fU)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__14__KET____DOT__m_booth_decoder__booth_out 
        = ((0x20000000U & vlSelfRef.__PVT__EX_fwd_data2)
            ? ((0x10000000U & vlSelfRef.__PVT__EX_fwd_data2)
                ? ((0x8000000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? 0ULL : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0)
                : ((0x8000000U & vlSelfRef.__PVT__EX_fwd_data2)
                    ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0
                    : (0x3fffffffeULL & ((- vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand) 
                                         << 1U)))) : 
           ((0x10000000U & vlSelfRef.__PVT__EX_fwd_data2)
             ? ((0x8000000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand 
                    << 1U) : m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0)
             : ((0x8000000U & vlSelfRef.__PVT__EX_fwd_data2)
                 ? m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0
                 : 0ULL)));
    vlSelfRef.__PVT__ALU_out = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out) 
                      >> 2U)))) {
            vlSelfRef.__PVT__ALU_out = ((2U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))
                                             ? VL_LTS_III(32, vlSelfRef.__PVT__m_EX__DOT__ALU_src1, vlSelfRef.__PVT__m_EX__DOT__ALU_src2)
                                             : (vlSelfRef.__PVT__m_EX__DOT__ALU_src1 
                                                < vlSelfRef.__PVT__m_EX__DOT__ALU_src2))
                                         : vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out);
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
        if ((2U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
            vlSelfRef.__PVT__ALU_out = vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out)))) {
            vlSelfRef.__PVT__ALU_out = vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out;
        }
    } else {
        vlSelfRef.__PVT__ALU_out = ((2U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))
                                     ? vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out
                                     : ((1U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))
                                         ? vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out
                                         : 0U));
    }
    vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_invalid = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_cmp_invalid = (IData)(
                                                          ((0x2000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelfRef.__PVT__EX_inst_out)) 
                                                           & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_snan) 
                                                              | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_snan))));
    if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan) 
         | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan))) {
        if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_snan) 
             | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_snan))) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_invalid = 1U;
        }
        if ((2U != (7U & (vlSelfRef.__PVT__EX_inst_out 
                          >> 0xcU)))) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_cmp_invalid = 1U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_0__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in1 
        = (((QData)((IData)((0x3fffffffU & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_0__booth_out 
                                                                  >> 0x21U)))))))) 
            << 0x22U) | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_0__booth_out);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__1__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in2 
        = (((QData)((IData)((0xfffffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__1__KET____DOT__m_booth_decoder__booth_out 
                                                                 >> 0x21U)))))))) 
            << 0x24U) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__1__KET____DOT__m_booth_decoder__booth_out 
                         << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[2U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__2__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in3 
        = (((QData)((IData)((0x3ffffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__2__KET____DOT__m_booth_decoder__booth_out 
                                                                 >> 0x21U)))))))) 
            << 0x26U) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__2__KET____DOT__m_booth_decoder__booth_out 
                         << 4U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[3U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__3__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in4 
        = (((QData)((IData)((0xffffffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__3__KET____DOT__m_booth_decoder__booth_out 
                                                                >> 0x21U)))))))) 
            << 0x28U) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__3__KET____DOT__m_booth_decoder__booth_out 
                         << 6U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[4U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__4__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in1 
        = (((QData)((IData)((0x3fffffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__4__KET____DOT__m_booth_decoder__booth_out 
                                                                >> 0x21U)))))))) 
            << 0x2aU) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__4__KET____DOT__m_booth_decoder__booth_out 
                         << 8U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[5U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__5__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in2 
        = (((QData)((IData)((0xfffffU & (- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__5__KET____DOT__m_booth_decoder__booth_out 
                                                               >> 0x21U)))))))) 
            << 0x2cU) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__5__KET____DOT__m_booth_decoder__booth_out 
                         << 0xaU));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[6U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__6__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in3 
        = (((QData)((IData)((0x3ffffU & (- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__6__KET____DOT__m_booth_decoder__booth_out 
                                                               >> 0x21U)))))))) 
            << 0x2eU) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__6__KET____DOT__m_booth_decoder__booth_out 
                         << 0xcU));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[7U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__7__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in4 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__7__KET____DOT__m_booth_decoder__booth_out 
                                                              >> 0x21U)))))))) 
            << 0x30U) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__7__KET____DOT__m_booth_decoder__booth_out 
                         << 0xeU));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[8U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__8__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in1 
        = (((QData)((IData)((0x3fffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__8__KET____DOT__m_booth_decoder__booth_out 
                                                              >> 0x21U)))))))) 
            << 0x32U) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__8__KET____DOT__m_booth_decoder__booth_out 
                         << 0x10U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[9U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__9__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in2 
        = (((QData)((IData)((0xfffU & (- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__9__KET____DOT__m_booth_decoder__booth_out 
                                                             >> 0x21U)))))))) 
            << 0x34U) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__9__KET____DOT__m_booth_decoder__booth_out 
                         << 0x12U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0xaU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__10__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in3 
        = (((QData)((IData)((0x3ffU & (- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__10__KET____DOT__m_booth_decoder__booth_out 
                                                             >> 0x21U)))))))) 
            << 0x36U) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__10__KET____DOT__m_booth_decoder__booth_out 
                         << 0x14U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0xbU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__11__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in4 
        = (((QData)((IData)((0xffU & (- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__11__KET____DOT__m_booth_decoder__booth_out 
                                                            >> 0x21U)))))))) 
            << 0x38U) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__11__KET____DOT__m_booth_decoder__booth_out 
                         << 0x16U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0xcU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__12__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in1 
        = (((QData)((IData)((0x3fU & (- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__12__KET____DOT__m_booth_decoder__booth_out 
                                                            >> 0x21U)))))))) 
            << 0x3aU) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__12__KET____DOT__m_booth_decoder__booth_out 
                         << 0x18U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0xdU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__13__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in2 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__13__KET____DOT__m_booth_decoder__booth_out 
                                                           >> 0x21U)))))))) 
            << 0x3cU) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__13__KET____DOT__m_booth_decoder__booth_out 
                         << 0x1aU));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0_temp[1U] 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__15__KET____DOT__m_booth_decoder__booth_out 
           << 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0xfU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__15__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0_temp[2U] 
        = ((QData)((IData)(vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_16__booth_out)) 
           << 0x20U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0x10U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_16__booth_out;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0xeU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__14__KET____DOT__m_booth_decoder__booth_out;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressor_l0__in1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__14__KET____DOT__m_booth_decoder__booth_out 
                                                            >> 0x21U)))))))) 
            << 0x3eU) | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__14__KET____DOT__m_booth_decoder__booth_out 
                         << 0x1cU));
    vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r = ((IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_branch_r)
                                                  ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_target_r
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__br_taken)
                                                   ? vlSelfRef.__PVT__ALU_out
                                                   : vlSelfRef.__PVT__EX_pc_p4_out));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in1;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in2;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[2U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in3;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[3U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in4;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w1 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in1 
           ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in2 
              ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in3 
                 ^ vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in4)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w3 
        = ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in1 
            | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in2) 
           & (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in3 
              | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in4));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[4U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in1;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[5U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in2;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[6U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in3;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[7U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in4;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w1 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in1 
           ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in2 
              ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in3 
                 ^ vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in4)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w3 
        = ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in1 
            | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in2) 
           & (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in3 
              | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in4));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[8U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in1;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[9U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in2;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[0xaU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in3;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[0xbU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in4;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w1 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in1 
           ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in2 
              ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in3 
                 ^ vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in4)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w3 
        = ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in1 
            | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in2) 
           & (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in3 
              | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in4));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[0xcU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in1;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[0xdU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in2;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0_temp[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressor_l0__in1;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out1 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressor_l0__in1 
           ^ ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__15__KET____DOT__m_booth_decoder__booth_out 
               << 0x1eU) ^ ((QData)((IData)(vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_16__booth_out)) 
                            << 0x20U)));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out2 
        = VL_SHIFTL_QQI(64,64,32, ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressor_l0__in1 
                                    & ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__15__KET____DOT__m_booth_decoder__booth_out 
                                        << 0x1eU) | 
                                       ((QData)((IData)(vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_16__booth_out)) 
                                        << 0x20U))) 
                                   | ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__15__KET____DOT__m_booth_decoder__booth_out 
                                       << 0x1eU) & 
                                      ((QData)((IData)(vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_16__booth_out)) 
                                       << 0x20U))), 1U);
    vlSelfRef.__PVT__br_flush = ((IData)(vlSelfRef.__PVT__EX_bp_pred_taken_out)
                                  ? (vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r 
                                     != vlSelfRef.__PVT__EX_bp_pred_target_out)
                                  : (vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r 
                                     != vlSelfRef.__PVT__EX_pc_p4_out));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i 
        = (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w1 
           ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w3, 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i 
        = ((VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w1, 1U) 
            & VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w3, 2U)) 
           | VL_SHIFTL_QQI(64,64,32, ((~ vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w1) 
                                      & ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in1 
                                          & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in2) 
                                         | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in3 
                                            & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in4))), 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_i 
        = (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w1 
           ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w3, 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_i 
        = ((VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w1, 1U) 
            & VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w3, 2U)) 
           | VL_SHIFTL_QQI(64,64,32, ((~ vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w1) 
                                      & ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in1 
                                          & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in2) 
                                         | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in3 
                                            & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in4))), 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_i 
        = (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w1 
           ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w3, 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_i 
        = ((VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w1, 1U) 
            & VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w3, 2U)) 
           | VL_SHIFTL_QQI(64,64,32, ((~ vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w1) 
                                      & ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in1 
                                          & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in2) 
                                         | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in3 
                                            & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in4))), 1U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[0xeU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out1;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[0xfU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out2;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w1 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in1 
           ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in2 
              ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out1 
                 ^ vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out2)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w3 
        = ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in1 
            | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in2) 
           & (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out1 
              | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out2));
    vlSelfRef.__PVT__m_Fetch__DOT__pc_in = ((IData)(vlSelfRef.__PVT__br_flush)
                                             ? vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r
                                             : ((IData)(vlSelfRef.__PVT__bp_pred_taken_out)
                                                 ? vlSelfRef.__PVT__bp_pred_target_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.__PVT__pc_out)));
    __Vtableidx1 = ((2U & ((~ (IData)(vlSelfRef.__PVT__EX_done)) 
                           << 1U)) | (IData)(vlSelfRef.__PVT__br_flush));
    vlSelfRef.__PVT__pc_en = VComputer__ConstPool__TABLE_h7bf8ed02_0
        [__Vtableidx1];
    vlSelfRef.__PVT__ID_en = VComputer__ConstPool__TABLE_h7bf8ed02_0
        [__Vtableidx1];
    vlSelfRef.__PVT__ID_clear = VComputer__ConstPool__TABLE_h5a1116b7_0
        [__Vtableidx1];
    vlSelfRef.__PVT__EX_en = VComputer__ConstPool__TABLE_h7bf8ed02_0
        [__Vtableidx1];
    vlSelfRef.__PVT__EX_clear = VComputer__ConstPool__TABLE_h5a1116b7_0
        [__Vtableidx1];
    vlSelfRef.__PVT__WB_en = VComputer__ConstPool__TABLE_h7a9d4c30_0
        [__Vtableidx1];
    vlSelfRef.__PVT__WB_clear = VComputer__ConstPool__TABLE_h4e5b96a3_0
        [__Vtableidx1];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[2U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_i;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[3U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_i;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[4U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_i;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[5U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_i;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_i 
        = (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w1 
           ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w3, 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_i 
        = ((VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w1, 1U) 
            & VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w3, 2U)) 
           | VL_SHIFTL_QQI(64,64,32, ((~ vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w1) 
                                      & ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in1 
                                          & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in2) 
                                         | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out1 
                                            & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out2))), 1U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[6U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_i;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[7U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_i;
}

VL_INLINE_OPT void VComputer_PipelineCPU___ico_sequent__TOP__Computer__m_core0__1(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___ico_sequent__TOP__Computer__m_core0__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_rd_data = ((IData)(vlSymsp->TOP__Computer__m_core0__m_CSR.__VdfgRegularize_ha8957302_0_32)
                                     ? vlSelfRef.__PVT__EX_inst_out
                                     : vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_rd_data_old);
    vlSelfRef.__PVT__m_FPU__DOT__rounding_mode = (7U 
                                                  & ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((0x2cU 
                                                       == 
                                                       (vlSelfRef.__PVT__EX_inst_out 
                                                        >> 0x19U))
                                                       ? 1U
                                                       : vlSelfRef.__PVT__csr_rd_data)
                                                      : 
                                                     (vlSelfRef.__PVT__EX_inst_out 
                                                      >> 0xcU)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__normal_path_enable = 1U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_sign = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_mant = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val = 0ULL;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0ULL;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__lsb = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__round_up = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_input_type))) {
        if (vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__normal_path_enable = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 1U;
            if ((2U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0x7fffffffULL;
            } else if ((3U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0xffffffffULL;
            }
        } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_infinity) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__normal_path_enable = 0U;
            if ((2U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)
                        ? 0x80000000ULL : 0x7fffffffULL);
            } else if ((3U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow 
                    = (1U & (~ (vlSelfRef.__PVT__FPU_in1 
                                >> 0x1fU)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)
                        ? 0ULL : 0xffffffffULL);
            }
        } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_zero) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__normal_path_enable = 0U;
            if (((2U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type)) 
                 | (3U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0ULL;
            }
        }
    } else if ((0U == vlSelfRef.__PVT__FPU_in1)) {
        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__normal_path_enable = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_sign = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_mant = 0U;
    }
    if (vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__normal_path_enable) {
        if (((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_input_type)) 
             & (3U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type)))) {
            if ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0ULL;
                if ((((1U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode)) 
                      | (3U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                     & (0x7fU > (0xffU & (vlSelfRef.__PVT__FPU_in1 
                                          >> 0x17U))))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact = 1U;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 1U;
                }
            } else if ((0x7fU > (0xffU & (vlSelfRef.__PVT__FPU_in1 
                                          >> 0x17U)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0ULL;
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact 
                    = (0U != vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec);
                if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact) 
                     & (3U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 1ULL;
                }
            } else if ((0x9eU < (0xffU & (vlSelfRef.__PVT__FPU_in1 
                                          >> 0x17U)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0xffffffffULL;
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt 
                    = ((IData)(0x96U) - (0xffU & (vlSelfRef.__PVT__FPU_in1 
                                                  >> 0x17U)));
                if (VL_LTES_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                        = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec)), vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val 
                        = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec)), 
                                        ((IData)(0x18U) 
                                         - vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt));
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                        = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec)), 
                                        (- vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val 
                        = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec)), 
                                        (vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt 
                                         - (IData)(0x18U)));
                }
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__lsb 
                    = (1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val 
                                     >> 0x17U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val 
                                     >> 0x16U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit 
                    = (0U != (0x3fffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact 
                    = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit)) 
                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__round_up 
                    = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                        ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                     >> 1U))) && ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                                  && (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)))
                        : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                ? ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact) 
                                   & (~ (vlSelfRef.__PVT__FPU_in1 
                                         >> 0x1fU)))
                                : ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact) 
                                   & (vlSelfRef.__PVT__FPU_in1 
                                      >> 0x1fU))) : 
                           ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                            && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit) 
                                & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__lsb) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit)) 
                                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit))))));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = (vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                       + (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__round_up)));
                if ((0U != (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                    >> 0x20U)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0xffffffffULL;
                }
            }
        } else if (((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_input_type)) 
                    & (2U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type)))) {
            if ((0x7fU > (0xffU & (vlSelfRef.__PVT__FPU_in1 
                                   >> 0x17U)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0ULL;
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact 
                    = (0U != vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec);
                if (vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact) {
                    if (((~ (vlSelfRef.__PVT__FPU_in1 
                             >> 0x1fU)) & (3U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 1ULL;
                    } else if (((vlSelfRef.__PVT__FPU_in1 
                                 >> 0x1fU) & (2U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0xffffffffULL;
                    }
                }
            } else if ((0x9eU <= (0xffU & (vlSelfRef.__PVT__FPU_in1 
                                           >> 0x17U)))) {
                if (((IData)((0xcf000000U == (0xff800000U 
                                              & vlSelfRef.__PVT__FPU_in1))) 
                     & (0x800000U == vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0x80000000ULL;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                        = ((vlSelfRef.__PVT__FPU_in1 
                            >> 0x1fU) ? 0x80000000ULL
                            : 0x7fffffffULL);
                }
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt 
                    = ((IData)(0x96U) - (0xffU & (vlSelfRef.__PVT__FPU_in1 
                                                  >> 0x17U)));
                if (VL_LTES_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                        = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec)), vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val 
                        = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec)), 
                                        ((IData)(0x18U) 
                                         - vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt));
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                        = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec)), 
                                        (- vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val 
                        = VL_SHIFTR_QQI(64,64,32, (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec)), 
                                        (vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt 
                                         - (IData)(0x18U)));
                }
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__lsb 
                    = (1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val 
                                     >> 0x17U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val 
                                     >> 0x16U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit 
                    = (0U != (0x3fffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact 
                    = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit)) 
                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__round_up 
                    = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                        ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                     >> 1U))) && ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                                  && (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)))
                        : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                ? ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact) 
                                   & (~ (vlSelfRef.__PVT__FPU_in1 
                                         >> 0x1fU)))
                                : ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact) 
                                   & (vlSelfRef.__PVT__FPU_in1 
                                      >> 0x1fU))) : 
                           ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                            && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit) 
                                & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__lsb) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit)) 
                                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit))))));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = (vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                       + (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__round_up)));
                if ((0x80000000U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int))) {
                    if ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int = 0x80000000ULL;
                    } else {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                            = ((vlSelfRef.__PVT__FPU_in1 
                                >> 0x1fU) ? 0x80000000ULL
                                : 0x7fffffffULL);
                    }
                }
                if ((vlSelfRef.__PVT__FPU_in1 >> 0x1fU)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                        = (QData)((IData)((- (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int))));
                }
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_sign 
                = ((2U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_input_type)) 
                   & (vlSelfRef.__PVT__FPU_in1 >> 0x1fU));
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp = 0x9eU;
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__i = 0x20U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_sign)
                    ? ((QData)((IData)((- vlSelfRef.__PVT__FPU_in1))) 
                       << 0x1fU) : ((QData)((IData)(vlSelfRef.__PVT__FPU_in1)) 
                                    << 0x1fU));
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            if ((1U & (~ (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                  >> 0x3eU))))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                - (IData)(1U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__lsb 
                = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                 >> 0x27U)));
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit 
                = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                 >> 0x26U)));
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit 
                = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                 >> 0x25U)));
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit 
                = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                 >> 0x24U)));
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact 
                = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit) 
                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit)) 
                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit));
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__round_up 
                = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                    ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                 >> 1U))) && ((1U & 
                                               (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                              && (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)))
                    : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                        ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact) 
                               & (~ (vlSelfRef.__PVT__FPU_in1 
                                     >> 0x1fU))) : 
                           ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact) 
                            & (vlSelfRef.__PVT__FPU_in1 
                               >> 0x1fU))) : ((1U & 
                                               (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                              && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit) 
                                                  & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__lsb) 
                                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit)) 
                                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit))))));
            if (vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__round_up) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = (0x8000000000ULL + vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int);
            }
            if ((1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                               >> 0x3fU)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                    = VL_SHIFTR_QQI(64,64,32, vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int, 1U);
            }
            vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_mant 
                = (0xffffffU & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int 
                                        >> 0x27U)));
        }
    }
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result 
        = ((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type))
            ? (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_sign) 
                << 0x1fU) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_mant)))
            : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int));
    vlSelfRef.__PVT__FPU_flags = 0U;
    if ((0x40U & vlSelfRef.__PVT__EX_inst_out)) {
        if ((0x20U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_class_result;
                        }
                    } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                      << 4U));
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                       << 2U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                        }
                    } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                  << 4U));
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                    }
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__EX_inst_out 
                                                           >> 0x1dU))) 
                                                      || ((1U 
                                                           & (vlSelfRef.__PVT__EX_inst_out 
                                                              >> 0x1cU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__EX_inst_out 
                                                                  >> 0x1bU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.__PVT__EX_inst_out 
                                                                      >> 0x1aU)) 
                                                                  || ((1U 
                                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                                          >> 0x19U)) 
                                                                      || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp_invalid)))))) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_out = ((0x20000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 
                                                ((0x10000000U 
                                                  & vlSelfRef.__PVT__EX_inst_out)
                                                  ? 0x7fc00000U
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelfRef.__PVT__EX_inst_out)
                                                   ? 0x7fc00000U
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelfRef.__PVT__EX_inst_out)
                                                    ? 0x7fc00000U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelfRef.__PVT__EX_inst_out)
                                                     ? 0x7fc00000U
                                                     : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp)))))
                                                 : 0x7fc00000U);
                }
            } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_invalid) 
                                      << 4U));
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0x1eU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inexact));
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result;
                        }
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    }
                } else {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                }
            } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((1U 
                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                          >> 0x1aU)) 
                                                      || ((1U 
                                                           & (vlSelfRef.__PVT__EX_inst_out 
                                                              >> 0x19U)) 
                                                          || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_invalid))) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_out = ((0x4000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 0x7fc00000U
                                                 : 
                                                ((0x2000000U 
                                                  & vlSelfRef.__PVT__EX_inst_out)
                                                  ? 0x7fc00000U
                                                  : vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_result));
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_fsgnj_result;
                }
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_invalid) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_divbyzero) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_overflow) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_underflow) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact)));
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_result;
                    }
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_invalid) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_overflow) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact))));
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_result;
                }
            } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else {
                vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_invalid) 
                                                 << 4U));
                vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_overflow) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_underflow) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact))));
                vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_result;
            }
        } else if ((0x10U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_class_result;
                        }
                    } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                      << 4U));
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                       << 2U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                        }
                    } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                  << 4U));
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                    }
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__EX_inst_out 
                                                           >> 0x1dU))) 
                                                      || ((1U 
                                                           & (vlSelfRef.__PVT__EX_inst_out 
                                                              >> 0x1cU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__EX_inst_out 
                                                                  >> 0x1bU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.__PVT__EX_inst_out 
                                                                      >> 0x1aU)) 
                                                                  || ((1U 
                                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                                          >> 0x19U)) 
                                                                      || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp_invalid)))))) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_out = ((0x20000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 
                                                ((0x10000000U 
                                                  & vlSelfRef.__PVT__EX_inst_out)
                                                  ? 0x7fc00000U
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelfRef.__PVT__EX_inst_out)
                                                   ? 0x7fc00000U
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelfRef.__PVT__EX_inst_out)
                                                    ? 0x7fc00000U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelfRef.__PVT__EX_inst_out)
                                                     ? 0x7fc00000U
                                                     : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp)))))
                                                 : 0x7fc00000U);
                }
            } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_invalid) 
                                      << 4U));
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0x1eU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inexact));
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result;
                        }
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    }
                } else {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                }
            } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((1U 
                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                          >> 0x1aU)) 
                                                      || ((1U 
                                                           & (vlSelfRef.__PVT__EX_inst_out 
                                                              >> 0x19U)) 
                                                          || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_invalid))) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_out = ((0x4000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 0x7fc00000U
                                                 : 
                                                ((0x2000000U 
                                                  & vlSelfRef.__PVT__EX_inst_out)
                                                  ? 0x7fc00000U
                                                  : vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_result));
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_fsgnj_result;
                }
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_invalid) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_divbyzero) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_overflow) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_underflow) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact)));
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_result;
                    }
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_invalid) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_overflow) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact))));
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_result;
                }
            } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else {
                vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_invalid) 
                                                 << 4U));
                vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_overflow) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_underflow) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact))));
                vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_result;
            }
        } else if ((2U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((1U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_invalid) 
                                                  | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_invalid)) 
                                                 << 4U));
                vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_overflow) 
                                                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_overflow)) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_underflow) 
                                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_underflow)) 
                                                     << 1U) 
                                                    | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_inexact) 
                                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_inexact)))));
                vlSelfRef.__PVT__FPU_out = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign) 
                                             << 0x1fU) 
                                            | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant)));
            } else if ((vlSelfRef.__PVT__EX_inst_out 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_class_result;
                        }
                    } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                      << 4U));
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                       << 2U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                        }
                    } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                  << 4U));
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                    }
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__EX_inst_out 
                                                           >> 0x1dU))) 
                                                      || ((1U 
                                                           & (vlSelfRef.__PVT__EX_inst_out 
                                                              >> 0x1cU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__EX_inst_out 
                                                                  >> 0x1bU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.__PVT__EX_inst_out 
                                                                      >> 0x1aU)) 
                                                                  || ((1U 
                                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                                          >> 0x19U)) 
                                                                      || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp_invalid)))))) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_out = ((0x20000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 
                                                ((0x10000000U 
                                                  & vlSelfRef.__PVT__EX_inst_out)
                                                  ? 0x7fc00000U
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelfRef.__PVT__EX_inst_out)
                                                   ? 0x7fc00000U
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelfRef.__PVT__EX_inst_out)
                                                    ? 0x7fc00000U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelfRef.__PVT__EX_inst_out)
                                                     ? 0x7fc00000U
                                                     : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp)))))
                                                 : 0x7fc00000U);
                }
            } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            vlSelfRef.__PVT__FPU_flags 
                                = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                        } else {
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_invalid) 
                                      << 4U));
                            vlSelfRef.__PVT__FPU_flags 
                                = ((0x1eU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inexact));
                            vlSelfRef.__PVT__FPU_out 
                                = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result;
                        }
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    }
                } else {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                }
            } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((1U 
                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                          >> 0x1aU)) 
                                                      || ((1U 
                                                           & (vlSelfRef.__PVT__EX_inst_out 
                                                              >> 0x19U)) 
                                                          || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_invalid))) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_out = ((0x4000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 0x7fc00000U
                                                 : 
                                                ((0x2000000U 
                                                  & vlSelfRef.__PVT__EX_inst_out)
                                                  ? 0x7fc00000U
                                                  : vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_result));
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_fsgnj_result;
                }
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_invalid) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_divbyzero) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_overflow) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_underflow) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact)));
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_result;
                    }
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_invalid) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_overflow) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact))));
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_result;
                }
            } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else {
                vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_invalid) 
                                                 << 4U));
                vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_overflow) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_underflow) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact))));
                vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_result;
            }
        } else if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
            if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_class_result;
                    }
                } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                  << 4U));
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                   << 2U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                    }
                } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                }
            } else {
                vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | (((1U 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__EX_inst_out 
                                                       >> 0x1dU))) 
                                                  || ((1U 
                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                          >> 0x1cU)) 
                                                      || ((1U 
                                                           & (vlSelfRef.__PVT__EX_inst_out 
                                                              >> 0x1bU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__EX_inst_out 
                                                                  >> 0x1aU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.__PVT__EX_inst_out 
                                                                      >> 0x19U)) 
                                                                  || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp_invalid)))))) 
                                                 << 4U));
                vlSelfRef.__PVT__FPU_out = ((0x20000000U 
                                             & vlSelfRef.__PVT__EX_inst_out)
                                             ? ((0x10000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 0x7fc00000U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelfRef.__PVT__EX_inst_out)
                                                  ? 0x7fc00000U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelfRef.__PVT__EX_inst_out)
                                                   ? 0x7fc00000U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelfRef.__PVT__EX_inst_out)
                                                    ? 0x7fc00000U
                                                    : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp)))))
                                             : 0x7fc00000U);
            }
        } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        vlSelfRef.__PVT__FPU_flags 
                            = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
                        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                    } else {
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_invalid) 
                                  << 4U));
                        vlSelfRef.__PVT__FPU_flags 
                            = ((0x1eU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                               | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inexact));
                        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result;
                    }
                } else {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                }
            } else {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            }
        } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | (((1U 
                                                   & (vlSelfRef.__PVT__EX_inst_out 
                                                      >> 0x1aU)) 
                                                  || ((1U 
                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                          >> 0x19U)) 
                                                      || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_invalid))) 
                                                 << 4U));
                vlSelfRef.__PVT__FPU_out = ((0x4000000U 
                                             & vlSelfRef.__PVT__EX_inst_out)
                                             ? 0x7fc00000U
                                             : ((0x2000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 0x7fc00000U
                                                 : vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_result));
            } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else {
                vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_fsgnj_result;
            }
        } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((
                                                   ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_invalid) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_divbyzero) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_overflow) 
                                                         << 2U))) 
                                                  | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_underflow) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact)));
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_result;
                }
            } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else {
                vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_invalid) 
                                                 << 4U));
                vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_overflow) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact))));
                vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_result;
            }
        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        } else {
            vlSelfRef.__PVT__FPU_flags = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                          | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_invalid) 
                                             << 4U));
            vlSelfRef.__PVT__FPU_flags = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                          | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_overflow) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_underflow) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact))));
            vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_result;
        }
    } else if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
        if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_class_result;
                }
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
                }
            } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else {
                vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_invalid) 
                                                 << 4U));
                vlSelfRef.__PVT__FPU_flags = ((0x18U 
                                               & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                              | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_overflow) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inexact)));
                vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result;
            }
        } else {
            vlSelfRef.__PVT__FPU_flags = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                          | (((1U & 
                                               (~ (vlSelfRef.__PVT__EX_inst_out 
                                                   >> 0x1dU))) 
                                              || ((1U 
                                                   & (vlSelfRef.__PVT__EX_inst_out 
                                                      >> 0x1cU)) 
                                                  || ((1U 
                                                       & (vlSelfRef.__PVT__EX_inst_out 
                                                          >> 0x1bU)) 
                                                      || ((1U 
                                                           & (vlSelfRef.__PVT__EX_inst_out 
                                                              >> 0x1aU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__EX_inst_out 
                                                                  >> 0x19U)) 
                                                              || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp_invalid)))))) 
                                             << 4U));
            vlSelfRef.__PVT__FPU_out = ((0x20000000U 
                                         & vlSelfRef.__PVT__EX_inst_out)
                                         ? ((0x10000000U 
                                             & vlSelfRef.__PVT__EX_inst_out)
                                             ? 0x7fc00000U
                                             : ((0x8000000U 
                                                 & vlSelfRef.__PVT__EX_inst_out)
                                                 ? 0x7fc00000U
                                                 : 
                                                ((0x4000000U 
                                                  & vlSelfRef.__PVT__EX_inst_out)
                                                  ? 0x7fc00000U
                                                  : 
                                                 ((0x2000000U 
                                                   & vlSelfRef.__PVT__EX_inst_out)
                                                   ? 0x7fc00000U
                                                   : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_cmp)))))
                                         : 0x7fc00000U);
        }
    } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
        if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    vlSelfRef.__PVT__FPU_flags = (0x10U 
                                                  | (IData)(vlSelfRef.__PVT__FPU_flags));
                    vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
                } else {
                    vlSelfRef.__PVT__FPU_flags = ((0xfU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_invalid) 
                                                     << 4U));
                    vlSelfRef.__PVT__FPU_flags = ((0x1eU 
                                                   & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                                  | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inexact));
                    vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result;
                }
            } else {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            }
        } else {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        }
    } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
        if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        } else if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                          | (((1U & 
                                               (vlSelfRef.__PVT__EX_inst_out 
                                                >> 0x1aU)) 
                                              || ((1U 
                                                   & (vlSelfRef.__PVT__EX_inst_out 
                                                      >> 0x19U)) 
                                                  || (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_invalid))) 
                                             << 4U));
            vlSelfRef.__PVT__FPU_out = ((0x4000000U 
                                         & vlSelfRef.__PVT__EX_inst_out)
                                         ? 0x7fc00000U
                                         : ((0x2000000U 
                                             & vlSelfRef.__PVT__EX_inst_out)
                                             ? 0x7fc00000U
                                             : vlSelfRef.__PVT__m_FPU__DOT__sp_min_max_result));
        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        } else {
            vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_fsgnj_result;
        }
    } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
        if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__FPU_flags = (0x10U 
                                              | (IData)(vlSelfRef.__PVT__FPU_flags));
                vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
            } else {
                vlSelfRef.__PVT__FPU_flags = ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_invalid) 
                                                << 4U) 
                                               | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_divbyzero) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_overflow) 
                                                     << 2U))) 
                                              | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_underflow) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact)));
                vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_result;
            }
        } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
            vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
            vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
        } else {
            vlSelfRef.__PVT__FPU_flags = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                          | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_invalid) 
                                             << 4U));
            vlSelfRef.__PVT__FPU_flags = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                          | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_overflow) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact))));
            vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_result;
        }
    } else if ((0x4000000U & vlSelfRef.__PVT__EX_inst_out)) {
        vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
    } else if ((0x2000000U & vlSelfRef.__PVT__EX_inst_out)) {
        vlSelfRef.__PVT__FPU_flags = (0x10U | (IData)(vlSelfRef.__PVT__FPU_flags));
        vlSelfRef.__PVT__FPU_out = 0x7fc00000U;
    } else {
        vlSelfRef.__PVT__FPU_flags = ((0xfU & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                      | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_invalid) 
                                         << 4U));
        vlSelfRef.__PVT__FPU_flags = ((0x18U & (IData)(vlSelfRef.__PVT__FPU_flags)) 
                                      | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_overflow) 
                                          << 2U) | 
                                         (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_underflow) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact))));
        vlSelfRef.__PVT__FPU_out = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_result;
    }
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__1(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__m_EX__DOT__started;
    __Vdly__m_EX__DOT__started = 0;
    CData/*0:0*/ __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign;
    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign = 0;
    CData/*7:0*/ __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp;
    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 0;
    IData/*27:0*/ __Vdly__m_FPU__DOT__sp_adder_inst__DOT__mant_sum;
    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__mant_sum = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 0;
    QData/*47:0*/ __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant;
    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant = 0;
    IData/*31:0*/ __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0;
    IData/*31:0*/ __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff = 0;
    IData/*28:0*/ __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient = 0;
    QData/*50:0*/ __Vdly__m_FPU__DOT__sp_divider_inst__DOT__divisor;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__divisor = 0;
    QData/*50:0*/ __Vdly__m_FPU__DOT__sp_divider_inst__DOT__dividend;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__dividend = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time = 0;
    IData/*31:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__x2;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__x2 = 0;
    IData/*31:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b = 0;
    CData/*0:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start = 0;
    IData/*31:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__y;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__y = 0;
    CData/*7:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 0;
    IData/*27:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum = 0;
    CData/*0:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 0;
    CData/*0:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact = 0;
    QData/*47:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant = 0;
    IData/*31:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff = 0;
    CData/*0:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0;
    IData/*31:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff = 0;
    IData/*28:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient = 0;
    QData/*50:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor = 0;
    QData/*50:0*/ __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 0;
    QData/*47:0*/ __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant = 0;
    IData/*31:0*/ __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff = 0;
    CData/*0:0*/ __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign = 0;
    CData/*7:0*/ __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0;
    CData/*3:0*/ __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 0;
    IData/*27:0*/ __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum = 0;
    IData/*31:0*/ __Vdly__u_lsu__DOT__LDQ__DOT__count;
    __Vdly__u_lsu__DOT__LDQ__DOT__count = 0;
    CData/*1:0*/ __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state;
    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 0;
    IData/*31:0*/ __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r;
    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r = 0;
    CData/*1:0*/ __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v0;
    __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v0 = 0;
    SData/*10:0*/ __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v0;
    __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v0 = 0;
    SData/*10:0*/ __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v1;
    __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v1 = 0;
    SData/*11:0*/ __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v0;
    __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v0;
    __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v0;
    __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v0;
    __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram__v0;
    __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram__v1;
    __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v1;
    __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v1;
    __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v1 = 0;
    VlWide<3>/*76:0*/ __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0;
    VL_ZERO_W(77, __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0);
    CData/*4:0*/ __VdlyDim0__u_lsu__DOT__LDQ__DOT__ram_q__v0;
    __VdlyDim0__u_lsu__DOT__LDQ__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v0;
    __VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v1;
    __VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v1 = 0;
    // Body
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum;
    __Vdly__u_lsu__DOT__LDQ__DOT__count = vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count;
    __VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v0 = 0U;
    __VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v1 = 0U;
    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r 
        = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r;
    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state 
        = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum;
    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_sign;
    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__divisor 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__divisor;
    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__dividend 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__dividend;
    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant;
    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__x2 = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__x2;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__y = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__y;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_done;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend;
    __Vdly__m_EX__DOT__started = vlSelfRef.__PVT__m_EX__DOT__started;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant;
    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign;
    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__i = 0x20U;
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__EX_is_br_out) {
            __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v0 
                = ((2U & vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht
                    [vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__update_index])
                    ? ((1U & vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht
                        [vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__update_index])
                        ? ((IData)(vlSelfRef.__PVT__br_taken)
                            ? 3U : 2U) : ((IData)(vlSelfRef.__PVT__br_taken)
                                           ? 3U : 1U))
                    : ((1U & vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht
                        [vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__update_index])
                        ? ((IData)(vlSelfRef.__PVT__br_taken)
                            ? 2U : 0U) : ((IData)(vlSelfRef.__PVT__br_taken)
                                           ? 1U : 0U)));
            __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v0 
                = vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__update_index;
            vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht.enqueue(__VdlyVal__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v0, (IData)(__VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v0));
        }
    } else {
        vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__i = 0U;
        while (VL_GTS_III(32, 0x800U, vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__i)) {
            __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v1 
                = (0x7ffU & vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht.enqueue(0U, (IData)(__VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht__v1));
            vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__i 
                = ((IData)(1U) + vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__i);
        }
    }
    if (vlSymsp->TOP.rst_n) {
        if (((IData)(vlSelfRef.__PVT__EX_is_br_out) 
             & (IData)(vlSelfRef.__PVT__br_taken))) {
            __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v0 
                = (vlSelfRef.__PVT__EX_pc_out >> 0x14U);
            __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v0 
                = (0x7ffU & (vlSelfRef.__PVT__EX_pc_out 
                             >> 2U));
            vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram.enqueue(__VdlyVal__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v0, (IData)(__VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v0));
            __VdlyVal__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v0 
                = vlSelfRef.__PVT__ALU_out;
            __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v0 
                = (0x7ffU & (vlSelfRef.__PVT__EX_pc_out 
                             >> 2U));
            vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram.enqueue(__VdlyVal__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v0, (IData)(__VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v0));
            __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram__v0 
                = (0x7ffU & (vlSelfRef.__PVT__EX_pc_out 
                             >> 2U));
            vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram.enqueue(1U, (IData)(__VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram__v0));
        }
    } else {
        vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__i = 0U;
        while (VL_GTS_III(32, 0x800U, vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__i)) {
            __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram__v1 
                = (0x7ffU & vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram.enqueue(0U, (IData)(__VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram__v1));
            __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v1 
                = (0x7ffU & vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram.enqueue(0U, (IData)(__VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram__v1));
            __VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v1 
                = (0x7ffU & vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__i);
            vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram.enqueue(0U, (IData)(__VdlyDim0__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram__v1));
            vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__i 
                = ((IData)(1U) + vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__i);
        }
    }
    vlSelfRef.__PVT__csr_interrupt = ((8U & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q)
                                       ? (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mie_q 
                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_q)
                                       : 0U);
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__stall_r 
        = ((IData)(vlSymsp->TOP.rst_n) && (1U & ((IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__stall_r)
                                                  ? 
                                                 (~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__d_available_pre))
                                                  : (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_wr_c))));
    vlSelfRef.__PVT__u_lsu__DOT__pop_pre = ((IData)(vlSymsp->TOP.rst_n) 
                                            & (IData)(vlSelfRef.__PVT__u_lsu__DOT__pop_q));
    vlSelfRef.__PVT__u_lsu__DOT__u_lh = ((IData)(vlSymsp->TOP.rst_n) 
                                         && ((IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_1_r) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))));
    vlSelfRef.__PVT__u_lsu__DOT__u_sign = ((IData)(vlSymsp->TOP.rst_n) 
                                           && (((IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_1_r) 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))) 
                                               && (IData)(vlSelfRef.__PVT__u_lsu__DOT__sign_inst)));
    vlSelfRef.__PVT__u_lsu__DOT__u_state = ((IData)(vlSymsp->TOP.rst_n) 
                                            && (((IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_1_r) 
                                                 & (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))) 
                                                || (IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_2_r)));
    vlSelfRef.__PVT__u_lsu__DOT__u_rd = ((IData)(vlSymsp->TOP.rst_n) 
                                         && (((IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_1_r) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)))
                                              ? (IData)(vlSelfRef.__PVT__u_lsu__DOT__ld_inst)
                                              : ((IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_2_r) 
                                                 && (IData)(vlSelfRef.__PVT__u_lsu__DOT__ld_inst))));
    vlSelfRef.__PVT__u_lsu__DOT__u_wr = ((IData)(vlSymsp->TOP.rst_n) 
                                         && (((IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_1_r) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)))
                                              ? (IData)(vlSelfRef.__PVT__u_lsu__DOT__st_inst)
                                              : ((IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_2_r) 
                                                 && (IData)(vlSelfRef.__PVT__u_lsu__DOT__st_inst))));
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__dcache_rd_r 
        = ((IData)(vlSymsp->TOP.rst_n) && (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_rd_c));
    vlSelfRef.__PVT__u_lsu__DOT__resp_valid_pre = ((IData)(vlSymsp->TOP.rst_n) 
                                                   && (0U 
                                                       != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count));
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__dcache_wr_r 
        = ((IData)(vlSymsp->TOP.rst_n) && (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_wr_c));
    if (vlSymsp->TOP.rst_n) {
        __Vdly__u_lsu__DOT__LDQ__DOT__count = ((2U 
                                                == 
                                                ((((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__full)) 
                                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__push_q)) 
                                                  << 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__empty)) 
                                                    & (IData)(vlSelfRef.__PVT__u_lsu__DOT__pop_q))))
                                                ? ((IData)(1U) 
                                                   + vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count)
                                                : (
                                                   (1U 
                                                    == 
                                                    ((((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__full)) 
                                                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__push_q)) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__empty)) 
                                                        & (IData)(vlSelfRef.__PVT__u_lsu__DOT__pop_q))))
                                                    ? 
                                                   (vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count 
                                                    - (IData)(1U))
                                                    : vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count));
        if (((0U != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count) 
             & (IData)(vlSelfRef.__PVT__u_lsu__DOT__pop_q))) {
            vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr 
                = ((0x1fU == vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)
                    ? 0U : ((IData)(1U) + vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr));
        }
        if (vlSelfRef.__PVT__EX_is_br_out) {
            vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__ghr 
                = ((0xeU & ((IData)(vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__ghr) 
                            << 1U)) | (IData)(vlSelfRef.__PVT__br_taken));
        }
        if (((2U != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count) 
             & (IData)(vlSelfRef.__PVT__u_lsu__DOT__push_q))) {
            if (vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r) {
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[0U] 
                    = (IData)((QData)((IData)(((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_lb) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__lh_inst) 
                                                    << 0xbU) 
                                                   | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__lw_inst) 
                                                      << 0xaU))) 
                                               | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_sign) 
                                                   << 9U) 
                                                  | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_5)))))));
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[1U] 
                    = ((vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r 
                        << 0xdU) | (IData)(((QData)((IData)(
                                                            ((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_lb) 
                                                               << 0xcU) 
                                                              | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__lh_inst) 
                                                                  << 0xbU) 
                                                                 | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__lw_inst) 
                                                                    << 0xaU))) 
                                                             | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_sign) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_5)))))) 
                                            >> 0x20U)));
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[2U] 
                    = (vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r 
                       >> 0x13U);
            } else if (vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r) {
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[0U] 
                    = (((IData)((((QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r)))) 
                        << 0xdU) | ((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_lb) 
                                      << 0xcU) | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__lh_inst) 
                                                  << 0xbU)) 
                                    | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__lw_inst) 
                                        << 0xaU) | 
                                       (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_sign) 
                                         << 9U) | (
                                                   ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r) 
                                                    << 7U) 
                                                   | (IData)(vlSelfRef.u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_5))))));
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[1U] 
                    = (((IData)((((QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r)))) 
                        >> 0x13U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r))) 
                                              >> 0x20U)) 
                                     << 0xdU));
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[2U] 
                    = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_r))) 
                                >> 0x20U)) >> 0x13U);
            } else {
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[0U] = 0U;
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[1U] = 0U;
                __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[2U] = 0U;
            }
            __VdlyDim0__u_lsu__DOT__LDQ__DOT__ram_q__v0 
                = (0x1fU & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__wr_ptr);
            __VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v0 = 1U;
            vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__wr_ptr 
                = ((0x1fU == vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__wr_ptr)
                    ? 0U : ((IData)(1U) + vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__wr_ptr));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__EX_done) 
                   | (~ ((IData)(vlSelfRef.__PVT__EX_pc_valid_out) 
                         & (IData)(vlSelfRef.__PVT__EX_is_impl_out)))))) {
            __Vdly__m_EX__DOT__started = 0U;
        } else if ((((IData)(vlSelfRef.__PVT__EX_pc_valid_out) 
                     & (IData)(vlSelfRef.__PVT__EX_is_impl_out)) 
                    & (~ (IData)(vlSelfRef.__PVT__m_EX__DOT__started)))) {
            __Vdly__m_EX__DOT__started = 1U;
        }
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i;
        if (vlSelfRef.u_mmu__DOT____Vcellinp__MMU__DOT__DTLB__update_i) {
            vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__entry_q 
                = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__update_entry;
            vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__tlb_valid_r = 1U;
            vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__vpn_q 
                = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_vpn_i;
        }
        if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__unaligned_1_r) 
             & (3U == (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)))) {
            vlSelfRef.__PVT__u_lsu__DOT__u_addr = ((IData)(4U) 
                                                   + vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r);
            vlSelfRef.__PVT__u_lsu__DOT__u_type = 1U;
            vlSelfRef.__PVT__u_lsu__DOT__u_data = vlSelfRef.__PVT__u_lsu__DOT__rb_data;
        } else if (vlSelfRef.__PVT__u_lsu__DOT__unaligned_2_r) {
            vlSelfRef.__PVT__u_lsu__DOT__u_addr = ((IData)(4U) 
                                                   + vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r);
            vlSelfRef.__PVT__u_lsu__DOT__u_type = (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))
                                                     ? 3U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))
                                                      ? 4U
                                                      : 0U)));
            vlSelfRef.__PVT__u_lsu__DOT__u_data = vlSelfRef.__PVT__u_lsu__DOT__rb_data;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__u_type = 0U;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state))) {
            vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__entry_q 
                = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__update_entry;
            vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__tlb_valid_r = 1U;
            vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__vpn_q 
                = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__itlb_vpn_i;
        }
        if (vlSelfRef.__PVT__EX_en) {
            vlSelfRef.__PVT__EX_is_MUL_DIV_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                                  & (IData)(vlSelfRef.__PVT__is_MUL_DIV));
            vlSelfRef.__PVT__EX_is_j_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                            & (IData)(vlSelfRef.__PVT__is_j));
            vlSelfRef.__PVT__m_EX__DOT__ALU_sel2_o 
                = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                   & ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_86) 
                      | (IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_68)));
            if (vlSelfRef.__PVT__EX_clear) {
                vlSelfRef.__PVT__EX_ALU_ctrl_out = 0U;
                vlSelfRef.__PVT__EX_bp_pred_target_out = 0U;
            } else {
                vlSelfRef.__PVT__EX_ALU_ctrl_out = vlSelfRef.__PVT__ALU_ctrl;
                vlSelfRef.__PVT__EX_bp_pred_target_out 
                    = vlSelfRef.__PVT__ID_bp_pred_target_out;
            }
            vlSelfRef.__PVT__EX_bp_pred_taken_out = 
                ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                 & (IData)(vlSelfRef.__PVT__ID_bp_pred_taken_out));
        }
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_i;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_i;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_i;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_i;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_i;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_i;
    } else {
        __Vdly__u_lsu__DOT__LDQ__DOT__count = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr = 0U;
        vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__ghr = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__wr_ptr = 0U;
        __VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v1 = 1U;
        __Vdly__m_EX__DOT__started = 0U;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__entry_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__u_type = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__entry_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__tlb_valid_r = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__vpn_q = 0U;
        vlSelfRef.__PVT__EX_is_MUL_DIV_out = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__tlb_valid_r = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__vpn_q = 0U;
        vlSelfRef.__PVT__EX_is_j_out = 0U;
        vlSelfRef.__PVT__m_EX__DOT__ALU_sel2_o = 0U;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o = 0ULL;
        vlSelfRef.__PVT__EX_ALU_ctrl_out = 0U;
        vlSelfRef.__PVT__EX_bp_pred_target_out = 0U;
        vlSelfRef.__PVT__EX_bp_pred_taken_out = 0U;
    }
    vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht.commit(vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht);
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_valid_r 
        = ((IData)(vlSymsp->TOP.rst_n) && ((IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_rd_r) 
                                           & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_available_pre)));
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__EX_en) {
            vlSelfRef.__PVT__EX_is_fpu_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                              & (IData)(vlSelfRef.__PVT__is_fpu));
            vlSelfRef.__PVT__EX_is_csr_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                              & (IData)(vlSelfRef.__PVT__is_csr));
            vlSelfRef.__PVT__EX_fetch_invalid_out = 
                ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                 & ((0xfU == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                    | ((0x100fU == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                       | (0x12000073U == (0xfe007fffU 
                                          & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)))));
            if (vlSelfRef.__PVT__EX_clear) {
                vlSelfRef.__PVT__m_EX__DOT__cmp_op_o = 0U;
                vlSelfRef.__PVT__EX_mem_ctrl_out = 0U;
            } else {
                vlSelfRef.__PVT__m_EX__DOT__cmp_op_o 
                    = ((0x63U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                        ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_29)
                                 ? ((0x1063U == (0x707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                     ? 1U : ((0x4063U 
                                              == (0x707fU 
                                                  & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                              ? 2U : 
                                             ((0x5063U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                               ? 3U
                                               : ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                   ? 4U
                                                   : 
                                                  ((0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                    ? 5U
                                                    : 7U)))))
                                 : 0U));
                vlSelfRef.__PVT__EX_mem_ctrl_out = 
                    ((IData)(vlSelfRef.__PVT__m_ID__DOT__m_Control__DOT__is_lsu_w)
                      ? ((3U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                          ? 9U : ((0x4003U == (0x707fU 
                                               & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                   ? 1U : ((0x1003U 
                                            == (0x707fU 
                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                            ? 0xaU : 
                                           ((0x5003U 
                                             == (0x707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                             ? 2U : 
                                            ((0x2003U 
                                              == (0x707fU 
                                                  & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                              ? 4U : 
                                             ((0x23U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                               ? 1U
                                               : ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                   ? 2U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                    ? 4U
                                                    : 
                                                   ((0x2007U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                     ? 4U
                                                     : 
                                                    ((0x2027U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                      ? 0xcU
                                                      : 0U))))))))))
                      : 0U);
            }
            vlSelfRef.__PVT__m_EX__DOT__ALU_sel1_o 
                = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                   & ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_87) 
                      | ((0x33U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                         | ((0x2033U == (0xfe00707fU 
                                         & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                            | ((0x3033U == (0xfe00707fU 
                                            & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                               | ((0x7033U == (0xfe00707fU 
                                               & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                  | ((0x6033U == (0xfe00707fU 
                                                  & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                     | ((0x4033U == 
                                         (0xfe00707fU 
                                          & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                        | ((0x1033U 
                                            == (0xfe00707fU 
                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                           | ((0x5033U 
                                               == (0xfe00707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                              | ((0x40000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                 | ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                    | (0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))))))))))))));
            vlSelfRef.__PVT__EX_mem_rd_en_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                                 & ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_84) 
                                                    | ((0x2007U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                       | (0x3007U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)))));
            vlSelfRef.__PVT__EX_mem_wr_en_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                                 & ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                    | ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_79) 
                                                       | ((0x2027U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                          | (0x3027U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))))));
        }
        if ((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
             >> 0x1fU)) {
            if ((0U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state))) {
                if (((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                      >> 0x1fU) & ((~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit)) 
                                      & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_req))))) {
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 1U;
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r 
                        = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw_req_addr_r;
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r 
                        = (VL_SHIFTL_III(32,32,32, vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q, 0xcU) 
                           + (0xffcU & (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw_req_addr_r 
                                        >> 0x14U)));
                } else {
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 0U;
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r = 0U;
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_value_r = 0U;
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r = 0U;
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r = 0U;
                }
            } else if (((1U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state)) 
                        & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_valid))) {
                if (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_invalid) {
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r = 0U;
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_value_r = 0U;
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 3U;
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r = 1U;
                } else if ((IData)((0U != (0xeU & vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o)))) {
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r 
                        = (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r 
                           >> 0xcU);
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_value_r 
                        = vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o;
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 3U;
                } else {
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r 
                        = ((0xfffff000U & (vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o 
                                           << 2U)) 
                           + (0xffcU & (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r 
                                        >> 0xaU)));
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 2U;
                }
            } else if (((2U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state)) 
                        & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_valid))) {
                if (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_invalid) {
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r = 0U;
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_value_r = 0U;
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 3U;
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r = 1U;
                } else {
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r 
                        = (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r 
                           >> 0xcU);
                    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_value_r 
                        = vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o;
                    __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 3U;
                }
            } else {
                __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state 
                    = ((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state))
                        ? 0U : (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state));
            }
        } else {
            __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 0U;
        }
    } else {
        vlSelfRef.__PVT__EX_is_fpu_out = 0U;
        vlSelfRef.__PVT__EX_is_csr_out = 0U;
        vlSelfRef.__PVT__EX_fetch_invalid_out = 0U;
        vlSelfRef.__PVT__m_EX__DOT__cmp_op_o = 0U;
        vlSelfRef.__PVT__m_EX__DOT__ALU_sel1_o = 0U;
        vlSelfRef.__PVT__EX_mem_ctrl_out = 0U;
        vlSelfRef.__PVT__EX_mem_rd_en_out = 0U;
        __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_value_r = 0U;
        __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r = 0U;
        vlSelfRef.__PVT__EX_mem_wr_en_out = 0U;
    }
    vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram.commit(vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram);
    vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram.commit(vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram);
    vlSelfRef.__VdlyCommitQueuem_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram.commit(vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram);
    if (vlSymsp->TOP.rst_n) {
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_done = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_done = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_done = 0U;
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_done = 1U;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign = 0U;
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_done = 0U;
                } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__round_up) {
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                        = (0xfffffffU & ((IData)(8U) 
                                         + vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__round_up = 0U;
                } else if ((0x8000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum)) {
                    if ((0xfeU == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_overflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact = 1U;
                        __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0U;
                    } else {
                        __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp)));
                        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant 
                            = (0xffffffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                                            >> 4U));
                    }
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 8U;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant 
                        = (0xffffffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                                        >> 3U));
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 8U;
                    if ((0xfeU < (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_overflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact = 1U;
                        __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0U;
                    } else if ((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_underflow = 1U;
                        __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact 
                    = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__g_bit) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__r_bit)) 
                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit));
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__round_up 
                    = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                        ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                     >> 1U))) && ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                                  && (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__g_bit) 
                                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__r_bit)) 
                                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit))))
                        : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                ? ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit)) 
                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_sign)))
                                : ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit)) 
                                   & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_sign)))
                            : ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                               && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__g_bit) 
                                   & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__lsb) 
                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__r_bit)) 
                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit))))));
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 6U;
            } else if ((0x8000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum)) {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp)));
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                    = (0xfffffffU & VL_SHIFTR_III(28,28,32, vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum, 1U));
            } else if ((0x4000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum)) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__lsb 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                             >> 3U));
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__g_bit 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                             >> 2U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__r_bit 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                             >> 1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit 
                    = (1U & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit) 
                             | vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum));
            } else {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp) 
                                - (IData)(1U)));
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                    = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum, 1U));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit 
                    = ((0x1aU < (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_diff))
                        ? (0U != vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__temp_smaller)
                        : (0U != (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__temp_smaller 
                                  & (VL_SHIFTL_III(32,32,8, (IData)(1U), (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_diff)) 
                                     - (IData)(1U)))));
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
                    = (0xfffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sub)
                                      ? (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_larger 
                                         - vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_smaller)
                                      : (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_larger 
                                         + vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_smaller)));
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 4U;
            } else {
                if ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec) 
                      > (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec)) 
                     | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec) 
                         == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec)) 
                        & (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_a_dec 
                           >= vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_b_dec)))) {
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_a_dec;
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_diff 
                        = (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec) 
                              == ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec))) 
                             & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_denormal)) 
                            & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b)))
                            ? 0U : (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec) 
                                             - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec))));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_larger 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_a_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__temp_smaller 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_b_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_smaller 
                        = (0xfffffffU & VL_SHIFTR_III(28,28,8, 
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_b_dec 
                                                       << 3U), 
                                                      (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec) 
                                                          == 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec))) 
                                                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_denormal)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b)))
                                                        ? 0U
                                                        : 
                                                       (0xffU 
                                                        & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec) 
                                                           - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec))))));
                } else {
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_b_dec;
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_diff 
                        = (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec) 
                              == ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec))) 
                             & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_denormal)) 
                            & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_a_dec)))
                            ? 0U : (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec) 
                                             - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec))));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_larger 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_b_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__temp_smaller 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_a_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_smaller 
                        = (0xfffffffU & VL_SHIFTR_III(28,28,8, 
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_a_dec 
                                                       << 3U), 
                                                      (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec) 
                                                          == 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec))) 
                                                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_denormal)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_a_dec)))
                                                        ? 0U
                                                        : 
                                                       (0xffU 
                                                        & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec) 
                                                           - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec))))));
                }
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state))) {
            if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_nan) 
                 | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_nan))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_invalid = 1U;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_infinity) {
                if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_infinity) 
                     & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_a_dec) 
                        != (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_invalid = 1U;
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign = 0U;
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0xc00000U;
                } else {
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_a_dec;
                    __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0U;
                }
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_infinity) {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_zero) {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_b_dec;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_zero) {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_a_dec;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_a_dec;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 8U;
            } else {
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 2U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_adder_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_adder_overflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_adder_underflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inexact = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_adder_done = 0U;
            if (((IData)(vlSelfRef.__PVT__FPU_start) 
                 & (IData)(vlSelfRef.__PVT__m_FPU__DOT__enable_mask))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
                    = vlSelfRef.__PVT__FPU_in1;
                vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg 
                    = vlSelfRef.__PVT__EX_freg_fwd_data2;
                __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_done = 0U;
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_done = 0U;
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0U;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_done = 1U;
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
                if (VL_GTS_III(32, 0xffffffe9U, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_underflow = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp = 0U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant = 0U;
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0xaU;
                } else if (VL_LTS_III(32, 0xfeU, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_overflow = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp = 0xffU;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant = 0U;
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0xaU;
                } else if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff)) {
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
                        = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff);
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                        = (0x1fffffffU & VL_SHIFTR_III(29,29,32, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient, 1U));
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp 
                        = (0xffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant 
                        = (0xffffffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                                        >> 4U));
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0xaU;
                }
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__round_up) {
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                    = (0x1fffffffU & ((IData)(8U) + vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient));
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__round_up = 0U;
            } else if ((0x10000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient)) {
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                    = (0x1fffffffU & VL_SHIFTR_III(29,29,32, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient, 1U));
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
                    = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff);
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 9U;
            } else {
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact 
                        = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__g_bit) 
                            | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__r_bit)) 
                           | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__s_bit));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__round_up 
                        = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                         >> 1U))) && 
                               ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                && (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__s_bit))))
                            : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                    ? ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__g_bit) 
                                         | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__r_bit)) 
                                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__s_bit)) 
                                       & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__sign_a_dec)))
                                    : ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__g_bit) 
                                         | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__r_bit)) 
                                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__s_bit)) 
                                       & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__sign_a_dec)))
                                : ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                   && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__g_bit) 
                                       & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__lsb) 
                                           | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__r_bit)) 
                                          | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__s_bit))))));
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 8U;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_done = 0U;
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
                if ((0x8000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__lsb 
                        = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                                 >> 3U));
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 7U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__g_bit 
                        = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                                 >> 2U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__r_bit 
                        = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                                 >> 1U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__s_bit 
                        = (1U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient);
                } else {
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                        = (0x1fffffffU & VL_SHIFTL_III(29,29,32, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient, 1U));
                }
            } else if ((0x1aU > (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__count))) {
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__divisor 
                    = (0x7ffffffffffffULL & VL_SHIFTR_QQI(51,51,32, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__divisor, 1U));
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                    = (0x1fffffffU & VL_SHIFTL_III(29,29,32, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient, 1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__count)));
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 3U;
            } else {
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
                if ((vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__dividend 
                     >= vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__divisor)) {
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__dividend 
                        = (0x7ffffffffffffULL & (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__dividend 
                                                 - vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__divisor));
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient 
                        = (0x1fffffffU & ((IData)(1U) 
                                          + vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient));
                } else {
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__dividend 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__dividend;
                }
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 4U;
            } else if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_div)) {
                if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_div)) {
                    if ((vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_div 
                         < vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_div)) {
                        __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
                            = (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
                               - (IData)(1U));
                    }
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__dividend 
                        = ((QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_div)) 
                           << 0x1bU);
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__divisor 
                        = ((QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_div)) 
                           << 0x1bU);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__count = 0U;
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 3U;
                } else {
                    __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
                        = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_div 
                        = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_div, 1U));
                }
            } else {
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
                    = (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
                       - (IData)(1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_div 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_div, 1U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state))) {
            if (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_nan) 
                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_nan)) 
                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_infinity) 
                     & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_infinity))) 
                 | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_zero) 
                    & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_zero)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_zero) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_divbyzero = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_infinity) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_zero) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_infinity) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else {
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
                    = (((IData)(0x7fU) + ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_a_dec) 
                                          - (IData)(0x7fU))) 
                       - ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_b_dec) 
                          - (IData)(0x7fU)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_div 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_dec;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_div 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_dec;
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 2U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_divider_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_divider_divbyzero = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_divider_overflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_divider_underflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inexact = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_divider_done = 0U;
            if (((IData)(vlSelfRef.__PVT__FPU_start) 
                 & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__enable_mask) 
                    >> 4U))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
                    = vlSelfRef.__PVT__FPU_in1;
                vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg 
                    = vlSelfRef.__PVT__EX_freg_fwd_data2;
                __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_done = 0U;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_done = 0U;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_done = 0U;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 0U;
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_done = 1U;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_done = 0U;
                    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 0U;
                } else {
                    if (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow 
                            = (0U != (0xffffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant)));
                    }
                    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant 
                        = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__round_up)
                                         ? ((IData)(1U) 
                                            + (0xffffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                                          >> 0x18U))))
                                         : (0xffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                                       >> 0x18U)))));
                    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 8U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact 
                    = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__g_bit) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__r_bit)) 
                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__s_bit));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__round_up 
                    = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                        ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                     >> 1U))) && ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                                  && (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__g_bit) 
                                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__r_bit)) 
                                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__s_bit))))
                        : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                ? ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__s_bit)) 
                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__sign_a_dec)))
                                : ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__s_bit)) 
                                   & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__sign_a_dec)))
                            : ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                               && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__g_bit) 
                                   & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__lsb) 
                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__r_bit)) 
                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__s_bit))))));
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 6U;
            } else if ((1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                      >> 0x2fU)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__lsb 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x18U)));
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__g_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x17U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__r_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x16U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__s_bit 
                    = (0U != (0x3fffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant)));
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                    = (0x7fffffffffffULL & __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant);
            } else {
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                    = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant, 1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__lsb 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x17U)));
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__g_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x16U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__r_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x15U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__s_bit 
                    = (0U != (0x1fffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
                if ((VL_GTS_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff) 
                     & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__denorm_1st_neg))) {
                    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant, 1U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__denorm_1st_neg = 0U;
                } else if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff)) {
                    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant, 1U));
                    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff 
                        = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff);
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp 
                        = (0xffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff);
                    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 4U;
                }
            } else if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_mul)) {
                if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_mul)) {
                    if (VL_GTS_III(32, 0xffffffe8U, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff)) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp = 0U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant = 0U;
                        __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 8U;
                    } else if (VL_LTS_III(32, 0xfeU, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff)) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_overflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant = 0U;
                        __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 8U;
                    } else {
                        __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
                            = (0xffffffffffffULL & 
                               ((QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_mul)) 
                                * (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_mul))));
                        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__denorm_1st_neg = 1U;
                        __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 3U;
                    }
                } else {
                    __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff 
                           - (IData)(1U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_mul 
                        = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_mul, 1U));
                }
            } else {
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff 
                    = (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff 
                       - (IData)(1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_mul 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_mul, 1U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state))) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_sign 
                = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__sign_a_dec) 
                   ^ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__sign_b_dec));
            if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_nan) 
                 | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_nan))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 8U;
            } else if ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_zero) 
                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_infinity)) 
                        | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_infinity) 
                           & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_zero)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 8U;
            } else if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_zero) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_zero))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 8U;
            } else if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_infinity) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_infinity))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 8U;
            } else {
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff 
                    = ((IData)(0x7fU) + (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_a_dec) 
                                          - (IData)(0x7fU)) 
                                         + ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_b_dec) 
                                            - (IData)(0x7fU))));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_mul 
                    = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_denormal)
                                     ? VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_dec, 1U)
                                     : vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_dec));
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_mul 
                    = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_denormal)
                                     ? VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_dec, 1U)
                                     : vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_dec));
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 2U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_underflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_overflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inexact = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_done = 0U;
            if (((IData)(vlSelfRef.__PVT__FPU_start) 
                 & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__enable_mask) 
                    >> 3U))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                    = vlSelfRef.__PVT__FPU_in1;
                vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                    = vlSelfRef.__PVT__EX_freg_fwd_data2;
                __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done = 0U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0U;
                } else {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done = 1U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
                if (VL_GTS_III(32, 0xffffffe9U, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_underflow = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_inexact = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp = 0U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant = 0U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0xaU;
                } else if (VL_LTS_III(32, 0xfeU, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_overflow = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_inexact = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp = 0xffU;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant = 0U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0xaU;
                } else if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff)) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
                        = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff);
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                        = (0x1fffffffU & VL_SHIFTR_III(29,29,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient, 1U));
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp 
                        = (0xffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant 
                        = (0xffffffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                                        >> 4U));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0xaU;
                }
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__round_up) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                    = (0x1fffffffU & ((IData)(8U) + vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__round_up = 0U;
            } else if ((0x10000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient)) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                    = (0x1fffffffU & VL_SHIFTR_III(29,29,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient, 1U));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
                    = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff);
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 9U;
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_inexact 
                        = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__g_bit) 
                            | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__r_bit)) 
                           | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__s_bit));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__round_up 
                        = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                         >> 1U))) && 
                               ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                && (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__s_bit))))
                            : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                    ? ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__g_bit) 
                                         | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__r_bit)) 
                                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__s_bit)) 
                                       & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__sign_a_dec)))
                                    : ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__g_bit) 
                                         | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__r_bit)) 
                                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__s_bit)) 
                                       & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__sign_a_dec)))
                                : ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                   && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__g_bit) 
                                       & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__lsb) 
                                           | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__r_bit)) 
                                          | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__s_bit))))));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 8U;
                } else {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done = 0U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
                if ((0x8000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient)) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__lsb 
                        = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                                 >> 3U));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 7U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__g_bit 
                        = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                                 >> 2U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__r_bit 
                        = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                                 >> 1U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__s_bit 
                        = (1U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient);
                } else {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                        = (0x1fffffffU & VL_SHIFTL_III(29,29,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient, 1U));
                }
            } else if ((0x1aU > (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__count))) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor 
                    = (0x7ffffffffffffULL & VL_SHIFTR_QQI(51,51,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor, 1U));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                    = (0x1fffffffU & VL_SHIFTL_III(29,29,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient, 1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__count)));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 3U;
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
                if ((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend 
                     >= vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor)) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend 
                        = (0x7ffffffffffffULL & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend 
                                                 - vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
                        = (0x1fffffffU & ((IData)(1U) 
                                          + vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient));
                } else {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend;
                }
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 4U;
            } else if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_div)) {
                if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_div)) {
                    if ((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_div 
                         < vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_div)) {
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
                            = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
                               - (IData)(1U));
                    }
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend 
                        = ((QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_div)) 
                           << 0x1bU);
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor 
                        = ((QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_div)) 
                           << 0x1bU);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__count = 0U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 3U;
                } else {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
                        = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_div 
                        = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_div, 1U));
                }
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
                    = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
                       - (IData)(1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_div 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_div, 1U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state))) {
            if (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_nan) 
                   | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_nan)) 
                  | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_infinity) 
                     & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_infinity))) 
                 | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_zero) 
                    & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_zero)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_zero) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_divbyzero = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_infinity) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_zero) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_infinity) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0xaU;
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
                    = (((IData)(0x7fU) + ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_a_dec) 
                                          - (IData)(0x7fU))) 
                       - ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_b_dec) 
                          - (IData)(0x7fU)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_div 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_dec;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_div 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_dec;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 2U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_divbyzero = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_overflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_underflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_inexact = 0U;
            __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done = 0U;
            if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_start) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg = 0x3f800000U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_b;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 1U;
            }
        }
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__sign_o 
            = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__sign_o;
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 0U;
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done = 0U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 0U;
                } else {
                    if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_underflow) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_underflow 
                            = (0U != (0xffffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant)));
                    }
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant 
                        = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__round_up)
                                         ? ((IData)(1U) 
                                            + (0xffffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                                          >> 0x18U))))
                                         : (0xffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                                       >> 0x18U)))));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 8U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact 
                    = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__g_bit) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__r_bit)) 
                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__s_bit));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__round_up = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 6U;
            } else if ((1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                      >> 0x2fU)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__lsb 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x18U)));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__g_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x17U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__r_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x16U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__s_bit 
                    = (0U != (0x3fffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant)));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                    = (0x7fffffffffffULL & __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant);
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                    = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant, 1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__lsb 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x17U)));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__g_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x16U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__r_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                                     >> 0x15U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__s_bit 
                    = (0U != (0x1fffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
                if ((VL_GTS_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff) 
                     & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__denorm_1st_neg))) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant, 1U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_underflow = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__denorm_1st_neg = 0U;
                } else if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff)) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant, 1U));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff 
                        = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff);
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp 
                        = (0xffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff);
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 4U;
                }
            } else if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_mul)) {
                if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_mul)) {
                    if (VL_GTS_III(32, 0xffffffe8U, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff)) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_underflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp = 0U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant = 0U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 8U;
                    } else if (VL_LTS_III(32, 0xfeU, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff)) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_overflow = 1U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant = 0U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 8U;
                    } else {
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
                            = (0xffffffffffffULL & 
                               ((QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_mul)) 
                                * (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_mul))));
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__denorm_1st_neg = 1U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 3U;
                    }
                } else {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff 
                           - (IData)(1U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_mul 
                        = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_mul, 1U));
                }
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff 
                    = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff 
                       - (IData)(1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_mul 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_mul, 1U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state))) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_sign 
                = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__sign_a_dec) 
                   ^ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__sign_b_dec));
            if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_nan) 
                 | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_nan))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 8U;
            } else if ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_zero) 
                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_infinity)) 
                        | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_infinity) 
                           & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_zero)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 8U;
            } else if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_zero) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_zero))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 8U;
            } else if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_infinity) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_infinity))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 8U;
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff 
                    = ((IData)(0x7fU) + (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_a_dec) 
                                          - (IData)(0x7fU)) 
                                         + ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_b_dec) 
                                            - (IData)(0x7fU))));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_mul 
                    = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_denormal)
                                     ? VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_dec, 1U)
                                     : vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_dec));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_mul 
                    = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_denormal)
                                     ? VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_dec, 1U)
                                     : vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_dec));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 2U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_underflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_overflow = 0U;
            __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact = 0U;
            __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done = 0U;
            if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_a;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_b;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done = 0U;
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done = 1U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign = 0U;
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done = 0U;
                } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__round_up) {
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                        = (0xfffffffU & ((IData)(8U) 
                                         + vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__round_up = 0U;
                } else if ((0x8000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum)) {
                    if ((0xfeU == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_overflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_inexact = 1U;
                        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0U;
                    } else {
                        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp)));
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant 
                            = (0xffffffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                                            >> 4U));
                    }
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 8U;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant 
                        = (0xffffffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                                        >> 3U));
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 8U;
                    if ((0xfeU < (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_overflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_inexact = 1U;
                        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0U;
                    } else if ((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_underflow = 1U;
                        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_inexact 
                    = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__g_bit) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__r_bit)) 
                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__round_up 
                    = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                        ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                     >> 1U))) && ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                                  && (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__g_bit) 
                                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__r_bit)) 
                                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit))))
                        : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                ? ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit)) 
                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign)))
                                : ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit)) 
                                   & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign)))
                            : ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                               && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__g_bit) 
                                   & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__lsb) 
                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__r_bit)) 
                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit))))));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 6U;
            } else if ((0x8000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum)) {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp)));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                    = (0xfffffffU & VL_SHIFTR_III(28,28,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum, 1U));
            } else if ((0x4000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum)) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__lsb 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                             >> 3U));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__g_bit 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                             >> 2U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__r_bit 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                             >> 1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit 
                    = (1U & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit) 
                             | vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum));
            } else {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp) 
                                - (IData)(1U)));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                    = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum, 1U));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit 
                    = ((0x1aU < (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_diff))
                        ? (0U != vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__temp_smaller)
                        : (0U != (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__temp_smaller 
                                  & (VL_SHIFTL_III(32,32,8, (IData)(1U), (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_diff)) 
                                     - (IData)(1U)))));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
                    = (0xfffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sub)
                                      ? (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_larger 
                                         - vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_smaller)
                                      : (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_larger 
                                         + vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_smaller)));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 4U;
            } else {
                if ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec) 
                      > (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec)) 
                     | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec) 
                         == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec)) 
                        & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_a_dec 
                           >= vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_b_dec)))) {
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_a_dec;
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_diff 
                        = (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec) 
                              == ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec))) 
                             & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_denormal)) 
                            & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b)))
                            ? 0U : (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec) 
                                             - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec))));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_larger 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_a_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__temp_smaller 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_b_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_smaller 
                        = (0xfffffffU & VL_SHIFTR_III(28,28,8, 
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_b_dec 
                                                       << 3U), 
                                                      (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec) 
                                                          == 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec))) 
                                                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_denormal)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b)))
                                                        ? 0U
                                                        : 
                                                       (0xffU 
                                                        & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec) 
                                                           - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec))))));
                } else {
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_b_dec;
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_diff 
                        = (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec) 
                              == ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec))) 
                             & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_denormal)) 
                            & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_a_dec)))
                            ? 0U : (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec) 
                                             - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec))));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_larger 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_b_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__temp_smaller 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_a_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_smaller 
                        = (0xfffffffU & VL_SHIFTR_III(28,28,8, 
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_a_dec 
                                                       << 3U), 
                                                      (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec) 
                                                          == 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec))) 
                                                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_denormal)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_a_dec)))
                                                        ? 0U
                                                        : 
                                                       (0xffU 
                                                        & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec) 
                                                           - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec))))));
                }
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state))) {
            if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_nan) 
                 | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_nan))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_invalid = 1U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_infinity) {
                if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_infinity) 
                     & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_a_dec) 
                        != (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_invalid = 1U;
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign = 0U;
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0xffU;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0xc00000U;
                } else {
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_a_dec;
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0xffU;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0U;
                }
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_infinity) {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_zero) {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_b_dec;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_zero) {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_a_dec;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_a_dec;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 8U;
            } else {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 2U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_overflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_underflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_inexact = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done = 0U;
            if (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
                    = ((((8U & vlSelfRef.__PVT__EX_inst_out)
                          ? (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_sign))
                          : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_sign)) 
                        << 0x1fU) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp) 
                                      << 0x17U) | (0x7fffffU 
                                                   & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg 
                    = (((IData)(vlSelfRef.__PVT__WB_freg_wr_en_out) 
                        & ((IData)(vlSelfRef.__PVT__EX_rs3_out) 
                           == (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out)))
                        ? vlSelfRef.__PVT__wb_data_in
                        : vlSelfRef.__PVT__m_EX__DOT__freg_rd_data3_o);
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 1U;
            }
        }
        if (vlSelfRef.__PVT__EX_en) {
            vlSelfRef.__PVT__EX_is_f_ext = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                            & ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_75) 
                                               | ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_71) 
                                                  | ((0xc0000053U 
                                                      == 
                                                      (0xfff0007fU 
                                                       & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                     | ((0xc0100053U 
                                                         == 
                                                         (0xfff0007fU 
                                                          & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                        | ((IData)(vlSelfRef.__PVT__FPU_sel1) 
                                                           | ((0xe0000053U 
                                                               == 
                                                               (0xfff0707fU 
                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                              | ((0xf0000053U 
                                                                  == 
                                                                  (0xfff0707fU 
                                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                 | (IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_70)))))))));
            if (vlSelfRef.__PVT__EX_clear) {
                vlSelfRef.__PVT__m_EX__DOT__freg_rd_data2_o = 0U;
                vlSelfRef.__PVT__EX_csr_op_out = 0U;
                vlSelfRef.__PVT__m_EX__DOT__reg_rd_data2_o = 0U;
                vlSelfRef.__PVT__EX_rs2_out = 0U;
                vlSelfRef.__PVT__m_EX__DOT__freg_rd_data1_o = 0U;
                vlSelfRef.__PVT__m_EX__DOT__reg_rd_data1_o = 0U;
                vlSelfRef.__PVT__EX_rs1_out = 0U;
                vlSelfRef.__PVT__EX_csr_addr_out = 0U;
                vlSelfRef.__PVT__EX_rs3_out = 0U;
                vlSelfRef.__PVT__m_EX__DOT__freg_rd_data3_o = 0U;
                vlSelfRef.__PVT__EX_inst_out = 0U;
            } else {
                vlSelfRef.__PVT__m_EX__DOT__freg_rd_data2_o 
                    = vlSelfRef.__PVT__m_FRegister__DOT__fregs
                    [(0x1fU & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                               >> 0x14U))];
                vlSelfRef.__PVT__EX_csr_op_out = (7U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__is_csr))) 
                                                     & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                        >> 0xcU)));
                vlSelfRef.__PVT__m_EX__DOT__reg_rd_data2_o 
                    = vlSelfRef.__PVT__m_Register__DOT__regs
                    [(0x1fU & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                               >> 0x14U))];
                vlSelfRef.__PVT__EX_rs2_out = (0x1fU 
                                               & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                  >> 0x14U));
                vlSelfRef.__PVT__m_EX__DOT__freg_rd_data1_o 
                    = vlSelfRef.__PVT__m_FRegister__DOT__fregs
                    [(0x1fU & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                               >> 0xfU))];
                vlSelfRef.__PVT__m_EX__DOT__reg_rd_data1_o 
                    = vlSelfRef.__PVT__m_Register__DOT__regs
                    [vlSelfRef.__Vcellinp__m_Register__rs1];
                vlSelfRef.__PVT__EX_rs1_out = (0x1fU 
                                               & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                  >> 0xfU));
                vlSelfRef.__PVT__EX_csr_addr_out = 
                    ((IData)(vlSelfRef.__PVT__is_fpu)
                      ? 2U : (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                              >> 0x14U));
                vlSelfRef.__PVT__EX_rs3_out = (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                               >> 0x1bU);
                vlSelfRef.__PVT__m_EX__DOT__freg_rd_data3_o 
                    = vlSelfRef.__PVT__m_FRegister__DOT__fregs
                    [(vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                      >> 0x1bU)];
                vlSelfRef.__PVT__EX_inst_out = vlSelfRef.__PVT__m_ID__DOT__ID_inst_out;
            }
            vlSelfRef.__PVT__EX_is_csr_imm_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                                  & ((0x5073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                     | ((0x6073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                        | (0x7073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)))));
            vlSelfRef.__PVT__EX_FPU_sel1_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                                & (IData)(vlSelfRef.__PVT__FPU_sel1));
            vlSelfRef.__PVT__EX_is_br_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                             & (IData)(vlSelfRef.__PVT__is_br));
        }
        if (vlSelfRef.__PVT__ID_en) {
            vlSelfRef.__PVT__ID_bp_pred_target_out 
                = ((IData)(vlSelfRef.__PVT__ID_clear)
                    ? 0U : vlSelfRef.__PVT__bp_pred_target_out);
            vlSelfRef.__PVT__ID_bp_pred_taken_out = 
                ((~ (IData)(vlSelfRef.__PVT__ID_clear)) 
                 & (IData)(vlSelfRef.__PVT__bp_pred_taken_out));
        }
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__sign_o 
            = (3U & (IData)(vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out));
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 0U;
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
                if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_done) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_result;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_a 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_result;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_b 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_result;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start = 1U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 4U;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_start = 0U;
                }
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done) {
                if ((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time))) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time)));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__x2 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_a 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__y;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_b 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__y;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start = 1U;
                } else if ((1U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time))) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time)));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_a 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__x2;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_b 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start = 1U;
                } else if ((2U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time))) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time)));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start = 1U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 3U;
                } else if ((3U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time))) {
                    if ((5U > (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__loop))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__loop 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__loop)));
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_a 
                            = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_b 
                            = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__y 
                            = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start = 1U;
                    } else {
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time)));
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_b 
                            = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__y;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_start = 1U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 5U;
                    }
                } else if ((4U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inexact 
                        = ((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg 
                            != vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result) 
                           | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 8U;
                }
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
                if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_a 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__y;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_b 
                        = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign) 
                            << 0x1fU) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant)));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start = 1U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 4U;
                } else {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start = 0U;
                }
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state))) {
            if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__is_a_nan) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result = 0x7fc00000U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 8U;
            } else if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sign_a_dec) 
                        & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__is_a_zero)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result = 0x7fc00000U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__is_a_zero) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result 
                    = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sign_a_dec) 
                       << 0x1fU);
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__is_a_infinity) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_result = 0x7f800000U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 8U;
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__loop = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_a 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_b = 0x3f000000U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 4U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inexact = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done = 0U;
            if (((IData)(vlSelfRef.__PVT__FPU_start) 
                 & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__enable_mask) 
                    >> 5U))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg 
                    = vlSelfRef.__PVT__FPU_in1;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__y 
                    = ((IData)(0x5f3759dfU) - VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__FPU_in1, 1U));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 0U;
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done = 1U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done = 0U;
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 0U;
                } else {
                    if (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_underflow) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_underflow 
                            = (0U != (0xffffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant)));
                    }
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant 
                        = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__round_up)
                                         ? ((IData)(1U) 
                                            + (0xffffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                                          >> 0x18U))))
                                         : (0xffffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                                       >> 0x18U)))));
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 8U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_inexact 
                    = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__g_bit) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__r_bit)) 
                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__s_bit));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__round_up 
                    = ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                        ? ((1U & (~ ((IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode) 
                                     >> 1U))) && ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                                                  && (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__g_bit) 
                                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__r_bit)) 
                                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__s_bit))))
                        : ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                            ? ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))
                                ? ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__s_bit)) 
                                   & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__sign_a_dec)))
                                : ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__g_bit) 
                                     | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__r_bit)) 
                                    | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__s_bit)) 
                                   & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__sign_a_dec)))
                            : ((1U & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__rounding_mode))) 
                               && ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__g_bit) 
                                   & (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__lsb) 
                                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__r_bit)) 
                                      | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__s_bit))))));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 6U;
            } else if ((1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                      >> 0x2fU)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__lsb 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                     >> 0x18U)));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__g_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                     >> 0x17U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__r_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                     >> 0x16U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__s_bit 
                    = (0U != (0x3fffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant)));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                    = (0x7fffffffffffULL & __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant);
            } else {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                    = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant, 1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__lsb 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                     >> 0x17U)));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__g_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                     >> 0x16U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__r_bit 
                    = (1U & (IData)((vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                                     >> 0x15U)));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__s_bit 
                    = (0U != (0x1fffffU & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
                if ((VL_GTS_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff) 
                     & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__denorm_1st_neg))) {
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant, 1U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_underflow = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__denorm_1st_neg = 0U;
                } else if (VL_GTS_III(32, 0U, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff)) {
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                        = (0xffffffffffffULL & VL_SHIFTR_QQI(48,48,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant, 1U));
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff 
                        = ((IData)(1U) + vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff);
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp 
                        = (0xffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff);
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 4U;
                }
            } else if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_mul)) {
                if ((0x800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_mul)) {
                    if (VL_GTS_III(32, 0xffffffe8U, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff)) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_underflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp = 0U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_inexact = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant = 0U;
                        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 8U;
                    } else if (VL_LTS_III(32, 0xfeU, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff)) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_overflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_inexact = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant = 0U;
                        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 8U;
                    } else {
                        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
                            = (0xffffffffffffULL & 
                               ((QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_mul)) 
                                * (QData)((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_mul))));
                        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__denorm_1st_neg = 1U;
                        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 3U;
                    }
                } else {
                    __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff 
                           - (IData)(1U));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_mul 
                        = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_mul, 1U));
                }
            } else {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff 
                    = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff 
                       - (IData)(1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_mul 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_mul, 1U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state))) {
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_sign 
                = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__sign_a_dec) 
                   ^ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__sign_b_dec));
            if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_nan) 
                 | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_nan))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 8U;
            } else if ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_zero) 
                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_infinity)) 
                        | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_infinity) 
                           & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_zero)))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 8U;
            } else if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_zero) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_zero))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 8U;
            } else if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_infinity) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_infinity))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 8U;
            } else {
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff 
                    = ((IData)(0x7fU) + (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_a_dec) 
                                          - (IData)(0x7fU)) 
                                         + ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_b_dec) 
                                            - (IData)(0x7fU))));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_mul 
                    = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_denormal)
                                     ? VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_dec, 1U)
                                     : vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_dec));
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_mul 
                    = (0xffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_denormal)
                                     ? VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_dec, 1U)
                                     : vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_dec));
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 2U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_underflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_overflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_inexact = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done = 0U;
            if (((IData)(vlSelfRef.__PVT__FPU_start) 
                 & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__enable_mask) 
                    >> 7U))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg 
                    = vlSelfRef.__PVT__FPU_in1;
                vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg 
                    = vlSelfRef.__PVT__EX_freg_fwd_data2;
                __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done = 0U;
            } else {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done = 1U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign = 0U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done = 0U;
                } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__round_up) {
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                        = (0xfffffffU & ((IData)(8U) 
                                         + vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__round_up = 0U;
                } else if ((0x8000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum)) {
                    if ((0xfeU == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_overflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_inexact = 1U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0U;
                    } else {
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp)));
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant 
                            = (0xffffffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                                            >> 4U));
                    }
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 8U;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant 
                        = (0xffffffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                                        >> 3U));
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 8U;
                    if ((0xfeU < (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_overflow = 1U;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_inexact = 1U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0U;
                    } else if ((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp))) {
                        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_underflow = 1U;
                        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_inexact 
                    = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__g_bit) 
                        | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__r_bit)) 
                       | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__s_bit));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__round_up = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 6U;
            } else if ((0x8000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum)) {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp)));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                    = (0xfffffffU & VL_SHIFTR_III(28,28,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum, 1U));
            } else if ((0x4000000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum)) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__lsb 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                             >> 3U));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 5U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__g_bit 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                             >> 2U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__r_bit 
                    = (1U & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                             >> 1U));
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__s_bit 
                    = (1U & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__s_bit) 
                             | vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum));
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp) 
                                - (IData)(1U)));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                    = (0xfffffffU & VL_SHIFTL_III(28,28,32, vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum, 1U));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__s_bit 
                    = ((0x1aU < (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_diff))
                        ? (0U != vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__temp_smaller)
                        : (0U != (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__temp_smaller 
                                  & (VL_SHIFTL_III(32,32,8, (IData)(1U), (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_diff)) 
                                     - (IData)(1U)))));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
                    = (0xfffffffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__eff_sub)
                                      ? (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_larger 
                                         - vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_smaller)
                                      : (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_larger 
                                         + vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_smaller)));
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 4U;
            } else {
                if ((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec) 
                      > (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec)) 
                     | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec) 
                         == (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec)) 
                        & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_a_dec 
                           >= vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_b_dec)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_a_dec;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_diff 
                        = (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec) 
                              == ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec))) 
                             & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_denormal)) 
                            & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__eff_sign_b)))
                            ? 0U : (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec) 
                                             - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec))));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_larger 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_a_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__temp_smaller 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_b_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_smaller 
                        = (0xfffffffU & VL_SHIFTR_III(28,28,8, 
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_b_dec 
                                                       << 3U), 
                                                      (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec) 
                                                          == 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec))) 
                                                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_denormal)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__eff_sign_b)))
                                                        ? 0U
                                                        : 
                                                       (0xffU 
                                                        & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec) 
                                                           - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec))))));
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_b_dec;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_diff 
                        = (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec) 
                              == ((IData)(1U) + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec))) 
                             & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_denormal)) 
                            & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_a_dec)))
                            ? 0U : (0xffU & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec) 
                                             - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec))));
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_larger 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_b_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__temp_smaller 
                        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_a_dec 
                           << 3U);
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_smaller 
                        = (0xfffffffU & VL_SHIFTR_III(28,28,8, 
                                                      (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_a_dec 
                                                       << 3U), 
                                                      (((((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec) 
                                                          == 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec))) 
                                                         & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_denormal)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_a_dec)))
                                                        ? 0U
                                                        : 
                                                       (0xffU 
                                                        & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec) 
                                                           - (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec))))));
                }
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state))) {
            if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_nan) 
                 | (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_nan))) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_invalid = 1U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0xc00000U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_infinity) {
                if (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_infinity) 
                     & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_a_dec) 
                        != (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__eff_sign_b)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_invalid = 1U;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign = 0U;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0xc00000U;
                } else {
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign 
                        = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_a_dec;
                    __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0U;
                }
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_infinity) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__eff_sign_b;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp = 0xffU;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant = 0U;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_zero) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__eff_sign_b;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_b_dec;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 8U;
            } else if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_zero) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_a_dec;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_a_dec;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 8U;
            } else {
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 2U;
            }
        } else {
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_invalid = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_overflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_underflow = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_inexact = 0U;
            vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done = 0U;
            if (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start) {
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg = 0x3fc00000U;
                vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                    = vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b;
                __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 1U;
            }
        }
    } else {
        vlSelfRef.__PVT__EX_is_f_ext = 0U;
        vlSelfRef.__PVT__m_EX__DOT__freg_rd_data2_o = 0U;
        vlSelfRef.__PVT__EX_csr_op_out = 0U;
        vlSelfRef.__PVT__EX_is_csr_imm_out = 0U;
        vlSelfRef.__PVT__m_EX__DOT__reg_rd_data2_o = 0U;
        vlSelfRef.__PVT__EX_FPU_sel1_out = 0U;
        __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_adder_done = 0U;
        __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_divider_done = 0U;
        __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_done = 0U;
        vlSelfRef.__PVT__EX_rs2_out = 0U;
        vlSelfRef.__PVT__m_EX__DOT__freg_rd_data1_o = 0U;
        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state = 0U;
        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done = 0U;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__sign_o = 0U;
        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state = 0U;
        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done = 0U;
        vlSelfRef.__PVT__m_EX__DOT__reg_rd_data1_o = 0U;
        vlSelfRef.__PVT__EX_rs1_out = 0U;
        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done = 0U;
        vlSelfRef.__PVT__EX_csr_addr_out = 0U;
        vlSelfRef.__PVT__EX_is_br_out = 0U;
        vlSelfRef.__PVT__ID_bp_pred_target_out = 0U;
        vlSelfRef.__PVT__ID_bp_pred_taken_out = 0U;
        vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__sign_o = 0U;
        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done = 0U;
        vlSelfRef.__PVT__EX_rs3_out = 0U;
        vlSelfRef.__PVT__m_EX__DOT__freg_rd_data3_o = 0U;
        __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done = 0U;
        vlSelfRef.__PVT__EX_inst_out = 0U;
        __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state = 0U;
        vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done = 0U;
    }
    if (__VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[__VdlyDim0__u_lsu__DOT__LDQ__DOT__ram_q__v0][0U] 
            = __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[0U];
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[__VdlyDim0__u_lsu__DOT__LDQ__DOT__ram_q__v0][1U] 
            = __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[1U];
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[__VdlyDim0__u_lsu__DOT__LDQ__DOT__ram_q__v0][2U] 
            = __VdlyVal__u_lsu__DOT__LDQ__DOT__ram_q__v0[2U];
    }
    if (__VdlySet__u_lsu__DOT__LDQ__DOT__ram_q__v1) {
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[8U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[8U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[8U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[9U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[9U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[9U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xaU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xaU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xaU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xbU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xbU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xbU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xcU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xcU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xcU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xdU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xdU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xdU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xeU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xeU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xeU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xfU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xfU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0xfU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x10U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x10U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x10U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x11U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x11U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x11U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x12U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x12U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x12U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x13U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x13U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x13U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x14U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x14U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x14U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x15U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x15U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x15U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x16U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x16U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x16U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x17U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x17U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x17U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x18U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x18U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x18U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x19U][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x19U][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x19U][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1aU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1aU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1aU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1bU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1bU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1bU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1cU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1cU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1cU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1dU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1dU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1dU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1eU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1eU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1eU][2U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1fU][0U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1fU][1U] = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0x1fU][2U] = 0U;
    }
    vlSelfRef.__PVT__m_EX__DOT__started = __Vdly__m_EX__DOT__started;
    vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count = __Vdly__u_lsu__DOT__LDQ__DOT__count;
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r 
        = __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r;
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state 
        = __Vdly__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state 
        = __Vdly__m_FPU__DOT__sp_adder_inst__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum 
        = __Vdly__m_FPU__DOT__sp_adder_inst__DOT__mant_sum;
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_sign 
        = __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_sign;
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp 
        = __Vdly__m_FPU__DOT__sp_adder_inst__DOT__final_exp;
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state 
        = __Vdly__m_FPU__DOT__sp_divider_inst__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff 
        = __Vdly__m_FPU__DOT__sp_divider_inst__DOT__exp_diff;
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient 
        = __Vdly__m_FPU__DOT__sp_divider_inst__DOT__quotient;
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__divisor 
        = __Vdly__m_FPU__DOT__sp_divider_inst__DOT__divisor;
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__dividend 
        = __Vdly__m_FPU__DOT__sp_divider_inst__DOT__dividend;
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state 
        = __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant 
        = __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant;
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff 
        = __Vdly__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff;
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state 
        = __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum 
        = __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum;
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign 
        = __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign;
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp 
        = __Vdly__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp;
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__d_available_pre = 1U;
    vlSelfRef.__PVT__u_lsu__DOT__resp_signed = (1U 
                                                & (vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                                   [
                                                   (0x1fU 
                                                    & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                                   >> 9U));
    vlSelfRef.__PVT__lsu_mmu_addr = (0xfffffffcU & 
                                     ((vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                       [(0x1fU & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][2U] 
                                       << 0x13U) | 
                                      (0x7fffcU & (
                                                   vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                                   [
                                                   (0x1fU 
                                                    & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][1U] 
                                                   >> 0xdU))));
    vlSelfRef.__PVT__u_lsu__DOT__resp_mask = (0xfU 
                                              & (vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                                 [(0x1fU 
                                                   & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                                 >> 3U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_3_o[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_3_o[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__full = (2U 
                                                   == vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count);
    vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__empty = 
        (0U == vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[2U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[4U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[6U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[3U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w1 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
           ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o 
              ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o 
                 ^ vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w3 
        = ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
            | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o) 
           & (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o 
              | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[5U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[7U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w1 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o 
           ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o 
              ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o 
                 ^ vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w3 
        = ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o 
            | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o) 
           & (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o 
              | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o));
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper = 4U;
    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__invB = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
                if ((1U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
                    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper = 4U;
                    vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__invB = 1U;
                }
            } else {
                vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper 
                    = ((1U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))
                        ? 7U : 6U);
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
        if ((2U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper 
                = ((1U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))
                    ? 5U : 4U);
            if ((1U & (~ (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out)))) {
                vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__invB = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out)))) {
            vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper = 4U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper 
            = ((1U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))
                ? 2U : 3U);
    } else if ((1U & (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) {
        vlSelfRef.__PVT__m_EX__DOT__m_ALU__DOT__Oper = 1U;
    }
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_available_pre = 1U;
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_rd_r 
        = ((IData)(vlSymsp->TOP.rst_n) && (1U & ((~ 
                                                  (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                                   >> 0x1fU)) 
                                                 | (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit))));
    vlSelfRef.__PVT__u_lsu__DOT__sign_inst = (((IData)(vlSelfRef.__PVT__EX_mem_ctrl_out) 
                                               >> 3U) 
                                              & (IData)(vlSelfRef.__PVT__EX_mem_rd_en_out));
    if ((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state))) {
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__update_entry 
            = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_value_r;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_vpn_i = 0U;
    } else {
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__update_entry = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_vpn_i 
            = (0xfffffU & ((vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                            [(0x1fU & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][2U] 
                            << 7U) | (vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                      [(0x1fU & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][1U] 
                                      >> 0x19U)));
    }
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__is_pte = 
        ((1U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state)) 
         | (2U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_result = 
        (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_sign) 
          << 0x1fU) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp) 
                        << 0x17U) | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_a_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__sign_b_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_b_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_b_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_dec 
        = ((IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                    & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg))))
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_a_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_dec 
        = ((IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                    & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg))))
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_divider_result 
        = ((0x80000000U & (vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
                           ^ vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)) 
           | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp) 
               << 0x17U) | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_result 
        = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_sign) 
            << 0x1fU) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp) 
                          << 0x17U) | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_a_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_b_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__sign_b_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_b_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_dec 
        = ((IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                    & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg))))
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_a_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_dec 
        = ((IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                    & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg))))
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_sign_o[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__sign_o;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_a_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_b_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__sign_b_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_a_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__sign_b_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_b_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg))));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out1 
        = (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w1 
           ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w3, 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out2 
        = ((VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w1, 1U) 
            & VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w3, 2U)) 
           | VL_SHIFTL_QQI(64,64,32, ((~ vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w1) 
                                      & ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
                                          & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o) 
                                         | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o 
                                            & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o))), 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out1 
        = (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w1 
           ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w3, 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out2 
        = ((VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w1, 1U) 
            & VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w3, 2U)) 
           | VL_SHIFTL_QQI(64,64,32, ((~ vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w1) 
                                      & ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o 
                                          & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o) 
                                         | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o 
                                            & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o))), 1U));
    vlSelfRef.__PVT__u_lsu__DOT__mem_sign = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__sign_inst) 
                                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_sign));
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit 
        = ((vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_vpn_i 
            == vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__vpn_q) 
           & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__tlb_valid_r));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_a_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_b_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_done 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__div_done;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__x2 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__x2;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__y 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__y;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result 
        = (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_sign) 
            << 0x1fU) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp) 
                          << 0x17U) | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_result 
        = ((0x80000000U & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg 
                           ^ vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)) 
           | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp) 
               << 0x17U) | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_a_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_b_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state 
        = __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant 
        = __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant;
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff 
        = __Vdly__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff;
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_valid 
        = (((IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__dcache_rd_r) 
            | ((~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__stall_r)) 
               & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__dcache_wr_r))) 
           & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__d_available_pre));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_2[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out1;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_2[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out2;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_2[2U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out1;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_2[3U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out2;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w1 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out1 
           ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out2 
              ^ (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out1 
                 ^ vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out2)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w3 
        = ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out1 
            | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out2) 
           & (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out1 
              | vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out2));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_sign_o[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__sign_o;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_a_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_b_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__sign_b_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b 
        = (1U & ((vlSelfRef.__PVT__EX_inst_out >> 0x1bU) 
                 ^ (vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg 
                    >> 0x1fU)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b 
        = (1U & ((vlSelfRef.__PVT__EX_inst_out >> 2U) 
                 ^ (vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg 
                    >> 0x1fU)));
    vlSelfRef.__PVT__m_FPU__DOT__convert_input_type = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__convert_output_type = 0U;
    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0U;
    if ((0x40U & vlSelfRef.__PVT__EX_inst_out)) {
        if ((0x20U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1dU)))) {
                        if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1bU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                                  >> 0x19U)))) {
                                        vlSelfRef.__PVT__m_FPU__DOT__convert_input_type 
                                            = ((0x100000U 
                                                & vlSelfRef.__PVT__EX_inst_out)
                                                ? 3U
                                                : 2U);
                                        vlSelfRef.__PVT__m_FPU__DOT__convert_output_type = 0U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                             >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__convert_input_type = 0U;
                                    vlSelfRef.__PVT__m_FPU__DOT__convert_output_type 
                                        = ((0x100000U 
                                            & vlSelfRef.__PVT__EX_inst_out)
                                            ? 3U : 2U);
                                }
                            }
                        }
                    }
                    if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1cU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1bU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                                  >> 0x19U)))) {
                                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x100U;
                                    }
                                }
                            }
                        }
                    } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                         >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                            }
                        }
                    }
                } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 2U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x20U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1cU)))) {
                    if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x40U;
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                         >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x200U;
                        }
                    }
                }
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x10U;
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                     >> 0x1aU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x19U)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 8U;
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                 >> 0x1aU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x19U)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 1U;
                }
            }
        } else if ((0x10U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1dU)))) {
                        if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1bU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                                  >> 0x19U)))) {
                                        vlSelfRef.__PVT__m_FPU__DOT__convert_input_type 
                                            = ((0x100000U 
                                                & vlSelfRef.__PVT__EX_inst_out)
                                                ? 3U
                                                : 2U);
                                        vlSelfRef.__PVT__m_FPU__DOT__convert_output_type = 0U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                             >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__convert_input_type = 0U;
                                    vlSelfRef.__PVT__m_FPU__DOT__convert_output_type 
                                        = ((0x100000U 
                                            & vlSelfRef.__PVT__EX_inst_out)
                                            ? 3U : 2U);
                                }
                            }
                        }
                    }
                    if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1cU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1bU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                                  >> 0x19U)))) {
                                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x100U;
                                    }
                                }
                            }
                        }
                    } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                         >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                            }
                        }
                    }
                } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 2U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x20U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1cU)))) {
                    if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x40U;
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                         >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x200U;
                        }
                    }
                }
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x10U;
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                     >> 0x1aU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x19U)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 8U;
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                 >> 0x1aU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x19U)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 1U;
                }
            }
        } else if ((2U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((1U & (~ vlSelfRef.__PVT__EX_inst_out))) {
                if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
                    if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1dU)))) {
                            if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x1bU)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                                  >> 0x1aU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__EX_inst_out 
                                                    >> 0x19U)))) {
                                            vlSelfRef.__PVT__m_FPU__DOT__convert_input_type 
                                                = (
                                                   (0x100000U 
                                                    & vlSelfRef.__PVT__EX_inst_out)
                                                    ? 3U
                                                    : 2U);
                                            vlSelfRef.__PVT__m_FPU__DOT__convert_output_type = 0U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                                 >> 0x1bU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                                  >> 0x19U)))) {
                                        vlSelfRef.__PVT__m_FPU__DOT__convert_input_type = 0U;
                                        vlSelfRef.__PVT__m_FPU__DOT__convert_output_type 
                                            = ((0x100000U 
                                                & vlSelfRef.__PVT__EX_inst_out)
                                                ? 3U
                                                : 2U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & vlSelfRef.__PVT__EX_inst_out)) {
                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x80U;
            } else if ((vlSelfRef.__PVT__EX_inst_out 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1cU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1bU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                                  >> 0x19U)))) {
                                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x100U;
                                    }
                                }
                            }
                        }
                    } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                         >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                            }
                        }
                    }
                } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 2U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x20U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1cU)))) {
                    if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x40U;
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                         >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x200U;
                        }
                    }
                }
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x10U;
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                     >> 0x1aU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x19U)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 8U;
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                 >> 0x1aU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x19U)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 1U;
                }
            }
        } else if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
            if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__convert_input_type 
                                        = ((0x100000U 
                                            & vlSelfRef.__PVT__EX_inst_out)
                                            ? 3U : 2U);
                                    vlSelfRef.__PVT__m_FPU__DOT__convert_output_type = 0U;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                         >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__convert_input_type = 0U;
                                vlSelfRef.__PVT__m_FPU__DOT__convert_output_type 
                                    = ((0x100000U & vlSelfRef.__PVT__EX_inst_out)
                                        ? 3U : 2U);
                            }
                        }
                    }
                }
                if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                              >> 0x19U)))) {
                                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x100U;
                                }
                            }
                        }
                    }
                } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                     >> 0x1bU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                        }
                    }
                }
            } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 2U;
                            }
                        }
                    }
                }
            }
        } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                          >> 0x1dU)))) {
                if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x20U;
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                          >> 0x1cU)))) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x40U;
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                     >> 0x1aU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x19U)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x200U;
                    }
                }
            }
        } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1aU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x19U)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x10U;
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                 >> 0x1aU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x19U)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 8U;
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                             >> 0x1aU)))) {
            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                          >> 0x19U)))) {
                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 1U;
            }
        }
    } else if ((vlSelfRef.__PVT__EX_inst_out >> 0x1fU)) {
        if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                          >> 0x1dU)))) {
                if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__convert_input_type 
                                    = ((0x100000U & vlSelfRef.__PVT__EX_inst_out)
                                        ? 3U : 2U);
                                vlSelfRef.__PVT__m_FPU__DOT__convert_output_type = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                     >> 0x1bU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__convert_input_type = 0U;
                            vlSelfRef.__PVT__m_FPU__DOT__convert_output_type 
                                = ((0x100000U & vlSelfRef.__PVT__EX_inst_out)
                                    ? 3U : 2U);
                        }
                    }
                }
            }
            if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                          >> 0x19U)))) {
                                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x100U;
                            }
                        }
                    }
                }
            } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                 >> 0x1bU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1aU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x19U)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 4U;
                    }
                }
            }
        } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                          >> 0x1cU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 2U;
                        }
                    }
                }
            }
        }
    } else if ((0x40000000U & vlSelfRef.__PVT__EX_inst_out)) {
        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                      >> 0x1dU)))) {
            if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                      >> 0x19U)))) {
                            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x20U;
                        }
                    }
                }
            }
        }
    } else if ((0x20000000U & vlSelfRef.__PVT__EX_inst_out)) {
        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                      >> 0x1cU)))) {
            if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x1aU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                  >> 0x19U)))) {
                        vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x40U;
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                                 >> 0x1aU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x19U)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x200U;
                }
            }
        }
    } else if ((0x10000000U & vlSelfRef.__PVT__EX_inst_out)) {
        if ((0x8000000U & vlSelfRef.__PVT__EX_inst_out)) {
            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                          >> 0x1aU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                              >> 0x19U)))) {
                    vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 0x10U;
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                             >> 0x1aU)))) {
            if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                          >> 0x19U)))) {
                vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 8U;
            }
        }
    } else if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                         >> 0x1aU)))) {
        if ((1U & (~ (vlSelfRef.__PVT__EX_inst_out 
                      >> 0x19U)))) {
            vlSelfRef.__PVT__m_FPU__DOT__enable_mask = 1U;
        }
    }
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i 
        = (vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w1 
           ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w3, 1U));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i 
        = ((VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w1, 1U) 
            & VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w3, 2U)) 
           | VL_SHIFTL_QQI(64,64,32, ((~ vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w1) 
                                      & ((vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out1 
                                          & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out2) 
                                         | (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out1 
                                            & vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out2))), 1U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp 
        = __Vdly__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp;
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sub 
        = ((vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
            >> 0x1fU) != (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b));
    vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sub 
        = ((vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
            >> 0x1fU) != (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_3[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_3[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i;
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_a_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_a_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__eff_sign_b 
        = (1U & (~ (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                    >> 0x1fU)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__sign_b_dec 
        = (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
           >> 0x1fU);
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_b_dec 
        = (0xffU & (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                    >> 0x17U));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_zero 
        = (IData)((0U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_infinity 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__eff_sub 
        = ((vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg 
            >> 0x1fU) != (1U & (~ (vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                                   >> 0x1fU))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_denormal 
        = (IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_a_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_b_dec 
        = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_denormal)
            ? (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg)));
}
