#ifndef c_EPOLLOUT_h_
#define c_EPOLLOUT_h_

#include "_define/EPOLL.h"

#ifdef __linux__
#  include "POLLOUT.h"
_c_define_EPOLL(OUT, POLLOUT);
#else
#  error
#endif

#endif
