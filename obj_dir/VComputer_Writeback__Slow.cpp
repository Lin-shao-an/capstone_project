// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_Writeback.h"
#include "VComputer__Syms.h"

void VComputer_Writeback___ctor_var_reset(VComputer_Writeback* vlSelf);

VComputer_Writeback::VComputer_Writeback(VComputer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputer_Writeback___ctor_var_reset(this);
}

void VComputer_Writeback::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComputer_Writeback::~VComputer_Writeback() {
}
