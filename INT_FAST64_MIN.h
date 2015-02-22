#ifndef c_INT_FAST64_MIN_h_
#define c_INT_FAST64_MIN_h_

#include "c/int_fast64_t.h"
#include "_internal/_c_namespace.h"

_c_namespace

static
const int_fast64_t
INT_FAST64_MIN = -9223372036854775807L - 1; // -2^(64-1), with compiler happiness

_c_namespace_end

#endif
