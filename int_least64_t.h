#ifndef c_int_least64_t_h_
#define c_int_least64_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INT_LEAST64_TYPE__
__INT_LEAST64_TYPE__
#else
#  error
#endif
int_least64_t;

__c_namespace_close

#endif
