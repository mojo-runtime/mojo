#pragma once

#include "config/__signed_integer.h"

#if __signed_integer == __signed_integer__twos_complement
#  include "SCHAR_MAX.h"
#  define SCHAR_MIN (-SCHAR_MAX - 1)
#else
#  error
#endif
