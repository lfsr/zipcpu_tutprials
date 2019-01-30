// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinky.h for the primary calling header

#include "Vblinky.h"           // For This
#include "Vblinky__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vblinky) {
    Vblinky__Syms* __restrict vlSymsp = __VlSymsp = new Vblinky__Syms(this, name());
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vblinky::__Vconfigure(Vblinky__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vblinky::~Vblinky() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vblinky::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vblinky::eval\n"); );
    Vblinky__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vblinky::_eval_initial_loop(Vblinky__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
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

VL_INLINE_OPT void Vblinky::_sequent__TOP__1(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_sequent__TOP__1\n"); );
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG16(__Vdly__blinky__DOT__contador,15,0);
    // Body
    __Vdly__blinky__DOT__contador = vlTOPp->blinky__DOT__contador;
    // ALWAYS at blinky.v:8
    __Vdly__blinky__DOT__contador = (0xffffU & ((IData)(1U) 
						+ (IData)(vlTOPp->blinky__DOT__contador)));
    vlTOPp->blinky__DOT__contador = __Vdly__blinky__DOT__contador;
    vlTOPp->o_led = (1U & ((IData)(vlTOPp->blinky__DOT__contador) 
			   >> 0xfU));
    vlTOPp->contador_out = vlTOPp->blinky__DOT__contador;
}

void Vblinky::_settle__TOP__2(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_settle__TOP__2\n"); );
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_led = (1U & ((IData)(vlTOPp->blinky__DOT__contador) 
			   >> 0xfU));
    vlTOPp->contador_out = vlTOPp->blinky__DOT__contador;
}

void Vblinky::_eval(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_eval\n"); );
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
}

void Vblinky::_eval_initial(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_eval_initial\n"); );
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vblinky::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::final\n"); );
    // Variables
    Vblinky__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vblinky::_eval_settle(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_eval_settle\n"); );
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vblinky::_change_request(Vblinky__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_change_request\n"); );
    Vblinky* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vblinky::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
	Verilated::overWidthError("i_clk");}
}
#endif // VL_DEBUG

void Vblinky::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinky::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    o_led = VL_RAND_RESET_I(1);
    contador_out = VL_RAND_RESET_I(16);
    blinky__DOT__contador = VL_RAND_RESET_I(16);
    __Vclklast__TOP__i_clk = VL_RAND_RESET_I(1);
}
