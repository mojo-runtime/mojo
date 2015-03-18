#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "uint64_t.h"
//   @see include/linux/types.h
     typedef /* unsigned long */ uint64_t blkcnt_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "int64_t.h"
// @see sys/sys/_types.h
   typedef int64_t blkcnt_t;
#else
#  error
#endif
