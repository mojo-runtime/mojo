#ifndef c_int64_t_h_
#define c_int64_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INT64_TYPE__
__INT64_TYPE__
#else
#  error
#endif
int64_t;

__c_namespace_close

#endif
