#ifndef c_EPOLLIN_h_
#define c_EPOLLIN_h_

#include "c/POLLIN.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EPOLLIN =
#ifdef __linux__
 POLLIN
#else
#  error
#endif
 ;

__c_namespace_close

#endif
