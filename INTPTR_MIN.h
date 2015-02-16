#ifndef c_INTPTR_MIN_h_
#define c_INTPTR_MIN_h_

#include "builtin/__INTPTR_WIDTH__.h"
#include "c/intptr_t.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
const intptr_t
INTPTR_MIN =
#if __INTPTR_WIDTH__ == 64
    -9223372036854775807L - 1 // -2^(64-1), with compiler happiness
#else
#  error
#endif
 ;

__c_namespace_close

#endif
