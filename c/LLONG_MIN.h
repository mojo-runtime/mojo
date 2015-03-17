#pragma once

#include "abi/__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "LLONG_MAX.h"
#  define LLONG_MIN (-LLONG_MAX - 1LL)
#else
#  error
#endif
