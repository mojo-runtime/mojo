#ifndef c_uintmax_t_h_
#define c_uintmax_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __UINTMAX_TYPE__
__UINTMAX_TYPE__
#else
#  error
#endif
uintmax_t;

__c_namespace_close

#endif
