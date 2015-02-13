#ifndef c_ENOTDIR_h_
#define c_ENOTDIR_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENOTDIR =
#ifdef __linux__
 20
#else
#  error
#endif
 ;

__c_namespace_close

#endif
