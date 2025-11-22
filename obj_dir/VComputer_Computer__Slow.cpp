// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_Computer.h"
#include "VComputer__Syms.h"

void VComputer_Computer___ctor_var_reset(VComputer_Computer* vlSelf);

VComputer_Computer::VComputer_Computer(VComputer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputer_Computer___ctor_var_reset(this);
}

void VComputer_Computer::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComputer_Computer::~VComputer_Computer() {
}
