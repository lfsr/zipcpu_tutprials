// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwavedrom.h for the primary calling header

#include "Vwavedrom.h"         // For This
#include "Vwavedrom__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vwavedrom) {
    Vwavedrom__Syms* __restrict vlSymsp = __VlSymsp = new Vwavedrom__Syms(this, name());
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vwavedrom::__Vconfigure(Vwavedrom__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vwavedrom::~Vwavedrom() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vwavedrom::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwavedrom::eval\n"); );
    Vwavedrom__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vwavedrom::_eval_initial_loop(Vwavedrom__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vwavedrom::_sequent__TOP__1(Vwavedrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_sequent__TOP__1\n"); );
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__cout,7,0);
    VL_SIG16(__Vdly__wavedrom__DOT__registro,11,0);
    // Body
    __Vdly__wavedrom__DOT__registro = vlTOPp->wavedrom__DOT__registro;
    __Vdly__cout = vlTOPp->cout;
    // ALWAYS at wavedrom.v:16
    if (vlTOPp->wavedrom__DOT__stb) {
	__Vdly__cout = ((0xfeU & ((IData)(vlTOPp->cout) 
				  << 1U)) | (1U & ((IData)(vlTOPp->cout) 
						   >> 7U)));
    }
    vlTOPp->cout = __Vdly__cout;
    // ALWAYS at wavedrom.v:13
    vlTOPp->wavedrom__DOT__stb = (1U & (((IData)(1U) 
					 + (IData)(vlTOPp->wavedrom__DOT__registro)) 
					>> 0xcU));
    __Vdly__wavedrom__DOT__registro = (0xfffU & ((IData)(1U) 
						 + (IData)(vlTOPp->wavedrom__DOT__registro)));
    vlTOPp->wavedrom__DOT__registro = __Vdly__wavedrom__DOT__registro;
    vlTOPp->stb_out = vlTOPp->wavedrom__DOT__stb;
}

void Vwavedrom::_initial__TOP__2(Vwavedrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_initial__TOP__2\n"); );
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at wavedrom.v:12
    vlTOPp->cout = 1U;
    // INITIAL at wavedrom.v:11
    vlTOPp->wavedrom__DOT__stb = 0U;
    vlTOPp->wavedrom__DOT__registro = 0U;
}

void Vwavedrom::_settle__TOP__3(Vwavedrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_settle__TOP__3\n"); );
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->stb_out = vlTOPp->wavedrom__DOT__stb;
}

void Vwavedrom::_eval(Vwavedrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_eval\n"); );
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vwavedrom::_eval_initial(Vwavedrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_eval_initial\n"); );
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vwavedrom::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::final\n"); );
    // Variables
    Vwavedrom__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vwavedrom::_eval_settle(Vwavedrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_eval_settle\n"); );
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData Vwavedrom::_change_request(Vwavedrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_change_request\n"); );
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vwavedrom::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
}
#endif // VL_DEBUG

void Vwavedrom::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavedrom::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    cout = VL_RAND_RESET_I(8);
    stb_out = VL_RAND_RESET_I(1);
    wavedrom__DOT__registro = VL_RAND_RESET_I(12);
    wavedrom__DOT__stb = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
