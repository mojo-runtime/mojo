#pragma once

#include "__SIGNED_INTEGER_KIND.h"

#if __SIGNED_INTEGER_KIND == __SIGNED_INTEGER_KIND__TWOS_COMPLEMENT
#  include "INT64_MAX.h"
#  define INT64_MIN (-INT64_MAX - 1)
#else
#  error
#endif
