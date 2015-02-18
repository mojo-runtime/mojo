#ifndef c_EOVERFLOW_h_
#define c_EOVERFLOW_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EOVERFLOW =
#ifdef __linux__
#  ifdef __x86_64__
 75 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
