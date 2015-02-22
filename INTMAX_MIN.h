#ifndef c_INTMAX_MIN_h_
#define c_INTMAX_MIN_h_

#include "c/intmax_t.h"
#include "c/_c_namespace.h"

_c_namespace

static
const intmax_t
INTMAX_MIN = -9223372036854775807L - 1; // -2^(64-1), with compiler happiness

_c_namespace_end

#endif
