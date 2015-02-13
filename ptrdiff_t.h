#ifndef c_ptrdiff_t_h_
#define c_ptrdiff_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __PTRDIFF_TYPE__
__PTRDIFF_TYPE__
#else
#  error
#endif
ptrdiff_t;

__c_namespace_close

#endif
