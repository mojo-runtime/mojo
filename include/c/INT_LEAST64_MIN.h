// -*- C -*-

#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "INT_LEAST64_MAX.h"
#  define INT_LEAST64_MIN (-INT_LEAST64_MAX - 1)
#else
#  error
#endif
