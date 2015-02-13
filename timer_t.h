#ifndef c_timer_t_h_
#define c_timer_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
#  ifdef __x86_64__
void*
#  else
#    error
#  endif
#else
#  error
#endif
timer_t;

__c_namespace_close

#endif
