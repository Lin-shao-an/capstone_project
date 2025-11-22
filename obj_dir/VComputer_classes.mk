# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VComputer.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  VComputer \
  VComputer___024root__DepSet_h4a5a7716__0 \
  VComputer___024root__DepSet_h78138031__0 \
  VComputer_Computer__DepSet_h24df52a3__0 \
  VComputer_DataMemory__DepSet_h0e0f512a__0 \
  VComputer_DataMemory__DepSet_h5cbfd1e9__0 \
  VComputer_PipelineCPU__DepSet_h7c611d08__0 \
  VComputer_PipelineCPU__DepSet_h7ed6f633__0 \
  VComputer_PipelineCPU__DepSet_h7ed6f633__1 \
  VComputer_CSR__DepSet_ha16f0d59__0 \
  VComputer_Writeback__DepSet_h18db7843__0 \
  VComputer_CSRFile__DepSet_hc6e7cf61__0 \
  VComputer_CSRFile__DepSet_h71e1e170__0 \
  VComputer_DIV_Reg__DepSet_hc63d5123__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  VComputer__ConstPool_0 \
  VComputer___024root__Slow \
  VComputer___024root__DepSet_h4a5a7716__0__Slow \
  VComputer___024root__DepSet_h78138031__0__Slow \
  VComputer_Computer__Slow \
  VComputer_Computer__DepSet_hcfb0adc8__0__Slow \
  VComputer_Computer__DepSet_h24df52a3__0__Slow \
  VComputer_DataMemory__Slow \
  VComputer_DataMemory__DepSet_h0e0f512a__0__Slow \
  VComputer_PipelineCPU__Slow \
  VComputer_PipelineCPU__DepSet_h7c611d08__0__Slow \
  VComputer_PipelineCPU__DepSet_h7ed6f633__0__Slow \
  VComputer_PipelineCPU__DepSet_h7ed6f633__1__Slow \
  VComputer_CSR__Slow \
  VComputer_CSR__DepSet_h0f7b74ea__0__Slow \
  VComputer_CSR__DepSet_ha16f0d59__0__Slow \
  VComputer_Writeback__Slow \
  VComputer_Writeback__DepSet_h21963d4f__0__Slow \
  VComputer_CSRFile__Slow \
  VComputer_CSRFile__DepSet_hc6e7cf61__0__Slow \
  VComputer_CSRFile__DepSet_h71e1e170__0__Slow \
  VComputer_DIV_Reg__Slow \
  VComputer_DIV_Reg__DepSet_hc41730cf__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  VComputer__Dpi \
  VComputer__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  VComputer__Syms \
  VComputer__Trace__0__Slow \
  VComputer__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_vcd_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
