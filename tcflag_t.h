#ifndef c_tcflag_t_h_
#define c_tcflag_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
#  if !(defined(__sparc__) && defined(__arch64__))
unsigned long
#  else
unsigned int
#  endif
#else
#  error
#endif
tcflag_t;

__c_namespace_close

#endif
