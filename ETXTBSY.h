#ifndef c_ETXTBSY_h_
#define c_ETXTBSY_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
ETXTBSY =
#ifdef __linux__
 26
#else
#  error
#endif
 ;

__c_namespace_close

#endif
