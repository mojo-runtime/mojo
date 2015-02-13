#ifndef c_ino_t_h_
#define c_ino_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
#  ifdef __x86_64__
unsigned long // uint64_t
#  else
#    error
#  endif
#else
#  error
#endif
ino_t;

__c_namespace_close

#endif
