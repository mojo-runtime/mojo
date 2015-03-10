#ifndef _c_suseconds_t_h_
#define _c_suseconds_t_h_

#if defined(__linux__)
#  if defined(__x86_64__) // generic
//   @see include/uapi/asm-generic/posix_types.h
#    include "int64_t.h"
     typedef /* __kernel_long_t */ int64_t suseconds_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  if defined(__x86_64__)
#    include "int64_t.h"
//   @see sys/sys/_types.h
     typedef /* long */ int64_t suseconds_t;
#  else
#    error
#  endif
#else
#  error
#endif

#endif
