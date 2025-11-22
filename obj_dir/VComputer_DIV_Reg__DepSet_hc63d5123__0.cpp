// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_DIV_Reg.h"
#include "VComputer__Syms.h"

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pos_q_o = 0U;
    vlSelfRef.__PVT__neg_q_o = 0U;
    vlSelfRef.__PVT__r_2_o[0U] = 0U;
    vlSelfRef.__PVT__r_2_o[1U] = 0U;
    vlSelfRef.__PVT__r_2_o[2U] = 0U;
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__r_1_o[0U] = vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o[2U];
    } else {
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o;
        vlSelfRef.__PVT__neg_d_o = (0x3ffffffffULL 
                                    & (- vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o));
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                     >> 0x1fU));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1 
                                     >> 0x1fU));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (1U & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out) 
                                        >> 1U)));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (1U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out)));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__MUL_DIV_start) 
                                    & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out) 
                                       >> 2U)));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__r_1_o[0U] = vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[2U];
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__pos_q_o;
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        if ((2U & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[2U])) {
            vlSelfRef.__PVT__neg_q_o = ((0xfffffffcU 
                                         & vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o) 
                                        | (((0U != 
                                             (3U & vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o)) 
                                            << 1U) 
                                           | (1U & 
                                              (~ vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o))));
            vlSelfRef.__PVT__r_2_o[1U] = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_o);
            vlSelfRef.__PVT__r_2_o[2U] = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                  >> 0x20U));
        } else {
            vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o;
            vlSelfRef.__PVT__r_2_o[1U] = 0U;
            vlSelfRef.__PVT__r_2_o[2U] = 0U;
        }
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg__3(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg__3\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg__0(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__r_1_o[0U] = vlSelfRef.__PVT__r_1_i[0U];
        vlSelfRef.__PVT__r_1_o[1U] = vlSelfRef.__PVT__r_1_i[1U];
        vlSelfRef.__PVT__r_1_o[2U] = vlSelfRef.__PVT__r_1_i[2U];
        vlSelfRef.__PVT__r_2_o[0U] = vlSelfRef.__PVT__r_2_i[0U];
        vlSelfRef.__PVT__r_2_o[1U] = vlSelfRef.__PVT__r_2_i[1U];
        vlSelfRef.__PVT__r_2_o[2U] = vlSelfRef.__PVT__r_2_i[2U];
        vlSelfRef.__PVT__pos_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o;
        vlSelfRef.__PVT__neg_q_o = vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o;
        vlSelfRef.__PVT__shift_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__shift_o;
        vlSelfRef.__PVT__neg_d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o;
    } else {
        vlSelfRef.__PVT__r_1_o[0U] = 0U;
        vlSelfRef.__PVT__r_1_o[1U] = 0U;
        vlSelfRef.__PVT__r_1_o[2U] = 0U;
        vlSelfRef.__PVT__r_2_o[0U] = 0U;
        vlSelfRef.__PVT__r_2_o[1U] = 0U;
        vlSelfRef.__PVT__r_2_o[2U] = 0U;
        vlSelfRef.__PVT__pos_q_o = 0U;
        vlSelfRef.__PVT__neg_q_o = 0U;
        vlSelfRef.__PVT__shift_o = 0U;
        vlSelfRef.__PVT__neg_d_o = 0ULL;
    }
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg__1(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__d_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o;
        vlSelfRef.__PVT__r_o = vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_o;
    } else {
        vlSelfRef.__PVT__d_o = 0ULL;
        vlSelfRef.__PVT__r_o = 0U;
    }
    vlSelfRef.__PVT__r_sign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
    vlSelfRef.__PVT__rem_o = ((IData)(vlSymsp->TOP.rst_n) 
                              && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__rem_o));
    vlSelfRef.__PVT__unsign_o = ((IData)(vlSymsp->TOP.rst_n) 
                                 && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
    vlSelfRef.__PVT__start_o = ((IData)(vlSymsp->TOP.rst_n) 
                                && (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__start_o));
}

VL_INLINE_OPT void VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg__2(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___nba_sequent__TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_7[0U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                      & (((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[0U])) 
                     | (((IData)((0x3ffffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                         << 2U) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    __Vtemp_7[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                      & ((((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U)) | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U])) 
                     | ((((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    __Vtemp_7[2U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                      & (((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU) 
                         | vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U])) 
                     | (((IData)(((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                  >> 0x20U)) >> 0x1eU) 
                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_8, __Vtemp_7, 1U);
    vlSelfRef.__PVT__r_2_i[0U] = __Vtemp_8[0U];
    vlSelfRef.__PVT__r_2_i[1U] = __Vtemp_8[1U];
    vlSelfRef.__PVT__r_2_i[2U] = (3U & __Vtemp_8[2U]);
    vlSelfRef.__PVT__r_1_i[0U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[0U] 
                                  ^ (((IData)((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                      << 2U) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[0U]));
    vlSelfRef.__PVT__r_1_i[1U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[1U] 
                                  ^ ((((IData)((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((0x3ffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                >> 0x20U)) 
                                       << 2U)) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[1U]));
    vlSelfRef.__PVT__r_1_i[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1[2U] 
                                  ^ (((IData)(((0x3ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                               >> 0x20U)) 
                                      >> 0x1eU) ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub[2U]));
}
