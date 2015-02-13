#ifndef c_uint_least16_t_h_
#define c_uint_least16_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINT_LEAST16_TYPE__
__UINT_LEAST16_TYPE__
#else
#  error
#endif
uint_least16_t;

__c_namespace_close

#endif
