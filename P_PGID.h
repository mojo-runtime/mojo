#ifndef c_P_PGID_h_
#define c_P_PGID_h_

#include "c/idtype_t.h"

__c_namespace_open

static
const idtype_t
P_PGID =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

__c_namespace_close

#endif
