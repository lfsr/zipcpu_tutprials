// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwavedrom__Syms.h"


//======================

void Vwavedrom::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vwavedrom* t=(Vwavedrom*)userthis;
    Vwavedrom__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vwavedrom::traceChgThis(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vwavedrom::traceChgThis__2(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->wavedrom__DOT__registro),12);
	vcdp->chgBit  (c+2,(vlTOPp->wavedrom__DOT__stb));
    }
}

void Vwavedrom::traceChgThis__3(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,(vlTOPp->clk));
	vcdp->chgBus  (c+4,(vlTOPp->cout),8);
	vcdp->chgBit  (c+5,(vlTOPp->stb_out));
    }
}
