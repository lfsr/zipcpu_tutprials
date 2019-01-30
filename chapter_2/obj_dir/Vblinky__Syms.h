// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vblinky__Syms_H_
#define _Vblinky__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vblinky.h"

// SYMS CLASS
class Vblinky__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vblinky*                       TOPp;
    
    // CREATORS
    Vblinky__Syms(Vblinky* topp, const char* namep);
    ~Vblinky__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
