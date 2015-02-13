#ifndef c_PROT_WRITE_h_
#define c_PROT_WRITE_h_

#include "c/MemoryProtection.h"

__c_namespace_open

static
const MemoryProtection
PROT_WRITE =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
