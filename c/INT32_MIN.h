#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "INT32_MAX.h"
#  define INT32_MIN (-INT32_MAX - 1)
#else
#  error
#endif
