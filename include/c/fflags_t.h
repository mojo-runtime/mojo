#ifndef _c_fflags_t_h_
#define _c_fflags_t_h_

#if defined(__FreeBSD__)
#  include "uint32_t.h"
// @see sys/sys/_types.h
   typedef uint32_t fflags_t;
#else
#  error
#endif

#endif
