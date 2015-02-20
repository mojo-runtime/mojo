#ifndef c_EPOLL_CTL_ADD_h_
#define c_EPOLL_CTL_ADD_h_

#include "_c_define_EPOLL_CTL_.h"

#ifdef __linux__
_c_define_EPOLL_CTL_(ADD, 1);
#else
#  error
#endif

#endif
