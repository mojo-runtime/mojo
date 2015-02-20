#ifndef c_EPOLLHUP_h_
#define c_EPOLLHUP_h_

#include "_c_define_EPOLL.h"

#ifdef __linux__
#  include "POLLHUP.h"
_c_define_EPOLL(HUP, POLLHUP);
#else
#  error
#endif

#endif
