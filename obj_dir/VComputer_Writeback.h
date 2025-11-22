// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER_WRITEBACK_H_
#define VERILATED_VCOMPUTER_WRITEBACK_H_  // guard

#include "verilated.h"


class VComputer__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputer_Writeback final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__en,0,0);
    VL_IN8(__PVT__clear,0,0);
    VL_IN8(__PVT__is_impl_i,0,0);
    VL_IN8(__PVT__pc_valid_i,0,0);
    VL_IN8(__PVT__rd_i,4,0);
    VL_IN8(__PVT__exception_i,5,0);
    VL_IN8(__PVT__reg_wr_en_i,0,0);
    VL_IN8(__PVT__freg_wr_en_i,0,0);
    VL_IN8(__PVT__reg_w_sel_i,2,0);
    VL_OUT8(__PVT__is_impl_o,0,0);
    VL_OUT8(__PVT__pc_valid_o,0,0);
    VL_OUT8(__PVT__rd_o,4,0);
    VL_OUT8(__PVT__reg_wr_en_o,0,0);
    VL_OUT8(__PVT__freg_wr_en_o,0,0);
    CData/*0:0*/ __PVT__WB_is_impl_out;
    CData/*0:0*/ WB_pc_valid_out;
    CData/*4:0*/ __PVT__WB_rd_out;
    CData/*5:0*/ __PVT__WB_exception_out;
    CData/*0:0*/ __PVT__WB_reg_wr_en_out;
    CData/*0:0*/ __PVT__WB_freg_wr_en_out;
    CData/*2:0*/ __PVT__WB_reg_w_sel_out;
    CData/*0:0*/ __VdfgRegularize_hb63f781a_0_0;
    VL_IN(__PVT__pc_i,31,0);
    VL_IN(__PVT__pc_p4_i,31,0);
    VL_IN(__PVT__bypass_i,31,0);
    VL_IN(__PVT__ALU_i,31,0);
    VL_IN(__PVT__MUL_DIV_i,31,0);
    VL_IN(__PVT__FPU_i,31,0);
    VL_IN(__PVT__mem_data_i,31,0);
    VL_IN(__PVT__csr_rd_data_i,31,0);
    VL_OUT(__PVT__pc_o,31,0);
    VL_OUT(__PVT__wb_data_o,31,0);
    IData/*31:0*/ WB_pc_out;
    IData/*31:0*/ __PVT__WB_pc_p4_out;
    IData/*31:0*/ __PVT__WB_ALU_out;
    IData/*31:0*/ __PVT__WB_MUL_DIV_out;
    IData/*31:0*/ __PVT__WB_mem_data_out;
    IData/*31:0*/ __PVT__WB_csr_rd_data_out;
    IData/*31:0*/ __PVT__WB_FPU_out;
    IData/*31:0*/ __PVT__WB_bypass_out;

    // INTERNAL VARIABLES
    VComputer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputer_Writeback(VComputer__Syms* symsp, const char* v__name);
    ~VComputer_Writeback();
    VL_UNCOPYABLE(VComputer_Writeback);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
