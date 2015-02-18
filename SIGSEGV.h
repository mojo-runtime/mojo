#ifndef c_SIGSEGV_h_
#define c_SIGSEGV_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGSEGV =
#ifdef __linux__
 11
#else
#  error
#endif
 ;

__c_namespace_close

#endif
