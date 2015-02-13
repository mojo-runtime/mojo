#ifndef c_suseconds_t_h_
#define c_suseconds_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
#  ifdef __x86_64__
long // int64_t
#  else
#    error
#  endif
#else
#  error
#endif
suseconds_t;

__c_namespace_close

#endif
