// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_CSRFile.h"
#include "VComputer__Syms.h"

VL_INLINE_OPT void VComputer_CSRFile___ico_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__0(VComputer_CSRFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputer_CSRFile___ico_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_medeleg_r = vlSelfRef.__PVT__csr_medeleg_q;
    vlSelfRef.__PVT__csr_mtvec_r = vlSelfRef.__PVT__csr_mtvec_q;
    vlSelfRef.__PVT__csr_mie_r = vlSelfRef.__PVT__csr_mie_q;
    vlSelfRef.__PVT__csr_mideleg_r = vlSelfRef.__PVT__csr_mideleg_q;
    vlSelfRef.__PVT__csr_fflags_r = vlSelfRef.__PVT__csr_fflags_q;
    vlSelfRef.__PVT__csr_frm_r = vlSelfRef.__PVT__csr_frm_q;
    vlSelfRef.__PVT__csr_mtimecmp_r = vlSelfRef.__PVT__csr_mtimecmp_q;
    vlSelfRef.__PVT__csr_mscratch_r = vlSelfRef.__PVT__csr_mscratch_q;
    vlSelfRef.__PVT__csr_serial_flags_r = vlSelfRef.csr_serial_flags_q;
    vlSelfRef.__PVT__csr_serial_io_in_r = vlSelfRef.csr_serial_io_in_q;
    vlSelfRef.__PVT__csr_serial_io_out_r = vlSelfRef.csr_serial_io_out_q;
    vlSelfRef.__PVT__csr_satp_r = vlSelfRef.__PVT__csr_satp_q;
    vlSelfRef.__PVT__csr_mtval_r = vlSelfRef.__PVT__csr_mtval_q;
    vlSelfRef.__PVT__csr_mstatus_r = vlSelfRef.__PVT__csr_mstatus_q;
    vlSelfRef.__PVT__csr_mepc_r = vlSelfRef.__PVT__csr_mepc_q;
    vlSelfRef.__PVT__csr_mcause_r = vlSelfRef.__PVT__csr_mcause_q;
    if ((0x20U == (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
        if ((3U == (IData)(vlSelfRef.__PVT__irq_priv_q))) {
            vlSelfRef.__PVT__csr_mtval_r = 0U;
            vlSelfRef.__PVT__csr_mstatus_r = ((0xffffff7fU 
                                               & vlSelfRef.__PVT__csr_mstatus_r) 
                                              | (0x80U 
                                                 & (vlSelfRef.__PVT__csr_mstatus_r 
                                                    << 4U)));
            vlSelfRef.__PVT__csr_mstatus_r = ((0xffffe7ffU 
                                               & vlSelfRef.__PVT__csr_mstatus_r) 
                                              | ((IData)(vlSelfRef.__PVT__csr_priv_q) 
                                                 << 0xbU));
            vlSelfRef.__PVT__csr_mstatus_r = (0xfffffff7U 
                                              & vlSelfRef.__PVT__csr_mstatus_r);
            vlSelfRef.__PVT__csr_mepc_r = vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out;
            if ((8U & vlSymsp->TOP__Computer__m_core0.__PVT__csr_interrupt)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x80000003U;
            } else if ((0x80U & vlSymsp->TOP__Computer__m_core0.__PVT__csr_interrupt)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x80000007U;
            } else if ((0x800U & vlSymsp->TOP__Computer__m_core0.__PVT__csr_interrupt)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x8000000bU;
            }
        }
    } else {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))))) {
            if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
                vlSelfRef.__PVT__csr_mtval_r = ((0x20U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                      ? 0U
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                      ? 0U
                                                      : vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out))
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))
                                                      ? 0U
                                                      : 0U)
                                                     : vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out)))
                                                  : 0U));
                vlSelfRef.__PVT__csr_mepc_r = vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out;
                vlSelfRef.__PVT__csr_mcause_r = (0xfU 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception));
            } else if ((0x35U != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))) {
                if (vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_valid_r) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                if ((0x100U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                    vlSelfRef.__PVT__csr_mtval_r 
                                                                        = vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r;
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                    vlSelfRef.__PVT__csr_mcause_r 
                                                                        = 
                                                                        (0x8000000fU 
                                                                         & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                    vlSelfRef.__PVT__csr_mepc_r 
                                                                        = vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0x30U <= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)) 
             & (0x33U >= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
            if ((3U == (3U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
                vlSelfRef.__PVT__csr_mstatus_r = ((0xfffffff7U 
                                                   & vlSelfRef.__PVT__csr_mstatus_r) 
                                                  | (8U 
                                                     & (vlSelfRef.__PVT__csr_mstatus_q 
                                                        >> 4U)));
                vlSelfRef.__PVT__csr_mstatus_r = (0x80U 
                                                  | vlSelfRef.__PVT__csr_mstatus_r);
                vlSelfRef.__PVT__csr_mstatus_r = (0x1800U 
                                                  | vlSelfRef.__PVT__csr_mstatus_r);
            }
        } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
            vlSelfRef.__PVT__csr_mstatus_r = ((0xffffff7fU 
                                               & vlSelfRef.__PVT__csr_mstatus_r) 
                                              | (0x80U 
                                                 & (vlSelfRef.__PVT__csr_mstatus_r 
                                                    << 4U)));
            vlSelfRef.__PVT__csr_mstatus_r = ((0xffffe7ffU 
                                               & vlSelfRef.__PVT__csr_mstatus_r) 
                                              | ((IData)(vlSelfRef.__PVT__csr_priv_q) 
                                                 << 0xbU));
            vlSelfRef.__PVT__csr_mstatus_r = (0xfffffff7U 
                                              & vlSelfRef.__PVT__csr_mstatus_r);
            vlSelfRef.__PVT__csr_mstatus_r = ((0x7fffffffU 
                                               & vlSelfRef.__PVT__csr_mstatus_r) 
                                              | (((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__csr_mstatus_r 
                                                       >> 0xdU))) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__csr_mstatus_r 
                                                         >> 0xfU)))) 
                                                 << 0x1fU));
        } else if ((0x35U != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))) {
            if (vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_valid_r) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                vlSelfRef.__PVT__csr_mstatus_r 
                                                                    = 
                                                                    ((0xffffe000U 
                                                                      & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r) 
                                                                     | ((((3U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r 
                                                                               >> 0xbU)))
                                                                           ? 3U
                                                                           : 0U) 
                                                                         << 0xbU) 
                                                                        | (0x7ffU 
                                                                           & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mip_r = vlSelfRef.__PVT__csr_mip_q;
    if ((0x20U != (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
                if ((0x35U != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))) {
                    if (vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_valid_r) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                      >> 0xbU)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                          >> 0xaU)))) {
                                if ((0x200U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                    if ((0x100U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (2U 
                                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_medeleg_r 
                                                                            = 
                                                                            (0xffffU 
                                                                             & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                        vlSelfRef.__PVT__csr_mideleg_r 
                                                                            = 
                                                                            (0xffffU 
                                                                             & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (4U 
                                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                        vlSelfRef.__PVT__csr_mtvec_r 
                                                                            = 
                                                                            (0xfffffffcU 
                                                                             & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_mie_r 
                                                                            = 
                                                                            (0xaaaU 
                                                                             & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((0x40U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_mscratch_r 
                                                                            = vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (4U 
                                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_mip_r 
                                                                            = 
                                                                            (0xaaaU 
                                                                             & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_serial_flags_r 
                                                                            = vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r;
                                                                    }
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                        vlSelfRef.__PVT__csr_serial_io_in_r 
                                                                            = vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r;
                                                                    }
                                                                }
                                                                if (
                                                                    (2U 
                                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_serial_io_out_r 
                                                                            = vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (2U 
                                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                    vlSelfRef.__PVT__csr_frm_r 
                                                                        = 
                                                                        ((1U 
                                                                          & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))
                                                                          ? 
                                                                         (7U 
                                                                          & VL_SHIFTR_III(32,32,32, vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r, 5U))
                                                                          : 
                                                                         (7U 
                                                                          & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x100U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                        if ((0x80U 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_satp_r 
                                                                            = vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x400U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                if ((0x200U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                    if ((0x100U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                        if ((0x80U 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                            if ((0x40U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_mtimecmp_r 
                                                                            = vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x35U == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))) {
                    vlSelfRef.__PVT__csr_fflags_r = 
                        (0x1fU & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                } else if (vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_valid_r) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                              >> 8U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                    vlSelfRef.__PVT__csr_fflags_r 
                                                                        = 
                                                                        (0x1fU 
                                                                         & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                                                                }
                                                            } else if (
                                                                       (1U 
                                                                        & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                                vlSelfRef.__PVT__csr_fflags_r 
                                                                    = 
                                                                    (0x1fU 
                                                                     & vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_data_r);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mip_next_r = vlSelfRef.__PVT__csr_mip_next_q;
    if ((vlSelfRef.__PVT__csr_mcycle_q == vlSelfRef.__PVT__csr_mtimecmp_q)) {
        vlSelfRef.__PVT__csr_mip_next_r = ((0xffffff7fU 
                                            & vlSelfRef.__PVT__csr_mip_next_r) 
                                           | ((IData)(vlSelfRef.__PVT__csr_mtime_ie_q) 
                                              << 7U));
    }
    vlSelfRef.__PVT__csr_mip_r = (vlSelfRef.__PVT__csr_mip_r 
                                  | vlSelfRef.__PVT__csr_mip_next_r);
}

VL_INLINE_OPT void VComputer_CSRFile___nba_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__0(VComputer_CSRFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputer_CSRFile___nba_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__0\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__csr_medelegh_q = vlSelfRef.__PVT__csr_medelegh_q;
        if ((0xffffffffU == vlSelfRef.__PVT__csr_mcycle_q)) {
            vlSelfRef.__PVT__csr_mcycleh_q = ((IData)(1U) 
                                              + vlSelfRef.__PVT__csr_mcycleh_q);
        }
        if ((0U != vlSymsp->TOP__Computer__m_core0.__PVT__csr_interrupt)) {
            vlSelfRef.__PVT__irq_priv_q = 3U;
        }
        vlSelfRef.__PVT__csr_mscratch_q = vlSelfRef.__PVT__csr_mscratch_r;
        vlSelfRef.__PVT__csr_mideleg_q = (0xffffU & vlSelfRef.__PVT__csr_mideleg_r);
        vlSelfRef.__PVT__csr_fflags_q = vlSelfRef.__PVT__csr_fflags_r;
        vlSelfRef.__PVT__csr_medeleg_q = (0xffffU & vlSelfRef.__PVT__csr_medeleg_r);
        vlSelfRef.__PVT__csr_frm_q = vlSelfRef.__PVT__csr_frm_r;
        vlSelfRef.csr_serial_io_out_q = vlSelfRef.__PVT__csr_serial_io_out_r;
        vlSelfRef.__PVT__csr_mcause_q = vlSelfRef.__PVT__csr_mcause_r;
        vlSelfRef.__PVT__csr_mtval_q = vlSelfRef.__PVT__csr_mtval_r;
        vlSelfRef.__PVT__csr_mie_q = vlSelfRef.__PVT__csr_mie_r;
        vlSelfRef.__PVT__csr_mtimecmp_q = vlSelfRef.__PVT__csr_mtimecmp_r;
        vlSelfRef.__PVT__csr_mip_q = vlSelfRef.__PVT__csr_mip_r;
        vlSelfRef.__PVT__csr_mtvec_q = vlSelfRef.__PVT__csr_mtvec_r;
        vlSelfRef.__PVT__csr_mepc_q = vlSelfRef.__PVT__csr_mepc_r;
        if ((1U == vlSelfRef.csr_serial_flags_q)) {
            vlSelfRef.csr_serial_io_in_q = vlSelfRef.__PVT__csr_serial_io_in_r;
        }
        vlSelfRef.__PVT__csr_priv_q = (((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__magic) 
                                        | (IData)(vlSelfRef.__PVT__csr_magic_set))
                                        ? 3U : (IData)(vlSelfRef.__PVT__csr_priv_r));
        vlSelfRef.__PVT__csr_mstatus_q = vlSelfRef.__PVT__csr_mstatus_r;
        vlSelfRef.__PVT__csr_mip_next_q = (((0x344U 
                                             == (IData)(vlSelfRef.csr_rd_addr_i)) 
                                            | (IData)(vlSelfRef.__PVT__csr_mip_upd_q))
                                            ? vlSelfRef.__PVT__csr_mip_next_r
                                            : 0U);
        vlSelfRef.__PVT__csr_mcycle_q = vlSelfRef.__PVT__csr_mcycle_r;
        vlSelfRef.csr_serial_flags_q = vlSelfRef.__PVT__csr_serial_flags_r;
        if (vlSymsp->TOP__Computer__m_core0.__PVT__magic) {
            vlSelfRef.__PVT__csr_magic_set = 1U;
        }
        if ((0x344U == (IData)(vlSelfRef.csr_rd_addr_i))) {
            vlSelfRef.__PVT__csr_mip_upd_q = 1U;
        } else if (((0x344U == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)) 
                    | (0U != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
            vlSelfRef.__PVT__csr_mip_upd_q = 0U;
        }
    } else {
        vlSelfRef.__PVT__csr_medelegh_q = 0U;
        vlSelfRef.__PVT__csr_mcycleh_q = 0U;
        vlSelfRef.__PVT__irq_priv_q = 3U;
        vlSelfRef.__PVT__csr_mscratch_q = 0U;
        vlSelfRef.__PVT__csr_mideleg_q = 0U;
        vlSelfRef.__PVT__csr_fflags_q = 0U;
        vlSelfRef.__PVT__csr_medeleg_q = 0U;
        vlSelfRef.__PVT__csr_frm_q = 0U;
        vlSelfRef.csr_serial_io_out_q = 0U;
        vlSelfRef.__PVT__csr_mcause_q = 0U;
        vlSelfRef.__PVT__csr_mtval_q = 0U;
        vlSelfRef.__PVT__csr_mie_q = 0U;
        vlSelfRef.__PVT__csr_mtimecmp_q = 0U;
        vlSelfRef.__PVT__csr_mip_q = 0U;
        vlSelfRef.__PVT__csr_mtvec_q = 0U;
        vlSelfRef.__PVT__csr_mepc_q = 0U;
        vlSelfRef.csr_serial_io_in_q = 0U;
        vlSelfRef.__PVT__csr_priv_q = 3U;
        vlSelfRef.__PVT__csr_mstatus_q = 0x1800U;
        vlSelfRef.__PVT__csr_mip_next_q = 0U;
        vlSelfRef.__PVT__csr_mcycle_q = 0U;
        vlSelfRef.csr_serial_flags_q = 0U;
        vlSelfRef.__PVT__csr_mip_upd_q = 0U;
    }
    vlSelfRef.__PVT__csr_mtime_ie_q = ((IData)(vlSymsp->TOP.rst_n) 
                                       && (IData)(vlSelfRef.__PVT__csr_mtime_ie_r));
    vlSelfRef.__PVT__csr_mcycle_r = ((IData)(1U) + vlSelfRef.__PVT__csr_mcycle_q);
}

VL_INLINE_OPT void VComputer_CSRFile___nba_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__1(VComputer_CSRFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputer_CSRFile___nba_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__1\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_rd_addr_i = vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out;
    vlSelfRef.__PVT__csr_satp_q = ((IData)(vlSymsp->TOP.rst_n)
                                    ? vlSelfRef.__PVT__csr_satp_r
                                    : 0U);
}

VL_INLINE_OPT void VComputer_CSRFile___nba_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__2(VComputer_CSRFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputer_CSRFile___nba_sequent__TOP__Computer__m_core0__m_CSR__m_CSRFile__2\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_priv_r = vlSelfRef.__PVT__csr_priv_q;
    if ((0x20U == (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
        if ((3U == (IData)(vlSelfRef.__PVT__irq_priv_q))) {
            vlSelfRef.__PVT__csr_priv_r = 3U;
        }
    } else if (((0x30U <= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)) 
                & (0x33U >= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
        if ((3U == (3U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
            vlSelfRef.__PVT__csr_priv_r = (3U & (vlSelfRef.__PVT__csr_mstatus_q 
                                                 >> 0xbU));
        }
    } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
        vlSelfRef.__PVT__csr_priv_r = 3U;
    }
    vlSelfRef.__PVT__csr_mtime_ie_r = vlSelfRef.__PVT__csr_mtime_ie_q;
    if ((0x20U != (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
                if ((0x35U != (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))) {
                    if (vlSymsp->TOP__Computer__m_core0__m_CSR.__PVT__csr_wr_valid_r) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                      >> 0xbU)))) {
                            if ((0x400U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                if ((0x200U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                    if ((0x100U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                        if ((0x80U 
                                             & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                            if ((0x40U 
                                                 & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__EX_csr_addr_out)))) {
                                                                        vlSelfRef.__PVT__csr_mtime_ie_r = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((vlSelfRef.__PVT__csr_mcycle_q == vlSelfRef.__PVT__csr_mtimecmp_q)) {
        vlSelfRef.__PVT__csr_mtime_ie_r = 0U;
    }
    vlSelfRef.__PVT__csr_target_r = 0U;
    vlSelfRef.__PVT__csr_branch_r = 0U;
    if ((0x20U == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))) {
        vlSelfRef.__PVT__csr_target_r = vlSelfRef.__PVT__csr_mtvec_q;
        vlSelfRef.__PVT__csr_branch_r = 1U;
    } else if (((0x30U <= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)) 
                & (0x33U >= (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
        if ((3U == (3U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
            vlSelfRef.__PVT__csr_target_r = vlSelfRef.__PVT__csr_mepc_q;
            vlSelfRef.__PVT__csr_branch_r = 1U;
        }
    } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception)))) {
        vlSelfRef.__PVT__csr_target_r = vlSelfRef.__PVT__csr_mtvec_q;
        vlSelfRef.__PVT__csr_branch_r = 1U;
    } else if ((0x34U == (IData)(vlSymsp->TOP__Computer__m_core0.__PVT__csr_exception))) {
        vlSelfRef.__PVT__csr_target_r = ((IData)(4U) 
                                         + vlSymsp->TOP__Computer__m_core0.__PVT__EX_pc_out);
        vlSelfRef.__PVT__csr_branch_r = 1U;
    }
}
