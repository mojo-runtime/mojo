#ifndef c_NCCS_h_
#define c_NCCS_h_

#include "c/size_t.h"

__c_namespace_open

static
const size_t
NCCS =
#ifdef __linux__
#  ifdef __x86_64__
 19 // USUALLY
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
