// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinky_param.h for the primary calling header

#include "Vblinky_param.h"     // For This
#include "Vblinky_param__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vblinky_param) {
    Vblinky_param__Syms* __restrict vlSymsp = __VlSymsp = new Vblinky_param__Syms(this, name());
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vblinky_param::__Vconfigure(Vblinky_param__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vblinky_param::~Vblinky_param() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vblinky_param::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vblinky_param::eval\n"); );
    Vblinky_param__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vblinky_param::_eval_initial_loop(Vblinky_param__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vblinky_param::_sequent__TOP__1(Vblinky_param__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::_sequent__TOP__1\n"); );
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG16(__Vdly__blinky_param__DOT__contador,11,0);
    // Body
    __Vdly__blinky_param__DOT__contador = vlTOPp->blinky_param__DOT__contador;
    // ALWAYS at blinky_param.v:8
    __Vdly__blinky_param__DOT__contador = (0xfffU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->blinky_param__DOT__contador)));
    vlTOPp->blinky_param__DOT__contador = __Vdly__blinky_param__DOT__contador;
    vlTOPp->o_led = (1U & ((IData)(vlTOPp->blinky_param__DOT__contador) 
			   >> 0xbU));
    vlTOPp->contador_out = vlTOPp->blinky_param__DOT__contador;
}

void Vblinky_param::_settle__TOP__2(Vblinky_param__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::_settle__TOP__2\n"); );
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_led = (1U & ((IData)(vlTOPp->blinky_param__DOT__contador) 
			   >> 0xbU));
    vlTOPp->contador_out = vlTOPp->blinky_param__DOT__contador;
}

void Vblinky_param::_eval(Vblinky_param__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::_eval\n"); );
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
}

void Vblinky_param::_eval_initial(Vblinky_param__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::_eval_initial\n"); );
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vblinky_param::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::final\n"); );
    // Variables
    Vblinky_param__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vblinky_param::_eval_settle(Vblinky_param__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::_eval_settle\n"); );
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vblinky_param::_change_request(Vblinky_param__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::_change_request\n"); );
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vblinky_param::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
	Verilated::overWidthError("i_clk");}
}
#endif // VL_DEBUG

void Vblinky_param::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky_param::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    o_led = VL_RAND_RESET_I(1);
    contador_out = VL_RAND_RESET_I(12);
    blinky_param__DOT__contador = VL_RAND_RESET_I(12);
    __Vclklast__TOP__i_clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
