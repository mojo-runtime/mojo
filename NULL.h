#ifndef c_NULL_h_
#define c_NULL_h_

#include "c/__c_namespace.h"

__c_namespace_open

#ifdef __cplusplus
static const auto NULL = nullptr;
#else
static void* NULL = 0; // This might be going too far.
#endif

 __c_namespace_close

#endif
