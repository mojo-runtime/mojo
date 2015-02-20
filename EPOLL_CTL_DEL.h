#ifndef c_EPOLL_CTL_DEL_h_
#define c_EPOLL_CTL_DEL_h_

#include "_c_define_EPOLL_CTL_.h"

#ifdef __linux__
_c_define_EPOLL_CTL_(DEL, 2);
#else
#  error
#endif

#endif
