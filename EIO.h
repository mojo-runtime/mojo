#ifndef c_EIO_h_
#define c_EIO_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EIO =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

__c_namespace_close

#endif
