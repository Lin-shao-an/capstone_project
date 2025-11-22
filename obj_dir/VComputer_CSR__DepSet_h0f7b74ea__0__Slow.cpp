// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_CSR.h"

VL_ATTR_COLD void VComputer_CSR___ctor_var_reset(VComputer_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VComputer_CSR___ctor_var_reset\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9812503827101699671ull);
    vlSelf->__PVT__inst_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2881661861247159430ull);
    vlSelf->__PVT__csr_op_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13947712468962844937ull);
    vlSelf->__PVT__is_csr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2624477567154838063ull);
    vlSelf->__PVT__is_csr_imm_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17258924884951278642ull);
    vlSelf->__PVT__rs1_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17805477695922649936ull);
    vlSelf->__PVT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1907721050676832401ull);
    vlSelf->__PVT__reg_rd_data1_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2875976388598638579ull);
    vlSelf->__PVT__is_fpu_done_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11194820199585055452ull);
    vlSelf->__PVT__fpu_flags_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10780713963168181583ull);
    vlSelf->__PVT__is_f_ext_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10485618365742158084ull);
    vlSelf->__PVT__csr_wr_addr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13628206993137463069ull);
    vlSelf->__PVT__exception_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4367809251299883802ull);
    vlSelf->__PVT__csr_rd_addr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12286165439502110966ull);
    vlSelf->__PVT__magic_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9092269294945577500ull);
    vlSelf->__PVT__csr_branch_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18282554067017894353ull);
    vlSelf->__PVT__csr_target_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17920179322722076055ull);
    vlSelf->__PVT__interrupt_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 761880671729982424ull);
    vlSelf->__PVT__csr_exception_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13979235374464428094ull);
    vlSelf->__PVT__csr_rd_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3560047586967960218ull);
    vlSelf->__PVT__csr_satp_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 680430045159606177ull);
    vlSelf->__PVT__serial_out_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6609955635440280162ull);
    vlSelf->__PVT__serial_out_data_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9721172610444003179ull);
    vlSelf->__PVT__serial_flag_clr_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10128373061926301326ull);
    vlSelf->__PVT__csr_rd_data_old = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17764259408794990743ull);
    vlSelf->__PVT__csr_wr_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17667826775857722032ull);
    vlSelf->__PVT__csr_wr_data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17904536471870190939ull);
    vlSelf->__PVT__csr_fault_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4734412493654105414ull);
    vlSelf->__VdfgRegularize_ha8957302_0_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5712378918156621066ull);
}
