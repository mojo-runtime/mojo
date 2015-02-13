#ifndef c_speed_t_h_
#define c_speed_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
unsigned int
#else
#  error
#endif
speed_t;

__c_namespace_close

#endif
