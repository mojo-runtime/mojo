#ifndef c_EDESTADDRREQ_h_
#define c_EDESTADDRREQ_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EDESTADDRREQ =
#ifdef __linux__
#  ifdef __x86_64__
 89 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
