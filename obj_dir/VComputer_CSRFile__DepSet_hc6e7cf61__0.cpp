// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer_CSRFile.h"

uint32_t VComputer_CSRFile::get_mcycle() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputer_CSRFile::get_mcycle\n"); );
    VL_OUT(get_mcycle__Vfuncrtn,31,0);
    // Body
    get_mcycle__Vfuncrtn = this->__PVT__csr_mcycle_q;
    // Final
    return (get_mcycle__Vfuncrtn);
}
