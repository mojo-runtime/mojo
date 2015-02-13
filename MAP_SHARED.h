#ifndef c_MAP_SHARED_h_
#define c_MAP_SHARED_h_

#include "c/MemoryMapFlags.h"

__c_namespace_open

static
const MemoryMapFlags
MAP_SHARED =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
