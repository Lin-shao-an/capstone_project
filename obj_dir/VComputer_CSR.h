// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER_CSR_H_
#define VERILATED_VCOMPUTER_CSR_H_  // guard

#include "verilated.h"
class VComputer_CSRFile;


class VComputer__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputer_CSR final : public VerilatedModule {
  public:
    // CELLS
    VComputer_CSRFile* m_CSRFile;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__inst_valid,0,0);
    VL_IN8(__PVT__csr_op_i,2,0);
    VL_IN8(__PVT__is_csr_i,0,0);
    VL_IN8(__PVT__is_csr_imm_i,0,0);
    VL_IN8(__PVT__rs1_i,4,0);
    VL_IN8(__PVT__is_fpu_done_i,0,0);
    VL_IN8(__PVT__fpu_flags_i,4,0);
    VL_IN8(__PVT__is_f_ext_i,0,0);
    VL_IN8(__PVT__magic_i,0,0);
    VL_OUT8(__PVT__csr_branch_o,0,0);
    VL_OUT8(__PVT__csr_exception_o,5,0);
    CData/*0:0*/ __PVT__serial_out_valid_w;
    CData/*0:0*/ __PVT__serial_flag_clr_w;
    CData/*0:0*/ __PVT__csr_wr_valid_r;
    CData/*0:0*/ __PVT__csr_fault_w;
    CData/*0:0*/ __VdfgRegularize_ha8957302_0_32;
    VL_IN16(__PVT__csr_wr_addr_i,11,0);
    VL_IN16(__PVT__csr_rd_addr_i,11,0);
    VL_IN(__PVT__inst,31,0);
    VL_IN(__PVT__imm_i,31,0);
    VL_IN(__PVT__reg_rd_data1_i,31,0);
    VL_IN(__PVT__exception_pc_i,31,0);
    VL_OUT(__PVT__csr_target_o,31,0);
    VL_OUT(__PVT__interrupt_o,31,0);
    VL_OUT(__PVT__csr_rd_data_o,31,0);
    VL_OUT(__PVT__csr_satp_o,31,0);
    IData/*31:0*/ __PVT__serial_out_data_w;
    IData/*31:0*/ __PVT__csr_rd_data_old;
    IData/*31:0*/ __PVT__csr_wr_data_r;

    // INTERNAL VARIABLES
    VComputer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputer_CSR(VComputer__Syms* symsp, const char* v__name);
    ~VComputer_CSR();
    VL_UNCOPYABLE(VComputer_CSR);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
