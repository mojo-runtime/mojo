#ifndef _c_timer_t_h_
#define _c_timer_t_h_

#if defined(__linux__)
#  if defined(__x86_64__)
#    include "int32_t.h"
//   @see include/uapi/asm-generic/posix_types.h
     typedef int32_t timer_t;
#  else
#    error
#  endif
#else
#  error
#endif

#endif
