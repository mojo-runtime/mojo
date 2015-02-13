#ifndef c_uint_fast16_t_h_
#define c_uint_fast16_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINT_FAST16_TYPE__
__UINT_FAST16_TYPE__
#else
#  error
#endif
uint_fast16_t;

__c_namespace_close

#endif
