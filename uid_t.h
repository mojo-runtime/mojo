#ifndef c_uid_t_h_
#define c_uid_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
#  ifdef __x86_64__
unsigned int // uint32_t
#  else
#    error
#  endif
#else
#  error
#endif
uid_t;

__c_namespace_close

#endif
