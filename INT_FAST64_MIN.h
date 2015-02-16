#ifndef c_INT_FAST64_MIN_h_
#define c_INT_FAST64_MIN_h_

#include "c/int_fast64_t.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
const int_fast64_t
INT_FAST64_MIN = -9223372036854775807L - 1; // -2^(64-1), with compiler happiness

__c_namespace_close

#endif
