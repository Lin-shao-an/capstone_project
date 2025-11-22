// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_DIV_Reg.h"
#include "VComputer__Syms.h"

void VComputer_DIV_Reg___ctor_var_reset(VComputer_DIV_Reg* vlSelf);

VComputer_DIV_Reg::VComputer_DIV_Reg(VComputer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputer_DIV_Reg___ctor_var_reset(this);
}

void VComputer_DIV_Reg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComputer_DIV_Reg::~VComputer_DIV_Reg() {
}
