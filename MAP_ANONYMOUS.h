#ifndef c_MAP_ANONYMOUS_h_
#define c_MAP_ANONYMOUS_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
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
