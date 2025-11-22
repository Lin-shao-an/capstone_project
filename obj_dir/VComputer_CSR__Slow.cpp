// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_CSR.h"
#include "VComputer__Syms.h"

void VComputer_CSR___ctor_var_reset(VComputer_CSR* vlSelf);

VComputer_CSR::VComputer_CSR(VComputer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputer_CSR___ctor_var_reset(this);
}

void VComputer_CSR::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComputer_CSR::~VComputer_CSR() {
}
