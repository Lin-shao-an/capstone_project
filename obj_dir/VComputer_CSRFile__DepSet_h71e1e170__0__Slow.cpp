// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_CSRFile.h"
#include "VComputer__Syms.h"

VL_ATTR_COLD void VComputer_CSRFile___stl_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__0(VComputer_CSRFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputer_CSRFile___stl_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_mcycle_r = ((IData)(1U) + vlSelfRef.__PVT__csr_mcycle_q);
    vlSelfRef.csr_rd_addr_i = vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out;
}
