#ifndef c_ENOTBLK_h_
#define c_ENOTBLK_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
ENOTBLK =
#ifdef __linux__
 15
#else
#  error
#endif
 ;

__c_namespace_close

#endif
