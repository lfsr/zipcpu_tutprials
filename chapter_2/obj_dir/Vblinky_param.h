// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vblinky_param_H_
#define _Vblinky_param_H_

#include "verilated.h"

class Vblinky_param__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vblinky_param) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_OUT8(o_led,0,0);
    VL_OUT16(contador_out,11,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG16(blinky_param__DOT__contador,11,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__i_clk,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vblinky_param__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vblinky_param& operator= (const Vblinky_param&);  ///< Copying not allowed
    Vblinky_param(const Vblinky_param&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vblinky_param(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vblinky_param();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vblinky_param__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vblinky_param__Syms* symsp, bool first);
  private:
    static QData _change_request(Vblinky_param__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(Vblinky_param__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vblinky_param__Syms* __restrict vlSymsp);
    static void _eval_settle(Vblinky_param__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vblinky_param__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vblinky_param__Syms* __restrict vlSymsp);
    static void traceChgThis(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vblinky_param__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
