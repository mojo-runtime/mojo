#ifndef c_EISDIR_h_
#define c_EISDIR_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EISDIR =
#ifdef __linux__
 21
#else
#  error
#endif
 ;

__c_namespace_close

#endif
