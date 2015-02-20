#ifndef c_SYS_clock_gettime_h_
#define c_SYS_clock_gettime_h_

#include "_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(clock_gettime, 228);
#else
#  error
#endif

#endif
