// -*- C -*-

#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "INT_MAX.h"
#  define INT_MIN (-INT_MAX - 1)
#else
#  error
#endif
