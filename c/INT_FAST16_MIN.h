#ifndef INT_FAST16_MIN

#include "__SIGNED_INTEGER_REPRESENTATION.h"

#if __SIGNED_INTEGER_REPRESENTATION == __SIGNED_INTEGER_REPRESENTATION_TWOS_COMPLEMENT
#  include "INT_FAST16_MAX.h"
#  define INT_FAST16_MIN (-INT_FAST16_MAX - 1)
#else
#  error
#endif

#endif