#ifndef c_ENOEXEC_h_
#define c_ENOEXEC_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ENOEXEC =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

__c_namespace_close

#endif
