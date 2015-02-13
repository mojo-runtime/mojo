#ifndef c_EACCES_h_
#define c_EACCES_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EACCES =
#ifdef __linux__
 13
#else
#  error todo
#endif
 ;

__c_namespace_close

#endif
