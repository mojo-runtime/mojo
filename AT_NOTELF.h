#ifndef c_AT_NOTELF_h_
#define c_AT_NOTELF_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_NOTELF =
#ifdef __linux__
 10
#else
#  error
#endif
 ;

__c_namespace_close

#endif
