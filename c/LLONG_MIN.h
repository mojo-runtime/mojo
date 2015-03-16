#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "LLONG_MAX.h"
#  define LLONG_MIN (-LLONG_MAX - 1LL)
#else
#  error
#endif
