#ifndef c_SignalBand_h_
#define c_SignalBand_h_

#include "c/__c_namespace.h"

__c_namespace_open

typedef
#ifdef __linux__
#  ifdef __x86_64__
long // int16_t
#  else
#    error
#  endif
#else
#  error
#endif
SignalBand;

__c_namespace_close

#endif
