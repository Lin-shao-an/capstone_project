// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER_DIV_REG_H_
#define VERILATED_VCOMPUTER_DIV_REG_H_  // guard

#include "verilated.h"


class VComputer__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputer_DIV_Reg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__start_i,0,0);
    VL_IN8(__PVT__shift_i,4,0);
    VL_IN8(__PVT__r_sign_i,0,0);
    VL_IN8(__PVT__d_sign_i,0,0);
    VL_IN8(__PVT__unsign_i,0,0);
    VL_IN8(__PVT__rem_i,0,0);
    VL_OUT8(__PVT__start_o,0,0);
    VL_OUT8(__PVT__shift_o,4,0);
    VL_OUT8(__PVT__r_sign_o,0,0);
    VL_OUT8(__PVT__d_sign_o,0,0);
    VL_OUT8(__PVT__unsign_o,0,0);
    VL_OUT8(__PVT__rem_o,0,0);
    VL_IN(__PVT__r_i,31,0);
    VL_INW(__PVT__r_1_i,65,0,3);
    VL_INW(__PVT__r_2_i,65,0,3);
    VL_IN(__PVT__pos_q_i,31,0);
    VL_IN(__PVT__neg_q_i,31,0);
    VL_OUT(__PVT__r_o,31,0);
    VL_OUTW(__PVT__r_1_o,65,0,3);
    VL_OUTW(__PVT__r_2_o,65,0,3);
    VL_OUT(__PVT__pos_q_o,31,0);
    VL_OUT(__PVT__neg_q_o,31,0);
    VL_IN64(__PVT__d_i,33,0);
    VL_IN64(__PVT__neg_d_i,33,0);
    VL_OUT64(__PVT__d_o,33,0);
    VL_OUT64(__PVT__neg_d_o,33,0);

    // INTERNAL VARIABLES
    VComputer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputer_DIV_Reg(VComputer__Syms* symsp, const char* v__name);
    ~VComputer_DIV_Reg();
    VL_UNCOPYABLE(VComputer_DIV_Reg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
