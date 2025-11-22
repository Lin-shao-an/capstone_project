// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER___024ROOT_H_
#define VERILATED_VCOMPUTER___024ROOT_H_  // guard

#include "verilated.h"
class VComputer_Computer;


class VComputer__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputer___024root final : public VerilatedModule {
  public:
    // CELLS
    VComputer_Computer* Computer;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VComputer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputer___024root(VComputer__Syms* symsp, const char* v__name);
    ~VComputer___024root();
    VL_UNCOPYABLE(VComputer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
