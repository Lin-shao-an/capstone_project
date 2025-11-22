// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_PipelineCPU.h"

VL_INLINE_OPT void VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__0(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_sequent__TOP__Computer__m_core0__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dec_pc = vlSelfRef.__PVT__pc_out;
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_comb__TOP__Computer__m_core0__0(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_comb__TOP__Computer__m_core0__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__m_Register__rs1 = ((0xaaaaU 
                                              == vlSelfRef.__PVT__dec_pc)
                                              ? 0xaU
                                              : (0x1fU 
                                                 & (vlSelfRef.__PVT__m_ID__DOT__ID_inst_out 
                                                    >> 0xfU)));
}

VL_INLINE_OPT void VComputer_PipelineCPU___nba_comb__TOP__Computer__m_core0__1(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___nba_comb__TOP__Computer__m_core0__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__magic = ((0xdeadU == vlSelfRef.__PVT__m_Register__DOT__regs
                               [vlSelfRef.__Vcellinp__m_Register__rs1]) 
                              & (0xaaaaU == vlSelfRef.__PVT__dec_pc));
}
