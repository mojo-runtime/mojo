#pragma once

#if defined(__linux__)
#  if defined(__i386__)
typedef /* __kernel_long_t */ long long clock_t;
#  else
typedef /* __kernel_long_t */ long clock_t;
#  endif
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
#    include "int32_t.h"
typedef int32_t clock_t;
#  else
#    error
#  endif
#else
#  error
#endif
