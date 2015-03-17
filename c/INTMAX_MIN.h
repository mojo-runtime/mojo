#pragma once

#include "abi/__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "INTMAX_MAX.h"
#  define INTMAX_MIN (-INTMAX_MAX - 1)
#else
#  error
#endif
