#ifndef c_CLOCK_REALTIME_h_
#define c_CLOCK_REALTIME_h_

#include "_c_CLOCK_.h"

#if defined(__linux__)
_c_CLOCK_(REALTIME, 0);
#else
#  error
#endif

#endif
