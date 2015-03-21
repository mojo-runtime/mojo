// -*- C -*-

#pragma once

#if defined(__LP64__)
#  include "INTMAX_MAX.h"
#  define INTMAX_MIN (-INTMAX_MAX - 1)
#else
#  error
#endif
