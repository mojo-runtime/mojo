#ifndef c_PROT_READ_h_
#define c_PROT_READ_h_

#include "c/MemoryProtection.h"

__c_namespace_open

static
const MemoryProtection
PROT_READ =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
