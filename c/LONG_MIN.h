#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "LONG_MAX.h"
#  define LONG_MIN (-LONG_MAX - 1L)
#else
#  error
#endif
