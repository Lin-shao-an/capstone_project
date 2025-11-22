// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer__Syms.h"
#include "VComputer___024root.h"

void VComputer___024root___ctor_var_reset(VComputer___024root* vlSelf);

VComputer___024root::VComputer___024root(VComputer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputer___024root___ctor_var_reset(this);
}

void VComputer___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComputer___024root::~VComputer___024root() {
}
