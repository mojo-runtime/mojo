#ifndef c_DT_SOCK_h_
#define c_DT_SOCK_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const char
DT_SOCK =
#ifdef __linux__
 12
#else
#  error
#endif
 ;

__c_namespace_close

#endif
