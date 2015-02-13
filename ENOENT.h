#ifndef c_ENOENT_h_
#define c_ENOENT_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENOENT =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
