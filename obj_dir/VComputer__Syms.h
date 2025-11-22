// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMPUTER__SYMS_H_
#define VERILATED_VCOMPUTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VComputer.h"

// INCLUDE MODULE CLASSES
#include "VComputer___024root.h"
#include "VComputer_Computer.h"
#include "VComputer_DataMemory.h"
#include "VComputer_PipelineCPU.h"
#include "VComputer_CSR.h"
#include "VComputer_Writeback.h"
#include "VComputer_CSRFile.h"
#include "VComputer_DIV_Reg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VComputer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VComputer* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VComputer___024root            TOP;
    VComputer_Computer             TOP__Computer;
    VComputer_DataMemory           TOP__Computer__m_DataMemory;
    VComputer_PipelineCPU          TOP__Computer__m_core0;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg;
    VComputer_DIV_Reg              TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg;
    VComputer_CSR                  TOP__Computer__m_core0__m_CSR;
    VComputer_CSRFile              TOP__Computer__m_core0__m_CSR__m_CSRFile;
    VComputer_Writeback            TOP__Computer__m_core0__m_WB;

    // SCOPE NAMES
    VerilatedScope __Vscope_Computer__m_DataMemory;
    VerilatedScope __Vscope_Computer__m_core0;
    VerilatedScope __Vscope_Computer__m_core0__m_CSR__m_CSRFile;
    VerilatedScope __Vscope_Computer__m_core0__m_WB;

    // CONSTRUCTORS
    VComputer__Syms(VerilatedContext* contextp, const char* namep, VComputer* modelp);
    ~VComputer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
