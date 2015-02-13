#ifndef c_size_t_h_
#define c_size_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __SIZE_TYPE__
__SIZE_TYPE__
#else
#  error
#endif
size_t;

__c_namespace_close

#endif
