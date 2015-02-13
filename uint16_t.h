#ifndef c_uint16_t_h_
#define c_uint16_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINT16_TYPE__
__UINT16_TYPE__
#else
#  error
#endif
uint16_t;

__c_namespace_close

#endif
