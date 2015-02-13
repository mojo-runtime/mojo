#ifndef c_int_fast8_t_h_
#define c_int_fast8_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INT_FAST8_TYPE__
__INT_FAST8_TYPE__
#else
#  error
#endif
int_fast8_t;

__c_namespace_close

#endif
