// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vblinky_param__Syms_H_
#define _Vblinky_param__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vblinky_param.h"

// SYMS CLASS
class Vblinky_param__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vblinky_param*                 TOPp;
    
    // CREATORS
    Vblinky_param__Syms(Vblinky_param* topp, const char* namep);
    ~Vblinky_param__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
