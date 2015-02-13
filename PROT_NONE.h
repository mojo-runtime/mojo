#ifndef c_PROT_NONE_h_
#define c_PROT_NONE_h_

#include "c/MemoryProtection.h"

__c_namespace_open

static
const MemoryProtection
PROT_NONE =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

__c_namespace_close

#endif
