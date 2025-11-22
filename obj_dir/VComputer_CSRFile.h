// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER_CSRFILE_H_
#define VERILATED_VCOMPUTER_CSRFILE_H_  // guard

#include "verilated.h"


class VComputer__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputer_CSRFile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__exception_i,5,0);
        VL_IN8(__PVT__csr_wr_en_i,0,0);
        VL_IN8(__PVT__magic_i,0,0);
        VL_OUT8(__PVT__csr_branch_o,0,0);
        VL_OUT8(__PVT__priv_o,1,0);
        CData/*1:0*/ __PVT__csr_priv_r;
        CData/*1:0*/ __PVT__csr_priv_q;
        CData/*0:0*/ __PVT__csr_mtime_ie_q;
        CData/*0:0*/ __PVT__m_enabled_r;
        CData/*1:0*/ __PVT__irq_priv_q;
        CData/*0:0*/ __PVT__csr_mip_upd_q;
        CData/*0:0*/ __PVT__csr_mtime_ie_r;
        CData/*0:0*/ __PVT__csr_magic_set;
        CData/*0:0*/ __PVT__csr_branch_r;
        VL_IN16(csr_rd_addr_i,11,0);
        VL_IN16(__PVT__csr_wr_addr_i,11,0);
        VL_IN(__PVT__cpu_id_i,31,0);
        VL_IN(__PVT__misa_i,31,0);
        VL_IN(__PVT__exception_pc_i,31,0);
        VL_IN(__PVT__exception_addr_i,31,0);
        VL_OUT(__PVT__csr_rd_data_o,31,0);
        VL_IN(__PVT__csr_wr_data_i,31,0);
        VL_OUT(__PVT__csr_target_o,31,0);
        VL_OUT(__PVT__mstatus_o,31,0);
        VL_OUT(__PVT__satp_o,31,0);
        VL_OUT(__PVT__interrupt_o,31,0);
        IData/*31:0*/ __PVT__csr_mvendorid_q;
        IData/*31:0*/ __PVT__csr_marchid_q;
        IData/*31:0*/ __PVT__csr_mimpid_q;
        IData/*31:0*/ __PVT__csr_mhartid_q;
        IData/*31:0*/ __PVT__csr_mconfigptr_q;
        IData/*31:0*/ __PVT__csr_mstatus_q;
        IData/*31:0*/ __PVT__csr_medeleg_q;
        IData/*31:0*/ __PVT__csr_mideleg_q;
        IData/*31:0*/ __PVT__csr_mie_q;
        IData/*31:0*/ __PVT__csr_mtvec_q;
        IData/*31:0*/ __PVT__csr_mcounteren_q;
        IData/*31:0*/ __PVT__csr_mstatush_q;
        IData/*31:0*/ __PVT__csr_medelegh_q;
        IData/*31:0*/ __PVT__csr_mscratch_q;
        IData/*31:0*/ __PVT__csr_mepc_q;
        IData/*31:0*/ __PVT__csr_mcause_q;
        IData/*31:0*/ __PVT__csr_mtval_q;
        IData/*31:0*/ __PVT__csr_mip_q;
        IData/*31:0*/ __PVT__csr_mip_next_q;
        IData/*31:0*/ __PVT__csr_mtinst_q;
        IData/*31:0*/ __PVT__csr_mtval2_q;
        IData/*31:0*/ __PVT__csr_menvcfg_q;
        IData/*31:0*/ __PVT__csr_menvcfgh_q;
        IData/*31:0*/ __PVT__csr_mseccfg_q;
        IData/*31:0*/ __PVT__csr_mseccfgh_q;
        IData/*31:0*/ __PVT__csr_mnscratch_q;
        IData/*31:0*/ __PVT__csr_mnepc_q;
        IData/*31:0*/ __PVT__csr_mncause_q;
        IData/*31:0*/ __PVT__csr_mnstatus_q;
        IData/*31:0*/ __PVT__csr_mcycle_q;
        IData/*31:0*/ __PVT__csr_minstret_q;
        IData/*31:0*/ __PVT__csr_mcycleh_q;
        IData/*31:0*/ __PVT__csr_minstreth_q;
        IData/*31:0*/ __PVT__csr_mcountinhibit_q;
        IData/*31:0*/ __PVT__csr_fflags_q;
        IData/*31:0*/ __PVT__csr_frm_q;
    };
    struct {
        IData/*31:0*/ __PVT__csr_mtimecmp_q;
        IData/*31:0*/ csr_serial_flags_q;
        IData/*31:0*/ csr_serial_io_in_q;
        IData/*31:0*/ csr_serial_io_out_q;
        IData/*31:0*/ __PVT__csr_satp_q;
        IData/*31:0*/ __PVT__m_interrupts_r;
        IData/*31:0*/ __PVT__csr_mvendorid_r;
        IData/*31:0*/ __PVT__csr_marchid_r;
        IData/*31:0*/ __PVT__csr_mimpid_r;
        IData/*31:0*/ __PVT__csr_mhartid_r;
        IData/*31:0*/ __PVT__csr_mconfigptr_r;
        IData/*31:0*/ __PVT__csr_mstatus_r;
        IData/*31:0*/ __PVT__csr_medeleg_r;
        IData/*31:0*/ __PVT__csr_mideleg_r;
        IData/*31:0*/ __PVT__csr_mie_r;
        IData/*31:0*/ __PVT__csr_mtvec_r;
        IData/*31:0*/ __PVT__csr_mcounteren_r;
        IData/*31:0*/ __PVT__csr_mstatush_r;
        IData/*31:0*/ __PVT__csr_mscratch_r;
        IData/*31:0*/ __PVT__csr_mepc_r;
        IData/*31:0*/ __PVT__csr_mcause_r;
        IData/*31:0*/ __PVT__csr_mtval_r;
        IData/*31:0*/ __PVT__csr_mip_r;
        IData/*31:0*/ __PVT__csr_mip_next_r;
        IData/*31:0*/ __PVT__csr_mtinst_r;
        IData/*31:0*/ __PVT__csr_mtval2_r;
        IData/*31:0*/ __PVT__csr_menvcfg_r;
        IData/*31:0*/ __PVT__csr_menvcfgh_r;
        IData/*31:0*/ __PVT__csr_mseccfg_r;
        IData/*31:0*/ __PVT__csr_mseccfgh_r;
        IData/*31:0*/ __PVT__csr_mnscratch_r;
        IData/*31:0*/ __PVT__csr_mnepc_r;
        IData/*31:0*/ __PVT__csr_mncause_r;
        IData/*31:0*/ __PVT__csr_mnstatus_r;
        IData/*31:0*/ __PVT__csr_mcycle_r;
        IData/*31:0*/ __PVT__csr_minstret_r;
        IData/*31:0*/ __PVT__csr_mcycleh_r;
        IData/*31:0*/ __PVT__csr_minstreth_r;
        IData/*31:0*/ __PVT__csr_mcountinhibit_r;
        IData/*31:0*/ __PVT__csr_fflags_r;
        IData/*31:0*/ __PVT__csr_frm_r;
        IData/*31:0*/ __PVT__csr_mtimecmp_r;
        IData/*31:0*/ __PVT__csr_serial_flags_r;
        IData/*31:0*/ __PVT__csr_serial_io_in_r;
        IData/*31:0*/ __PVT__csr_serial_io_out_r;
        IData/*31:0*/ __PVT__csr_satp_r;
        IData/*31:0*/ __PVT__csr_target_r;
        VlUnpacked<IData/*31:0*/, 16> __PVT__csr_pmpcfg_q;
        VlUnpacked<IData/*31:0*/, 4> __PVT__csr_mstateen_q;
        VlUnpacked<IData/*31:0*/, 4> __PVT__csr_mstateenh_q;
        VlUnpacked<IData/*31:0*/, 29> __PVT__csr_mhpmcounter_q;
        VlUnpacked<IData/*31:0*/, 29> __PVT__csr_mhpmcounterh_q;
        VlUnpacked<IData/*31:0*/, 29> __PVT__csr_mhpmevent_q;
        VlUnpacked<IData/*31:0*/, 29> __PVT__csr_mhpmeventh_q;
        VlUnpacked<IData/*31:0*/, 16> __PVT__csr_pmpcfg_r;
        VlUnpacked<IData/*31:0*/, 4> __PVT__csr_mstateen_r;
        VlUnpacked<IData/*31:0*/, 4> __PVT__csr_mstateenh_r;
        VlUnpacked<IData/*31:0*/, 29> __PVT__csr_mhpmcounter_r;
        VlUnpacked<IData/*31:0*/, 29> __PVT__csr_mhpmcounterh_r;
        VlUnpacked<IData/*31:0*/, 29> __PVT__csr_mhpmevent_r;
        VlUnpacked<IData/*31:0*/, 29> __PVT__csr_mhpmeventh_r;
    };

    // INTERNAL VARIABLES
    VComputer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputer_CSRFile(VComputer__Syms* symsp, const char* v__name);
    ~VComputer_CSRFile();
    VL_UNCOPYABLE(VComputer_CSRFile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t get_mcycle();
};


#endif  // guard
