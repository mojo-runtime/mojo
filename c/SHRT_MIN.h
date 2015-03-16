#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "SHRT_MAX.h"
#  define SHRT_MIN (-INT_MAX - 1)
#else
#  error
#endif
