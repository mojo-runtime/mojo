#ifndef c_AT_PAGESZ_h_
#define c_AT_PAGESZ_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_PAGESZ =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

__c_namespace_close

#endif
