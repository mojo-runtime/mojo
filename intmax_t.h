#ifndef c_intmax_t_h_
#define c_intmax_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INTMAX_TYPE__
__INTMAX_TYPE__
#else
#  error
#endif
intmax_t;

__c_namespace_close

#endif
