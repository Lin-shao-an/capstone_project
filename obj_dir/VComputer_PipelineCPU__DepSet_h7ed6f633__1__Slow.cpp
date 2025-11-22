// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_PipelineCPU.h"
#include "VComputer__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h7bf8ed02_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h5a1116b7_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h7a9d4c30_0;
extern const VlUnpacked<CData/*0:0*/, 4> VComputer__ConstPool__TABLE_h4e5b96a3_0;

VL_ATTR_COLD void VComputer_PipelineCPU___stl_sequent__TOP__Computer__m_core0__2(VComputer_PipelineCPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VComputer_PipelineCPU___stl_sequent__TOP__Computer__m_core0__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__EX_done = (1U & ((~ (IData)(vlSelfRef.__PVT__EX_pc_valid_out)) 
                                      | ((~ (IData)(vlSelfRef.__PVT__EX_is_impl_out)) 
                                         | (((IData)(vlSelfRef.__PVT__EX_start) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__EX_ALU_ctrl_out))) 
                                            | (((IData)(vlSelfRef.__PVT__EX_start) 
                                                & ((IData)(vlSelfRef.__PVT__EX_is_br_out) 
                                                   | (IData)(vlSelfRef.__PVT__EX_is_j_out))) 
                                               | ((2U 
                                                   == 
                                                   (((IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_valid_pre) 
                                                     << 1U) 
                                                    | (0U 
                                                       != vlSelfRef.__PVT__u_lsu__DOT__LDQ__DOT__count))) 
                                                  | ((IData)(vlSelfRef.__PVT__FPU_done) 
                                                     | (((IData)(vlSelfRef.__PVT__EX_start) 
                                                         & ((IData)(vlSelfRef.__PVT__EX_is_csr_out) 
                                                            | ((0x10U 
                                                                == 
                                                                (0x30U 
                                                                 & (IData)(vlSelfRef.__PVT__csr_exception))) 
                                                               | (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_branch_r)))) 
                                                        | (((IData)(vlSelfRef.__PVT__EX_start) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.__PVT__EX_bypass_sel_out))) 
                                                           | ((IData)(vlSelfRef.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__start_o) 
                                                              | (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__start_o)))))))))));
    vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r = ((IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_branch_r)
                                                  ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_target_r
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__br_taken)
                                                   ? vlSelfRef.__PVT__ALU_out
                                                   : vlSelfRef.__PVT__EX_pc_p4_out));
    vlSelfRef.__PVT__br_flush = ((IData)(vlSelfRef.__PVT__EX_bp_pred_taken_out)
                                  ? (vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r 
                                     != vlSelfRef.__PVT__EX_bp_pred_target_out)
                                  : (vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r 
                                     != vlSelfRef.__PVT__EX_pc_p4_out));
    vlSelfRef.__PVT__m_Fetch__DOT__pc_in = ((IData)(vlSelfRef.__PVT__br_flush)
                                             ? vlSelfRef.__PVT__m_Fetch__DOT__EX_pc_nx_r
                                             : ((IData)(vlSelfRef.__PVT__bp_pred_taken_out)
                                                 ? vlSelfRef.__PVT__bp_pred_target_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.__PVT__pc_out)));
    __Vtableidx1 = ((2U & ((~ (IData)(vlSelfRef.__PVT__EX_done)) 
                           << 1U)) | (IData)(vlSelfRef.__PVT__br_flush));
    vlSelfRef.__PVT__pc_en = VComputer__ConstPool__TABLE_h7bf8ed02_0
        [__Vtableidx1];
    vlSelfRef.__PVT__ID_en = VComputer__ConstPool__TABLE_h7bf8ed02_0
        [__Vtableidx1];
    vlSelfRef.__PVT__ID_clear = VComputer__ConstPool__TABLE_h5a1116b7_0
        [__Vtableidx1];
    vlSelfRef.__PVT__EX_en = VComputer__ConstPool__TABLE_h7bf8ed02_0
        [__Vtableidx1];
    vlSelfRef.__PVT__EX_clear = VComputer__ConstPool__TABLE_h5a1116b7_0
        [__Vtableidx1];
    vlSelfRef.__PVT__WB_en = VComputer__ConstPool__TABLE_h7a9d4c30_0
        [__Vtableidx1];
    vlSelfRef.__PVT__WB_clear = VComputer__ConstPool__TABLE_h4e5b96a3_0
        [__Vtableidx1];
}
