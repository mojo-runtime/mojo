#ifndef c_ENFILE_h_
#define c_ENFILE_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENFILE =
#ifdef __linux__
 23
#else
#  error
#endif
 ;

__c_namespace_close

#endif
