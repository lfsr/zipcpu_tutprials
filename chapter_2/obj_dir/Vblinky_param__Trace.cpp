// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vblinky_param__Syms.h"


//======================

void Vblinky_param::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vblinky_param* t=(Vblinky_param*)userthis;
    Vblinky_param__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vblinky_param::traceChgThis(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vblinky_param::traceChgThis__2(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->blinky_param__DOT__contador),16);
    }
}

void Vblinky_param::traceChgThis__3(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->i_clk));
	vcdp->chgBit  (c+3,(vlTOPp->o_led));
	vcdp->chgBus  (c+4,(vlTOPp->contador_out),16);
    }
}
