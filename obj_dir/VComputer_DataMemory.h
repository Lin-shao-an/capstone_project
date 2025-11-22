// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComputer.h for the primary calling header

#ifndef VERILATED_VCOMPUTER_DATAMEMORY_H_
#define VERILATED_VCOMPUTER_DATAMEMORY_H_  // guard

#include "verilated.h"


class VComputer__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComputer_DataMemory final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_OUT8(__PVT__i_available_o,0,0);
    VL_IN8(__PVT__wr_en,0,0);
    VL_IN8(__PVT__rd_en,0,0);
    VL_IN8(__PVT__ctrl,3,0);
    VL_OUT8(__PVT__available_o,0,0);
    CData/*7:0*/ __VdlyVal__mem__v0;
    CData/*0:0*/ __VdlySet__mem__v0;
    CData/*7:0*/ __VdlyVal__mem__v1;
    CData/*0:0*/ __VdlySet__mem__v1;
    CData/*7:0*/ __VdlyVal__mem__v2;
    CData/*0:0*/ __VdlySet__mem__v2;
    CData/*7:0*/ __VdlyVal__mem__v3;
    CData/*0:0*/ __VdlySet__mem__v3;
    SData/*15:0*/ __VdlyDim0__mem__v0;
    SData/*15:0*/ __VdlyDim0__mem__v1;
    SData/*15:0*/ __VdlyDim0__mem__v2;
    SData/*15:0*/ __VdlyDim0__mem__v3;
    VL_IN(__PVT__i_addr,31,0);
    VL_OUT(__PVT__inst,31,0);
    VL_IN(__PVT__address,31,0);
    VL_IN(__PVT__data_i,31,0);
    VL_OUT(__PVT__data_o,31,0);
    VlUnpacked<CData/*7:0*/, 65536> mem;

    // INTERNAL VARIABLES
    VComputer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComputer_DataMemory(VComputer__Syms* symsp, const char* v__name);
    ~VComputer_DataMemory();
    VL_UNCOPYABLE(VComputer_DataMemory);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
