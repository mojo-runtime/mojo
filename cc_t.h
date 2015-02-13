#ifndef c_cc_t_h_
#define c_cc_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
unsigned char
#else
#  error
#endif
cc_t;

__c_namespace_close

#endif
