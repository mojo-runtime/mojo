#ifndef c_INTMAX_MIN_h_
#define c_INTMAX_MIN_h_

#include "c/intmax_t.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
const intmax_t
INTMAX_MIN = -9223372036854775807L - 1; // -2^(64-1), with compiler happiness

__c_namespace_close

#endif
