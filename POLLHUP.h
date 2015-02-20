#ifndef c_POLLHUP_h_
#define c_POLLHUP_h_

#include "_define/POLL.h"

#ifdef __linux__
_c_define_POLL(HUP, 16);
#else
#  error
#endif

#endif
