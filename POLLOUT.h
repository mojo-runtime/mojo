#ifndef c_POLLOUT_h_
#define c_POLLOUT_h_

#include "_define/POLL.h"

#ifdef __linux__
_c_define_POLL(OUT, 4);
#else
#  error
#endif

#endif
