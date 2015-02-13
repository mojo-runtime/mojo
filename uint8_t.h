#ifndef c_uint8_t_h_
#define c_uint8_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINT8_TYPE__
__UINT8_TYPE__
#else
#  error
#endif
uint8_t;

__c_namespace_close

#endif
