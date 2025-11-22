// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_DataMemory.h"

VL_ATTR_COLD void VComputer_DataMemory___ctor_var_reset(VComputer_DataMemory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_DataMemory___ctor_var_reset\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__i_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11859596126772393031ull);
    vlSelf->__PVT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9812503827101699671ull);
    vlSelf->__PVT__i_available_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040086708494401881ull);
    vlSelf->__PVT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710928637576349896ull);
    vlSelf->__PVT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814484142505630662ull);
    vlSelf->__PVT__ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10440442894316637683ull);
    vlSelf->__PVT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12021632533271657083ull);
    vlSelf->__PVT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9877081704222771714ull);
    vlSelf->__PVT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14180446042470581157ull);
    vlSelf->__PVT__available_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15548747503847741188ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4032165174000709208ull);
    }
    vlSelf->__VdlyVal__mem__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5712071110568326953ull);
    vlSelf->__VdlyDim0__mem__v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12217656160251713783ull);
    vlSelf->__VdlySet__mem__v0 = 0;
    vlSelf->__VdlyVal__mem__v1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8978833189829141346ull);
    vlSelf->__VdlyDim0__mem__v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13404381687273928661ull);
    vlSelf->__VdlySet__mem__v1 = 0;
    vlSelf->__VdlyVal__mem__v2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10684181312219552102ull);
    vlSelf->__VdlyDim0__mem__v2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11893251311199088417ull);
    vlSelf->__VdlySet__mem__v2 = 0;
    vlSelf->__VdlyVal__mem__v3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4557553029209181409ull);
    vlSelf->__VdlyDim0__mem__v3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9325044766297607450ull);
    vlSelf->__VdlySet__mem__v3 = 0;
}
