#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "INT_LEAST32_MAX.h"
#  define INT_LEAST32_MIN (-INT_LEAST32_MAX - 1)
#else
#  error
#endif
