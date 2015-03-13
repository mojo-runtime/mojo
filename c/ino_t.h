#ifndef _c_ino_t_h_
#define _c_ino_t_h_

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "uint64_t.h"
//   @see include/uapi/asm-generic/posix_types.h
     typedef /* __kernel_ulong_t */ uint64_t ino_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "uint32_t.h"
// @see sys/sys/_types.h
   typedef uint32_t ino_t;
#else
#  error
#endif

#endif
