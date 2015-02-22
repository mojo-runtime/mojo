#ifndef c_INT64_MIN_h_
#define c_INT64_MIN_h_

#include "c/int64_t.h"
#include "_internal/_c_namespace.h"

_c_namespace

static
const int64_t
INT64_MIN = -9223372036854775807L - 1; // -2^(64-1), with compiler happiness

_c_namespace_end

#endif
