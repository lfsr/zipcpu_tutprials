// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vthruwire_bus__Syms_H_
#define _Vthruwire_bus__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vthruwire_bus.h"

// SYMS CLASS
class Vthruwire_bus__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vthruwire_bus*                 TOPp;
    
    // CREATORS
    Vthruwire_bus__Syms(Vthruwire_bus* topp, const char* namep);
    ~Vthruwire_bus__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
