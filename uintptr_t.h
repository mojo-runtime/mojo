#ifndef c_uintptr_t_h_
#define c_uintptr_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINTPTR_TYPE__
__UINTPTR_TYPE__
#else
#  error
#endif
uintptr_t;

__c_namespace_close

#endif
