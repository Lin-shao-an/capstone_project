// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComputer__Syms.h"


void VComputer___024root__trace_chg_0_sub_0(VComputer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VComputer___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root__trace_chg_0\n"); );
    // Init
    VComputer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComputer___024root*>(voidSelf);
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VComputer___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VComputer___024root__trace_chg_0_sub_0(VComputer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root__trace_chg_0_sub_0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<16>/*511:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<16>/*511:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_41;
    // Body
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+0,(((2U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bypass_sel_out))
                                 ? ((1U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bypass_sel_out))
                                     ? vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data1
                                     : vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1)
                                 : ((1U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bypass_sel_out))
                                     ? vlSymsp->TOP__Computer__m_core0.__PVT__EX_imm_out
                                     : 0U))),32);
        bufp->chgIData(oldp+1,((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_freg_wr_en_out) 
                                 & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_rs3_out) 
                                    == (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out)))
                                 ? vlSymsp->TOP__Computer__m_core0.__PVT__wb_data_in
                                 : vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__freg_rd_data3_o)),32);
        bufp->chgBit(oldp+2,((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_freg_wr_en_out) 
                                       & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_rs3_out) 
                                          == (IData)(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out)))))));
        bufp->chgBit(oldp+3,(((4U == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__Oper)) 
                              & (((~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src1 
                                      >> 0x1fU)) & 
                                  ((~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B 
                                       >> 0x1fU)) & 
                                   (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out 
                                    >> 0x1fU))) | (
                                                   (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src1 
                                                    >> 0x1fU) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out 
                                                        >> 0x1fU)) 
                                                      & (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B 
                                                         >> 0x1fU)))))));
        bufp->chgIData(oldp+4,((((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out)) 
                                 & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1 
                                    >> 0x1fU)) ? (- vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1)
                                 : vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1)),32);
        bufp->chgIData(oldp+5,((((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out)) 
                                 & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                    >> 0x1fU)) ? (- vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2)
                                 : vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2)),32);
        if (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_rd_r) {
            __Vtemp_5[0U] = (IData)((QData)((IData)(
                                                    ((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_lb) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lh_inst) 
                                                          << 0xbU) 
                                                         | ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lw_inst) 
                                                            << 0xaU))) 
                                                     | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_sign) 
                                                         << 9U) 
                                                        | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_rd_r) 
                                                            << 8U) 
                                                           | (IData)(vlSymsp->TOP__Computer__m_core0.u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_5)))))));
            __Vtemp_5[1U] = ((vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_addr_r 
                              << 0xdU) | (IData)(((QData)((IData)(
                                                                  ((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_lb) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lh_inst) 
                                                                        << 0xbU) 
                                                                       | ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lw_inst) 
                                                                          << 0xaU))) 
                                                                   | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_sign) 
                                                                       << 9U) 
                                                                      | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_rd_r) 
                                                                          << 8U) 
                                                                         | (IData)(vlSymsp->TOP__Computer__m_core0.u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_5)))))) 
                                                  >> 0x20U)));
            __Vtemp_5[2U] = (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_addr_r 
                             >> 0x13U);
        } else if (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_wr_r) {
            __Vtemp_5[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_addr_r)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_data_wr_r)))) 
                              << 0xdU) | ((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_lb) 
                                            << 0xcU) 
                                           | ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lh_inst) 
                                              << 0xbU)) 
                                          | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lw_inst) 
                                              << 0xaU) 
                                             | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_sign) 
                                                 << 9U) 
                                                | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_wr_r) 
                                                    << 7U) 
                                                   | (IData)(vlSymsp->TOP__Computer__m_core0.u_lsu__DOT____VdfgRegularize_h7e4b9ebf_0_5))))));
            __Vtemp_5[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_addr_r)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_data_wr_r)))) 
                              >> 0x13U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_addr_r)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_data_wr_r))) 
                                                    >> 0x20U)) 
                                           << 0xdU));
            __Vtemp_5[2U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_addr_r)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_data_wr_r))) 
                                      >> 0x20U)) >> 0x13U);
        } else {
            __Vtemp_5[0U] = 0U;
            __Vtemp_5[1U] = 0U;
            __Vtemp_5[2U] = 0U;
        }
        bufp->chgWData(oldp+6,(__Vtemp_5),77);
        bufp->chgIData(oldp+9,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_done)
                                 ? (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_flags)
                                 : ((1U == (3U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out)))
                                     ? vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_34
                                     : ((2U == (3U 
                                                & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out)))
                                         ? (vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_rd_data_old 
                                            | vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_34)
                                         : ((3U == 
                                             (3U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out)))
                                             ? ((~ vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_34) 
                                                & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_rd_data_old)
                                             : vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_rd_data_old))))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+10,(vlSymsp->TOP__Computer__m_core0.__PVT__pc_en));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__Computer__m_core0.__PVT__ID_clear));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__Computer__m_core0.__PVT__ID_en));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_en));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_clear));
        bufp->chgIData(oldp+15,(vlSymsp->TOP__Computer__m_core0.__PVT__ALU_out),32);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__Computer__m_core0.__PVT__br_taken));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_out),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__Computer__m_core0.__PVT__WB_en));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__Computer__m_core0.__PVT__WB_clear));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__Computer__m_core0.__PVT__WB_reg_wr_en_out));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__Computer__m_core0.__PVT__WB_freg_wr_en_out));
        bufp->chgIData(oldp+22,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2),32);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__Computer__m_core0.__PVT__br_flush));
        bufp->chgIData(oldp+25,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data1),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_in1),32);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_flags),5);
        bufp->chgBit(oldp+29,((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_15) 
                                        & (IData)(vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_81))))));
        bufp->chgBit(oldp+30,((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_15) 
                                        & (IData)(vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_80))))));
        bufp->chgBit(oldp+31,((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_freg_wr_en_out) 
                                        & (IData)(vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_81))))));
        bufp->chgBit(oldp+32,((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_freg_wr_en_out) 
                                        & (IData)(vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_80))))));
        bufp->chgIData(oldp+33,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src1),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src2),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out),32);
        bufp->chgBit(oldp+36,((0U == vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out)));
        bufp->chgIData(oldp+37,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__result),32);
        bufp->chgIData(oldp+38,(((IData)(1U) + (~ vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src1))),32);
        bufp->chgIData(oldp+39,(((IData)(1U) + (~ vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src2))),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B),32);
        bufp->chgBit(oldp+41,((vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src1 
                               >> 0x1fU)));
        bufp->chgBit(oldp+42,((vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B 
                               >> 0x1fU)));
        bufp->chgBit(oldp+43,((vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out 
                               >> 0x1fU)));
        bufp->chgBit(oldp+44,((1U & (((~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src1 
                                          >> 0x1fU)) 
                                      & ((~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B 
                                             >> 0x1fU)) 
                                         & (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out 
                                            >> 0x1fU))) 
                                     | ((vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src1 
                                         >> 0x1fU) 
                                        & ((~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out 
                                               >> 0x1fU)) 
                                           & (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B 
                                              >> 0x1fU)))))));
        bufp->chgBit(oldp+45,((1U & (((vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_src1 
                                       >> 0x1fU) & 
                                      ((~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out 
                                           >> 0x1fU)) 
                                       | (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B 
                                          >> 0x1fU))) 
                                     | ((~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__ALU_out 
                                            >> 0x1fU)) 
                                        & (vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B 
                                           >> 0x1fU))))));
        bufp->chgCData(oldp+46,((0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__B)),5);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_1),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_2),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_4),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_8),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__left_rotate_16),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_1),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_2),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_4),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_8),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_left_16),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_1),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_2),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_4),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_8),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__ari_right_16),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_1),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_2),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_4),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_8),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__m_ALU__DOT__shifter__DOT__shift_right_16),32);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_cmp));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_cmp_invalid));
        bufp->chgIData(oldp+69,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_result),32);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_invalid));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_overflow));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inexact));
        bufp->chgIData(oldp+73,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_result),32);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_invalid));
        bufp->chgSData(oldp+75,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_class_result),10);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fsgnj_result),32);
        bufp->chgBit(oldp+77,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__FPU_in1 
                                                  >> 0x17U)))));
        bufp->chgBit(oldp+78,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__FPU_in1 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+79,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__FPU_in1))));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_zero));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_infinity));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_nan));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_denormal));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_class_inst__DOT__is_normal));
        bufp->chgBit(oldp+85,((vlSymsp->TOP__Computer__m_core0.__PVT__FPU_in1 
                               >> 0x1fU)));
        bufp->chgCData(oldp+86,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__FPU_in1 
                                          >> 0x17U))),8);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_a_dec),24);
        bufp->chgBit(oldp+88,((vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2 
                               >> 0x1fU)));
        bufp->chgCData(oldp+89,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2 
                                          >> 0x17U))),8);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__mant_b_dec),24);
        bufp->chgBit(oldp+91,((IData)((0U == (0x7fffffffU 
                                              & vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2)))));
        bufp->chgBit(oldp+92,((IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2)))));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_nan));
        bufp->chgBit(oldp+94,((IData)(((0U == (0x7f800000U 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2))))));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_a_snan));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__is_b_snan));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_eq));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_gt));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__temp_lt));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_eq));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_gt));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_lt));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_compare_inst__DOT__flag_unordered));
        bufp->chgBit(oldp+104,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+105,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+106,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_fwd_data2))));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_sign));
        bufp->chgCData(oldp+108,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp),8);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_mant),24);
        bufp->chgIData(oldp+110,((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_sign) 
                                   << 0x1fU) | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_exp) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__final_mant)))),32);
        bufp->chgQData(oldp+111,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shifted_val),64);
        bufp->chgQData(oldp+113,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__result_int),64);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__i),32);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__normal_path_enable));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__lsb));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__g_bit));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__r_bit));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__s_bit));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__round_up));
        bufp->chgIData(oldp+122,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_convert_inst__DOT__shift_amt),32);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__normal_path_enable));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_eq));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_gt));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__temp_lt));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_eq));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_gt));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_min_max_inst__DOT__flag_lt));
        bufp->chgIData(oldp+130,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__br_flush)
                                   ? vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__EX_pc_nx_r
                                   : ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__bp_pred_taken_out)
                                       ? vlSymsp->TOP__Computer__m_core0.__PVT__bp_pred_target_out
                                       : ((IData)(4U) 
                                          + vlSymsp->TOP__Computer__m_core0.__PVT__pc_out)))),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__EX_pc_nx_r),32);
        bufp->chgBit(oldp+132,((vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+133,((vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                >> 0x1fU)));
        bufp->chgWData(oldp+134,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_o),66);
        bufp->chgQData(oldp+137,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o),34);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__shift_o),5);
        bufp->chgQData(oldp+140,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0_temp[0]),64);
        bufp->chgQData(oldp+142,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0_temp[1]),64);
        bufp->chgQData(oldp+144,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0_temp[2]),64);
        bufp->chgQData(oldp+146,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[0]),64);
        bufp->chgQData(oldp+148,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[1]),64);
        bufp->chgQData(oldp+150,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[2]),64);
        bufp->chgQData(oldp+152,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[3]),64);
        bufp->chgQData(oldp+154,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[4]),64);
        bufp->chgQData(oldp+156,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[5]),64);
        bufp->chgQData(oldp+158,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[6]),64);
        bufp->chgQData(oldp+160,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[7]),64);
        bufp->chgQData(oldp+162,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[8]),64);
        bufp->chgQData(oldp+164,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[9]),64);
        bufp->chgQData(oldp+166,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[10]),64);
        bufp->chgQData(oldp+168,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[11]),64);
        bufp->chgQData(oldp+170,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[12]),64);
        bufp->chgQData(oldp+172,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[13]),64);
        bufp->chgQData(oldp+174,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[14]),64);
        bufp->chgQData(oldp+176,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_0[15]),64);
        bufp->chgQData(oldp+178,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[0]),34);
        bufp->chgQData(oldp+180,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[1]),34);
        bufp->chgQData(oldp+182,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[2]),34);
        bufp->chgQData(oldp+184,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[3]),34);
        bufp->chgQData(oldp+186,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[4]),34);
        bufp->chgQData(oldp+188,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[5]),34);
        bufp->chgQData(oldp+190,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[6]),34);
        bufp->chgQData(oldp+192,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[7]),34);
        bufp->chgQData(oldp+194,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[8]),34);
        bufp->chgQData(oldp+196,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[9]),34);
        bufp->chgQData(oldp+198,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[10]),34);
        bufp->chgQData(oldp+200,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[11]),34);
        bufp->chgQData(oldp+202,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[12]),34);
        bufp->chgQData(oldp+204,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[13]),34);
        bufp->chgQData(oldp+206,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[14]),34);
        bufp->chgQData(oldp+208,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[15]),34);
        bufp->chgQData(oldp+210,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__booth[16]),34);
        bufp->chgQData(oldp+212,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[0]),64);
        bufp->chgQData(oldp+214,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[1]),64);
        bufp->chgQData(oldp+216,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[2]),64);
        bufp->chgQData(oldp+218,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[3]),64);
        bufp->chgQData(oldp+220,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[4]),64);
        bufp->chgQData(oldp+222,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[5]),64);
        bufp->chgQData(oldp+224,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[6]),64);
        bufp->chgQData(oldp+226,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1[7]),64);
        __Vtemp_12[0U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i);
        __Vtemp_12[1U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i 
                                  >> 0x20U));
        __Vtemp_12[2U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i);
        __Vtemp_12[3U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i 
                                  >> 0x20U));
        __Vtemp_12[4U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_i);
        __Vtemp_12[5U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_i 
                                  >> 0x20U));
        __Vtemp_12[6U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_i);
        __Vtemp_12[7U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_i 
                                  >> 0x20U));
        __Vtemp_12[8U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_i);
        __Vtemp_12[9U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_i 
                                  >> 0x20U));
        __Vtemp_12[0xaU] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_i);
        __Vtemp_12[0xbU] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_i 
                                    >> 0x20U));
        __Vtemp_12[0xcU] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_i);
        __Vtemp_12[0xdU] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_i 
                                    >> 0x20U));
        __Vtemp_12[0xeU] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_i);
        __Vtemp_12[0xfU] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_i 
                                    >> 0x20U));
        bufp->chgWData(oldp+228,(__Vtemp_12),512);
        bufp->chgQData(oldp+244,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+246,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+248,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+250,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+252,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+254,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+256,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+258,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellinp__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_i),64);
        bufp->chgCData(oldp+260,((6U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        << 1U))),3);
        bufp->chgQData(oldp+261,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_0__booth_out),34);
        bufp->chgQData(oldp+263,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand),33);
        bufp->chgQData(oldp+265,((0x1ffffffffULL & 
                                  (- vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_booth_decoder_0__DOT__pos_multiplicand))),33);
        bufp->chgCData(oldp+267,(((6U & ((- (IData)((IData)(vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_25))) 
                                         << 1U)) | 
                                  (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                   >> 0x1fU))),3);
        bufp->chgQData(oldp+268,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_16__booth_out),34);
        bufp->chgCData(oldp+270,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0x1bU))),3);
        bufp->chgQData(oldp+271,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__14__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+273,((vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                  >> 0x1dU)),3);
        bufp->chgQData(oldp+274,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__15__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+276,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0x13U))),3);
        bufp->chgQData(oldp+277,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__10__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+279,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0x15U))),3);
        bufp->chgQData(oldp+280,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__11__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+282,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0x17U))),3);
        bufp->chgQData(oldp+283,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__12__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+285,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0x19U))),3);
        bufp->chgQData(oldp+286,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__13__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+288,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 1U))),3);
        bufp->chgQData(oldp+289,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__1__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+291,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 3U))),3);
        bufp->chgQData(oldp+292,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__2__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+294,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 5U))),3);
        bufp->chgQData(oldp+295,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__3__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+297,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 7U))),3);
        bufp->chgQData(oldp+298,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__4__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+300,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 9U))),3);
        bufp->chgQData(oldp+301,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__5__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+303,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0xbU))),3);
        bufp->chgQData(oldp+304,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__6__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+306,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0xdU))),3);
        bufp->chgQData(oldp+307,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__7__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+309,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0xfU))),3);
        bufp->chgQData(oldp+310,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__8__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgCData(oldp+312,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_fwd_data2 
                                        >> 0x11U))),3);
        bufp->chgQData(oldp+313,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_1_13__BRA__9__KET____DOT__m_booth_decoder__booth_out),34);
        bufp->chgQData(oldp+315,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressor_l0__in1),64);
        bufp->chgQData(oldp+317,((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoders_14_15__BRA__15__KET____DOT__m_booth_decoder__booth_out 
                                  << 0x1eU)),64);
        bufp->chgQData(oldp+319,(((QData)((IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_booth_decoder_16__booth_out)) 
                                  << 0x20U)),64);
        bufp->chgQData(oldp+321,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out1),64);
        bufp->chgQData(oldp+323,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out2),64);
        bufp->chgQData(oldp+325,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in1),64);
        bufp->chgQData(oldp+327,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in2),64);
        bufp->chgQData(oldp+329,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in3),64);
        bufp->chgQData(oldp+331,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in4),64);
        bufp->chgQData(oldp+333,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w1),64);
        bufp->chgQData(oldp+335,(((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in1 
                                   & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in2) 
                                  | (vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in3 
                                     & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__0__KET____DOT__m_compressor__in4))),64);
        bufp->chgQData(oldp+337,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__0__KET____DOT__m_compressor__DOT__w3),64);
        bufp->chgQData(oldp+339,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in1),64);
        bufp->chgQData(oldp+341,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in2),64);
        bufp->chgQData(oldp+343,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in3),64);
        bufp->chgQData(oldp+345,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in4),64);
        bufp->chgQData(oldp+347,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w1),64);
        bufp->chgQData(oldp+349,(((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in1 
                                   & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in2) 
                                  | (vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in3 
                                     & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__1__KET____DOT__m_compressor__in4))),64);
        bufp->chgQData(oldp+351,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__1__KET____DOT__m_compressor__DOT__w3),64);
        bufp->chgQData(oldp+353,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in1),64);
        bufp->chgQData(oldp+355,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in2),64);
        bufp->chgQData(oldp+357,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in3),64);
        bufp->chgQData(oldp+359,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in4),64);
        bufp->chgQData(oldp+361,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w1),64);
        bufp->chgQData(oldp+363,(((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in1 
                                   & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in2) 
                                  | (vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in3 
                                     & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__2__KET____DOT__m_compressor__in4))),64);
        bufp->chgQData(oldp+365,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__2__KET____DOT__m_compressor__DOT__w3),64);
        bufp->chgQData(oldp+367,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in1),64);
        bufp->chgQData(oldp+369,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in2),64);
        bufp->chgQData(oldp+371,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w1),64);
        bufp->chgQData(oldp+373,(((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in1 
                                   & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellinp__m_compressors_l1__BRA__3__KET____DOT__m_compressor__in2) 
                                  | (vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out1 
                                     & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressor_l0__out2))),64);
        bufp->chgQData(oldp+375,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l1__BRA__3__KET____DOT__m_compressor__DOT__w3),64);
        bufp->chgIData(oldp+377,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__rb_data),32);
        bufp->chgIData(oldp+378,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_addr_r),32);
        bufp->chgIData(oldp+379,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_data_wr_r),32);
        bufp->chgCData(oldp+380,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_mask_r),4);
        bufp->chgBit(oldp+381,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__unaligned_1_r));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__unaligned_2_r));
        bufp->chgBit(oldp+383,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__unaligned_1_r) 
                                | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__unaligned_2_r))));
        bufp->chgIData(oldp+384,(vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r),32);
        bufp->chgIData(oldp+385,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_r),32);
        bufp->chgIData(oldp+386,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_medeleg_r),32);
        bufp->chgIData(oldp+387,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mideleg_r),32);
        bufp->chgIData(oldp+388,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mie_r),32);
        bufp->chgIData(oldp+389,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtvec_r),32);
        bufp->chgIData(oldp+390,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mscratch_r),32);
        bufp->chgIData(oldp+391,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mepc_r),32);
        bufp->chgIData(oldp+392,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcause_r),32);
        bufp->chgIData(oldp+393,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtval_r),32);
        bufp->chgIData(oldp+394,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_r),32);
        bufp->chgIData(oldp+395,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_next_r),32);
        bufp->chgIData(oldp+396,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_fflags_r),32);
        bufp->chgIData(oldp+397,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_frm_r),32);
        bufp->chgIData(oldp+398,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtimecmp_r),32);
        bufp->chgIData(oldp+399,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_serial_flags_r),32);
        bufp->chgIData(oldp+400,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_serial_io_in_r),32);
        bufp->chgIData(oldp+401,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_serial_io_out_r),32);
        bufp->chgIData(oldp+402,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_r),32);
        bufp->chgQData(oldp+403,((0x3ffffffffULL & 
                                  (- vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__d_o))),34);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+405,(vlSymsp->TOP__Computer.__PVT__d_mem_wr_en));
        bufp->chgBit(oldp+406,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__d_available_pre) 
                                & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_rd_c))));
        bufp->chgCData(oldp+407,(vlSymsp->TOP__Computer.__PVT__d_mem_ctrl),4);
        bufp->chgIData(oldp+408,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_addr_r),32);
        bufp->chgIData(oldp+409,(vlSymsp->TOP__Computer.__PVT__d_mem_wr_data),32);
        bufp->chgIData(oldp+410,(vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o),32);
        bufp->chgBit(oldp+411,(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_pc_valid_out));
        bufp->chgIData(oldp+412,(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_pc_out),32);
        bufp->chgIData(oldp+413,(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_pc_p4_out),32);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_impl_out));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_valid_out));
        bufp->chgIData(oldp+416,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out),32);
        bufp->chgIData(oldp+417,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out),32);
        bufp->chgIData(oldp+418,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_p4_out),32);
        bufp->chgIData(oldp+419,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_imm_out),32);
        bufp->chgCData(oldp+420,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_rs1_out),5);
        bufp->chgCData(oldp+421,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_rs2_out),5);
        bufp->chgCData(oldp+422,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_rs3_out),5);
        bufp->chgBit(oldp+423,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_reg_wr_en_out));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_freg_wr_en_out));
        bufp->chgCData(oldp+425,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_reg_w_sel_out),3);
        bufp->chgBit(oldp+426,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_mem_rd_en_out));
        bufp->chgBit(oldp+427,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_mem_wr_en_out));
        bufp->chgCData(oldp+428,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_mem_ctrl_out),4);
        bufp->chgBit(oldp+429,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_j_out));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_br_out));
        bufp->chgCData(oldp+431,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_ALU_ctrl_out),4);
        bufp->chgBit(oldp+432,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_MUL_DIV_out));
        bufp->chgCData(oldp+433,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out),3);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_csr_out));
        bufp->chgCData(oldp+435,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out),3);
        bufp->chgBit(oldp+436,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_csr_imm_out));
        bufp->chgSData(oldp+437,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out),12);
        bufp->chgIData(oldp+438,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q),32);
        bufp->chgBit(oldp+439,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_f_ext));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_fpu_out));
        bufp->chgBit(oldp+441,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_FPU_sel1_out));
        bufp->chgCData(oldp+442,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bypass_sel_out),2);
        bufp->chgBit(oldp+443,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_fetch_invalid_out));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_start));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_done));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__Computer__m_core0.__PVT__MUL_DIV_start));
        bufp->chgBit(oldp+447,(((IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__start_o) 
                                | (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__start_o))));
        bufp->chgIData(oldp+448,(((IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__start_o)
                                   ? ((IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__higher_o)
                                       ? (IData)((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_sum 
                                                  >> 0x20U))
                                       : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_sum))
                                   : ((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__start_o)
                                       ? ((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__rem_o)
                                           ? ((0U != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)
                                               ? ((
                                                   (~ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o)) 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o))
                                                   ? 
                                                  (- (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out))
                                                   : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out))
                                               : vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_o)
                                           : ((0U != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)
                                               ? ((
                                                   (~ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o)) 
                                                   & ((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_sign_o) 
                                                      ^ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o)))
                                                   ? 
                                                  (- vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out)
                                                   : vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out)
                                               : 0xffffffffU))
                                       : 0U))),32);
        bufp->chgBit(oldp+449,(vlSymsp->TOP__Computer__m_core0.__PVT__LSU_start));
        bufp->chgBit(oldp+450,((2U == (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__resp_valid_pre) 
                                        << 1U) | (0U 
                                                  != vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__count)))));
        bufp->chgIData(oldp+451,(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_addr),32);
        bufp->chgBit(oldp+452,(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_rd));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_wr));
        bufp->chgCData(oldp+454,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_wr)
                                   ? (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__resp_mask)
                                   : ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_rd)
                                       ? 0xfU : 0U))),4);
        bufp->chgBit(oldp+455,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__LSU_start) 
                                & (0x3a001073U == (0xfff0707fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out)))));
        bufp->chgBit(oldp+456,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__LSU_start) 
                                & (0x3a201073U == (0xfff0707fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out)))));
        bufp->chgBit(oldp+457,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__LSU_start) 
                                & (0x3a101073U == (0xfff0707fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out)))));
        bufp->chgIData(oldp+458,(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_writeback_value_o),32);
        bufp->chgCData(oldp+459,((((vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                    [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                    >> 8U) & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_rd) 
                                              & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r) 
                                                 | ((~ 
                                                     (vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__entry_q 
                                                      >> 1U)) 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit)))))
                                   ? 0x1dU : (((vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                                [(0x1fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                                >> 7U) 
                                               & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_wr) 
                                                  & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r) 
                                                     | ((~ 
                                                         (vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__entry_q 
                                                          >> 2U)) 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit)))))
                                               ? 0x1fU
                                               : 0U))),6);
        bufp->chgBit(oldp+460,(vlSymsp->TOP__Computer__m_core0.__PVT__mmu_lsu_valid));
        bufp->chgBit(oldp+461,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_rd) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r) 
                                   | ((~ (vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__entry_q 
                                          >> 1U)) & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit))))));
        bufp->chgBit(oldp+462,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_wr) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r) 
                                   | ((~ (vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__entry_q 
                                          >> 2U)) & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit))))));
        bufp->chgBit(oldp+463,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_csr_out) 
                                   | ((0x10U == (0x30U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))) 
                                      | (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_branch_r))))));
        bufp->chgIData(oldp+464,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_target_r),32);
        bufp->chgCData(oldp+465,(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception),6);
        bufp->chgBit(oldp+466,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_branch_r));
        bufp->chgIData(oldp+467,(vlSymsp->TOP__Computer__m_core0.__PVT__csr_interrupt),32);
        bufp->chgBit(oldp+468,(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start));
        bufp->chgBit(oldp+469,(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_done));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_is_impl_out));
        bufp->chgIData(oldp+471,(vlSymsp->TOP__Computer__m_core0.__PVT__ID_bp_pred_target_out),32);
        bufp->chgIData(oldp+472,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bp_pred_target_out),32);
        bufp->chgBit(oldp+473,(vlSymsp->TOP__Computer__m_core0.__PVT__ID_bp_pred_taken_out));
        bufp->chgBit(oldp+474,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bp_pred_taken_out));
        bufp->chgIData(oldp+475,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__reg_rd_data1_o),32);
        bufp->chgIData(oldp+476,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__reg_rd_data2_o),32);
        bufp->chgIData(oldp+477,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__freg_rd_data1_o),32);
        bufp->chgIData(oldp+478,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__freg_rd_data2_o),32);
        bufp->chgIData(oldp+479,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__freg_rd_data3_o),32);
        bufp->chgBit(oldp+480,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_sel1_o));
        bufp->chgBit(oldp+481,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__ALU_sel2_o));
        bufp->chgCData(oldp+482,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__cmp_op_o),3);
        bufp->chgBit(oldp+483,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_start) 
                                & (0U != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_bypass_sel_out)))));
        bufp->chgBit(oldp+484,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_start) 
                                & (0U != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_ALU_ctrl_out)))));
        bufp->chgBit(oldp+485,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_br_out) 
                                   | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_j_out)))));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__started));
        bufp->chgCData(oldp+487,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__Oper),3);
        bufp->chgBit(oldp+488,(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__invB));
        bufp->chgCData(oldp+489,((3U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_EX__DOT__m_ALU__DOT__Oper))),2);
        bufp->chgCData(oldp+490,((0x7fU & vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out)),7);
        bufp->chgCData(oldp+491,((vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+492,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+493,((0x1fU & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+494,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask))));
        bufp->chgIData(oldp+495,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_result),32);
        bufp->chgBit(oldp+496,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_invalid));
        bufp->chgBit(oldp+497,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_overflow));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_underflow));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inexact));
        bufp->chgBit(oldp+500,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_done));
        bufp->chgBit(oldp+501,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 1U))));
        bufp->chgBit(oldp+502,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 2U))));
        bufp->chgBit(oldp+503,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 3U))));
        bufp->chgIData(oldp+504,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_result),32);
        bufp->chgBit(oldp+505,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_invalid));
        bufp->chgBit(oldp+506,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_overflow));
        bufp->chgBit(oldp+507,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_underflow));
        bufp->chgBit(oldp+508,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inexact));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_done));
        bufp->chgBit(oldp+510,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 4U))));
        bufp->chgIData(oldp+511,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_result),32);
        bufp->chgBit(oldp+512,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_invalid));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_divbyzero));
        bufp->chgBit(oldp+514,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_overflow));
        bufp->chgBit(oldp+515,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_underflow));
        bufp->chgBit(oldp+516,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inexact));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_done));
        bufp->chgBit(oldp+518,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 5U))));
        bufp->chgIData(oldp+519,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_result),32);
        bufp->chgBit(oldp+520,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_invalid));
        bufp->chgBit(oldp+521,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inexact));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_done));
        bufp->chgBit(oldp+523,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 6U))));
        bufp->chgBit(oldp+524,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 7U))));
        bufp->chgIData(oldp+525,((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign) 
                                   << 0x1fU) | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant)))),32);
        bufp->chgBit(oldp+526,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_invalid) 
                                | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_invalid))));
        bufp->chgBit(oldp+527,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_overflow) 
                                | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_overflow))));
        bufp->chgBit(oldp+528,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_underflow) 
                                | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_underflow))));
        bufp->chgBit(oldp+529,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_inexact) 
                                | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_inexact))));
        bufp->chgBit(oldp+530,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_done));
        bufp->chgBit(oldp+531,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 8U))));
        bufp->chgBit(oldp+532,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask) 
                                   >> 9U))));
        bufp->chgSData(oldp+533,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__enable_mask),10);
        bufp->chgCData(oldp+534,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__convert_input_type),2);
        bufp->chgCData(oldp+535,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__convert_output_type),2);
        bufp->chgBit(oldp+536,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+537,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+538,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+539,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+540,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_a_dec),24);
        bufp->chgBit(oldp+541,((IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)))));
        bufp->chgBit(oldp+542,((IData)((0x7f800000U 
                                        == (0x7fffffffU 
                                            & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)))));
        bufp->chgBit(oldp+543,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+544,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_a_denormal));
        bufp->chgIData(oldp+545,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg),32);
        bufp->chgBit(oldp+546,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+547,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+548,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_b_dec),24);
        bufp->chgBit(oldp+549,((IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg)))));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_infinity));
        bufp->chgBit(oldp+551,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+552,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__is_b_denormal));
        bufp->chgBit(oldp+553,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_sign));
        bufp->chgCData(oldp+554,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_exp),8);
        bufp->chgIData(oldp+555,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__final_mant),24);
        bufp->chgCData(oldp+556,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__state),4);
        bufp->chgBit(oldp+557,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b));
        bufp->chgBit(oldp+558,(((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
                                 >> 0x1fU) != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__eff_sign_b))));
        bufp->chgCData(oldp+559,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__exp_diff),8);
        bufp->chgIData(oldp+560,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_larger),28);
        bufp->chgIData(oldp+561,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__temp_smaller),28);
        bufp->chgIData(oldp+562,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_smaller),28);
        bufp->chgIData(oldp+563,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__mant_sum),28);
        bufp->chgBit(oldp+564,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__lsb));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__g_bit));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__r_bit));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__s_bit));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__round_up));
        bufp->chgBit(oldp+569,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+570,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+571,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_a_reg))));
        bufp->chgBit(oldp+572,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+573,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+574,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_adder_inst__DOT__operand_b_reg))));
        bufp->chgIData(oldp+575,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+576,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+577,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+578,(((IData)(((0U == (0x7f800000U 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                                           & (0U != 
                                              (0x7fffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg))))
                                   ? (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)
                                   : (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)))),24);
        bufp->chgBit(oldp+579,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_zero));
        bufp->chgBit(oldp+580,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_a_infinity));
        bufp->chgBit(oldp+581,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+582,((IData)(((0U == (0x7f800000U 
                                                & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg))))));
        bufp->chgIData(oldp+583,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg),32);
        bufp->chgBit(oldp+584,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+585,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+586,(((IData)(((0U == (0x7f800000U 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                                           & (0U != 
                                              (0x7fffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg))))
                                   ? (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)
                                   : (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)))),24);
        bufp->chgBit(oldp+587,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_zero));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__is_b_infinity));
        bufp->chgBit(oldp+589,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+590,((IData)(((0U == (0x7f800000U 
                                                & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+591,(((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
                                 ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg) 
                                >> 0x1fU)));
        bufp->chgCData(oldp+592,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_exp),8);
        bufp->chgIData(oldp+593,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__final_mant),24);
        bufp->chgCData(oldp+594,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__state),4);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__count),5);
        bufp->chgIData(oldp+596,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__exp_diff),32);
        bufp->chgIData(oldp+597,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_a_div),24);
        bufp->chgIData(oldp+598,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__mant_b_div),24);
        bufp->chgQData(oldp+599,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__dividend),51);
        bufp->chgQData(oldp+601,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__divisor),51);
        bufp->chgIData(oldp+603,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__quotient),29);
        bufp->chgBit(oldp+604,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__lsb));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__g_bit));
        bufp->chgBit(oldp+606,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__r_bit));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__s_bit));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__round_up));
        bufp->chgBit(oldp+609,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+610,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+611,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_a_reg))));
        bufp->chgBit(oldp+612,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+613,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+614,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_divider_inst__DOT__operand_b_reg))));
        bufp->chgBit(oldp+615,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                      >> 2U))));
        bufp->chgBit(oldp+616,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                      >> 3U))));
        bufp->chgIData(oldp+617,((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_sign) 
                                   << 0x1fU) | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant)))),32);
        bufp->chgBit(oldp+618,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_invalid));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_overflow));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_underflow));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_inexact));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__mult_done));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_invalid));
        bufp->chgBit(oldp+624,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_overflow));
        bufp->chgBit(oldp+625,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_underflow));
        bufp->chgBit(oldp+626,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder_inexact));
        bufp->chgIData(oldp+627,(((((8U & vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out)
                                     ? (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_sign))
                                     : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_sign)) 
                                   << 0x1fU) | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant)))),32);
        bufp->chgIData(oldp+628,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+629,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+630,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+631,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_a_dec),24);
        bufp->chgBit(oldp+632,((IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)))));
        bufp->chgBit(oldp+633,((IData)((0x7f800000U 
                                        == (0x7fffffffU 
                                            & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)))));
        bufp->chgBit(oldp+634,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+635,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_a_denormal));
        bufp->chgIData(oldp+636,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg),32);
        bufp->chgBit(oldp+637,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+638,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+639,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_b_dec),24);
        bufp->chgBit(oldp+640,((IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg)))));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_infinity));
        bufp->chgBit(oldp+642,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__is_b_denormal));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_sign));
        bufp->chgCData(oldp+645,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_exp),8);
        bufp->chgIData(oldp+646,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__final_mant),24);
        bufp->chgCData(oldp+647,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__state),4);
        bufp->chgBit(oldp+648,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b));
        bufp->chgBit(oldp+649,(((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
                                 >> 0x1fU) != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__eff_sign_b))));
        bufp->chgCData(oldp+650,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__exp_diff),8);
        bufp->chgIData(oldp+651,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_larger),28);
        bufp->chgIData(oldp+652,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__temp_smaller),28);
        bufp->chgIData(oldp+653,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_smaller),28);
        bufp->chgIData(oldp+654,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__mant_sum),28);
        bufp->chgBit(oldp+655,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__lsb));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__g_bit));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__r_bit));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__s_bit));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__round_up));
        bufp->chgBit(oldp+660,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+661,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+662,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_a_reg))));
        bufp->chgBit(oldp+663,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+664,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+665,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__adder__DOT__operand_b_reg))));
        bufp->chgIData(oldp+666,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+667,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+668,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+669,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_dec),24);
        bufp->chgBit(oldp+670,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_zero));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_infinity));
        bufp->chgBit(oldp+672,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_a_denormal));
        bufp->chgIData(oldp+674,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg),32);
        bufp->chgBit(oldp+675,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+676,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+677,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_dec),24);
        bufp->chgBit(oldp+678,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_zero));
        bufp->chgBit(oldp+679,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_infinity));
        bufp->chgBit(oldp+680,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__is_b_denormal));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_sign));
        bufp->chgCData(oldp+683,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_exp),8);
        bufp->chgIData(oldp+684,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__final_mant),24);
        bufp->chgCData(oldp+685,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__state),4);
        bufp->chgIData(oldp+686,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__exp_diff),32);
        bufp->chgIData(oldp+687,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_a_mul),24);
        bufp->chgIData(oldp+688,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mant_b_mul),24);
        bufp->chgQData(oldp+689,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__mul_mant),48);
        bufp->chgBit(oldp+691,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__denorm_1st_neg));
        bufp->chgBit(oldp+692,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__lsb));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__g_bit));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__r_bit));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__s_bit));
        bufp->chgBit(oldp+696,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__round_up));
        bufp->chgBit(oldp+697,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+698,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+699,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_a_reg))));
        bufp->chgBit(oldp+700,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+701,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+702,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_fused_inst__DOT__multiplier__DOT__operand_b_reg))));
        bufp->chgIData(oldp+703,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+704,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+705,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+706,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_dec),24);
        bufp->chgBit(oldp+707,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_zero));
        bufp->chgBit(oldp+708,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_infinity));
        bufp->chgBit(oldp+709,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+710,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_a_denormal));
        bufp->chgIData(oldp+711,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg),32);
        bufp->chgBit(oldp+712,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+713,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+714,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_dec),24);
        bufp->chgBit(oldp+715,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_zero));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_infinity));
        bufp->chgBit(oldp+717,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__is_b_denormal));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_sign));
        bufp->chgCData(oldp+720,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_exp),8);
        bufp->chgIData(oldp+721,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__final_mant),24);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__state),4);
        bufp->chgIData(oldp+723,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__exp_diff),32);
        bufp->chgIData(oldp+724,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_a_mul),24);
        bufp->chgIData(oldp+725,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mant_b_mul),24);
        bufp->chgQData(oldp+726,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__mul_mant),48);
        bufp->chgBit(oldp+728,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__denorm_1st_neg));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__lsb));
        bufp->chgBit(oldp+730,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__g_bit));
        bufp->chgBit(oldp+731,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__r_bit));
        bufp->chgBit(oldp+732,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__s_bit));
        bufp->chgBit(oldp+733,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__round_up));
        bufp->chgBit(oldp+734,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+735,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+736,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_a_reg))));
        bufp->chgBit(oldp+737,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+738,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+739,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_multiplier_inst__DOT__operand_b_reg))));
        bufp->chgIData(oldp+740,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+741,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+742,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+743,(((IData)(((0U == (0x7f800000U 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)) 
                                           & (0U != 
                                              (0x7fffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg))))
                                   ? (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)
                                   : (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)))),24);
        bufp->chgBit(oldp+744,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__is_a_zero));
        bufp->chgBit(oldp+745,((IData)((0x7f800000U 
                                        == (0x7fffffffU 
                                            & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)))));
        bufp->chgBit(oldp+746,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+747,((IData)(((0U == (0x7f800000U 
                                                & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg))))));
        bufp->chgCData(oldp+748,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__state),4);
        bufp->chgBit(oldp+749,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_start));
        bufp->chgBit(oldp+750,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_start));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_start));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_done));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_done));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_done));
        bufp->chgBit(oldp+755,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_inexact));
        bufp->chgIData(oldp+756,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sub_b),32);
        bufp->chgIData(oldp+757,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_a),32);
        bufp->chgIData(oldp+758,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_b),32);
        bufp->chgIData(oldp+759,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_b),32);
        bufp->chgIData(oldp+760,((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign) 
                                   << 0x1fU) | (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant)))),32);
        bufp->chgIData(oldp+761,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_result),32);
        bufp->chgIData(oldp+762,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__div_result),32);
        bufp->chgIData(oldp+763,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__y),32);
        bufp->chgIData(oldp+764,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__x2),32);
        bufp->chgCData(oldp+765,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__loop),4);
        bufp->chgCData(oldp+766,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__mult_time),4);
        bufp->chgBit(oldp+767,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+768,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+769,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__operand_a_reg))));
        bufp->chgBit(oldp+770,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_invalid));
        bufp->chgBit(oldp+771,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_overflow));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_underflow));
        bufp->chgBit(oldp+773,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__flag_inexact));
        bufp->chgIData(oldp+774,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+775,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+776,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+777,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_a_dec),24);
        bufp->chgBit(oldp+778,((IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)))));
        bufp->chgBit(oldp+779,((IData)((0x7f800000U 
                                        == (0x7fffffffU 
                                            & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)))));
        bufp->chgBit(oldp+780,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+781,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_a_denormal));
        bufp->chgIData(oldp+782,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg),32);
        bufp->chgBit(oldp+783,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+784,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+785,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_b_dec),24);
        bufp->chgBit(oldp+786,((IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg)))));
        bufp->chgBit(oldp+787,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_infinity));
        bufp->chgBit(oldp+788,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__is_b_denormal));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_sign));
        bufp->chgCData(oldp+791,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_exp),8);
        bufp->chgIData(oldp+792,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__final_mant),24);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__state),4);
        bufp->chgBit(oldp+794,((1U & (~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+795,(((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg 
                                 >> 0x1fU) != (1U & 
                                               (~ (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                                                   >> 0x1fU))))));
        bufp->chgCData(oldp+796,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__exp_diff),8);
        bufp->chgIData(oldp+797,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_larger),28);
        bufp->chgIData(oldp+798,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__temp_smaller),28);
        bufp->chgIData(oldp+799,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_smaller),28);
        bufp->chgIData(oldp+800,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__mant_sum),28);
        bufp->chgBit(oldp+801,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__lsb));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__g_bit));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__r_bit));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__s_bit));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__round_up));
        bufp->chgBit(oldp+806,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+807,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+808,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_a_reg))));
        bufp->chgBit(oldp+809,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+810,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+811,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_adder_inst__DOT__operand_b_reg))));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_invalid));
        bufp->chgBit(oldp+813,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_divbyzero));
        bufp->chgBit(oldp+814,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_overflow));
        bufp->chgBit(oldp+815,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_underflow));
        bufp->chgBit(oldp+816,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__flag_inexact));
        bufp->chgIData(oldp+817,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+818,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+819,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+820,(((IData)(((0U == (0x7f800000U 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                                           & (0U != 
                                              (0x7fffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg))))
                                   ? (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)
                                   : (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)))),24);
        bufp->chgBit(oldp+821,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_zero));
        bufp->chgBit(oldp+822,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_a_infinity));
        bufp->chgBit(oldp+823,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+824,((IData)(((0U == (0x7f800000U 
                                                & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg))))));
        bufp->chgIData(oldp+825,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg),32);
        bufp->chgBit(oldp+826,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+827,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+828,(((IData)(((0U == (0x7f800000U 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                                           & (0U != 
                                              (0x7fffffU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg))))
                                   ? (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)
                                   : (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)))),24);
        bufp->chgBit(oldp+829,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_zero));
        bufp->chgBit(oldp+830,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__is_b_infinity));
        bufp->chgBit(oldp+831,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+832,((IData)(((0U == (0x7f800000U 
                                                & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+833,(((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg 
                                 ^ vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg) 
                                >> 0x1fU)));
        bufp->chgCData(oldp+834,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_exp),8);
        bufp->chgIData(oldp+835,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__final_mant),24);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__state),4);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__count),5);
        bufp->chgIData(oldp+838,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__exp_diff),32);
        bufp->chgIData(oldp+839,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_a_div),24);
        bufp->chgIData(oldp+840,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__mant_b_div),24);
        bufp->chgQData(oldp+841,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__dividend),51);
        bufp->chgQData(oldp+843,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__divisor),51);
        bufp->chgIData(oldp+845,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__quotient),29);
        bufp->chgBit(oldp+846,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__lsb));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__g_bit));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__r_bit));
        bufp->chgBit(oldp+849,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__s_bit));
        bufp->chgBit(oldp+850,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__round_up));
        bufp->chgBit(oldp+851,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+852,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+853,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_a_reg))));
        bufp->chgBit(oldp+854,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+855,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+856,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_divider_inst__DOT__operand_b_reg))));
        bufp->chgBit(oldp+857,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_invalid));
        bufp->chgBit(oldp+858,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_overflow));
        bufp->chgBit(oldp+859,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__flag_underflow));
        bufp->chgIData(oldp+860,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg),32);
        bufp->chgBit(oldp+861,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+862,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+863,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_dec),24);
        bufp->chgBit(oldp+864,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_zero));
        bufp->chgBit(oldp+865,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_infinity));
        bufp->chgBit(oldp+866,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg))))));
        bufp->chgBit(oldp+867,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_a_denormal));
        bufp->chgIData(oldp+868,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg),32);
        bufp->chgBit(oldp+869,((vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                                >> 0x1fU)));
        bufp->chgCData(oldp+870,((0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+871,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_dec),24);
        bufp->chgBit(oldp+872,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_zero));
        bufp->chgBit(oldp+873,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_infinity));
        bufp->chgBit(oldp+874,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg))))));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__is_b_denormal));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_sign));
        bufp->chgCData(oldp+877,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_exp),8);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__final_mant),24);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__state),4);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__exp_diff),32);
        bufp->chgIData(oldp+881,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_a_mul),24);
        bufp->chgIData(oldp+882,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mant_b_mul),24);
        bufp->chgQData(oldp+883,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__mul_mant),48);
        bufp->chgBit(oldp+885,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__denorm_1st_neg));
        bufp->chgBit(oldp+886,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__lsb));
        bufp->chgBit(oldp+887,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__g_bit));
        bufp->chgBit(oldp+888,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__r_bit));
        bufp->chgBit(oldp+889,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__s_bit));
        bufp->chgBit(oldp+890,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__round_up));
        bufp->chgBit(oldp+891,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+892,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+893,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_a_reg))));
        bufp->chgBit(oldp+894,((0xffU == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+895,((0U == (0xffU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+896,((0U == (0x7fffffU & vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__sp_sqrt_inst__DOT__sp_multiplier_inst__DOT__operand_b_reg))));
        bufp->chgSData(oldp+897,((0x7ffU & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out 
                                            >> 2U))),11);
        bufp->chgSData(oldp+898,((vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+899,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__m_bp__DOT__u_btb__DOT__i),32);
        bufp->chgCData(oldp+900,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__ghr),4);
        bufp->chgSData(oldp+901,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__update_index),11);
        bufp->chgIData(oldp+902,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__i),32);
        bufp->chgBit(oldp+903,((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out) 
                                         >> 2U)))));
        bufp->chgBit(oldp+904,((1U & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out) 
                                      >> 2U))));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__start_o));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__start_o));
        bufp->chgIData(oldp+907,(((IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__higher_o)
                                   ? (IData)((vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_sum 
                                              >> 0x20U))
                                   : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_sum))),32);
        bufp->chgIData(oldp+908,(((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__rem_o)
                                   ? ((0U != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)
                                       ? (((~ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o)) 
                                           & (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o))
                                           ? (- (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out))
                                           : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out))
                                       : vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_o)
                                   : ((0U != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)
                                       ? (((~ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o)) 
                                           & ((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_sign_o) 
                                              ^ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o)))
                                           ? (- vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out)
                                           : vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out)
                                       : 0xffffffffU))),32);
        bufp->chgBit(oldp+909,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__MUL_DIV_start) 
                                & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out) 
                                   >> 2U))));
        bufp->chgBit(oldp+910,((1U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out))));
        bufp->chgBit(oldp+911,((1U & ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out) 
                                      >> 1U))));
        bufp->chgWData(oldp+912,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[0]),66);
        bufp->chgWData(oldp+915,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[1]),66);
        bufp->chgWData(oldp+918,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[2]),66);
        bufp->chgWData(oldp+921,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[3]),66);
        bufp->chgWData(oldp+924,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[4]),66);
        bufp->chgWData(oldp+927,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[5]),66);
        bufp->chgWData(oldp+930,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[6]),66);
        bufp->chgWData(oldp+933,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[7]),66);
        bufp->chgWData(oldp+936,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[8]),66);
        bufp->chgWData(oldp+939,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[9]),66);
        bufp->chgWData(oldp+942,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[10]),66);
        bufp->chgWData(oldp+945,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[11]),66);
        bufp->chgWData(oldp+948,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[12]),66);
        bufp->chgWData(oldp+951,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[13]),66);
        bufp->chgWData(oldp+954,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[14]),66);
        bufp->chgWData(oldp+957,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_1[15]),66);
        bufp->chgWData(oldp+960,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[0]),66);
        bufp->chgWData(oldp+963,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[1]),66);
        bufp->chgWData(oldp+966,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[2]),66);
        bufp->chgWData(oldp+969,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[3]),66);
        bufp->chgWData(oldp+972,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[4]),66);
        bufp->chgWData(oldp+975,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[5]),66);
        bufp->chgWData(oldp+978,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[6]),66);
        bufp->chgWData(oldp+981,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[7]),66);
        bufp->chgWData(oldp+984,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[8]),66);
        bufp->chgWData(oldp+987,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[9]),66);
        bufp->chgWData(oldp+990,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[10]),66);
        bufp->chgWData(oldp+993,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[11]),66);
        bufp->chgWData(oldp+996,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[12]),66);
        bufp->chgWData(oldp+999,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[13]),66);
        bufp->chgWData(oldp+1002,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[14]),66);
        bufp->chgWData(oldp+1005,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_2[15]),66);
        bufp->chgIData(oldp+1008,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[0]),32);
        bufp->chgIData(oldp+1009,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[1]),32);
        bufp->chgIData(oldp+1010,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[2]),32);
        bufp->chgIData(oldp+1011,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[3]),32);
        bufp->chgIData(oldp+1012,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[4]),32);
        bufp->chgIData(oldp+1013,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[5]),32);
        bufp->chgIData(oldp+1014,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[6]),32);
        bufp->chgIData(oldp+1015,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[7]),32);
        bufp->chgIData(oldp+1016,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[8]),32);
        bufp->chgIData(oldp+1017,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[9]),32);
        bufp->chgIData(oldp+1018,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[10]),32);
        bufp->chgIData(oldp+1019,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[11]),32);
        bufp->chgIData(oldp+1020,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[12]),32);
        bufp->chgIData(oldp+1021,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[13]),32);
        bufp->chgIData(oldp+1022,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[14]),32);
        bufp->chgIData(oldp+1023,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__pos_q[15]),32);
        bufp->chgIData(oldp+1024,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[0]),32);
        bufp->chgIData(oldp+1025,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[1]),32);
        bufp->chgIData(oldp+1026,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[2]),32);
        bufp->chgIData(oldp+1027,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[3]),32);
        bufp->chgIData(oldp+1028,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[4]),32);
        bufp->chgIData(oldp+1029,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[5]),32);
        bufp->chgIData(oldp+1030,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[6]),32);
        bufp->chgIData(oldp+1031,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[7]),32);
        bufp->chgIData(oldp+1032,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[8]),32);
        bufp->chgIData(oldp+1033,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[9]),32);
        bufp->chgIData(oldp+1034,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[10]),32);
        bufp->chgIData(oldp+1035,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[11]),32);
        bufp->chgIData(oldp+1036,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[12]),32);
        bufp->chgIData(oldp+1037,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[13]),32);
        bufp->chgIData(oldp+1038,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[14]),32);
        bufp->chgIData(oldp+1039,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__neg_q[15]),32);
        bufp->chgIData(oldp+1040,(((0U != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)
                                    ? (((~ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o)) 
                                        & ((IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_sign_o) 
                                           ^ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o)))
                                        ? (- vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out)
                                        : vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out)
                                    : 0xffffffffU)),32);
        bufp->chgIData(oldp+1041,(((0U != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)
                                    ? (((~ (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o)) 
                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o))
                                        ? (- (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out))
                                        : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out))
                                    : vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_o)),32);
        bufp->chgIData(oldp+1042,((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__pos_q_o 
                                   - vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o)),32);
        bufp->chgWData(oldp+1043,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r),66);
        bufp->chgIData(oldp+1046,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__q_out),32);
        bufp->chgQData(oldp+1047,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_out),34);
        bufp->chgBit(oldp+1049,((1U & (~ (0U != vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o)))));
        bufp->chgBit(oldp+1050,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[0]));
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[1]));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[2]));
        bufp->chgBit(oldp+1053,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[3]));
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[4]));
        bufp->chgBit(oldp+1055,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[5]));
        bufp->chgBit(oldp+1056,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[6]));
        bufp->chgBit(oldp+1057,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[7]));
        bufp->chgBit(oldp+1058,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[8]));
        bufp->chgBit(oldp+1059,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[9]));
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[10]));
        bufp->chgBit(oldp+1061,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[11]));
        bufp->chgBit(oldp+1062,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[12]));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[13]));
        bufp->chgBit(oldp+1064,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[14]));
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[15]));
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[16]));
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_start_o[17]));
        bufp->chgIData(oldp+1068,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[0]),32);
        bufp->chgIData(oldp+1069,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[1]),32);
        bufp->chgIData(oldp+1070,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[2]),32);
        bufp->chgIData(oldp+1071,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[3]),32);
        bufp->chgIData(oldp+1072,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[4]),32);
        bufp->chgIData(oldp+1073,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[5]),32);
        bufp->chgIData(oldp+1074,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[6]),32);
        bufp->chgIData(oldp+1075,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[7]),32);
        bufp->chgIData(oldp+1076,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[8]),32);
        bufp->chgIData(oldp+1077,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[9]),32);
        bufp->chgIData(oldp+1078,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[10]),32);
        bufp->chgIData(oldp+1079,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[11]),32);
        bufp->chgIData(oldp+1080,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[12]),32);
        bufp->chgIData(oldp+1081,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[13]),32);
        bufp->chgIData(oldp+1082,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[14]),32);
        bufp->chgIData(oldp+1083,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[15]),32);
        bufp->chgIData(oldp+1084,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[16]),32);
        bufp->chgIData(oldp+1085,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_o[17]),32);
        bufp->chgQData(oldp+1086,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[0]),34);
        bufp->chgQData(oldp+1088,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[1]),34);
        bufp->chgQData(oldp+1090,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[2]),34);
        bufp->chgQData(oldp+1092,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[3]),34);
        bufp->chgQData(oldp+1094,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[4]),34);
        bufp->chgQData(oldp+1096,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[5]),34);
        bufp->chgQData(oldp+1098,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[6]),34);
        bufp->chgQData(oldp+1100,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[7]),34);
        bufp->chgQData(oldp+1102,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[8]),34);
        bufp->chgQData(oldp+1104,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[9]),34);
        bufp->chgQData(oldp+1106,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[10]),34);
        bufp->chgQData(oldp+1108,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[11]),34);
        bufp->chgQData(oldp+1110,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[12]),34);
        bufp->chgQData(oldp+1112,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[13]),34);
        bufp->chgQData(oldp+1114,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[14]),34);
        bufp->chgQData(oldp+1116,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[15]),34);
        bufp->chgQData(oldp+1118,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[16]),34);
        bufp->chgQData(oldp+1120,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_o[17]),34);
        bufp->chgQData(oldp+1122,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[0]),34);
        bufp->chgQData(oldp+1124,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[1]),34);
        bufp->chgQData(oldp+1126,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[2]),34);
        bufp->chgQData(oldp+1128,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[3]),34);
        bufp->chgQData(oldp+1130,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[4]),34);
        bufp->chgQData(oldp+1132,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[5]),34);
        bufp->chgQData(oldp+1134,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[6]),34);
        bufp->chgQData(oldp+1136,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[7]),34);
        bufp->chgQData(oldp+1138,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[8]),34);
        bufp->chgQData(oldp+1140,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[9]),34);
        bufp->chgQData(oldp+1142,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[10]),34);
        bufp->chgQData(oldp+1144,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[11]),34);
        bufp->chgQData(oldp+1146,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[12]),34);
        bufp->chgQData(oldp+1148,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[13]),34);
        bufp->chgQData(oldp+1150,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[14]),34);
        bufp->chgQData(oldp+1152,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[15]),34);
        bufp->chgQData(oldp+1154,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[16]),34);
        bufp->chgQData(oldp+1156,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_d_o[17]),34);
        bufp->chgWData(oldp+1158,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[0]),66);
        bufp->chgWData(oldp+1161,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[1]),66);
        bufp->chgWData(oldp+1164,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[2]),66);
        bufp->chgWData(oldp+1167,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[3]),66);
        bufp->chgWData(oldp+1170,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[4]),66);
        bufp->chgWData(oldp+1173,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[5]),66);
        bufp->chgWData(oldp+1176,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[6]),66);
        bufp->chgWData(oldp+1179,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[7]),66);
        bufp->chgWData(oldp+1182,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[8]),66);
        bufp->chgWData(oldp+1185,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[9]),66);
        bufp->chgWData(oldp+1188,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[10]),66);
        bufp->chgWData(oldp+1191,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[11]),66);
        bufp->chgWData(oldp+1194,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[12]),66);
        bufp->chgWData(oldp+1197,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[13]),66);
        bufp->chgWData(oldp+1200,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[14]),66);
        bufp->chgWData(oldp+1203,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[15]),66);
        bufp->chgWData(oldp+1206,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[16]),66);
        bufp->chgWData(oldp+1209,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_1_o[17]),66);
        bufp->chgWData(oldp+1212,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[0]),66);
        bufp->chgWData(oldp+1215,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[1]),66);
        bufp->chgWData(oldp+1218,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[2]),66);
        bufp->chgWData(oldp+1221,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[3]),66);
        bufp->chgWData(oldp+1224,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[4]),66);
        bufp->chgWData(oldp+1227,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[5]),66);
        bufp->chgWData(oldp+1230,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[6]),66);
        bufp->chgWData(oldp+1233,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[7]),66);
        bufp->chgWData(oldp+1236,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[8]),66);
        bufp->chgWData(oldp+1239,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[9]),66);
        bufp->chgWData(oldp+1242,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[10]),66);
        bufp->chgWData(oldp+1245,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[11]),66);
        bufp->chgWData(oldp+1248,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[12]),66);
        bufp->chgWData(oldp+1251,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[13]),66);
        bufp->chgWData(oldp+1254,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[14]),66);
        bufp->chgWData(oldp+1257,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[15]),66);
        bufp->chgWData(oldp+1260,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[16]),66);
        bufp->chgWData(oldp+1263,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_2_o[17]),66);
        bufp->chgIData(oldp+1266,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[0]),32);
        bufp->chgIData(oldp+1267,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[1]),32);
        bufp->chgIData(oldp+1268,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[2]),32);
        bufp->chgIData(oldp+1269,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[3]),32);
        bufp->chgIData(oldp+1270,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[4]),32);
        bufp->chgIData(oldp+1271,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[5]),32);
        bufp->chgIData(oldp+1272,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[6]),32);
        bufp->chgIData(oldp+1273,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[7]),32);
        bufp->chgIData(oldp+1274,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[8]),32);
        bufp->chgIData(oldp+1275,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[9]),32);
        bufp->chgIData(oldp+1276,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[10]),32);
        bufp->chgIData(oldp+1277,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[11]),32);
        bufp->chgIData(oldp+1278,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[12]),32);
        bufp->chgIData(oldp+1279,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[13]),32);
        bufp->chgIData(oldp+1280,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[14]),32);
        bufp->chgIData(oldp+1281,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[15]),32);
        bufp->chgIData(oldp+1282,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[16]),32);
        bufp->chgIData(oldp+1283,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_pos_q_o[17]),32);
        bufp->chgIData(oldp+1284,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[0]),32);
        bufp->chgIData(oldp+1285,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[1]),32);
        bufp->chgIData(oldp+1286,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[2]),32);
        bufp->chgIData(oldp+1287,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[3]),32);
        bufp->chgIData(oldp+1288,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[4]),32);
        bufp->chgIData(oldp+1289,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[5]),32);
        bufp->chgIData(oldp+1290,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[6]),32);
        bufp->chgIData(oldp+1291,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[7]),32);
        bufp->chgIData(oldp+1292,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[8]),32);
        bufp->chgIData(oldp+1293,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[9]),32);
        bufp->chgIData(oldp+1294,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[10]),32);
        bufp->chgIData(oldp+1295,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[11]),32);
        bufp->chgIData(oldp+1296,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[12]),32);
        bufp->chgIData(oldp+1297,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[13]),32);
        bufp->chgIData(oldp+1298,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[14]),32);
        bufp->chgIData(oldp+1299,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[15]),32);
        bufp->chgIData(oldp+1300,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[16]),32);
        bufp->chgIData(oldp+1301,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_neg_q_o[17]),32);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[0]),5);
        bufp->chgCData(oldp+1303,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[1]),5);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[2]),5);
        bufp->chgCData(oldp+1305,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[3]),5);
        bufp->chgCData(oldp+1306,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[4]),5);
        bufp->chgCData(oldp+1307,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[5]),5);
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[6]),5);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[7]),5);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[8]),5);
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[9]),5);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[10]),5);
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[11]),5);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[12]),5);
        bufp->chgCData(oldp+1315,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[13]),5);
        bufp->chgCData(oldp+1316,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[14]),5);
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[15]),5);
        bufp->chgCData(oldp+1318,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[16]),5);
        bufp->chgCData(oldp+1319,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_shift_o[17]),5);
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[0]));
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[1]));
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[2]));
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[3]));
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[4]));
        bufp->chgBit(oldp+1325,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[5]));
        bufp->chgBit(oldp+1326,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[6]));
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[7]));
        bufp->chgBit(oldp+1328,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[8]));
        bufp->chgBit(oldp+1329,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[9]));
        bufp->chgBit(oldp+1330,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[10]));
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[11]));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[12]));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[13]));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[14]));
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[15]));
        bufp->chgBit(oldp+1336,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[16]));
        bufp->chgBit(oldp+1337,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_r_sign_o[17]));
        bufp->chgBit(oldp+1338,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[0]));
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[1]));
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[2]));
        bufp->chgBit(oldp+1341,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[3]));
        bufp->chgBit(oldp+1342,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[4]));
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[5]));
        bufp->chgBit(oldp+1344,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[6]));
        bufp->chgBit(oldp+1345,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[7]));
        bufp->chgBit(oldp+1346,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[8]));
        bufp->chgBit(oldp+1347,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[9]));
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[10]));
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[11]));
        bufp->chgBit(oldp+1350,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[12]));
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[13]));
        bufp->chgBit(oldp+1352,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[14]));
        bufp->chgBit(oldp+1353,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[15]));
        bufp->chgBit(oldp+1354,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[16]));
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_d_sign_o[17]));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[0]));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[1]));
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[2]));
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[3]));
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[4]));
        bufp->chgBit(oldp+1361,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[5]));
        bufp->chgBit(oldp+1362,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[6]));
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[7]));
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[8]));
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[9]));
        bufp->chgBit(oldp+1366,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[10]));
        bufp->chgBit(oldp+1367,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[11]));
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[12]));
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[13]));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[14]));
        bufp->chgBit(oldp+1371,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[15]));
        bufp->chgBit(oldp+1372,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[16]));
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_unsign_o[17]));
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[0]));
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[1]));
        bufp->chgBit(oldp+1376,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[2]));
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[3]));
        bufp->chgBit(oldp+1378,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[4]));
        bufp->chgBit(oldp+1379,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[5]));
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[6]));
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[7]));
        bufp->chgBit(oldp+1382,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[8]));
        bufp->chgBit(oldp+1383,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[9]));
        bufp->chgBit(oldp+1384,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[10]));
        bufp->chgBit(oldp+1385,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[11]));
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[12]));
        bufp->chgBit(oldp+1387,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[13]));
        bufp->chgBit(oldp+1388,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[14]));
        bufp->chgBit(oldp+1389,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[15]));
        bufp->chgBit(oldp+1390,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[16]));
        bufp->chgBit(oldp+1391,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r_rem_o[17]));
        bufp->chgWData(oldp+1392,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1395,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1398,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1400,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1402,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1403,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1404,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1407,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1410,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1411,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1412,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_13[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_13[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_13[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1415,(__Vtemp_13),66);
        bufp->chgCData(oldp+1418,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1419,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1420,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1421,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1422,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1423,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1424,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1425,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1426,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1427,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__0__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1430,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1433,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1436,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1438,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1440,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1441,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1442,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1445,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1448,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1449,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1450,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_14[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_14[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_14[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1453,(__Vtemp_14),66);
        bufp->chgCData(oldp+1456,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1457,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1458,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1459,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1460,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1461,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1462,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1463,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1464,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1465,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__10__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1468,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1471,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1474,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1476,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1478,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1479,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1480,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1483,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1486,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1487,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1488,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_15[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_15[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_15[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1491,(__Vtemp_15),66);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1495,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1496,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1497,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1498,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1499,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1500,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1501,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1502,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1503,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__11__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1506,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1509,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1512,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1514,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1516,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1517,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1518,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1521,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1524,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1525,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1526,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_16[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_16[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_16[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1529,(__Vtemp_16),66);
        bufp->chgCData(oldp+1532,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1533,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1534,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1535,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1536,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1537,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1538,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1539,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1540,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1541,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__12__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1544,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1547,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1550,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1552,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1554,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1555,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1556,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1559,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1562,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1563,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1564,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_17[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_17[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_17[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1567,(__Vtemp_17),66);
        bufp->chgCData(oldp+1570,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1571,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1572,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1573,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1574,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1575,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1576,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1577,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1578,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1579,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__13__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1582,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1585,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1588,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1590,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1592,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1593,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1594,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1597,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1600,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1601,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1602,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_18[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_18[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_18[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1605,(__Vtemp_18),66);
        bufp->chgCData(oldp+1608,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1609,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1610,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1611,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1612,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1613,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1614,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1615,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1616,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1617,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__14__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1620,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1623,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1626,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1628,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1630,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1631,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1632,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1635,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1638,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1639,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1640,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_19[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_19[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_19[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1643,(__Vtemp_19),66);
        bufp->chgCData(oldp+1646,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1647,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1648,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1649,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1650,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1651,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1652,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1653,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1654,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1655,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__15__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1658,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1661,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1664,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1666,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1668,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1669,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1670,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1673,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1676,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1677,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1678,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_20[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_20[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_20[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1681,(__Vtemp_20),66);
        bufp->chgCData(oldp+1684,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1685,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1686,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1687,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1688,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1689,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1690,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1691,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1692,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1693,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__1__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1696,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1699,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1702,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1704,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1706,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1707,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1708,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1711,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1714,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1715,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1716,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_21[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_21[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_21[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1719,(__Vtemp_21),66);
        bufp->chgCData(oldp+1722,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1723,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1724,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1725,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1726,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1727,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1728,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1729,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1730,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1731,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__2__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1734,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1737,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1740,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1742,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1744,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1745,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1746,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1749,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1752,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1753,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1754,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_22[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_22[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_22[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1757,(__Vtemp_22),66);
        bufp->chgCData(oldp+1760,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1761,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1762,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1763,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1764,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1765,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1766,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1767,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1768,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1769,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__3__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1772,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1775,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1778,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1780,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1782,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1783,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1784,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1787,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1790,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1791,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1792,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_23[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_23[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_23[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1795,(__Vtemp_23),66);
        bufp->chgCData(oldp+1798,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1799,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1800,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1801,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1802,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1803,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1804,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1805,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1806,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1807,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__4__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1810,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1813,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1816,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1818,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1820,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1821,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1822,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1825,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1828,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1829,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1830,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_24[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_24[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_24[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1833,(__Vtemp_24),66);
        bufp->chgCData(oldp+1836,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1837,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1838,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1839,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1840,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1841,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1842,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1843,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1844,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1845,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__5__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1848,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1851,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1854,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1856,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1858,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1859,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1860,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1863,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1866,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1867,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1868,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_25[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_25[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_25[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1871,(__Vtemp_25),66);
        bufp->chgCData(oldp+1874,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1875,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1876,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1877,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1878,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1879,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1880,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1881,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1882,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1883,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__6__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1886,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1889,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1892,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1894,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1896,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1897,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1898,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1901,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1904,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1905,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1906,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_26[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_26[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_26[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1909,(__Vtemp_26),66);
        bufp->chgCData(oldp+1912,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1913,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1914,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1915,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1916,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1917,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1918,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1919,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1920,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1921,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__7__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1924,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1927,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1930,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1932,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1934,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1935,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1936,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1939,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1942,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1943,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1944,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_27[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_27[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_27[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1947,(__Vtemp_27),66);
        bufp->chgCData(oldp+1950,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1951,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1952,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1953,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1954,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1955,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1956,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1957,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1958,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1959,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__8__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgWData(oldp+1962,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+1965,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgQData(oldp+1968,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+1970,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        bufp->chgIData(oldp+1972,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+1973,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
        bufp->chgWData(oldp+1974,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_1_i),66);
        bufp->chgWData(oldp+1977,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_2_i),66);
        bufp->chgIData(oldp+1980,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__pos_q_o),32);
        bufp->chgIData(oldp+1981,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_SRTDivider__DOT____Vcellout__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__neg_q_o),32);
        bufp->chgWData(oldp+1982,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r_1),66);
        __Vtemp_28[0U] = ((IData)((0x3ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                          << 2U);
        __Vtemp_28[1U] = (((IData)((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U]))))) 
                           >> 0x1eU) | ((IData)(((0x3ffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp_28[2U] = ((IData)(((0x3ffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_2_o[0U])))) 
                                   >> 0x20U)) >> 0x1eU);
        bufp->chgWData(oldp+1985,(__Vtemp_28),66);
        bufp->chgCData(oldp+1988,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__r),6);
        bufp->chgCData(oldp+1989,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__pre_add_r),8);
        bufp->chgCData(oldp+1990,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1991,((0x3fU & VL_SHIFTR_III(6,6,32, 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                     >> 0x1cU))), 1U))),6);
        bufp->chgCData(oldp+1992,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                     >> 0x1cU)) 
                                            + VL_SHIFTR_III(6,6,32, 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                                                        >> 0x1cU))), 1U)))),6);
        bufp->chgCData(oldp+1993,((0x3fU & (IData)(
                                                   (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                    >> 0x1cU)))),6);
        bufp->chgCData(oldp+1994,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__d_n_0_5),6);
        bufp->chgCData(oldp+1995,((0x3fU & ((IData)(
                                                    (vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__neg_d_o 
                                                     >> 0x1cU)) 
                                            + (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__d_n_0_5)))),6);
        bufp->chgCData(oldp+1996,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__q),3);
        bufp->chgWData(oldp+1997,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_QuotientSelects__BRA__9__KET____DOT__m_QuotientSelect__DOT__sub),66);
        bufp->chgBit(oldp+2000,(((~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out) 
                                     >> 2U)) & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__MUL_DIV_start))));
        bufp->chgBit(oldp+2001,((0U != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out))));
        bufp->chgCData(oldp+2002,((3U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out))),2);
        bufp->chgQData(oldp+2003,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_2[0]),64);
        bufp->chgQData(oldp+2005,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_2[1]),64);
        bufp->chgQData(oldp+2007,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_2[2]),64);
        bufp->chgQData(oldp+2009,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_2[3]),64);
        bufp->chgQData(oldp+2011,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_3[0]),64);
        bufp->chgQData(oldp+2013,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_3[1]),64);
        __Vtemp_29[0U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i);
        __Vtemp_29[1U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i 
                                  >> 0x20U));
        __Vtemp_29[2U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i);
        __Vtemp_29[3U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i 
                                  >> 0x20U));
        bufp->chgWData(oldp+2015,(__Vtemp_29),128);
        __Vtemp_36[0U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o);
        __Vtemp_36[1U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
                                  >> 0x20U));
        __Vtemp_36[2U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o);
        __Vtemp_36[3U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o 
                                  >> 0x20U));
        __Vtemp_36[4U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o);
        __Vtemp_36[5U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o 
                                  >> 0x20U));
        __Vtemp_36[6U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o);
        __Vtemp_36[7U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o 
                                  >> 0x20U));
        __Vtemp_36[8U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o);
        __Vtemp_36[9U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o 
                                  >> 0x20U));
        __Vtemp_36[0xaU] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o);
        __Vtemp_36[0xbU] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o 
                                    >> 0x20U));
        __Vtemp_36[0xcU] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o);
        __Vtemp_36[0xdU] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o 
                                    >> 0x20U));
        __Vtemp_36[0xeU] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o);
        __Vtemp_36[0xfU] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o 
                                    >> 0x20U));
        bufp->chgWData(oldp+2019,(__Vtemp_36),512);
        __Vtemp_37[0U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o);
        __Vtemp_37[1U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
                                  >> 0x20U));
        __Vtemp_37[2U] = (IData)(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o);
        __Vtemp_37[3U] = (IData)((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o 
                                  >> 0x20U));
        bufp->chgWData(oldp+2035,(__Vtemp_37),128);
        bufp->chgQData(oldp+2039,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[0]),64);
        bufp->chgQData(oldp+2041,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[1]),64);
        bufp->chgQData(oldp+2043,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[2]),64);
        bufp->chgQData(oldp+2045,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[3]),64);
        bufp->chgQData(oldp+2047,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[4]),64);
        bufp->chgQData(oldp+2049,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[5]),64);
        bufp->chgQData(oldp+2051,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[6]),64);
        bufp->chgQData(oldp+2053,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_1_o[7]),64);
        bufp->chgQData(oldp+2055,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_3_o[0]),64);
        bufp->chgQData(oldp+2057,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_3_o[1]),64);
        bufp->chgCData(oldp+2059,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_sign_o[0]),2);
        bufp->chgCData(oldp+2060,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_sign_o[1]),2);
        bufp->chgBit(oldp+2061,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_higher_o[0]));
        bufp->chgBit(oldp+2062,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_higher_o[1]));
        bufp->chgBit(oldp+2063,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_start_o[0]));
        bufp->chgBit(oldp+2064,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__r_start_o[1]));
        bufp->chgQData(oldp+2065,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__partial_sum),64);
        bufp->chgBit(oldp+2067,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__start_o));
        bufp->chgCData(oldp+2068,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__sign_o),2);
        bufp->chgBit(oldp+2069,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_0_Reg__higher_o));
        bufp->chgQData(oldp+2070,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o),64);
        bufp->chgQData(oldp+2072,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o),64);
        bufp->chgQData(oldp+2074,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o),64);
        bufp->chgQData(oldp+2076,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o),64);
        bufp->chgQData(oldp+2078,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o),64);
        bufp->chgQData(oldp+2080,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o),64);
        bufp->chgQData(oldp+2082,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o),64);
        bufp->chgQData(oldp+2084,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o),64);
        bufp->chgCData(oldp+2086,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__sign_o),2);
        bufp->chgBit(oldp+2087,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_MUL_3_Reg__higher_o));
        bufp->chgQData(oldp+2088,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+2090,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o),64);
        bufp->chgQData(oldp+2092,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellinp__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_i),64);
        bufp->chgQData(oldp+2094,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_3_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o),64);
        bufp->chgBit(oldp+2096,((3U == (3U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_MUL_DIV_ctrl_out)))));
        bufp->chgQData(oldp+2097,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out1),64);
        bufp->chgQData(oldp+2099,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out2),64);
        bufp->chgQData(oldp+2101,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w1),64);
        bufp->chgQData(oldp+2103,(((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__0__KET____DOT__reg_partial__data_o 
                                    & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__1__KET____DOT__reg_partial__data_o) 
                                   | (vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__2__KET____DOT__reg_partial__data_o 
                                      & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__3__KET____DOT__reg_partial__data_o))),64);
        bufp->chgQData(oldp+2105,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__0__KET____DOT__m_compressor__DOT__w3),64);
        bufp->chgQData(oldp+2107,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out1),64);
        bufp->chgQData(oldp+2109,(vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out2),64);
        bufp->chgQData(oldp+2111,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w1),64);
        bufp->chgQData(oldp+2113,(((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__4__KET____DOT__reg_partial__data_o 
                                    & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__5__KET____DOT__reg_partial__data_o) 
                                   | (vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__6__KET____DOT__reg_partial__data_o 
                                      & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_MUL_0_Reg__DOT____Vcellout__reg_partial_products__BRA__7__KET____DOT__reg_partial__data_o))),64);
        bufp->chgQData(oldp+2115,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l2__BRA__1__KET____DOT__m_compressor__DOT__w3),64);
        bufp->chgQData(oldp+2117,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w1),64);
        bufp->chgQData(oldp+2119,(((vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out1 
                                    & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__0__KET____DOT__m_compressor__out2) 
                                   | (vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out1 
                                      & vlSymsp->TOP__Computer__m_core0.m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT____Vcellout__m_compressors_l2__BRA__1__KET____DOT__m_compressor__out2))),64);
        bufp->chgQData(oldp+2121,(vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_WallaceMultiplier__DOT__m_compressors_l3__BRA__0__KET____DOT__m_compressor__DOT__w3),64);
        bufp->chgBit(oldp+2123,((1U & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_done)))));
        bufp->chgBit(oldp+2124,((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_mem_ctrl_out) 
                                  >> 3U) & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_mem_wr_en_out))));
        bufp->chgBit(oldp+2125,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_rd_r));
        bufp->chgBit(oldp+2126,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_wr_r));
        bufp->chgWData(oldp+2127,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                  [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)]),77);
        bufp->chgBit(oldp+2130,((2U != vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__count)));
        bufp->chgBit(oldp+2131,((0U != vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__count)));
        bufp->chgIData(oldp+2132,(((vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                    [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][2U] 
                                    << 0x13U) | (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                                 [(0x1fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][1U] 
                                                 >> 0xdU))),32);
        bufp->chgBit(oldp+2133,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                       [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2134,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                       [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2135,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                       [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2136,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__resp_signed));
        bufp->chgBit(oldp+2137,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                       [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                       >> 8U))));
        bufp->chgBit(oldp+2138,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q
                                       [(0x1fU & vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr)][0U] 
                                       >> 7U))));
        bufp->chgCData(oldp+2139,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__resp_mask),4);
        bufp->chgCData(oldp+2140,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__resp_u_type),3);
        bufp->chgBit(oldp+2141,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lb_inst));
        bufp->chgBit(oldp+2142,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lh_inst));
        bufp->chgBit(oldp+2143,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__lw_inst));
        bufp->chgBit(oldp+2144,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__sb_inst));
        bufp->chgBit(oldp+2145,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__sh_inst));
        bufp->chgBit(oldp+2146,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__sw_inst));
        bufp->chgBit(oldp+2147,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__sign_inst));
        bufp->chgBit(oldp+2148,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__ld_inst));
        bufp->chgBit(oldp+2149,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__st_inst));
        bufp->chgBit(oldp+2150,((0x1073U == (0x707fU 
                                             & vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out))));
        bufp->chgBit(oldp+2151,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__LSU_start) 
                                 & (0x3a0U == (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2152,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__LSU_start) 
                                 & (0x3a1U == (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2153,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__LSU_start) 
                                 & (0x3a2U == (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2154,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__u_state));
        bufp->chgBit(oldp+2155,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__u_rd));
        bufp->chgBit(oldp+2156,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__u_wr));
        bufp->chgBit(oldp+2157,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__u_sign));
        bufp->chgBit(oldp+2158,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__u_lh));
        bufp->chgIData(oldp+2159,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__u_addr),32);
        bufp->chgIData(oldp+2160,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__u_data),32);
        bufp->chgCData(oldp+2161,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__u_type),3);
        bufp->chgBit(oldp+2162,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__push_q));
        bufp->chgBit(oldp+2163,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__pop_q));
        bufp->chgBit(oldp+2164,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_sign));
        bufp->chgBit(oldp+2165,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__mem_lb));
        bufp->chgBit(oldp+2166,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__pop_pre));
        bufp->chgIData(oldp+2167,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__writeback_value_r),32);
        bufp->chgIData(oldp+2168,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__writeback_value_pre),32);
        bufp->chgBit(oldp+2169,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__resp_valid_pre));
        bufp->chgWData(oldp+2170,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[0]),77);
        bufp->chgWData(oldp+2173,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[1]),77);
        bufp->chgWData(oldp+2176,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[2]),77);
        bufp->chgWData(oldp+2179,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[3]),77);
        bufp->chgWData(oldp+2182,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[4]),77);
        bufp->chgWData(oldp+2185,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[5]),77);
        bufp->chgWData(oldp+2188,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[6]),77);
        bufp->chgWData(oldp+2191,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[7]),77);
        bufp->chgWData(oldp+2194,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[8]),77);
        bufp->chgWData(oldp+2197,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[9]),77);
        bufp->chgWData(oldp+2200,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[10]),77);
        bufp->chgWData(oldp+2203,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[11]),77);
        bufp->chgWData(oldp+2206,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[12]),77);
        bufp->chgWData(oldp+2209,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[13]),77);
        bufp->chgWData(oldp+2212,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[14]),77);
        bufp->chgWData(oldp+2215,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[15]),77);
        bufp->chgWData(oldp+2218,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[16]),77);
        bufp->chgWData(oldp+2221,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[17]),77);
        bufp->chgWData(oldp+2224,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[18]),77);
        bufp->chgWData(oldp+2227,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[19]),77);
        bufp->chgWData(oldp+2230,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[20]),77);
        bufp->chgWData(oldp+2233,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[21]),77);
        bufp->chgWData(oldp+2236,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[22]),77);
        bufp->chgWData(oldp+2239,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[23]),77);
        bufp->chgWData(oldp+2242,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[24]),77);
        bufp->chgWData(oldp+2245,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[25]),77);
        bufp->chgWData(oldp+2248,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[26]),77);
        bufp->chgWData(oldp+2251,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[27]),77);
        bufp->chgWData(oldp+2254,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[28]),77);
        bufp->chgWData(oldp+2257,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[29]),77);
        bufp->chgWData(oldp+2260,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[30]),77);
        bufp->chgWData(oldp+2263,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__ram_q[31]),77);
        bufp->chgIData(oldp+2266,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__wr_ptr),32);
        bufp->chgIData(oldp+2267,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__rd_ptr),32);
        bufp->chgIData(oldp+2268,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__count),32);
        bufp->chgBit(oldp+2269,((0U == vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__count)));
        bufp->chgBit(oldp+2270,((2U == vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__count)));
        bufp->chgIData(oldp+2271,(vlSymsp->TOP__Computer__m_core0.__PVT__u_lsu__DOT__LDQ__DOT__i),32);
        bufp->chgBit(oldp+2272,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_req));
        bufp->chgIData(oldp+2273,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__entry_q),32);
        bufp->chgIData(oldp+2274,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__entry_q),32);
        bufp->chgBit(oldp+2275,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit));
        bufp->chgIData(oldp+2276,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__update_entry),32);
        bufp->chgBit(oldp+2277,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__is_pte));
        bufp->chgBit(oldp+2278,((3U == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state))));
        bufp->chgBit(oldp+2279,((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                 >> 0x1fU)));
        bufp->chgSData(oldp+2280,((0x1ffU & (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                             >> 0x16U))),9);
        bufp->chgIData(oldp+2281,(VL_SHIFTL_III(32,32,32, vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q, 0xcU)),32);
        bufp->chgIData(oldp+2282,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_addr_r),32);
        bufp->chgIData(oldp+2283,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_value_r),32);
        bufp->chgBit(oldp+2284,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r));
        bufp->chgBit(oldp+2285,((((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_rd) 
                                  & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit)) 
                                 | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__is_pte))));
        bufp->chgBit(oldp+2286,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__lsu_mmu_wr) 
                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit))));
        bufp->chgBit(oldp+2287,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_rd_c));
        bufp->chgBit(oldp+2288,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_wr_c));
        bufp->chgBit(oldp+2289,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_valid_r));
        bufp->chgBit(oldp+2290,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dcache_valid));
        bufp->chgIData(oldp+2291,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_vpn_i),20);
        bufp->chgBit(oldp+2292,(((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit)) 
                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_req))));
        bufp->chgBit(oldp+2293,(vlSymsp->TOP__Computer__m_core0.u_mmu__DOT____Vcellinp__MMU__DOT__DTLB__update_i));
        bufp->chgIData(oldp+2294,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__vpn_q),20);
        bufp->chgBit(oldp+2295,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__DTLB__DOT__tlb_valid_r));
        bufp->chgIData(oldp+2296,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__vpn_q),20);
        bufp->chgBit(oldp+2297,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__tlb_valid_r));
        bufp->chgCData(oldp+2298,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__fsm_state),2);
        bufp->chgIData(oldp+2299,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__req_addr_r),32);
        bufp->chgIData(oldp+2300,((0xfffff000U & (vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o 
                                                  << 2U))),32);
        bufp->chgSData(oldp+2301,((0x3ffU & vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o)),10);
        bufp->chgBit(oldp+2302,((IData)((0U != (0xeU 
                                                & vlSymsp->TOP__Computer__m_DataMemory.__PVT__data_o)))));
        bufp->chgBit(oldp+2303,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_invalid));
        bufp->chgBit(oldp+2304,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_available_pre));
        bufp->chgBit(oldp+2305,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_rd_r));
        bufp->chgBit(oldp+2306,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__d_available_pre));
        bufp->chgBit(oldp+2307,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__dcache_rd_r));
        bufp->chgBit(oldp+2308,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__dcache_wr_r));
        bufp->chgBit(oldp+2309,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__stall_r));
        bufp->chgBit(oldp+2310,(vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__inst_valid));
        bufp->chgIData(oldp+2311,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q),32);
        bufp->chgCData(oldp+2312,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_priv_q),2);
        bufp->chgBit(oldp+2313,(vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_valid_r));
        bufp->chgBit(oldp+2314,(vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_fault_w));
        bufp->chgIData(oldp+2315,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_pc_p4_out),32);
        bufp->chgCData(oldp+2316,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_exception_out),6);
        bufp->chgIData(oldp+2317,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_ALU_out),32);
        bufp->chgIData(oldp+2318,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_MUL_DIV_out),32);
        bufp->chgIData(oldp+2319,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_mem_data_out),32);
        bufp->chgIData(oldp+2320,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_csr_rd_data_out),32);
        bufp->chgIData(oldp+2321,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_FPU_out),32);
        bufp->chgIData(oldp+2322,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_bypass_out),32);
        bufp->chgBit(oldp+2323,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_wr_en_out));
        bufp->chgBit(oldp+2324,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_freg_wr_en_out));
        bufp->chgCData(oldp+2325,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_reg_w_sel_out),3);
        bufp->chgCData(oldp+2326,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_priv_r),2);
        bufp->chgIData(oldp+2327,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_medeleg_q),32);
        bufp->chgIData(oldp+2328,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mideleg_q),32);
        bufp->chgIData(oldp+2329,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mie_q),32);
        bufp->chgIData(oldp+2330,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtvec_q),32);
        bufp->chgIData(oldp+2331,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_medelegh_q),32);
        bufp->chgIData(oldp+2332,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mscratch_q),32);
        bufp->chgIData(oldp+2333,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mepc_q),32);
        bufp->chgIData(oldp+2334,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcause_q),32);
        bufp->chgIData(oldp+2335,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtval_q),32);
        bufp->chgIData(oldp+2336,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_q),32);
        bufp->chgIData(oldp+2337,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_next_q),32);
        bufp->chgIData(oldp+2338,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycle_q),32);
        bufp->chgIData(oldp+2339,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycleh_q),32);
        bufp->chgIData(oldp+2340,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_fflags_q),32);
        bufp->chgIData(oldp+2341,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_frm_q),32);
        bufp->chgIData(oldp+2342,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtimecmp_q),32);
        bufp->chgBit(oldp+2343,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtime_ie_q));
        bufp->chgIData(oldp+2344,((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mie_q 
                                   & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_q)),32);
        bufp->chgCData(oldp+2345,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__irq_priv_q),2);
        bufp->chgBit(oldp+2346,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_upd_q));
        bufp->chgIData(oldp+2347,(((IData)(1U) + vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycle_q)),32);
        bufp->chgBit(oldp+2348,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtime_ie_r));
        bufp->chgBit(oldp+2349,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_magic_set));
        bufp->chgBit(oldp+2350,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2351,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2352,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2353,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2354,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2355,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2356,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2357,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2358,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgQData(oldp+2359,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+2361,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_d_o),34);
        __Vtemp_41[0U] = 0U;
        if ((2U & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[2U])) {
            __Vtemp_41[1U] = (IData)(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_o);
            __Vtemp_41[2U] = (IData)((vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_o 
                                      >> 0x20U));
        } else {
            __Vtemp_41[1U] = 0U;
            __Vtemp_41[2U] = 0U;
        }
        bufp->chgWData(oldp+2363,(__Vtemp_41),66);
        bufp->chgIData(oldp+2366,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+2367,(((2U & vlSymsp->TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__r[2U])
                                    ? ((0xfffffffcU 
                                        & vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o) 
                                       | (((0U != (3U 
                                                   & vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o)) 
                                           << 1U) | 
                                          (1U & (~ vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o))))
                                    : vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o)),32);
        bufp->chgCData(oldp+2368,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2369,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2370,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2371,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2372,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgIData(oldp+2373,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_o),32);
        bufp->chgQData(oldp+2374,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_o),34);
        bufp->chgQData(oldp+2376,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__neg_d_o),34);
        bufp->chgWData(oldp+2378,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+2381,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_2_o),66);
        bufp->chgIData(oldp+2384,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__pos_q_o),32);
        bufp->chgIData(oldp+2385,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__neg_q_o),32);
        bufp->chgCData(oldp+2386,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2387,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2388,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2389,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2390,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2391,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2392,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2393,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2394,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2395,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2396,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2397,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2398,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2399,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2400,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2401,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2402,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2403,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2404,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2405,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2406,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2407,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2408,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2409,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2410,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2411,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2412,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2413,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2414,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2415,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2416,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2417,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2418,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2419,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2420,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2421,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2423,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2424,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2425,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2426,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2427,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2428,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2429,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2430,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2431,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2432,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2433,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2434,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2435,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2436,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2437,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2438,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2439,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2440,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2441,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2442,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2443,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2444,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2445,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2446,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2447,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2448,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2449,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2450,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2451,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2452,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2453,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2454,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2455,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2456,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2457,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2458,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2459,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2460,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2461,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2462,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2463,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2464,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2465,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2466,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2468,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2469,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2470,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2471,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2472,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2473,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2474,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2475,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2476,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2477,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2478,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2479,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2480,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2481,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2482,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2483,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2484,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2485,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2486,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2487,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2488,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgBit(oldp+2489,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__start_o));
        bufp->chgIData(oldp+2490,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_o),32);
        bufp->chgCData(oldp+2491,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__shift_o),5);
        bufp->chgBit(oldp+2492,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__r_sign_o));
        bufp->chgBit(oldp+2493,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__d_sign_o));
        bufp->chgBit(oldp+2494,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__unsign_o));
        bufp->chgBit(oldp+2495,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__PVT__rem_o));
        bufp->chgWData(oldp+2496,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_1_o),66);
        bufp->chgWData(oldp+2499,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__r_2_o),66);
        bufp->chgIData(oldp+2502,(vlSymsp->TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__PVT__neg_q_o),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+2503,(((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                  >> 0x1fU) ? ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_valid_r) 
                                               & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit))
                                  : (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_valid_r))));
        bufp->chgBit(oldp+2504,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw__DOT__pte_fault_r) 
                                 | ((~ (vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__entry_q 
                                        >> 3U)) & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit)))));
        bufp->chgIData(oldp+2505,(((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                    >> 0x1fU) ? ((0xfffff000U 
                                                  & (vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ITLB__DOT__entry_q 
                                                     << 2U)) 
                                                 | (0xfffU 
                                                    & vlSymsp->TOP__Computer__m_core0.__PVT__pc_out))
                                    : vlSymsp->TOP__Computer__m_core0.__PVT__pc_out)),32);
        bufp->chgBit(oldp+2506,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__u_mmu_cache_ctrl__DOT__i_available_pre) 
                                 & ((~ (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                        >> 0x1fU)) 
                                    | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit)))));
        bufp->chgBit(oldp+2507,((1U & (vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__bht
                                       [(0x7ffU & (
                                                   (vlSymsp->TOP__Computer__m_core0.__PVT__pc_out 
                                                    >> 2U) 
                                                   ^ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__ghr)))] 
                                       >> 1U))));
        bufp->chgSData(oldp+2508,((0x7ffU & ((vlSymsp->TOP__Computer__m_core0.__PVT__pc_out 
                                              >> 2U) 
                                             ^ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__m_bp__DOT__u_gshare_bht__DOT__ghr)))),11);
        bufp->chgBit(oldp+2509,((1U & ((~ (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                           >> 0x1fU)) 
                                       | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit)))));
        bufp->chgBit(oldp+2510,(((vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q 
                                  >> 0x1fU) & ((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit)) 
                                               | ((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_hit)) 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__dtlb_req))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+2511,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[0]),32);
        bufp->chgIData(oldp+2512,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[1]),32);
        bufp->chgIData(oldp+2513,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[2]),32);
        bufp->chgIData(oldp+2514,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[3]),32);
        bufp->chgIData(oldp+2515,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[4]),32);
        bufp->chgIData(oldp+2516,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[5]),32);
        bufp->chgIData(oldp+2517,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[6]),32);
        bufp->chgIData(oldp+2518,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[7]),32);
        bufp->chgIData(oldp+2519,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[8]),32);
        bufp->chgIData(oldp+2520,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[9]),32);
        bufp->chgIData(oldp+2521,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[10]),32);
        bufp->chgIData(oldp+2522,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[11]),32);
        bufp->chgIData(oldp+2523,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[12]),32);
        bufp->chgIData(oldp+2524,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[13]),32);
        bufp->chgIData(oldp+2525,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[14]),32);
        bufp->chgIData(oldp+2526,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[15]),32);
        bufp->chgIData(oldp+2527,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[16]),32);
        bufp->chgIData(oldp+2528,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[17]),32);
        bufp->chgIData(oldp+2529,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[18]),32);
        bufp->chgIData(oldp+2530,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[19]),32);
        bufp->chgIData(oldp+2531,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[20]),32);
        bufp->chgIData(oldp+2532,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[21]),32);
        bufp->chgIData(oldp+2533,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[22]),32);
        bufp->chgIData(oldp+2534,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[23]),32);
        bufp->chgIData(oldp+2535,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[24]),32);
        bufp->chgIData(oldp+2536,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[25]),32);
        bufp->chgIData(oldp+2537,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[26]),32);
        bufp->chgIData(oldp+2538,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[27]),32);
        bufp->chgIData(oldp+2539,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[28]),32);
        bufp->chgIData(oldp+2540,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[29]),32);
        bufp->chgIData(oldp+2541,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[30]),32);
        bufp->chgIData(oldp+2542,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs[31]),32);
        bufp->chgIData(oldp+2543,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+2544,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+2545,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+2546,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+2547,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+2548,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+2549,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+2550,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+2551,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+2552,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+2553,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+2554,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+2555,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+2556,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+2557,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+2558,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+2559,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+2560,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+2561,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+2562,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+2563,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+2564,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+2565,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+2566,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+2567,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+2568,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+2569,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+2570,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+2571,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+2572,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+2573,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+2574,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+2575,(vlSymsp->TOP__Computer__m_core0.__PVT__pc_out),32);
        bufp->chgIData(oldp+2576,(((IData)(4U) + vlSymsp->TOP__Computer__m_core0.__PVT__pc_out)),32);
        bufp->chgIData(oldp+2577,(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out),32);
        bufp->chgIData(oldp+2578,(vlSymsp->TOP__Computer__m_core0.__PVT__decode_imm),32);
        bufp->chgCData(oldp+2579,((0x1fU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2580,((0x1fU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+2581,((vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                   >> 0x1bU)),5);
        bufp->chgCData(oldp+2582,((0x1fU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                            >> 7U))),5);
        bufp->chgSData(oldp+2583,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__is_fpu)
                                    ? 2U : (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                            >> 0x14U))),12);
        bufp->chgBit(oldp+2584,(vlSymsp->TOP__Computer__m_core0.__PVT__is_impl));
        bufp->chgBit(oldp+2585,(vlSymsp->TOP__Computer__m_core0.__PVT__reg_wr_en));
        bufp->chgBit(oldp+2586,(((IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_78) 
                                 | ((0x2007U == (0x707fU 
                                                 & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                    | ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_sel1) 
                                       | ((0xf0000053U 
                                           == (0xfff0707fU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                          | ((0x3007U 
                                              == (0x707fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                             | (IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_69))))))));
        bufp->chgCData(oldp+2587,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__is_j)
                                    ? 0U : (((0x37U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                             | ((0xf0000053U 
                                                 == 
                                                 (0xfff0707fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                | ((0xe0000053U 
                                                    == 
                                                    (0xfff0707fU 
                                                     & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                   | (0xfU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)))))
                                             ? 5U : 
                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__m_Control__DOT__is_alu_w)
                                              ? 1U : 
                                             ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__m_Control__DOT__is_lsu_w)
                                               ? 2U
                                               : ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__is_csr)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__is_fpu)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__is_MUL_DIV)
                                                     ? 6U
                                                     : 0U)))))))),3);
        bufp->chgBit(oldp+2588,(((0x23U == (0x707fU 
                                            & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                 | ((IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_79) 
                                    | ((0x2027U == 
                                        (0x707fU & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                       | (0x3027U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)))))));
        bufp->chgBit(oldp+2589,(((IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_84) 
                                 | ((0x2007U == (0x707fU 
                                                 & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                    | (0x3007U == (0x707fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))))));
        bufp->chgCData(oldp+2590,(((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__m_Control__DOT__is_lsu_w)
                                    ? ((3U == (0x707fU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                        ? 9U : ((0x4003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                 ? 1U
                                                 : 
                                                ((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                  ? 0xaU
                                                  : 
                                                 ((0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                   ? 2U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                    ? 4U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                     ? 1U
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                      ? 2U
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                       ? 4U
                                                       : 
                                                      ((0x2007U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                        ? 4U
                                                        : 
                                                       ((0x2027U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                         ? 0xcU
                                                         : 0U))))))))))
                                    : 0U)),4);
        bufp->chgBit(oldp+2591,(vlSymsp->TOP__Computer__m_core0.__PVT__is_j));
        bufp->chgBit(oldp+2592,(vlSymsp->TOP__Computer__m_core0.__PVT__is_br));
        bufp->chgCData(oldp+2593,(((0x63U == (0x707fU 
                                              & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                    ? 0U : ((IData)(vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_29)
                                             ? ((0x1063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                 ? 1U
                                                 : 
                                                ((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                  ? 2U
                                                  : 
                                                 ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                   ? 3U
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                    ? 4U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                                     ? 5U
                                                     : 7U)))))
                                             : 0U))),3);
        bufp->chgBit(oldp+2594,(((IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_87) 
                                 | ((0x33U == (0xfe00707fU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                    | ((0x2033U == 
                                        (0xfe00707fU 
                                         & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                       | ((0x3033U 
                                           == (0xfe00707fU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                          | ((0x7033U 
                                              == (0xfe00707fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                             | ((0x6033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                | ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                   | ((0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                      | ((0x5033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                         | ((0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                            | ((0x40005033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                               | (0x67U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)))))))))))))));
        bufp->chgBit(oldp+2595,(((IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_86) 
                                 | (IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_68))));
        bufp->chgCData(oldp+2596,(vlSymsp->TOP__Computer__m_core0.__PVT__ALU_ctrl),4);
        bufp->chgBit(oldp+2597,(vlSymsp->TOP__Computer__m_core0.__PVT__is_MUL_DIV));
        bufp->chgCData(oldp+2598,((7U & ((- (IData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__is_MUL_DIV))) 
                                         & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                            >> 0xcU)))),3);
        bufp->chgBit(oldp+2599,(vlSymsp->TOP__Computer__m_core0.__PVT__is_csr));
        bufp->chgCData(oldp+2600,((7U & ((- (IData)((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__is_csr))) 
                                         & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                            >> 0xcU)))),3);
        bufp->chgBit(oldp+2601,(((0x5073U == (0x707fU 
                                              & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                 | ((0x6073U == (0x707fU 
                                                 & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                    | (0x7073U == (0x707fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))))));
        bufp->chgBit(oldp+2602,(((IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_75) 
                                 | ((IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_71) 
                                    | ((0xc0000053U 
                                        == (0xfff0007fU 
                                            & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                       | ((0xc0100053U 
                                           == (0xfff0007fU 
                                               & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                          | ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_sel1) 
                                             | ((0xe0000053U 
                                                 == 
                                                 (0xfff0707fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                | ((0xf0000053U 
                                                    == 
                                                    (0xfff0707fU 
                                                     & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                                   | (IData)(vlSymsp->TOP__Computer__m_core0.m_ID__DOT__m_Control__DOT____VdfgRegularize_hdf9f7659_0_70))))))))));
        bufp->chgBit(oldp+2603,(vlSymsp->TOP__Computer__m_core0.__PVT__is_fpu));
        bufp->chgBit(oldp+2604,(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_sel1));
        bufp->chgCData(oldp+2605,(((0x37U == (0x7fU 
                                              & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                    ? 1U : ((0xf0000053U 
                                             == (0xfff0707fU 
                                                 & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                             ? 2U : 
                                            ((0xe0000053U 
                                              == (0xfff0707fU 
                                                  & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                              ? 3U : 
                                             ((0xfU 
                                               == (0x707fU 
                                                   & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))
                                               ? 1U
                                               : 0U))))),2);
        bufp->chgBit(oldp+2606,(((0xfU == (0x707fU 
                                           & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                 | ((0x100fU == (0x707fU 
                                                 & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)) 
                                    | (0x12000073U 
                                       == (0xfe007fffU 
                                           & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out))))));
        bufp->chgIData(oldp+2607,(vlSymsp->TOP__Computer__m_core0.__PVT__wb_data_in),32);
        bufp->chgCData(oldp+2608,(vlSymsp->TOP__Computer__m_core0.__PVT__EX_rd_out),5);
        bufp->chgCData(oldp+2609,(vlSymsp->TOP__Computer__m_core0__m_WB.__PVT__WB_rd_out),5);
        bufp->chgIData(oldp+2610,(vlSymsp->TOP__Computer__m_core0.__PVT__bp_pred_target_out),32);
        bufp->chgBit(oldp+2611,(vlSymsp->TOP__Computer__m_core0.__PVT__bp_pred_taken_out));
        bufp->chgBit(oldp+2612,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Fetch__DOT__m_bp__DOT__hit_w));
        bufp->chgSData(oldp+2613,((0x7ffU & (vlSymsp->TOP__Computer__m_core0.__PVT__pc_out 
                                             >> 2U))),11);
        bufp->chgSData(oldp+2614,((vlSymsp->TOP__Computer__m_core0.__PVT__pc_out 
                                   >> 0x14U)),12);
        bufp->chgCData(oldp+2615,((0x7fU & vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out)),7);
        bufp->chgCData(oldp+2616,((7U & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+2617,(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__m_Control__DOT__is_alu_w));
        bufp->chgBit(oldp+2618,(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__m_Control__DOT__is_lsu_w));
        bufp->chgBit(oldp+2619,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit));
        bufp->chgIData(oldp+2620,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__itlb_vpn_i),20);
        bufp->chgIData(oldp+2621,(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__ptw_req_addr_r),32);
        bufp->chgBit(oldp+2622,((1U & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__u_mmu__DOT__MMU__DOT__itlb_hit)))));
    }
    bufp->chgBit(oldp+2623,(vlSelfRef.clk));
    bufp->chgBit(oldp+2624,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+2625,(((0x10000U > vlSymsp->TOP__Computer__m_core0.__PVT__pc_out)
                                ? (((vlSymsp->TOP__Computer__m_DataMemory.mem
                                     [(0xffffU & ((IData)(3U) 
                                                  + vlSymsp->TOP__Computer__m_core0.__PVT__pc_out))] 
                                     << 0x18U) | (vlSymsp->TOP__Computer__m_DataMemory.mem
                                                  [
                                                  (0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSymsp->TOP__Computer__m_core0.__PVT__pc_out))] 
                                                  << 0x10U)) 
                                   | ((vlSymsp->TOP__Computer__m_DataMemory.mem
                                       [(0xffffU & 
                                         ((IData)(1U) 
                                          + vlSymsp->TOP__Computer__m_core0.__PVT__pc_out))] 
                                       << 8U) | vlSymsp->TOP__Computer__m_DataMemory.mem
                                      [(0xffffU & vlSymsp->TOP__Computer__m_core0.__PVT__pc_out)]))
                                : 0U)),32);
    bufp->chgIData(oldp+2626,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs
                              [vlSymsp->TOP__Computer__m_core0.__Vcellinp__m_Register__rs1]),32);
    bufp->chgIData(oldp+2627,(vlSymsp->TOP__Computer__m_core0.__PVT__m_Register__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                         >> 0x14U))]),32);
    bufp->chgIData(oldp+2628,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs
                              [(0x1fU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                         >> 0xfU))]),32);
    bufp->chgIData(oldp+2629,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs
                              [(0x1fU & (vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                         >> 0x14U))]),32);
    bufp->chgIData(oldp+2630,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FRegister__DOT__fregs
                              [(vlSymsp->TOP__Computer__m_core0.__PVT__m_ID__DOT__ID_inst_out 
                                >> 0x1bU)]),32);
    bufp->chgIData(oldp+2631,(vlSymsp->TOP__Computer__m_core0.__PVT__csr_rd_data),32);
    bufp->chgBit(oldp+2632,(vlSymsp->TOP__Computer__m_core0.WB_pc_valid_out));
    bufp->chgIData(oldp+2633,(vlSymsp->TOP__Computer__m_core0.WB_pc_out),32);
    bufp->chgIData(oldp+2634,(vlSymsp->TOP__Computer__m_core0.__PVT__dec_pc),32);
    bufp->chgBit(oldp+2635,(vlSymsp->TOP__Computer__m_core0.__PVT__magic));
    bufp->chgBit(oldp+2636,((0xaaaaU == vlSymsp->TOP__Computer__m_core0.__PVT__dec_pc)));
    bufp->chgCData(oldp+2637,((7U & vlSymsp->TOP__Computer__m_core0.__PVT__csr_rd_data)),3);
    bufp->chgCData(oldp+2638,(vlSymsp->TOP__Computer__m_core0.__PVT__m_FPU__DOT__rounding_mode),3);
    bufp->chgCData(oldp+2639,(vlSymsp->TOP__Computer__m_core0.__Vcellinp__m_Register__rs1),5);
    bufp->chgBit(oldp+2640,(((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__magic)) 
                             & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__WB_reg_wr_en_out))));
    bufp->chgIData(oldp+2641,(vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_rd_data_old),32);
    bufp->chgBit(oldp+2642,(vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_valid_out));
    bufp->chgIData(oldp+2643,(vlSymsp->TOP__Computer__m_core0__m_WB.WB_pc_out),32);
    bufp->chgSData(oldp+2644,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i),12);
    bufp->chgIData(oldp+2645,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_flags_q),32);
    bufp->chgIData(oldp+2646,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_io_in_q),32);
    bufp->chgIData(oldp+2647,(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_io_out_q),32);
    bufp->chgBit(oldp+2648,(((0x344U == (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i)) 
                             | (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_upd_q))));
}

void VComputer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root__trace_cleanup\n"); );
    // Init
    VComputer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComputer___024root*>(voidSelf);
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
