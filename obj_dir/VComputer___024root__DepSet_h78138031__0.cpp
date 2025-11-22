// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputer.h for the primary calling header

#include "VComputer__pch.h"
#include "VComputer___024root.h"

void VComputer___024root___eval_triggers__ico(VComputer___024root* vlSelf);
void VComputer___024root___eval_ico(VComputer___024root* vlSelf);

bool VComputer___024root___eval_phase__ico(VComputer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root___eval_phase__ico\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VComputer___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VComputer___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VComputer___024root___eval_act(VComputer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root___eval_act\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VComputer___024root___eval_triggers__act(VComputer___024root* vlSelf);

bool VComputer___024root___eval_phase__act(VComputer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root___eval_phase__act\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VComputer___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VComputer___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VComputer___024root___eval_nba(VComputer___024root* vlSelf);

bool VComputer___024root___eval_phase__nba(VComputer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root___eval_phase__nba\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VComputer___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComputer___024root___dump_triggers__ico(VComputer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VComputer___024root___dump_triggers__nba(VComputer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VComputer___024root___dump_triggers__act(VComputer___024root* vlSelf);
#endif  // VL_DEBUG

void VComputer___024root___eval(VComputer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root___eval\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VComputer___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Computer.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VComputer___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VComputer___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Computer.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VComputer___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Computer.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VComputer___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VComputer___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VComputer___024root___eval_debug_assertions(VComputer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputer___024root___eval_debug_assertions\n"); );
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
