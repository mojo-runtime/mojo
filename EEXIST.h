#ifndef c_EEXIST_h_
#define c_EEXIST_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EEXIST =
#ifdef __linux__
 17
#else
#  error
#endif
 ;

__c_namespace_close

#endif
