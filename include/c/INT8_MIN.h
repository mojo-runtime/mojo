// -*- C -*-

#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "INT8_MAX.h"
#  define INT8_MIN (-INT8_MAX - 1)
#else
#  error
#endif
