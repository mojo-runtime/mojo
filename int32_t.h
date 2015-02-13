#ifndef c_int32_t_h_
#define c_int32_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INT32_TYPE__
__INT32_TYPE__
#else
#  error
#endif
int32_t;

__c_namespace_close

#endif
