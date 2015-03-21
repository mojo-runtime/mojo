// -*- C -*-

#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "INT16_MAX.h"
#  define INT16_MIN (-INT16_MAX - 1)
#else
#  error
#endif
