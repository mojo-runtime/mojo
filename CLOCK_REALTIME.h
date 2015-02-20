#ifndef c_CLOCK_REALTIME_h_
#define c_CLOCK_REALTIME_h_

#include "_define/CLOCK_.h"

#ifdef __linux__
_c_define_CLOCK_(REALTIME, 0);
#else
#  error
#endif

#endif
