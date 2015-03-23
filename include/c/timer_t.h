#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "int32_t.h"
//   @see include/uapi/asm-generic/posix_types.h
     typedef int32_t timer_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
// @see sys/sys/_types.h
   typedef struct __timer *timer_t;
#else
#  error
#endif
