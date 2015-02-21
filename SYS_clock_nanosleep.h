#ifndef c_SYS_clock_nanosleep_h_
#define c_SYS_clock_nanosleep_h_

#include "_define/SYS_.h"

#if defined(__linux__) && defined(__x86_64__)
_c_define_SYS_(clock_nanosleep, 230);
#else
#  error
#endif

#endif
