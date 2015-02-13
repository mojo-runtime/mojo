#ifndef c_int8_t_h_
#define c_int8_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INT8_TYPE__
__INT8_TYPE__
#else
#  error
#endif
int8_t;

__c_namespace_close

#endif
