// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_DataMemory.h"
#include "VComputer__Syms.h"

void VComputer_DataMemory___ctor_var_reset(VComputer_DataMemory* vlSelf);

VComputer_DataMemory::VComputer_DataMemory(VComputer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputer_DataMemory___ctor_var_reset(this);
}

void VComputer_DataMemory::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComputer_DataMemory::~VComputer_DataMemory() {
}
