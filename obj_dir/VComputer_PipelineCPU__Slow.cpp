// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_PipelineCPU.h"
#include "VComputer__Syms.h"

void VComputer_PipelineCPU___ctor_var_reset(VComputer_PipelineCPU* vlSelf);

VComputer_PipelineCPU::VComputer_PipelineCPU(VComputer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputer_PipelineCPU___ctor_var_reset(this);
}

void VComputer_PipelineCPU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComputer_PipelineCPU::~VComputer_PipelineCPU() {
}
