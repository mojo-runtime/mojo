#ifndef c_AT_CLKTCK_h_
#define c_AT_CLKTCK_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
AT_CLKTCK =
#ifdef __linux__
 17
#else
#  error
#endif
 ;

__c_namespace_close

#endif
