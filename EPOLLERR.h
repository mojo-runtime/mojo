#ifndef c_EPOLLERR_h_
#define c_EPOLLERR_h_

#include "c/POLLERR.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EPOLLERR =
#ifdef __linux__
 POLLERR
#else
#  error
#endif
 ;

__c_namespace_close

#endif
