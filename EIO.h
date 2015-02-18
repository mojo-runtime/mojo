#ifndef c_EIO_h_
#define c_EIO_h_

#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EIO =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

__c_namespace_close

#endif
