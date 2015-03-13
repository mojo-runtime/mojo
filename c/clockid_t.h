#ifndef _c_clockid_t_h_
#define _c_clockid_t_h_

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "int32_t.h"
//   @see include/uapi/asm-generic/posix_types.h
     typedef int32_t clockid_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "int32_t.h"
// @see sys/sys/_types.h
   typedef int32_t clockid_t;
#else
#  error
#endif

#endif
