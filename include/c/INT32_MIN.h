// -*- C -*-

#pragma once

#if defined(__LP64__)
#  include "INT32_MAX.h"
#  define INT32_MIN (-INT32_MAX - 1)
#else
#  error
#endif
