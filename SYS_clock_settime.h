#ifndef c_SYS_clock_settime_h_
#define c_SYS_clock_settime_h_

#include "_internal/_c_define_SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(clock_settime, 227);
#else
#  error
#endif

#endif
