// -*- C -*-

#pragma once

#if defined(__LP64__)
#  include "UINT64_MAX.h"
#  define ULONG_MAX UINT64_MAX
#elif defined(__ILP32__)
#  include "UINT32_MAX.h"
#  define ULONG_MAX UINT32_MAX
#else
#  error
#endif
