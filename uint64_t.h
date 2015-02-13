#ifndef c_uint64_t_h_
#define c_uint64_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINT64_TYPE__
__UINT64_TYPE__
#else
#  error
#endif
uint64_t;

__c_namespace_close

#endif
