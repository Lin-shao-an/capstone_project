// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_CSRFile.h"
#include "VComputer__Syms.h"

void VComputer_CSRFile___ctor_var_reset(VComputer_CSRFile* vlSelf);

VComputer_CSRFile::VComputer_CSRFile(VComputer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputer_CSRFile___ctor_var_reset(this);
}

void VComputer_CSRFile::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComputer_CSRFile::~VComputer_CSRFile() {
}
