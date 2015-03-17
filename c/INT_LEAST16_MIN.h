#pragma once

#include "__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "INT_LEAST16_MAX.h"
#  define INT_LEAST16_MIN (-INT_LEAST16_MAX - 1)
#else
#  error
#endif
