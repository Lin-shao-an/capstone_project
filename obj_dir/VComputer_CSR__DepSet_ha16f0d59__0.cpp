// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_CSR.h"
#include "VComputer__Syms.h"

VL_INLINE_OPT void VComputer_CSR___ico_sequent__TOP__Computer__m_core0__m_CSR__0(VComputer_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VComputer_CSR___ico_sequent__TOP__Computer__m_core0__m_CSR__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_rd_data_old = ((0x800U & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                         ? ((0x400U 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                             ? ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                 ? 0U
                                                 : 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycleh_q
                                                          : 0U)))))))
                                                   : 0U)))
                                             : ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                 ? 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycleh_q)))))))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycle_q)))))))
                                                  : 0U)
                                                 : 0U))
                                         : ((0x400U 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                             ? ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                 ? 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtimecmp_q))))))
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                 ? 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : 
                                                         (0xaaaU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_q)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtval_q
                                                          : 
                                                         (0x8000000fU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcause_q))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mepc_q
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mscratch_q))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 
                                                         (0xfffffffcU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtvec_q)
                                                          : 
                                                         (0xaaaU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mie_q)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 
                                                         (0xffffU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mideleg_q)
                                                          : 
                                                         (0xffffU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_medeleg_q))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0x40101120U
                                                          : 
                                                         ((0xffffe000U 
                                                           & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q) 
                                                          | ((((3U 
                                                                == 
                                                                (3U 
                                                                 & (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q 
                                                                    >> 0xbU)))
                                                                ? 3U
                                                                : 0U) 
                                                              << 0xbU) 
                                                             | (0x7ffU 
                                                                & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q)))))))))))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_io_out_q)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_io_in_q
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_flags_q)))))))))
                                                 : 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q)))))))
                                                   : 0U)
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 
                                                         ((0xe0U 
                                                           & (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_frm_q 
                                                              << 5U)) 
                                                          | (0x1fU 
                                                             & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_fflags_q))
                                                          : 
                                                         (7U 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_frm_q))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 
                                                         (0x1fU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_fflags_q)
                                                          : 0U))))))))))));
}

VL_INLINE_OPT void VComputer_CSR___ico_sequent__TOP__Computer__m_core0__m_CSR__1(VComputer_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VComputer_CSR___ico_sequent__TOP__Computer__m_core0__m_CSR__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_wr_data_r = (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_csr_out) 
                                       | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_done))
                                       ? ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_done)
                                           ? (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__FPU_flags)
                                           : ((1U == 
                                               (3U 
                                                & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out)))
                                               ? vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_34
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out)))
                                                   ? 
                                                  (vlSelfRef.__PVT__csr_rd_data_old 
                                                   | vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_34)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out)))
                                                    ? 
                                                   ((~ vlSymsp->TOP__Computer__m_core0.__VdfgRegularize_ha8957302_0_34) 
                                                    & vlSelfRef.__PVT__csr_rd_data_old)
                                                    : vlSelfRef.__PVT__csr_rd_data_old))))
                                       : 0U);
}

VL_INLINE_OPT void VComputer_CSR___nba_sequent__TOP__Computer__m_core0__m_CSR__0(VComputer_CSR* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VComputer_CSR___nba_sequent__TOP__Computer__m_core0__m_CSR__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_rd_data_old = ((0x800U & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                         ? ((0x400U 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                             ? ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                 ? 0U
                                                 : 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycleh_q
                                                          : 0U)))))))
                                                   : 0U)))
                                             : ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                 ? 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycleh_q)))))))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcycle_q)))))))
                                                  : 0U)
                                                 : 0U))
                                         : ((0x400U 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                             ? ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                 ? 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtimecmp_q))))))
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : ((0x200U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                 ? 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : 
                                                         (0xaaaU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mip_q)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtval_q
                                                          : 
                                                         (0x8000000fU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mcause_q))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mepc_q
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mscratch_q))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 
                                                         (0xfffffffcU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mtvec_q)
                                                          : 
                                                         (0xaaaU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mie_q)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 
                                                         (0xffffU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mideleg_q)
                                                          : 
                                                         (0xffffU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_medeleg_q))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0x40101120U
                                                          : 
                                                         ((0xffffe000U 
                                                           & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q) 
                                                          | ((((3U 
                                                                == 
                                                                (3U 
                                                                 & (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q 
                                                                    >> 0xbU)))
                                                                ? 3U
                                                                : 0U) 
                                                              << 0xbU) 
                                                             | (0x7ffU 
                                                                & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q)))))))))))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_io_out_q)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_io_in_q
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_flags_q)))))))))
                                                 : 
                                                ((0x100U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 0U
                                                          : vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_satp_q)))))))
                                                   : 0U)
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 
                                                         ((0xe0U 
                                                           & (vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_frm_q 
                                                              << 5U)) 
                                                          | (0x1fU 
                                                             & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_fflags_q))
                                                          : 
                                                         (7U 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_frm_q))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i))
                                                          ? 
                                                         (0x1fU 
                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_fflags_q)
                                                          : 0U))))))))))));
    vlSelfRef.__PVT__inst_valid = (1U & ((~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_valid_out)) 
                                         | (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_impl_out)));
    vlSelfRef.__PVT__csr_fault_w = ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_csr_out) 
                                    & ((IData)(vlSelfRef.__PVT__inst_valid) 
                                       & (((3U == (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                                   >> 0x1eU)) 
                                           & ((1U == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out)) 
                                              | ((3U 
                                                  == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_op_out)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_csr_imm_out) 
                                                      | (0U 
                                                         == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_rs1_out)))) 
                                                    | ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_is_csr_imm_out) 
                                                       & (0U 
                                                          != vlSymsp->TOP__Computer__m_core0.__PVT__EX_imm_out)))))) 
                                          | ((IData)(
                                                     ((0U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_mstatus_q)) 
                                                      & ((1U 
                                                          == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)) 
                                                         | ((2U 
                                                             == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)) 
                                                            | (3U 
                                                               == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))))) 
                                             | ((IData)(vlSymsp->TOP__Computer__m_core0__m_CSR__m_CSRFile.__PVT__csr_priv_q) 
                                                < (3U 
                                                   & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                                      >> 0x1cU)))))));
    vlSelfRef.__PVT__csr_wr_valid_r = (1U & (~ ((IData)(vlSelfRef.__PVT__csr_fault_w) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__Computer__m_core0.__PVT__EX_inst_out 
                                                       >> 0xfU))))));
    vlSelfRef.__VdfgRegularize_ha8957302_0_32 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__inst_valid)) 
                                                    | (IData)(vlSelfRef.__PVT__csr_fault_w)));
}
