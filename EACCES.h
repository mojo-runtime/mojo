#ifndef c_EACCES_h_
#define c_EACCES_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EACCES =
#ifdef __linux__
 13
#else
#  error todo
#endif
 ;

__c_namespace_close

#endif
