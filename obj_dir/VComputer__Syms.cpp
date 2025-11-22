// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VComputer__pch.h"
#include "VComputer.h"
#include "VComputer___024root.h"
#include "VComputer_Computer.h"
#include "VComputer_DataMemory.h"
#include "VComputer_PipelineCPU.h"
#include "VComputer_CSR.h"
#include "VComputer_Writeback.h"
#include "VComputer_CSRFile.h"
#include "VComputer_DIV_Reg.h"

// FUNCTIONS
VComputer__Syms::~VComputer__Syms()
{
}

VComputer__Syms::VComputer__Syms(VerilatedContext* contextp, const char* namep, VComputer* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__Computer{this, Verilated::catName(namep, "Computer")}
    , TOP__Computer__m_DataMemory{this, Verilated::catName(namep, "Computer.m_DataMemory")}
    , TOP__Computer__m_core0{this, Verilated::catName(namep, "Computer.m_core0")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_0_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_17_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[0].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[10].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[11].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[12].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[13].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[14].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[15].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[1].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[2].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[3].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[4].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[5].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[6].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[7].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[8].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg{this, Verilated::catName(namep, "Computer.m_core0.m_MUL_DIV_top.m_SRTDivider.m_DIV_Processing_Regs[9].m_DIV_Reg")}
    , TOP__Computer__m_core0__m_CSR{this, Verilated::catName(namep, "Computer.m_core0.m_CSR")}
    , TOP__Computer__m_core0__m_CSR__m_CSRFile{this, Verilated::catName(namep, "Computer.m_core0.m_CSR.m_CSRFile")}
    , TOP__Computer__m_core0__m_WB{this, Verilated::catName(namep, "Computer.m_core0.m_WB")}
{
        // Check resources
        Verilated::stackCheck(4511);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.Computer = &TOP__Computer;
    TOP__Computer.m_DataMemory = &TOP__Computer__m_DataMemory;
    TOP__Computer.m_core0 = &TOP__Computer__m_core0;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.__PVT__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg = &TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg;
    TOP__Computer__m_core0.m_CSR = &TOP__Computer__m_core0__m_CSR;
    TOP__Computer__m_core0__m_CSR.m_CSRFile = &TOP__Computer__m_core0__m_CSR__m_CSRFile;
    TOP__Computer__m_core0.m_WB = &TOP__Computer__m_core0__m_WB;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Computer.__Vconfigure(true);
    TOP__Computer__m_DataMemory.__Vconfigure(true);
    TOP__Computer__m_core0.__Vconfigure(true);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_0_Reg.__Vconfigure(true);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_17_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__0__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__10__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__11__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__12__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__13__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__14__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__15__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__1__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__2__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__3__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__4__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__5__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__6__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__7__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__8__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_MUL_DIV_top__DOT__m_SRTDivider__DOT__m_DIV_Processing_Regs__BRA__9__KET____DOT__m_DIV_Reg.__Vconfigure(false);
    TOP__Computer__m_core0__m_CSR.__Vconfigure(true);
    TOP__Computer__m_core0__m_CSR__m_CSRFile.__Vconfigure(true);
    TOP__Computer__m_core0__m_WB.__Vconfigure(true);
    // Setup scopes
    __Vscope_Computer__m_DataMemory.configure(this, name(), "Computer.m_DataMemory", "m_DataMemory", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Computer__m_core0.configure(this, name(), "Computer.m_core0", "m_core0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Computer__m_core0__m_CSR__m_CSRFile.configure(this, name(), "Computer.m_core0.m_CSR.m_CSRFile", "m_CSRFile", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Computer__m_core0__m_WB.configure(this, name(), "Computer.m_core0.m_WB", "m_WB", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_Computer__m_DataMemory.varInsert(__Vfinal,"mem", &(TOP__Computer__m_DataMemory.mem), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,65535 ,7,0);
        __Vscope_Computer__m_core0.varInsert(__Vfinal,"WB_pc_out", &(TOP__Computer__m_core0.WB_pc_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Computer__m_core0.varInsert(__Vfinal,"WB_pc_valid_out", &(TOP__Computer__m_core0.WB_pc_valid_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Computer__m_core0__m_CSR__m_CSRFile.varInsert(__Vfinal,"csr_rd_addr_i", &(TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_rd_addr_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_Computer__m_core0__m_CSR__m_CSRFile.varInsert(__Vfinal,"csr_serial_flags_q", &(TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_flags_q), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Computer__m_core0__m_CSR__m_CSRFile.varInsert(__Vfinal,"csr_serial_io_in_q", &(TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_io_in_q), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Computer__m_core0__m_CSR__m_CSRFile.varInsert(__Vfinal,"csr_serial_io_out_q", &(TOP__Computer__m_core0__m_CSR__m_CSRFile.csr_serial_io_out_q), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Computer__m_core0__m_WB.varInsert(__Vfinal,"WB_pc_out", &(TOP__Computer__m_core0__m_WB.WB_pc_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Computer__m_core0__m_WB.varInsert(__Vfinal,"WB_pc_valid_out", &(TOP__Computer__m_core0__m_WB.WB_pc_valid_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
