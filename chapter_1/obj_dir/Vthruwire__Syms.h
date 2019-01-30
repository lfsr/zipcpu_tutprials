// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vthruwire__Syms_H_
#define _Vthruwire__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vthruwire.h"

// SYMS CLASS
class Vthruwire__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vthruwire*                     TOPp;
    
    // CREATORS
    Vthruwire__Syms(Vthruwire* topp, const char* namep);
    ~Vthruwire__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
