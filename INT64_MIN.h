#ifndef c_INT64_MIN_h_
#define c_INT64_MIN_h_

#include "c/int64_t.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
const int64_t
INT64_MIN = -9223372036854775807L - 1; // -2^(64-1), with compiler happiness

__c_namespace_close

#endif
