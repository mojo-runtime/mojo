#ifndef c_uint32_t_h_
#define c_uint32_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINT32_TYPE__
__UINT32_TYPE__
#else
#  error
#endif
uint32_t;

__c_namespace_close

#endif
