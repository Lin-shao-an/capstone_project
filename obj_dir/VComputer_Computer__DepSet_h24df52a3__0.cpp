// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_Computer.h"
#include "VComputer__Syms.h"

VL_INLINE_OPT void VComputer_Computer___nba_sequent__TOP__Computer__0(VComputer_Computer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VComputer_Computer___nba_sequent__TOP__Computer__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_mem_wr_data = ((vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                       [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][1U] 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                       [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                       >> 0xdU));
}

VL_INLINE_OPT void VComputer_Computer___nba_sequent__TOP__Computer__1(VComputer_Computer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VComputer_Computer___nba_sequent__TOP__Computer__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_mem_wr_en = ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__d_available_pre) 
                                    & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_wr_c));
    vlSelfRef.__PVT__d_mem_ctrl = (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__d_available_pre) 
                                    & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_rd_c))
                                    ? 0xfU : ((IData)(vlSelfRef.__PVT__d_mem_wr_en)
                                               ? ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_wr)
                                                   ? (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__resp_mask)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_rd)
                                                    ? 0xfU
                                                    : 0U))
                                               : 0U));
}
