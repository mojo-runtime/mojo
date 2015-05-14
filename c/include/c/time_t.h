#pragma once

#if defined(__linux__)
#  if defined(__i386__)
typedef /* __kernel_long_t */ long long time_t;
#  else
typedef /* __kernel_long_t */ long time_t;
#  endif
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
#    include "int64_t.h"
typedef int64_t time_t;
#  else
#    error
#  endif
#else
#  error
#endif
