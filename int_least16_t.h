#ifndef c_int_least16_t_h_
#define c_int_least16_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INT_LEAST16_TYPE__
__INT_LEAST16_TYPE__
#else
#  error
#endif
int_least16_t;

__c_namespace_close

#endif
