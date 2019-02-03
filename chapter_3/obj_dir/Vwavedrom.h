// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vwavedrom_H_
#define _Vwavedrom_H_

#include "verilated.h"

class Vwavedrom__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vwavedrom) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_OUT8(cout,7,0);
    VL_OUT8(stb_out,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(wavedrom__DOT__stb,0,0);
    VL_SIG16(wavedrom__DOT__registro,11,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vwavedrom__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vwavedrom& operator= (const Vwavedrom&);  ///< Copying not allowed
    Vwavedrom(const Vwavedrom&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vwavedrom(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vwavedrom();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vwavedrom__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vwavedrom__Syms* symsp, bool first);
  private:
    static QData _change_request(Vwavedrom__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(Vwavedrom__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vwavedrom__Syms* __restrict vlSymsp);
    static void _eval_settle(Vwavedrom__Syms* __restrict vlSymsp);
    static void _initial__TOP__2(Vwavedrom__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vwavedrom__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vwavedrom__Syms* __restrict vlSymsp);
    static void traceChgThis(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vwavedrom__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
