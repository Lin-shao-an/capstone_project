// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_PipelineCPU.h"
#include "VComputer__Syms.h"

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__2(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0x11U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0x11U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0x11U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0x11U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0x11U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0x11U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0x10U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0x10U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0x10U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    VL_ADD_W(3, __Vtemp_2, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_o, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_o);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[2U] 
        = (3U & __Vtemp_2[2U]);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0x10U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0x10U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0x10U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[1U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[1U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[1U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[1U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[1U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[1U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[2U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[2U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[2U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[2U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[2U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[2U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[3U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[3U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[3U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[3U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[3U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[3U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[4U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[4U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[4U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[4U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[4U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[4U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[5U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[5U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[5U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[5U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[5U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[5U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[6U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[6U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[6U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[6U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[6U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[6U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[7U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[7U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[7U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[7U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[7U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[7U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[8U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[8U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[8U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[8U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[8U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[8U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[9U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[9U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[9U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[9U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[9U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[9U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xaU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xaU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xaU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xaU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xaU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xaU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xbU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xbU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xbU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xbU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xbU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xbU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xcU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xcU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xcU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xcU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xcU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xcU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xdU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xdU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xdU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xdU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xdU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xdU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xeU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xeU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xeU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xeU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xeU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xeU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xfU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xfU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0xfU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xfU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xfU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0xfU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__pre_add_r 
        = (0xffU & (((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[2U] 
                      << 6U) | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U] 
                                >> 0x1aU)) + ((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[2U] 
                                               << 6U) 
                                              | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U] 
                                                 >> 0x1aU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_sum 
        = (vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
           + vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out 
        = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__pos_q_o 
           - vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__neg_q_o);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out 
        = (0x3ffffffffULL & ((0x3ffffffffULL & ((((QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_1_o[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_1_o[1U]))) 
                                                + (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_2_o[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_2_o[1U]))))) 
                             >> (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__shift_o)));
    vlSelfRef.WB_pc_out = vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_out;
    vlSelfRef.WB_pc_valid_out = vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_valid_out;
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_invalid 
        = ((~ vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o) 
           & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_valid));
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r = 0U;
    if ((1U & (~ (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                  >> 0x1fU)))) {
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r 
            = vlSelfRef.__PVT__lsu_mmu_addr;
    }
    if (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__is_pte) {
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r 
            = vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r;
    } else if (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit) {
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r 
            = ((0xfffff000U & (vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__entry_q 
                               << 2U)) | (0xfffU & vlSelfRef.__PVT__lsu_mmu_addr));
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r 
        = ((0x20U & ((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__pre_add_r) 
                     >> 2U)) | (0x1fU & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__pre_add_r)));
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__EX_en) {
            if (vlSelfRef.__PVT__EX_clear) {
                vlSelfRef.__PVT__EX_pc_out = 0U;
                vlSelfRef.__PVT__EX_pc_p4_out = 0U;
                vlSelfRef.__PVT__EX_reg_w_sel_out = 0U;
                vlSelfRef.__PVT__EX_imm_out = 0U;
                vlSelfRef.__PVT__EX_bypass_sel_out = 0U;
            } else {
                vlSelfRef.__PVT__EX_pc_out = vlSelfRef.__PVT__m_ID__DOT__ID_pc_out;
                vlSelfRef.__PVT__EX_pc_p4_out = vlSelfRef.__PVT__m_ID__DOT__ID_pc_p4_out;
                vlSelfRef.__PVT__EX_reg_w_sel_out = 
                    ((IData)(vlSelfRef.__PVT__is_j)
                      ? 0U : (((0x37U == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                               | ((0xf0000053U == (0xfff0707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                  | ((0xe0000053U == 
                                      (0xfff0707fU 
                                       & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                     | (0xfU == (0x707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)))))
                               ? 5U : ((IData)(vlSelfRef.__PVT__m_ID__DOT__m_Control__DOT__is_alu_w)
                                        ? 1U : ((IData)(vlSelfRef.__PVT__m_ID__DOT__m_Control__DOT__is_lsu_w)
                                                 ? 2U
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__is_csr)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__is_fpu)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_MUL_DIV)
                                                    ? 6U
                                                    : 0U)))))));
                vlSelfRef.__PVT__EX_imm_out = vlSelfRef.__PVT__decode_imm;
                vlSelfRef.__PVT__EX_bypass_sel_out 
                    = ((0x37U == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                        ? 1U : ((0xf0000053U == (0xfff0707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                 ? 2U : ((0xe0000053U 
                                          == (0xfff0707fU 
                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                          ? 3U : ((0xfU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                   ? 1U
                                                   : 0U))));
            }
            vlSelfRef.__PVT__EX_freg_wr_en_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                                  & ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_78) 
                                                     | ((0x2007U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                        | ((IData)(vlSelfRef.__PVT__FPU_sel1) 
                                                           | ((0xf0000053U 
                                                               == 
                                                               (0xfff0707fU 
                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                              | ((0x3007U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                 | (IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_69)))))));
            vlSelfRef.__PVT__EX_reg_wr_en_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                                 & (IData)(vlSelfRef.__PVT__reg_wr_en));
            vlSelfRef.__PVT__EX_is_impl_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                               & (IData)(vlSelfRef.__PVT__is_impl));
            vlSelfRef.__PVT__EX_pc_valid_out = ((~ (IData)(vlSelfRef.__PVT__EX_clear)) 
                                                & (IData)(vlSelfRef.__PVT__m_ID__DOT__ID_pc_valid_out));
        }
        vlSelfRef.__PVT__lsu_writeback_value_o = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_u_type))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_u_type))
                                                    ? vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_u_type))
                                                     ? vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r
                                                     : 
                                                    ((vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelfRef.__PVT__u_lsu__DOT__writeback_value_pre))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_u_type))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_u_type))
                                                     ? 
                                                    ((vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelfRef.__PVT__u_lsu__DOT__writeback_value_pre))
                                                     : 
                                                    ((vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
                                                      << 0x18U) 
                                                     | (0xffffffU 
                                                        & vlSelfRef.__PVT__u_lsu__DOT__writeback_value_pre)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_u_type))
                                                     ? 
                                                    ((vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelfRef.__PVT__u_lsu__DOT__writeback_value_pre))
                                                     : vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r)));
        vlSelfRef.__PVT__u_lsu__DOT__writeback_value_pre 
            = ((IData)(vlSelfRef.__PVT__mmu_lsu_valid)
                ? vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r
                : vlSelfRef.__PVT__u_lsu__DOT__writeback_value_pre);
        if (vlSelfRef.__PVT__ID_en) {
            if (vlSelfRef.__PVT__ID_clear) {
                vlSelfRef.__PVT__m_ID__DOT__ID_pc_out = 0U;
                vlSelfRef.__PVT__m_ID__DOT__ID_pc_p4_out = 0U;
            } else {
                vlSelfRef.__PVT__m_ID__DOT__ID_pc_out 
                    = vlSelfRef.__PVT__pc_out;
                vlSelfRef.__PVT__m_ID__DOT__ID_pc_p4_out 
                    = ((IData)(4U) + vlSelfRef.__PVT__pc_out);
            }
            vlSelfRef.__PVT__m_ID__DOT__ID_pc_valid_out 
                = (1U & (~ (IData)(vlSelfRef.__PVT__ID_clear)));
        }
    } else {
        vlSelfRef.__PVT__EX_pc_out = 0U;
        vlSelfRef.__PVT__EX_freg_wr_en_out = 0U;
        vlSelfRef.__PVT__EX_reg_wr_en_out = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__writeback_value_pre = 0U;
        vlSelfRef.__PVT__lsu_writeback_value_o = 0U;
        vlSelfRef.__PVT__EX_pc_p4_out = 0U;
        vlSelfRef.__PVT__EX_reg_w_sel_out = 0U;
        vlSelfRef.__PVT__EX_is_impl_out = 0U;
        vlSelfRef.__PVT__EX_pc_valid_out = 0U;
        vlSelfRef.__PVT__EX_imm_out = 0U;
        vlSelfRef.__PVT__EX_bypass_sel_out = 0U;
        vlSelfRef.__PVT__m_ID__DOT__ID_pc_out = 0U;
        vlSelfRef.__PVT__m_ID__DOT__ID_pc_p4_out = 0U;
        vlSelfRef.__PVT__m_ID__DOT__ID_pc_valid_out = 0U;
    }
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__higher_o 
        = ((IData)(vlSymsp->TOP.rst_n) && (IData)(vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__higher_o));
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__start_o 
        = ((IData)(vlSymsp->TOP.rst_n) && (IData)(vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__start_o));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
        = ((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r)) 
                     << 0x3aU) | (0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
           << 2U);
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U])))))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r)) 
                                    << 0x3aU) | (0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                                  >> 0x20U)) << 2U));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r)) 
                      << 0x3aU) | (0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o[0U]))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelfRef.__PVT__u_lsu__DOT__resp_u_type = (7U 
                                                & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                                [(0x1fU 
                                                  & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U]);
    vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
        = ((8U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
            ? ((4U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                ? ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                        ? vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o
                        : (vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o 
                           >> 8U)) : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                                       ? 0U : (vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o 
                                               >> 0x10U)))
                : ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                    ? 0U : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                             ? 0U : (vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o 
                                     >> 0x18U)))) : 
           ((4U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
             ? ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                 ? ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                     ? (0xffffffU & vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o)
                     : (0xffffU & (vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o 
                                   >> 8U))) : ((1U 
                                                & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                                                ? 0U
                                                : (0xffU 
                                                   & (vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o 
                                                      >> 0x10U))))
             : ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                 ? ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                     ? (0xffffU & vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o)
                     : (0xffU & (vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o 
                                 >> 8U))) : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_mask))
                                              ? (0xffU 
                                                 & vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o)
                                              : 0U))));
    if ((((IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_signed) 
          & (vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
             [(0x1fU & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
             >> 0xbU)) & (vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
                          >> 0xfU))) {
        vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
            = (0xffff0000U | (0xffffU & vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r));
    } else if ((((IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_signed) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                    [(0x1fU & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                    >> 0xcU)) & (vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
                                 >> 7U))) {
        vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r 
            = (0xffffff00U | (0xffU & vlSelfRef.__PVT__u_lsu__DOT__writeback_value_r));
    }
    vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__update_index 
        = (0x7ffU & ((vlSelfRef.__PVT__EX_pc_out >> 2U) 
                     ^ (IData)(vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__ghr)));
    vlSelfRef.__PVT__mmu_lsu_valid = ((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                       >> 0x1fU) ? 
                                      ((IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_valid) 
                                       & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit))
                                       : (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_valid));
    vlSelfRef.__PVT__u_lsu__DOT__pop_q = ((0U != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count) 
                                          & (IData)(vlSelfRef.__PVT__mmu_lsu_valid));
    vlSelfRef.__PVT__lsu_mmu_rd = ((0U != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count) 
                                   & ((~ (IData)(vlSelfRef.__PVT__mmu_lsu_valid)) 
                                      & (vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                         [(0x1fU & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                         >> 8U)));
    vlSelfRef.__PVT__lsu_mmu_wr = ((0U != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count) 
                                   & ((~ (IData)(vlSelfRef.__PVT__mmu_lsu_valid)) 
                                      & (vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                         [(0x1fU & vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                         >> 7U)));
    if ((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
         >> 0x1fU)) {
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_rd_c 
            = (((IData)(vlSelfRef.__PVT__lsu_mmu_rd) 
                & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit)) 
               | (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__is_pte));
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_wr_c 
            = ((IData)(vlSelfRef.__PVT__lsu_mmu_wr) 
               & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit));
    } else {
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_rd_c 
            = vlSelfRef.__PVT__lsu_mmu_rd;
        vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dcache_wr_c 
            = vlSelfRef.__PVT__lsu_mmu_wr;
    }
    vlSelfRef.__PVT__EX_start = ((~ (IData)(vlSelfRef.__PVT__m_EX__DOT__started)) 
                                 & ((IData)(vlSelfRef.__PVT__EX_is_impl_out) 
                                    & (IData)(vlSelfRef.__PVT__EX_pc_valid_out)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_higher_o[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__higher_o;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__higher_o 
        = ((IData)(vlSymsp->TOP.rst_n) && (0U != (IData)(vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_start_o[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__start_o;
    vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__start_o 
        = ((IData)(vlSymsp->TOP.rst_n) && ((~ ((IData)(vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out) 
                                               >> 2U)) 
                                           & (IData)(vlSelfRef.__PVT__MUL_DIV_start)));
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_req 
        = ((IData)(vlSelfRef.__PVT__lsu_mmu_rd) | (IData)(vlSelfRef.__PVT__lsu_mmu_wr));
    vlSelfRef.__PVT__FPU_start = ((IData)(vlSelfRef.__PVT__EX_start) 
                                  & (IData)(vlSelfRef.__PVT__EX_is_fpu_out));
    vlSelfRef.u_mmu__DOT____Vcellinp__MMU__DOT__DTLB__update_i 
        = ((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state)) 
           & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_req));
    vlSelfRef.__PVT__FPU_done = ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_adder_done) 
                                 | (((IData)(vlSelfRef.__PVT__FPU_start) 
                                     & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__enable_mask) 
                                        >> 1U)) | (
                                                   ((IData)(vlSelfRef.__PVT__FPU_start) 
                                                    & ((IData)(vlSelfRef.__PVT__m_FPU__DOT__enable_mask) 
                                                       >> 2U)) 
                                                   | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_multiplier_done) 
                                                      | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_divider_done) 
                                                         | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_sqrt_done) 
                                                            | ((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done) 
                                                               | ((IData)(vlSelfRef.__PVT__FPU_start) 
                                                                  & (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x340U 
                                                                              & (IData)(vlSelfRef.__PVT__m_FPU__DOT__enable_mask))))))))))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_higher_o[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__higher_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_start_o[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__start_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__3(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_8;
    u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_8 = 0;
    CData/*0:0*/ u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_9;
    u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_9 = 0;
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0x11U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__start_o;
    vlSelfRef.__PVT__csr_rd_data = ((IData)(vlSymsp->TOP__Computer__m_core0__m_CSR.__VdfgRegularize_ha8957302_0_32)
                                     ? vlSelfRef.__PVT__EX_inst_out
                                     : vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_rd_data_old);
    vlSelfRef.__PVT__csr_exception = (0x3fU & ((0x73U 
                                                == vlSelfRef.__PVT__EX_inst_out)
                                                ? ((IData)(0x18U) 
                                                   + (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_priv_q))
                                                : (
                                                   (0x200073U 
                                                    == 
                                                    (0xcfffffffU 
                                                     & vlSelfRef.__PVT__EX_inst_out))
                                                    ? 
                                                   ((IData)(0x30U) 
                                                    + (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_priv_q))
                                                    : 
                                                   ((0x100073U 
                                                     == vlSelfRef.__PVT__EX_inst_out)
                                                     ? 0x13U
                                                     : 
                                                    ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0x6000U 
                                                                & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q)) 
                                                              & (IData)(vlSelfRef.__PVT__EX_is_f_ext)))
                                                      ? 0x12U
                                                      : 
                                                     (((IData)(vlSelfRef.__PVT__FPU_done) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q 
                                                              >> 0xdU))))
                                                       ? 0x35U
                                                       : 
                                                      ((0x100fU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.__PVT__EX_inst_out))
                                                        ? 0x34U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__Computer__m_core0__m_CSR.__VdfgRegularize_ha8957302_0_32)
                                                         ? 0x12U
                                                         : 0U))))))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
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
    vlSelfRef.__PVT__LSU_start = ((IData)(vlSelfRef.__PVT__EX_start) 
                                  & ((0x10U != (0x30U 
                                                & (IData)(vlSelfRef.__PVT__csr_exception))) 
                                     & ((IData)(vlSelfRef.__PVT__EX_mem_rd_en_out) 
                                        | (IData)(vlSelfRef.__PVT__EX_mem_wr_en_out))));
    u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_8 = ((IData)(vlSelfRef.__PVT__EX_mem_wr_en_out) 
                                                  & (IData)(vlSelfRef.__PVT__LSU_start));
    u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_9 = ((IData)(vlSelfRef.__PVT__EX_mem_rd_en_out) 
                                                  & (IData)(vlSelfRef.__PVT__LSU_start));
    vlSelfRef.__PVT__u_lsu__DOT__sb_inst = ((IData)(vlSelfRef.__PVT__EX_mem_ctrl_out) 
                                            & (IData)(u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_8));
    vlSelfRef.__PVT__u_lsu__DOT__sh_inst = (((IData)(vlSelfRef.__PVT__EX_mem_ctrl_out) 
                                             >> 1U) 
                                            & (IData)(u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_8));
    vlSelfRef.__PVT__u_lsu__DOT__sw_inst = (((IData)(vlSelfRef.__PVT__EX_mem_ctrl_out) 
                                             >> 2U) 
                                            & (IData)(u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_8));
    vlSelfRef.__PVT__u_lsu__DOT__lb_inst = ((IData)(vlSelfRef.__PVT__EX_mem_ctrl_out) 
                                            & (IData)(u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_9));
    vlSelfRef.__PVT__u_lsu__DOT__lh_inst = (((IData)(vlSelfRef.__PVT__EX_mem_ctrl_out) 
                                             >> 1U) 
                                            & (IData)(u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_9));
    vlSelfRef.__PVT__u_lsu__DOT__lw_inst = (((IData)(vlSelfRef.__PVT__EX_mem_ctrl_out) 
                                             >> 2U) 
                                            & (IData)(u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_9));
    vlSelfRef.__PVT__u_lsu__DOT__st_inst = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__sb_inst) 
                                            | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__sh_inst) 
                                               | (IData)(vlSelfRef.__PVT__u_lsu__DOT__sw_inst)));
    vlSelfRef.__PVT__u_lsu__DOT__mem_lb = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__lb_inst) 
                                           | (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lh));
    vlSelfRef.u_lsu__DOT____VdfgExtracted_h107e6a66__0 
        = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__lw_inst) 
           | (IData)(vlSelfRef.__PVT__u_lsu__DOT__sw_inst));
    vlSelfRef.__PVT__u_lsu__DOT__ld_inst = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__lb_inst) 
                                            | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__lh_inst) 
                                               | (IData)(vlSelfRef.__PVT__u_lsu__DOT__lw_inst)));
    vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__st_inst) 
                                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_wr));
    vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__ld_inst) 
                                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_rd));
    vlSelfRef.__PVT__u_lsu__DOT__push_q = (((2U != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count) 
                                            & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r) 
                                               | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r))) 
                                           | (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_state));
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__4(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__4\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0x10U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__EX_done = (1U & ((~ (IData)(vlSelfRef.__PVT__EX_pc_valid_out)) 
                                      | ((~ (IData)(vlSelfRef.__PVT__EX_is_impl_out)) 
                                         | (((IData)(vlSelfRef.__PVT__EX_start) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) 
                                            | (((IData)(vlSelfRef.__PVT__EX_start) 
                                                & ((IData)(vlSelfRef.__PVT__EX_is_br_out) 
                                                   | (IData)(vlSelfRef.__PVT__EX_is_j_out))) 
                                               | ((2U 
                                                   == 
                                                   (((IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_valid_pre) 
                                                     << 1U) 
                                                    | (0U 
                                                       != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count))) 
                                                  | ((IData)(vlSelfRef.__PVT__FPU_done) 
                                                     | (((IData)(vlSelfRef.__PVT__EX_start) 
                                                         & ((IData)(vlSelfRef.__PVT__EX_is_csr_out) 
                                                            | ((0x10U 
                                                                == 
                                                                (0x30U 
                                                                 & (IData)(vlSelfRef.__PVT__csr_exception))) 
                                                               | (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_branch_r)))) 
                                                        | (((IData)(vlSelfRef.__PVT__EX_start) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.__PVT__EX_bypass_sel_out))) 
                                                           | ((IData)(vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__start_o) 
                                                              | (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__start_o)))))))))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0xfU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__start_o;
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[0xfU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[0xfU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__5(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__5\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0xeU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xfU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xfU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xfU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xfU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xfU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xfU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[0xeU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[0xeU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__6(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__6\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0xdU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xeU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xeU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xeU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xeU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xeU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xeU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0xcU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__start_o;
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[0xdU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[0xdU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[0xcU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[0xcU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__7(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__7\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0xbU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xdU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xdU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xdU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xdU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xdU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xdU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xcU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xcU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xcU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xcU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xcU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xcU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[0xbU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[0xbU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__8(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__8\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0xaU] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xbU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xbU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xbU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xbU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xbU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xbU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[9U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__start_o;
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[0xaU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[0xaU] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[9U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[9U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__9(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__9\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[8U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xaU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xaU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0xaU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xaU][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xaU][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0xaU][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[9U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[9U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[9U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[9U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[9U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[9U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[8U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[8U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__10(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__10\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[7U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[8U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[8U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[8U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[8U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[8U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[8U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[6U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__start_o;
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[7U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[7U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[6U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[6U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__11(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__11\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[5U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[7U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[7U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[7U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[7U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[7U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[7U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[6U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[6U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[6U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[6U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[6U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[6U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[5U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[5U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__12(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__12\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[4U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__shift_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__d_n_0_5 
        = ((0x20U & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o 
                              >> 0x21U)) << 5U)) | 
           (0x1fU & (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o 
                             >> 0x1dU))));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[5U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[5U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[5U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[5U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[5U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[5U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[3U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__start_o;
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[4U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[4U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[3U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[3U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__13(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__13\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[4U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[4U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[4U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[4U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[4U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[4U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[3U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[3U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[3U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[3U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[3U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[3U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__start_o;
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[2U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[2U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[1U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__14(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__14\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MUL_DIV_start = ((IData)(vlSelfRef.__PVT__EX_start) 
                                      & (IData)(vlSelfRef.__PVT__EX_is_MUL_DIV_out));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__q 
        = ((0x80U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__pre_add_r))
            ? (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r) 
                >= (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))
                ? 0U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r) 
                         >= (0x3fU & ((IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o 
                                               >> 0x1cU)) 
                                      + (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__d_n_0_5))))
                         ? 7U : 6U)) : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r) 
                                         > (0x3fU & 
                                            ((IData)(
                                                     (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o 
                                                      >> 0x1cU)) 
                                             + VL_SHIFTR_III(6,6,32, 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o 
                                                                         >> 0x1cU))), 1U))))
                                         ? 2U : (((IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r) 
                                                  > 
                                                  (0x3fU 
                                                   & VL_SHIFTR_III(6,6,32, 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o 
                                                                               >> 0x1cU))), 1U)))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_sign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__rem_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__unsign_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__start_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[2U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[2U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[2U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[2U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[2U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[2U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[1U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[1U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[1U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[1U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[1U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[1U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__EX_en) {
            vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out = 
                ((IData)(vlSelfRef.__PVT__EX_clear)
                  ? 0U : (7U & ((- (IData)((IData)(vlSelfRef.__PVT__is_MUL_DIV))) 
                                & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                   >> 0xcU))));
        }
    } else {
        vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out = 0U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o 
                               >> 0x20U));
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o, 1U)) 
                               >> 0x20U));
            }
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o 
                = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o 
                         << 2U));
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[0U] = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__q))) {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o 
                       << 2U);
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o 
                             << 2U));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
            } else {
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o 
                    = (2U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o 
                             << 2U));
                vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o 
                    = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o 
                       << 2U);
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                    = (IData)((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o, 1U)));
                vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                    = (IData)(((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o, 1U)) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__q))) {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o 
                = (1U | (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o 
                         << 2U));
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U] 
                = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U] 
                = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o 
                           >> 0x20U));
        } else {
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o 
                   << 2U);
            vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o 
                = (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o 
                   << 2U);
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U] = 0U;
            vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o;
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[0U] 
        = vlSelfRef.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__15(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__15\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_i[2U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0U][0U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_i[0U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0U][1U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_i[1U];
    vlSelfRef.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0U][2U] 
        = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_i[2U];
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__16(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__16\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__m_Register__DOT__regs__v0;
    __VdlyVal__m_Register__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__m_Register__DOT__regs__v0;
    __VdlyDim0__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__m_Register__DOT__regs__v0;
    __VdlySet__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__m_Register__DOT__regs__v1;
    __VdlySet__m_Register__DOT__regs__v1 = 0;
    IData/*31:0*/ __VdlyVal__m_FRegister__DOT__fregs__v0;
    __VdlyVal__m_FRegister__DOT__fregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__m_FRegister__DOT__fregs__v0;
    __VdlyDim0__m_FRegister__DOT__fregs__v0 = 0;
    CData/*0:0*/ __VdlySet__m_FRegister__DOT__fregs__v0;
    __VdlySet__m_FRegister__DOT__fregs__v0 = 0;
    CData/*0:0*/ __VdlySet__m_FRegister__DOT__fregs__v1;
    __VdlySet__m_FRegister__DOT__fregs__v1 = 0;
    // Body
    __VdlySet__m_FRegister__DOT__fregs__v0 = 0U;
    __VdlySet__m_FRegister__DOT__fregs__v1 = 0U;
    __VdlySet__m_Register__DOT__regs__v0 = 0U;
    __VdlySet__m_Register__DOT__regs__v1 = 0U;
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__WB_freg_wr_en_out) {
            __VdlyVal__m_FRegister__DOT__fregs__v0 
                = vlSelfRef.__PVT__wb_data_in;
            __VdlyDim0__m_FRegister__DOT__fregs__v0 
                = vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out;
            __VdlySet__m_FRegister__DOT__fregs__v0 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__magic)) & (IData)(vlSelfRef.__PVT__WB_reg_wr_en_out))) {
            __VdlyVal__m_Register__DOT__regs__v0 = 
                ((0U == (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out))
                  ? 0U : vlSelfRef.__PVT__wb_data_in);
            __VdlyDim0__m_Register__DOT__regs__v0 = vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out;
            __VdlySet__m_Register__DOT__regs__v0 = 1U;
        }
    } else {
        __VdlySet__m_FRegister__DOT__fregs__v1 = 1U;
        __VdlySet__m_Register__DOT__regs__v1 = 1U;
    }
    if (__VdlySet__m_FRegister__DOT__fregs__v0) {
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[__VdlyDim0__m_FRegister__DOT__fregs__v0] 
            = __VdlyVal__m_FRegister__DOT__fregs__v0;
    }
    if (__VdlySet__m_FRegister__DOT__fregs__v1) {
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[1U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[2U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[3U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[4U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[5U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[6U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[7U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[8U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[9U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0xaU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0xbU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0xcU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0xdU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0xeU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0xfU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x10U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x11U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x12U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x13U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x14U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x15U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x16U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x17U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x18U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x19U] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x1aU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x1bU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x1cU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x1dU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x1eU] = 0U;
        vlSelfRef.__PVT__m_FRegister__DOT__fregs[0x1fU] = 0U;
    }
    if (__VdlySet__m_Register__DOT__regs__v0) {
        vlSelfRef.__PVT__m_Register__DOT__regs[__VdlyDim0__m_Register__DOT__regs__v0] 
            = __VdlyVal__m_Register__DOT__regs__v0;
    }
    if (__VdlySet__m_Register__DOT__regs__v1) {
        vlSelfRef.__PVT__m_Register__DOT__regs[0U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[1U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[2U] = 0x10000U;
        vlSelfRef.__PVT__m_Register__DOT__regs[3U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[4U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[5U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[6U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[7U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[8U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[9U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelfRef.__PVT__m_Register__DOT__regs[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__17(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__17\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__WB_freg_wr_en_out = ((IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_freg_wr_en_out) 
                                          & ((IData)(vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_valid_out) 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__VdfgRegularize_hb63f781a_0_0)));
    vlSelfRef.__PVT__WB_reg_wr_en_out = ((IData)(vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_valid_out) 
                                         & ((IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_wr_en_out) 
                                            & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__VdfgRegularize_hb63f781a_0_0)));
    vlSelfRef.__PVT__wb_data_in = ((4U & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_w_sel_out))
                                    ? ((2U & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_w_sel_out))
                                        ? ((1U & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_w_sel_out))
                                            ? 0U : vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_MUL_DIV_out)
                                        : ((1U & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_w_sel_out))
                                            ? vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_bypass_out
                                            : vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_FPU_out))
                                    : ((2U & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_w_sel_out))
                                        ? ((1U & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_w_sel_out))
                                            ? vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_csr_rd_data_out
                                            : vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_mem_data_out)
                                        : ((1U & (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_w_sel_out))
                                            ? vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_ALU_out
                                            : vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_pc_p4_out)));
}

extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h7bf8ed02_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h5a1116b7_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h7a9d4c30_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h4e5b96a3_0;

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__18(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__18\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_67;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_67 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_72;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_72 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_73;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_73 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_74;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_74 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_76;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_76 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_77;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_77 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_80;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_80 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_81;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_81 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_82;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_82 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_83;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_83 = 0;
    CData/*0:0*/ m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_85;
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_85 = 0;
    QData/*33:0*/ m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0;
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_he53988dd__0 = 0;
    QData/*33:0*/ m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0;
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgExtracted_hd65a6458__0 = 0;
    CData/*0:0*/ m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgRegularize_h2acdb393_0_0;
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgRegularize_h2acdb393_0_0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdfgRegularize_ha8957302_0_3;
    __VdfgRegularize_ha8957302_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_ha8957302_0_4;
    __VdfgRegularize_ha8957302_0_4 = 0;
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
    vlSelfRef.__VdfgRegularize_ha8957302_0_80 = ((IData)(vlSelfRef.__PVT__EX_rs2_out) 
                                                 == (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out));
    vlSelfRef.__VdfgRegularize_ha8957302_0_15 = ((IData)(vlSelfRef.__PVT__WB_reg_wr_en_out) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out)));
    vlSelfRef.__VdfgRegularize_ha8957302_0_81 = ((IData)(vlSelfRef.__PVT__EX_rs1_out) 
                                                 == (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out));
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__EX_en) {
            vlSelfRef.__PVT__EX_rd_out = ((IData)(vlSelfRef.__PVT__EX_clear)
                                           ? 0U : (0x1fU 
                                                   & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                      >> 7U)));
        }
        if (vlSelfRef.__PVT__ID_en) {
            vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                = ((IData)(vlSelfRef.__PVT__ID_clear)
                    ? 0U : ((0x10000U > vlSelfRef.__PVT__pc_out)
                             ? (((vlSymsp->TOP__Computer__m_DataMemory.mem
                                  [(0xffffU & ((IData)(3U) 
                                               + vlSelfRef.__PVT__pc_out))] 
                                  << 0x18U) | (vlSymsp->TOP__Computer__m_DataMemory.mem
                                               [(0xffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.__PVT__pc_out))] 
                                               << 0x10U)) 
                                | ((vlSymsp->TOP__Computer__m_DataMemory.mem
                                    [(0xffffU & ((IData)(1U) 
                                                 + vlSelfRef.__PVT__pc_out))] 
                                    << 8U) | vlSymsp->TOP__Computer__m_DataMemory.mem
                                   [(0xffffU & vlSelfRef.__PVT__pc_out)]))
                             : 0U));
        }
        if (vlSelfRef.__PVT__pc_en) {
            vlSelfRef.__PVT__pc_out = vlSelfRef.__PVT__m_Fetch__DOT__pc_in;
        }
    } else {
        vlSelfRef.__PVT__EX_rd_out = 0U;
        vlSelfRef.__PVT__m_ID__DOT__ID_inst_out = 0U;
        vlSelfRef.__PVT__pc_out = 0U;
    }
    vlSelfRef.__PVT__EX_freg_fwd_data2 = (((IData)(vlSelfRef.__PVT__WB_freg_wr_en_out) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_80))
                                           ? vlSelfRef.__PVT__wb_data_in
                                           : vlSelfRef.__PVT__m_EX__DOT__freg_rd_data2_o);
    vlSelfRef.__PVT__EX_fwd_data2 = (((IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_15) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_80))
                                      ? vlSelfRef.__PVT__wb_data_in
                                      : vlSelfRef.__PVT__m_EX__DOT__reg_rd_data2_o);
    vlSelfRef.__PVT__EX_freg_fwd_data1 = (((IData)(vlSelfRef.__PVT__WB_freg_wr_en_out) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_81))
                                           ? vlSelfRef.__PVT__wb_data_in
                                           : vlSelfRef.__PVT__m_EX__DOT__freg_rd_data1_o);
    vlSelfRef.__PVT__EX_fwd_data1 = (((IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_15) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_81))
                                      ? vlSelfRef.__PVT__wb_data_in
                                      : vlSelfRef.__PVT__m_EX__DOT__reg_rd_data1_o);
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec 
        = ((IData)(((0U == (0x7f800000U & vlSelfRef.__PVT__EX_freg_fwd_data2)) 
                    & (0U != (0x7fffffU & vlSelfRef.__PVT__EX_freg_fwd_data2))))
            ? (0x7fffffU & vlSelfRef.__PVT__EX_freg_fwd_data2)
            : (0x800000U | (0x7fffffU & vlSelfRef.__PVT__EX_freg_fwd_data2)));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.__PVT__EX_freg_fwd_data2)) 
                   & (0U != (0x7fffffU & vlSelfRef.__PVT__EX_freg_fwd_data2))));
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
    m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT____VdfgRegularize_h2acdb393_0_0 
        = ((vlSelfRef.__PVT__EX_fwd_data1 >> 0x1fU) 
           & (~ (3U == (3U & (IData)(vlSelfRef.__PVT__EX_MUL_DIV_ctrl_out)))));
    vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_snan 
        = ((~ (vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec 
               >> 0x16U)) & (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan));
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
    vlSelfRef.__PVT__is_MUL_DIV = ((0x2000033U == (0xfe00707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                   | ((0x2001033U == 
                                       (0xfe00707fU 
                                        & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                      | ((0x2002033U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                         | ((0x2003033U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                            | ((0x2004033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                               | ((0x2005033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                  | ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                     | (0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)))))))));
    if ((2U & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) {
        if ((1U & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) {
            __VdfgRegularize_ha8957302_0_3 = (((- (IData)(
                                                          (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                 >> 0x14U));
            __VdfgRegularize_ha8957302_0_4 = (0xfffff000U 
                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out);
        } else {
            __VdfgRegularize_ha8957302_0_3 = 0U;
            __VdfgRegularize_ha8957302_0_4 = 0U;
        }
    } else {
        __VdfgRegularize_ha8957302_0_3 = 0U;
        __VdfgRegularize_ha8957302_0_4 = 0U;
    }
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_79 
        = ((0x1023U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0x2023U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_69 
        = ((0xd2000053U == (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | ((0xd2100053U == (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
              | ((0x40100053U == (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                 | (0x42000053U == (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)))));
    vlSelfRef.__VdfgRegularize_ha8957302_0_29 = ((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                 | ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                    | ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                       | ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                          | (0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))))));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_72 
        = ((0xc0000053U == (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0xc0100053U == (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    vlSelfRef.__PVT__FPU_sel1 = ((0xd0000053U == (0xfff0007fU 
                                                  & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                 | (0xd0100053U == 
                                    (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_71 
        = ((0x2007U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0x2027U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_81 
        = ((0x2073U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0x3073U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_83 
        = ((0x4003U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0x1003U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_82 
        = ((0x5003U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0x2003U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_74 
        = ((0xa0002053U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0xa0001053U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_73 
        = ((0xa0000053U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0xe0001053U == (0xfff0707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_67 
        = ((0x43U == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0x47U == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_77 
        = ((0x4bU == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0x4fU == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_76 
        = ((0x28000053U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | (0x28001053U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_87 
        = ((0x13U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | ((0x2013U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
              | ((0x3013U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                 | ((0x7013U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                    | ((0x6013U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                       | ((0x4013U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                          | ((0x1013U == (0xfc00707fU 
                                          & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                             | ((0x5013U == (0xfc00707fU 
                                             & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                | (0x40005013U == (0xfc00707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))))))))));
    vlSelfRef.__PVT__is_j = ((0x6fU == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                             | (0x67U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)));
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
    vlSelfRef.__PVT__decode_imm = ((0x40U & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                    ? ((0x20U & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                        ? ((0x10U & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                            ? ((8U 
                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                         >> 0xfU))
                                                      : 0U)
                                                     : 0U)))
                                            : ((8U 
                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                ? (
                                                   (4U 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                      ? 
                                                     ((((- (IData)(
                                                                   (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                                    >> 0x1fU))) 
                                                        << 0x15U) 
                                                       | (0x100000U 
                                                          & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                             >> 0xbU))) 
                                                      | (((0xff000U 
                                                           & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out) 
                                                          | (0x800U 
                                                             & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                                >> 9U))) 
                                                         | (0x7feU 
                                                            & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                               >> 0x14U))))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (4U 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                    ? __VdfgRegularize_ha8957302_0_3
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                                   >> 0x1fU))) 
                                                       << 0xdU) 
                                                      | (((0x1000U 
                                                           & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                              >> 0x13U)) 
                                                          | (0x800U 
                                                             & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                                << 4U))) 
                                                         | ((0x7e0U 
                                                             & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                                  >> 7U)))))
                                                      : 0U)
                                                     : 0U))))
                                        : 0U) : ((0x20U 
                                                  & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                   ? 
                                                  ((8U 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                     ? __VdfgRegularize_ha8957302_0_4
                                                     : 0U))
                                                   : 
                                                  ((8U 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                   ? 
                                                  ((8U 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                     ? __VdfgRegularize_ha8957302_0_4
                                                     : __VdfgRegularize_ha8957302_0_3))
                                                   : 
                                                  ((8U 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)
                                                    ? 0U
                                                    : __VdfgRegularize_ha8957302_0_3))));
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_70 
        = ((0xc2000053U == (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | ((0xc2100053U == (0xfff0007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
              | (IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_69)));
    vlSelfRef.__PVT__is_br = ((0x63U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_ha8957302_0_29));
    vlSelfRef.__PVT__is_csr = ((0x1073U == (0x707fU 
                                            & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                               | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_81) 
                                  | ((0x5073U == (0x707fU 
                                                  & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                     | ((0x6073U == 
                                         (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                        | ((0x7073U 
                                            == (0x707fU 
                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                           | ((0x73U 
                                               == vlSelfRef.__PVT__m_ID__DOT__ID_inst_out) 
                                              | ((0x100073U 
                                                  == vlSelfRef.__PVT__m_ID__DOT__ID_inst_out) 
                                                 | (0x200073U 
                                                    == 
                                                    (0xcfffffffU 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)))))))));
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_84 
        = ((3U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_83) 
              | (IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_82)));
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_78 
        = ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_67) 
           | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_77) 
              | ((0x53U == (0xfe00007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                 | ((0x8000053U == (0xfe00007fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                    | ((0x10000053U == (0xfe00007fU 
                                        & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                       | ((0x18000053U == (0xfe00007fU 
                                           & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                          | ((0x58000053U == (0xfe00007fU 
                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                             | ((0x20000053U == (0xfe00707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                | ((0x20001053U == 
                                    (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                   | ((0x20002053U 
                                       == (0xfe00707fU 
                                           & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                      | (IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_76)))))))))));
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_86 
        = ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_87) 
           | ((0x37U == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
              | (0x17U == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_80 
        = ((0x33U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
           | ((0x2033U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
              | ((0x3033U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                 | ((0x7033U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                    | ((0x6033U == (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                       | ((0x4033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                          | ((0x1033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                             | ((0x5033U == (0xfe00707fU 
                                             & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                | ((0x40000033U == 
                                    (0xfe00707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                   | ((0x40005033U 
                                       == (0xfe00707fU 
                                           & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                      | (IData)(vlSelfRef.__PVT__is_j)))))))))));
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
    vlSelfRef.__PVT__m_FPU__DOT__sp_convert_result 
        = ((0U == (IData)(vlSelfRef.__PVT__m_FPU__DOT__convert_output_type))
            ? (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_sign) 
                << 0x1fU) | (((IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_mant)))
            : (IData)(vlSelfRef.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int));
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
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_68 
        = ((IData)(vlSelfRef.__PVT__is_j) | (IData)(vlSelfRef.__PVT__is_br));
    vlSelfRef.__PVT__m_ID__DOT__m_Control__DOT__is_lsu_w 
        = ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_84) 
           | ((0x23U == (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
              | ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_79) 
                 | (IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_71))));
    vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_75 
        = ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_78) 
           | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_74) 
              | (IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_73)));
    vlSelfRef.__PVT__m_ID__DOT__m_Control__DOT__is_alu_w 
        = ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_87) 
           | ((0x17U == (0x7fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
              | (IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_80)));
    m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_85 
        = ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_86) 
           | (IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_80));
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw_req_addr_r 
        = ((IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__dtlb_req)
            ? vlSelfRef.__PVT__lsu_mmu_addr : vlSelfRef.__PVT__pc_out);
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__itlb_vpn_i 
        = (0xfffffU & ((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state))
                        ? vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r
                        : (vlSelfRef.__PVT__pc_out 
                           >> 0xcU)));
    vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__hit_w 
        = (vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__valid_ram
           [(0x7ffU & (vlSelfRef.__PVT__pc_out >> 2U))] 
           & (vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__tag_ram
              [(0x7ffU & (vlSelfRef.__PVT__pc_out >> 2U))] 
              == (vlSelfRef.__PVT__pc_out >> 0x14U)));
    vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r = ((IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_branch_r)
                                                  ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_target_r
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__br_taken)
                                                   ? vlSelfRef.__PVT__ALU_out
                                                   : vlSelfRef.__PVT__EX_pc_p4_out));
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
    vlSelfRef.__PVT__is_fpu = ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_75) 
                               | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_72) 
                                  | ((IData)(vlSelfRef.__PVT__FPU_sel1) 
                                     | (IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_70))));
    vlSelfRef.__PVT__ALU_ctrl = (((IData)(vlSelfRef.__PVT__m_ID__DOT__m_Control__DOT__is_alu_w) 
                                  | (IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_68))
                                  ? ((0x33U == (0xfe00707fU 
                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                      ? 4U : ((0x40000033U 
                                               == (0xfe00707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                               ? 6U
                                               : ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                   ? 7U
                                                   : 
                                                  ((0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                    ? 8U
                                                    : 
                                                   ((0x4033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                     ? 9U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                      ? 1U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                       ? 2U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                        ? 3U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                         ? 0xbU
                                                         : 
                                                        ((0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                          ? 0xaU
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                           ? 0xbU
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                            ? 0xaU
                                                            : 
                                                           ((0x1013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                             ? 1U
                                                             : 
                                                            ((0x5013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                              ? 2U
                                                              : 
                                                             ((0x40005013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                               ? 3U
                                                               : 
                                                              ((0x7013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                                ? 7U
                                                                : 
                                                               ((0x6013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                                 ? 8U
                                                                 : 
                                                                ((0x4013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                                  ? 9U
                                                                  : 
                                                                 ((0x13U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                                   ? 4U
                                                                   : 
                                                                  ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                                    ? 4U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))
                                                                     ? 0U
                                                                     : 
                                                                    ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_68)
                                                                      ? 4U
                                                                      : 0U))))))))))))))))))))))
                                  : 0U);
    vlSelfRef.__PVT__reg_wr_en = ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_85) 
                                  | ((3U == (0x707fU 
                                             & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                     | ((0x4003U == 
                                         (0x707fU & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                        | ((0x1003U 
                                            == (0x707fU 
                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                           | ((0x5003U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                              | ((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                 | ((0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                    | ((0x2001033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                       | ((0x2002033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                          | ((0x2003033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                             | ((0x2004033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                | ((0x2005033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                   | ((0x2006033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                      | ((0x2007033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                         | ((0x1073U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                            | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_81) 
                                                                               | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0xa0002053U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0xa0001053U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0xa0000053U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0xe0001053U 
                                                                                == 
                                                                                (0xfff0707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0xc0000053U 
                                                                                == 
                                                                                (0xfff0007fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0xc0100053U 
                                                                                == 
                                                                                (0xfff0007fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | (0xe0000053U 
                                                                                == 
                                                                                (0xfff0707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)))))))))))))))))))))))))));
    vlSelfRef.__PVT__is_impl = ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_85) 
                                | ((0x63U == (0x707fU 
                                              & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                   | ((0x1063U == (0x707fU 
                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                      | ((0x4063U == 
                                          (0x707fU 
                                           & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                         | ((0x5063U 
                                             == (0x707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                            | ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                               | ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                  | ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                     | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_83) 
                                                        | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_82) 
                                                           | ((0x23U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                              | ((0x1023U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                 | ((0x2023U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                    | ((0x2000033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                       | ((0x2001033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                          | ((0x2002033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                             | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_81) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x73U 
                                                                                == vlSelfRef.__PVT__m_ID__DOT__ID_inst_out) 
                                                                                | ((0x30200073U 
                                                                                == vlSelfRef.__PVT__m_ID__DOT__ID_inst_out) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_67) 
                                                                                | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_77) 
                                                                                | ((0x53U 
                                                                                == 
                                                                                (0xfe00007fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x8000053U 
                                                                                == 
                                                                                (0xfe00007fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x10000053U 
                                                                                == 
                                                                                (0xfe00007fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x18000053U 
                                                                                == 
                                                                                (0xfe00007fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x58000053U 
                                                                                == 
                                                                                (0xfe00007fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x20000053U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x20001053U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((0x20002053U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_76) 
                                                                                | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_74) 
                                                                                | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_73) 
                                                                                | ((IData)(vlSelfRef.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_71) 
                                                                                | ((IData)(m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_72) 
                                                                                | ((IData)(vlSelfRef.__PVT__FPU_sel1) 
                                                                                | ((0xf0000053U 
                                                                                == 
                                                                                (0xfff0707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out)) 
                                                                                | (0xe0000053U 
                                                                                == 
                                                                                (0xfff0707fU 
                                                                                & vlSelfRef.__PVT__m_ID__DOT__ID_inst_out))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit 
        = ((vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__itlb_vpn_i 
            == vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__vpn_q) 
           & (IData)(vlSelfRef.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__tlb_valid_r));
    if (vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__hit_w) {
        vlSelfRef.__PVT__bp_pred_target_out = vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__target_ram
            [(0x7ffU & (vlSelfRef.__PVT__pc_out >> 2U))];
        vlSelfRef.__PVT__bp_pred_taken_out = (1U & 
                                              (vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht
                                               [(0x7ffU 
                                                 & ((vlSelfRef.__PVT__pc_out 
                                                     >> 2U) 
                                                    ^ (IData)(vlSelfRef.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__ghr)))] 
                                               >> 1U));
    } else {
        vlSelfRef.__PVT__bp_pred_target_out = 0U;
        vlSelfRef.__PVT__bp_pred_taken_out = 0U;
    }
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
    vlSelfRef.__PVT__m_Fetch__DOT__pc_in = ((IData)(vlSelfRef.__PVT__br_flush)
                                             ? vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r
                                             : ((IData)(vlSelfRef.__PVT__bp_pred_taken_out)
                                                 ? vlSelfRef.__PVT__bp_pred_target_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.__PVT__pc_out)));
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
