// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwavedrom__Syms.h"


//======================

void Vwavedrom::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vwavedrom::traceInit, &Vwavedrom::traceFull, &Vwavedrom::traceChg, this);
}
void Vwavedrom::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vwavedrom* t=(Vwavedrom*)userthis;
    Vwavedrom__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vwavedrom::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vwavedrom* t=(Vwavedrom*)userthis;
    Vwavedrom__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vwavedrom::traceInitThis(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vwavedrom::traceFullThis(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vwavedrom::traceInitThis__1(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"clk",-1);
	vcdp->declBus  (c+4,"cout",-1,7,0);
	vcdp->declBit  (c+5,"stb_out",-1);
	vcdp->declBit  (c+3,"wavedrom clk",-1);
	vcdp->declBus  (c+1,"wavedrom registro",-1,11,0);
	vcdp->declBit  (c+2,"wavedrom stb",-1);
	vcdp->declBus  (c+4,"wavedrom cout",-1,7,0);
	vcdp->declBit  (c+5,"wavedrom stb_out",-1);
    }
}

void Vwavedrom::traceFullThis__1(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vwavedrom* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->wavedrom__DOT__registro),12);
	vcdp->fullBit  (c+2,(vlTOPp->wavedrom__DOT__stb));
	vcdp->fullBit  (c+3,(vlTOPp->clk));
	vcdp->fullBus  (c+4,(vlTOPp->cout),8);
	vcdp->fullBit  (c+5,(vlTOPp->stb_out));
    }
}
