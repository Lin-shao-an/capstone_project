// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_DataMemory.h"

VL_INLINE_OPT void VComputer_DataMemory___nba_sequent__TOP__Computer__m_DataMemory__2(VComputer_DataMemory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_DataMemory___nba_sequent__TOP__Computer__m_DataMemory__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0] 
            = vlSelfRef.__VdlyVal__mem__v0;
    }
    if (vlSelfRef.__VdlySet__mem__v1) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1] 
            = vlSelfRef.__VdlyVal__mem__v1;
    }
    if (vlSelfRef.__VdlySet__mem__v2) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2] 
            = vlSelfRef.__VdlyVal__mem__v2;
    }
    if (vlSelfRef.__VdlySet__mem__v3) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3] 
            = vlSelfRef.__VdlyVal__mem__v3;
    }
}
