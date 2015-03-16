#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "INT64_MAX.h"
#  define INT64_MIN (-INT64_MAX - 1)
#else
#  error
#endif
