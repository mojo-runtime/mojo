#ifndef c_ENAMETOOLONG_h_
#define c_ENAMETOOLONG_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENAMETOOLONG =
#ifdef __linux__
#  ifdef __x86_64__
 36 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
