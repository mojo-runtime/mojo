#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "INT16_MAX.h"
#  define INT16_MIN (-INT16_MAX - 1)
#else
#  error
#endif
