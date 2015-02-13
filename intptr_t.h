#ifndef c_intptr_t_h_
#define c_intptr_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __INTPTR_TYPE__
__INTPTR_TYPE__
#else
#  error
#endif
intptr_t;

__c_namespace_close

#endif
