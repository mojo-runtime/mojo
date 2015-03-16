#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "INT_FAST64_MAX.h"
#  define INT_FAST64_MIN (-INT_FAST64_MAX - 1)
#else
#  error
#endif
