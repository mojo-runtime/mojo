#pragma once

#include "abi/__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "INT_FAST32_MAX.h"
#  define INT_FAST32_MIN (-INT_FAST32_MAX - 1)
#else
#  error
#endif
