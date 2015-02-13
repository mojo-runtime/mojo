#ifndef c_wint_t_h_
#define c_wint_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __WINT_TYPE__
__WINT_TYPE__
#else
#  error
#endif
wint_t;

__c_namespace_close

#endif
