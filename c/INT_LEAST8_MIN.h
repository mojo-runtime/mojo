#pragma once

#include "__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "INT_LEAST8_MAX.h"
#  define INT_LEAST8_MIN (-INT_LEAST8_MAX - 1)
#else
#  error
#endif
