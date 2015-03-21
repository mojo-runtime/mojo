// -*- C -*-

#pragma once

#if defined(__ILP32__) || defined(__LP64__)
#  include "LLONG_MAX.h"
#  define LLONG_MIN (-LLONG_MAX - 1LL)
#else
#  error
#endif
