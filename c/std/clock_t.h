#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "int64_t.h"
//   @see include/uapi/asm-generic/posix_types.h
     typedef int64_t clock_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
#    include "int32_t.h"
//   @see sys/x86/include/_types.h
     typedef int32_t clock_t;
#  else
#    error
#  endif
#else
#  error
#endif
