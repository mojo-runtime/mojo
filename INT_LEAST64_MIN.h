#ifndef c_INT_LEAST64_MIN_h_
#define c_INT_LEAST64_MIN_h_

#include "c/int_least64_t.h"
#include "c/_c_namespace.h"

_c_namespace

static
const int_least64_t
INT_LEAST64_MIN = -9223372036854775807L - 1; // -2^(64-1), with compiler happiness

_c_namespace_end

#endif
