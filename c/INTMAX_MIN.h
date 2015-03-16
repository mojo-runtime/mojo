#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "INTMAX_MAX.h"
#  define INTMAX_MIN (-INTMAX_MAX - 1)
#else
#  error
#endif
