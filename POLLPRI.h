#ifndef c_POLLPRI_h_
#define c_POLLPRI_h_

#include "_c_define_POLL.h"

#ifdef __linux__
_c_define_POLL(PRI, 2);
#else
#  error
#endif

#endif
