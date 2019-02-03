// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vblinky_param__Syms.h"


//======================

void Vblinky_param::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vblinky_param::traceInit, &Vblinky_param::traceFull, &Vblinky_param::traceChg, this);
}
void Vblinky_param::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vblinky_param* t=(Vblinky_param*)userthis;
    Vblinky_param__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vblinky_param::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vblinky_param* t=(Vblinky_param*)userthis;
    Vblinky_param__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vblinky_param::traceInitThis(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vblinky_param::traceFullThis(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vblinky_param::traceInitThis__1(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"i_clk",-1);
	vcdp->declBit  (c+3,"o_led",-1);
	vcdp->declBus  (c+4,"contador_out",-1,11,0);
	vcdp->declBit  (c+2,"blinky_param i_clk",-1);
	vcdp->declBit  (c+3,"blinky_param o_led",-1);
	vcdp->declBus  (c+4,"blinky_param contador_out",-1,11,0);
	vcdp->declBus  (c+1,"blinky_param contador",-1,11,0);
    }
}

void Vblinky_param::traceFullThis__1(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vblinky_param* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->blinky_param__DOT__contador),12);
	vcdp->fullBit  (c+2,(vlTOPp->i_clk));
	vcdp->fullBit  (c+3,(vlTOPp->o_led));
	vcdp->fullBus  (c+4,(vlTOPp->contador_out),12);
    }
}
