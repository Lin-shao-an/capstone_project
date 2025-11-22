// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_Writeback.h"
#include "VComputer__Syms.h"

VL_INLINE_OPT void VComputer_Writeback___nba_sequent__TOP__Computer__m_core0__m_WB__0(VComputer_Writeback* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VComputer_Writeback___nba_sequent__TOP__Computer__m_core0__m_WB__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP__Computer__m_core0.__PVT__WB_en) {
            if (vlSymsp->TOP__Computer__m_core0.__PVT__WB_clear) {
                vlSelfRef.WB_pc_out = 0U;
                vlSelfRef.__PVT__WB_FPU_out = 0U;
                vlSelfRef.__PVT__WB_ALU_out = 0U;
                vlSelfRef.__PVT__WB_csr_rd_data_out = 0U;
                vlSelfRef.__PVT__WB_exception_out = 0U;
                vlSelfRef.__PVT__WB_mem_data_out = 0U;
                vlSelfRef.__PVT__WB_pc_p4_out = 0U;
                vlSelfRef.__PVT__WB_reg_w_sel_out = 0U;
                vlSelfRef.__PVT__WB_bypass_out = 0U;
                vlSelfRef.__PVT__WB_MUL_DIV_out = 0U;
            } else {
                vlSelfRef.WB_pc_out = vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out;
                vlSelfRef.__PVT__WB_FPU_out = vlSymsp->TOP__Computer__m_core0.__PVT__FPU_out;
                vlSelfRef.__PVT__WB_ALU_out = vlSymsp->TOP__Computer__m_core0.__PVT__ALU_out;
                vlSelfRef.__PVT__WB_csr_rd_data_out 
                    = vlSymsp->TOP__Computer__m_core0.__PVT__csr_rd_data;
                vlSelfRef.__PVT__WB_exception_out = vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception;
                vlSelfRef.__PVT__WB_mem_data_out = vlSymsp->TOP__Computer__m_core0.__PVT__lsu_writeback_value_o;
                vlSelfRef.__PVT__WB_pc_p4_out = vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_p4_out;
                vlSelfRef.__PVT__WB_reg_w_sel_out = vlSymsp->TOP__Computer__m_core0.__PVT__EX_reg_w_sel_out;
                vlSelfRef.__PVT__WB_bypass_out = ((2U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bypass_sel_out))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bypass_sel_out))
                                                    ? vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data1
                                                    : vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bypass_sel_out))
                                                    ? vlSymsp->TOP__Computer__m_core0.__PVT__EX_imm_out
                                                    : 0U));
                vlSelfRef.__PVT__WB_MUL_DIV_out = ((IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__start_o)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__higher_o)
                                                     ? (IData)(
                                                               (vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_sum 
                                                                >> 0x20U))
                                                     : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_sum))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__start_o)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__rem_o)
                                                      ? 
                                                     ((0U 
                                                       != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)
                                                       ? 
                                                      (((~ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o)) 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o))
                                                        ? 
                                                       (- (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out))
                                                        : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out))
                                                       : vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_o)
                                                      : 
                                                     ((0U 
                                                       != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)
                                                       ? 
                                                      (((~ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o)) 
                                                        & ((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_sign_o) 
                                                           ^ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o)))
                                                        ? 
                                                       (- vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out)
                                                        : vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out)
                                                       : 0xffffffffU))
                                                     : 0U));
            }
            vlSelfRef.__PVT__WB_freg_wr_en_out = ((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_clear)) 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_wr_en_out));
            vlSelfRef.__PVT__WB_reg_wr_en_out = ((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_clear)) 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_reg_wr_en_out));
            vlSelfRef.__PVT__WB_is_impl_out = ((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_clear)) 
                                               & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_impl_out));
            vlSelfRef.WB_pc_valid_out = ((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_clear)) 
                                         & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_valid_out));
        }
    } else {
        vlSelfRef.WB_pc_out = 0U;
        vlSelfRef.__PVT__WB_freg_wr_en_out = 0U;
        vlSelfRef.__PVT__WB_reg_wr_en_out = 0U;
        vlSelfRef.__PVT__WB_FPU_out = 0U;
        vlSelfRef.__PVT__WB_ALU_out = 0U;
        vlSelfRef.__PVT__WB_csr_rd_data_out = 0U;
        vlSelfRef.__PVT__WB_exception_out = 0U;
        vlSelfRef.__PVT__WB_mem_data_out = 0U;
        vlSelfRef.__PVT__WB_pc_p4_out = 0U;
        vlSelfRef.__PVT__WB_reg_w_sel_out = 0U;
        vlSelfRef.__PVT__WB_is_impl_out = 0U;
        vlSelfRef.WB_pc_valid_out = 0U;
        vlSelfRef.__PVT__WB_bypass_out = 0U;
        vlSelfRef.__PVT__WB_MUL_DIV_out = 0U;
    }
    vlSelfRef.__VdfgRegularize_hb63f781a_0_0 = ((IData)(vlSelfRef.__PVT__WB_is_impl_out) 
                                                & (0x10U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelfRef.__PVT__WB_exception_out))));
}

VL_INLINE_OPT void VComputer_Writeback___nba_sequent__TOP__Computer__m_core0__m_WB__1(VComputer_Writeback* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VComputer_Writeback___nba_sequent__TOP__Computer__m_core0__m_WB__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP__Computer__m_core0.__PVT__WB_en) {
            vlSelfRef.__PVT__WB_rd_out = ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_clear)
                                           ? 0U : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_rd_out));
        }
    } else {
        vlSelfRef.__PVT__WB_rd_out = 0U;
    }
}
