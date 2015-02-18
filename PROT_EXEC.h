#ifndef c_PROT_EXEC_h_
#define c_PROT_EXEC_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
PROT_EXEC =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

__c_namespace_close

#endif
