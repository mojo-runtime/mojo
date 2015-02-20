#ifndef c_EPOLLIN_h_
#define c_EPOLLIN_h_

#include "_c_define_EPOLL.h"

#ifdef __linux__
#  include "POLLIN.h"
_c_define_EPOLL(IN, POLLIN);
#else
#  error
#endif

#endif
