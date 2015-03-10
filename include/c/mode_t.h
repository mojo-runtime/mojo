#ifndef _c_mode_t_h_
#define _c_mode_t_h_

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "uint32_t.h"
//   @see include/uapi/asm-generic/posix_types.h
     typedef /* unsigned int */ uint32_t mode_t;
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  include "uint16_t.h"
// @see sys/sys/_types.h
   typedef uint16_t mode_t;
#else
#  error
#endif

#endif
