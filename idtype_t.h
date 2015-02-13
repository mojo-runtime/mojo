#ifndef c_idtype_t_h_
#define c_idtype_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
int
#else
#  error
#endif
idtype_t;

__c_namespace_close

#endif
