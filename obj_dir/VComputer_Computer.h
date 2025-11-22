// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER_COMPUTER_H_
#define VERILATED_VCOMPUTER_COMPUTER_H_  // guard

#include "verilated.h"
class VComputer_DataMemory;
class VComputer_PipelineCPU;


class VComputer__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputer_Computer final : public VerilatedModule {
  public:
    // CELLS
    VComputer_DataMemory* m_DataMemory;
    VComputer_PipelineCPU* m_core0;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ __PVT__d_mem_wr_en;
    CData/*3:0*/ __PVT__d_mem_ctrl;
    CData/*0:0*/ __PVT__serial_out_valid;
    CData/*0:0*/ __PVT__serial_flag_clr;
    IData/*31:0*/ __PVT__d_mem_wr_data;
    IData/*31:0*/ __PVT__serial_out_data;

    // INTERNAL VARIABLES
    VComputer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputer_Computer(VComputer__Syms* symsp, const char* v__name);
    ~VComputer_Computer();
    VL_UNCOPYABLE(VComputer_Computer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
