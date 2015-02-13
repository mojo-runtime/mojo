#ifndef c_uint_least64_t_h_
#define c_uint_least64_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINT_LEAST64_TYPE__
__UINT_LEAST64_TYPE__
#else
#  error
#endif
uint_least64_t;

__c_namespace_close

#endif
