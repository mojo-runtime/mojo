#ifndef c_EDQUOT_h_
#define c_EDQUOT_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EDQUOT =
#ifdef __linux__
 #  ifdef __x86_64__
 122 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
