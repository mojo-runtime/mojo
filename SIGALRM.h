#ifndef c_SIGALRM_h_
#define c_SIGALRM_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
SIGALRM =
#ifdef __linux__
 14
#else
#  error
#endif
 ;

__c_namespace_close

#endif
