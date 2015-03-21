// -*- C -*-

#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "INT_FAST8_MAX.h"
#  define INT_FAST8_MIN (-INT_FAST8_MAX - 1)
#else
#  error
#endif
