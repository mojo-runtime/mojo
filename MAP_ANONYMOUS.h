#ifndef c_MAP_ANONYMOUS_h_
#define c_MAP_ANONYMOUS_h_

#include "c/MemoryMapFlags.h"

__c_namespace_open

static
const MemoryMapFlags
MAP_ANONYMOUS =
#ifdef __linux__
#  ifdef __x86_64__
 0x20 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
