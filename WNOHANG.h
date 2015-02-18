#ifndef c_WNOHANG_h_
#define c_WNOHANG_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
WNOHANG =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
