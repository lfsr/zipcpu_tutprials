// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthruwire_bus.h for the primary calling header

#include "Vthruwire_bus.h"     // For This
#include "Vthruwire_bus__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vthruwire_bus) {
    Vthruwire_bus__Syms* __restrict vlSymsp = __VlSymsp = new Vthruwire_bus__Syms(this, name());
    Vthruwire_bus* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vthruwire_bus::__Vconfigure(Vthruwire_bus__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vthruwire_bus::~Vthruwire_bus() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vthruwire_bus::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vthruwire_bus::eval\n"); );
    Vthruwire_bus__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vthruwire_bus* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vthruwire_bus::_eval_initial_loop(Vthruwire_bus__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vthruwire_bus::_combo__TOP__1(Vthruwire_bus__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire_bus::_combo__TOP__1\n"); );
    Vthruwire_bus* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_led = ((0x1feU & (IData)(vlTOPp->o_led)) 
		     | (1U & (IData)(vlTOPp->i_sw)));
    vlTOPp->o_led = ((0x1e0U & (IData)(vlTOPp->o_led)) 
		     | (0x1fU & (IData)(vlTOPp->i_sw)));
    vlTOPp->o_led = ((0x1fU & (IData)(vlTOPp->o_led)) 
		     | ((0x100U & ((IData)(vlTOPp->i_sw) 
				   << 3U)) | ((0x80U 
					       & ((IData)(vlTOPp->i_sw) 
						  << 1U)) 
					      | ((0x40U 
						  & ((IData)(vlTOPp->i_sw) 
						     >> 1U)) 
						 | (0x20U 
						    & ((IData)(vlTOPp->i_sw) 
						       >> 3U))))));
}

void Vthruwire_bus::_eval(Vthruwire_bus__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire_bus::_eval\n"); );
    Vthruwire_bus* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vthruwire_bus::_eval_initial(Vthruwire_bus__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire_bus::_eval_initial\n"); );
    Vthruwire_bus* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vthruwire_bus::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire_bus::final\n"); );
    // Variables
    Vthruwire_bus__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vthruwire_bus* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vthruwire_bus::_eval_settle(Vthruwire_bus__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire_bus::_eval_settle\n"); );
    Vthruwire_bus* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vthruwire_bus::_change_request(Vthruwire_bus__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire_bus::_change_request\n"); );
    Vthruwire_bus* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vthruwire_bus::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire_bus::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_sw & 0xfe00U))) {
	Verilated::overWidthError("i_sw");}
}
#endif // VL_DEBUG

void Vthruwire_bus::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire_bus::_ctor_var_reset\n"); );
    // Body
    i_sw = VL_RAND_RESET_I(9);
    o_led = VL_RAND_RESET_I(9);
}
