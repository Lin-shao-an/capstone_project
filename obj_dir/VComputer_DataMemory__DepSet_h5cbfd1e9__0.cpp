// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_DataMemory.h"
#include "VComputer__Syms.h"

VL_INLINE_OPT void VComputer_DataMemory___nba_sequent__TOP__Computer__m_DataMemory__0(VComputer_DataMemory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_DataMemory___nba_sequent__TOP__Computer__m_DataMemory__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    vlSelfRef.__VdlySet__mem__v1 = 0U;
    vlSelfRef.__VdlySet__mem__v2 = 0U;
    vlSelfRef.__VdlySet__mem__v3 = 0U;
    if ((((IData)(vlSymsp->TOP__Computer.__PVT__d_mem_ctrl) 
          >> 3U) & (IData)(vlSymsp->TOP__Computer.__PVT__d_mem_wr_en))) {
        vlSelfRef.__VdlyVal__mem__v0 = (vlSymsp->TOP__Computer.__PVT__d_mem_wr_data 
                                        >> 0x18U);
        vlSelfRef.__VdlyDim0__mem__v0 = (0xffffU & 
                                         ((IData)(3U) 
                                          + vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r));
        vlSelfRef.__VdlySet__mem__v0 = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Computer.__PVT__d_mem_ctrl) 
          >> 2U) & (IData)(vlSymsp->TOP__Computer.__PVT__d_mem_wr_en))) {
        vlSelfRef.__VdlyVal__mem__v1 = (0xffU & (vlSymsp->TOP__Computer.__PVT__d_mem_wr_data 
                                                 >> 0x10U));
        vlSelfRef.__VdlyDim0__mem__v1 = (0xffffU & 
                                         ((IData)(2U) 
                                          + vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r));
        vlSelfRef.__VdlySet__mem__v1 = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Computer.__PVT__d_mem_ctrl) 
          >> 1U) & (IData)(vlSymsp->TOP__Computer.__PVT__d_mem_wr_en))) {
        vlSelfRef.__VdlyVal__mem__v2 = (0xffU & (vlSymsp->TOP__Computer.__PVT__d_mem_wr_data 
                                                 >> 8U));
        vlSelfRef.__VdlyDim0__mem__v2 = (0xffffU & 
                                         ((IData)(1U) 
                                          + vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r));
        vlSelfRef.__VdlySet__mem__v2 = 1U;
    }
    if (((IData)(vlSymsp->TOP__Computer.__PVT__d_mem_ctrl) 
         & (IData)(vlSymsp->TOP__Computer.__PVT__d_mem_wr_en))) {
        vlSelfRef.__VdlyVal__mem__v3 = (0xffU & vlSymsp->TOP__Computer.__PVT__d_mem_wr_data);
        vlSelfRef.__VdlyDim0__mem__v3 = (0xffffU & vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r);
        vlSelfRef.__VdlySet__mem__v3 = 1U;
    }
}

VL_INLINE_OPT void VComputer_DataMemory___nba_sequent__TOP__Computer__m_DataMemory__1(VComputer_DataMemory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_DataMemory___nba_sequent__TOP__Computer__m_DataMemory__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_o = ((IData)(vlSymsp->TOP.rst_n)
                                ? (((vlSelfRef.mem[
                                     (0xffffU & ((IData)(3U) 
                                                 + vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r))] 
                                     << 0x18U) | (vlSelfRef.mem
                                                  [
                                                  (0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r))] 
                                                  << 0x10U)) 
                                   | ((vlSelfRef.mem
                                       [(0xffffU & 
                                         ((IData)(1U) 
                                          + vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r))] 
                                       << 8U) | vlSelfRef.mem
                                      [(0xffffU & vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r)]))
                                : 0U);
}
