#ifndef c_int16_t_h_
#define c_int16_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INT16_TYPE__
__INT16_TYPE__
#else
#  error
#endif
int16_t;

__c_namespace_close

#endif
