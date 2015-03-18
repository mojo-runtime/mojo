#pragma once

#include "__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "LONG_MAX.h"
#  define LONG_MIN (-LONG_MAX - 1L)
#else
#  error
#endif
