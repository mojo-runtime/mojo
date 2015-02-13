#ifndef c_MAP_PRIVATE_h_
#define c_MAP_PRIVATE_h_

#include "c/MemoryMapFlags.h"

__c_namespace_open

static
const MemoryMapFlags
MAP_PRIVATE =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
