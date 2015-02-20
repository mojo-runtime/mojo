#ifndef c_POLLERR_h_
#define c_POLLERR_h_

#include "_c_define_POLL.h"

#ifdef __linux__
_c_define_POLL(ERR, 8);
#else
#  error
#endif

#endif
