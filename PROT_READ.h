#ifndef c_PROT_READ_h_
#define c_PROT_READ_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
PROT_READ =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

__c_namespace_close

#endif
