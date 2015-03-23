#pragma once

#include "INTPTR_MAX.h"
#include "INT64_MAX.h"

#if INTPTR_MAX == INT64_MAX
#  include "INT64_MIN.h"
#  define INTPTR_MIN INT64_MIN
#else
#  include "INT32_MAX.h"
#  if INTPTR_MAX == INT32_MAX
#    include "INT32_MIN.h"
#    define INTPTR_MIN INT32_MIN
#  else
#    error
#  endif
#endif
