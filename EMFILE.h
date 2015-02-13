#ifndef c_EMFILE_h_
#define c_EMFILE_h_

#include "c/ErrorNumber.h"

__c_namespace_open

static
const ErrorNumber
EMFILE =
#ifdef __linux__
 24
#else
#  error
#endif
 ;

__c_namespace_close

#endif
