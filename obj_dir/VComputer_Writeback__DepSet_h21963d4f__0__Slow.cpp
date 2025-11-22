// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_Writeback.h"

VL_ATTR_COLD void VComputer_Writeback___stl_sequent__TOP__Computer__m_core0__m_WB__0(VComputer_Writeback* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VComputer_Writeback___stl_sequent__TOP__Computer__m_core0__m_WB__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hb63f781a_0_0 = ((IData)(vlSelfRef.__PVT__WB_is_impl_out) 
                                                & (0x10U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelfRef.__PVT__WB_exception_out))));
}

VL_ATTR_COLD void VComputer_Writeback___ctor_var_reset(VComputer_Writeback* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VComputer_Writeback___ctor_var_reset\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->__PVT__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    vlSelf->__PVT__is_impl_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5374679212605054218ull);
    vlSelf->__PVT__pc_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1111578412568020907ull);
    vlSelf->__PVT__pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13700948051903872402ull);
    vlSelf->__PVT__pc_p4_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10422476621494271479ull);
    vlSelf->__PVT__rd_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5100356933441386244ull);
    vlSelf->__PVT__exception_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12130853313480592709ull);
    vlSelf->__PVT__bypass_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13756415998512574466ull);
    vlSelf->__PVT__ALU_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11491415770991579500ull);
    vlSelf->__PVT__MUL_DIV_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11141738093407679134ull);
    vlSelf->__PVT__FPU_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6114119671518416661ull);
    vlSelf->__PVT__mem_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15613662767125171984ull);
    vlSelf->__PVT__csr_rd_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14470933778831349230ull);
    vlSelf->__PVT__reg_wr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13662672557356252845ull);
    vlSelf->__PVT__freg_wr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5609403593339417626ull);
    vlSelf->__PVT__reg_w_sel_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6930797350578509107ull);
    vlSelf->__PVT__is_impl_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 234839691873065861ull);
    vlSelf->__PVT__pc_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 783514939669681687ull);
    vlSelf->__PVT__pc_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12049352105174271456ull);
    vlSelf->__PVT__rd_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3315672295732866941ull);
    vlSelf->__PVT__wb_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7349010617362078557ull);
    vlSelf->__PVT__reg_wr_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2508148185580909533ull);
    vlSelf->__PVT__freg_wr_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14468498167985714053ull);
    vlSelf->__PVT__WB_is_impl_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16574746575231729326ull);
    vlSelf->WB_pc_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444830550200843512ull);
    vlSelf->WB_pc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1905103786421490858ull);
    vlSelf->__PVT__WB_pc_p4_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2670593248898103078ull);
    vlSelf->__PVT__WB_rd_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17376810968407401731ull);
    vlSelf->__PVT__WB_exception_out = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11124183405478374134ull);
    vlSelf->__PVT__WB_ALU_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13426530316368992560ull);
    vlSelf->__PVT__WB_MUL_DIV_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6669080136678528739ull);
    vlSelf->__PVT__WB_mem_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 696060570022247732ull);
    vlSelf->__PVT__WB_csr_rd_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1593720859163995494ull);
    vlSelf->__PVT__WB_FPU_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5944813621479812097ull);
    vlSelf->__PVT__WB_bypass_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10788406086551707779ull);
    vlSelf->__PVT__WB_reg_wr_en_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12992093116212170273ull);
    vlSelf->__PVT__WB_freg_wr_en_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5527233243597041818ull);
    vlSelf->__PVT__WB_reg_w_sel_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7485510550596436980ull);
    vlSelf->__VdfgRegularize_hb63f781a_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6309662551051463761ull);
}
