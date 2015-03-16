#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "INT_LEAST16_MAX.h"
#  define INT_LEAST16_MIN (-INT_LEAST16_MAX - 1)
#else
#  error
#endif
