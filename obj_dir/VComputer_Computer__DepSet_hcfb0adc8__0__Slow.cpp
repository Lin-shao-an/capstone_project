// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_Computer.h"

VL_ATTR_COLD void VComputer_Computer___ctor_var_reset(VComputer_Computer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VComputer_Computer___ctor_var_reset\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__d_mem_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17866232572077147847ull);
    vlSelf->__PVT__d_mem_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 926099043427834522ull);
    vlSelf->__PVT__d_mem_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14672191271066383403ull);
    vlSelf->__PVT__serial_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13580906164409305975ull);
    vlSelf->__PVT__serial_out_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8637215738046183170ull);
    vlSelf->__PVT__serial_flag_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 218184356228901312ull);
}
