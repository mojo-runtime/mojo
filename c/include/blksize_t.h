#pragma once

#if defined(__linux__)
// Note that the kernel does not define this; we have to inspect `stat::st_blksize`.
#  if defined(__x86_64__)
#    include "int32_t.h"
//   @see include/uapi/asm-generic/stat.h
     typedef /* int */ int32_t blksize_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "int32_t.h"
// @see sys/sys/_types.h
   typedef int32_t blksize_t;
#else
#  error
#endif
