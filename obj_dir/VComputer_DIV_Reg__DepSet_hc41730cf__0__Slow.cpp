// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_DIV_Reg.h"

VL_ATTR_COLD void VComputer_DIV_Reg___ctor_var_reset(VComputer_DIV_Reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VComputer_DIV_Reg___ctor_var_reset\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__start_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11256916718069295315ull);
    vlSelf->__PVT__r_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17019515223226819787ull);
    vlSelf->__PVT__d_i = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2330852176559559633ull);
    vlSelf->__PVT__neg_d_i = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5122988685961683603ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__r_1_i, __VscopeHash, 5288400231741852109ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__r_2_i, __VscopeHash, 4767778574334931460ull);
    vlSelf->__PVT__pos_q_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9498785134123690139ull);
    vlSelf->__PVT__neg_q_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17534048852436896448ull);
    vlSelf->__PVT__shift_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1851762221142788714ull);
    vlSelf->__PVT__r_sign_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2430237659589375103ull);
    vlSelf->__PVT__d_sign_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4113658729481165841ull);
    vlSelf->__PVT__unsign_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5350527927269924926ull);
    vlSelf->__PVT__rem_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6788954606646461763ull);
    vlSelf->__PVT__start_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14267200699842359984ull);
    vlSelf->__PVT__r_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2314509443208392179ull);
    vlSelf->__PVT__d_o = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3490577879059000820ull);
    vlSelf->__PVT__neg_d_o = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2345928716104461906ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__r_1_o, __VscopeHash, 7389249254965433765ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->__PVT__r_2_o, __VscopeHash, 9557895687525843606ull);
    vlSelf->__PVT__pos_q_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16338602809901851119ull);
    vlSelf->__PVT__neg_q_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7945999584183706909ull);
    vlSelf->__PVT__shift_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2178856444232402370ull);
    vlSelf->__PVT__r_sign_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9702426900106873269ull);
    vlSelf->__PVT__d_sign_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4879568189764222613ull);
    vlSelf->__PVT__unsign_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1063157362375818996ull);
    vlSelf->__PVT__rem_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15456667219662581560ull);
}
