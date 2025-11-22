// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VComputer__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VComputer::VComputer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VComputer__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , Computer{vlSymsp->TOP.Computer}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VComputer::VComputer(const char* _vcname__)
    : VComputer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VComputer::~VComputer() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VComputer___024root___eval_debug_assertions(VComputer___024root* vlSelf);
#endif  // VL_DEBUG
void VComputer___024root___eval_static(VComputer___024root* vlSelf);
void VComputer___024root___eval_initial(VComputer___024root* vlSelf);
void VComputer___024root___eval_settle(VComputer___024root* vlSelf);
void VComputer___024root___eval(VComputer___024root* vlSelf);

void VComputer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VComputer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VComputer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VComputer___024root___eval_static(&(vlSymsp->TOP));
        VComputer___024root___eval_initial(&(vlSymsp->TOP));
        VComputer___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VComputer___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VComputer::eventsPending() { return false; }

uint64_t VComputer::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VComputer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VComputer___024root___eval_final(VComputer___024root* vlSelf);

VL_ATTR_COLD void VComputer::final() {
    VComputer___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VComputer::hierName() const { return vlSymsp->name(); }
const char* VComputer::modelName() const { return "VComputer"; }
unsigned VComputer::threads() const { return 1; }
void VComputer::prepareClone() const { contextp()->prepareClone(); }
void VComputer::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VComputer::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VComputer___024root__trace_decl_types(VerilatedVcd* tracep);

void VComputer___024root__trace_init_top(VComputer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VComputer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComputer___024root*>(voidSelf);
    VComputer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VComputer___024root__trace_decl_types(tracep);
    VComputer___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VComputer___024root__trace_register(VComputer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VComputer::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VComputer::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VComputer___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
