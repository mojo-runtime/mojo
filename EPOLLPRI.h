#ifndef c_EPOLLPRI_h_
#define c_EPOLLPRI_h_

#include "c/POLLPRI.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
const int
EPOLLPRI =
#ifdef __linux__
 POLLPRI
#else
#  error
#endif
 ;

__c_namespace_close

#endif
