#ifndef c_clockid_t_h_
#define c_clockid_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
#  ifdef __x86_64__
int // int32_t
#  else
#    error
#  endif
#else
#  error
#endif
clockid_t;

__c_namespace_close

#endif
