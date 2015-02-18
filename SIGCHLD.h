#ifndef c_SIGCHLD_h_
#define c_SIGCHLD_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGCHLD =
#ifdef __linux__
#  ifdef __x86_64__
 17 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

__c_namespace_close

#endif
