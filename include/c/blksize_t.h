#pragma once

#if defined(__linux__)
// Note that the kernel does not define this; we have to inspect `stat::st_blksize`.
#  if defined(__x86_64__)
typedef int blksize_t;
#  elif defined(__arm__)
typedef unsigned long blksize_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "int32_t.h"
typedef int32_t blksize_t;
#else
#  error
#endif
